#include "GUIMyFrame.h"
#include <vector>
#include <fstream>
#include <cmath>
#include <memory>
#include "vecmat.h"


#define PI 3.141592653589793238

struct Point {
	float x, y, z;
	Point(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}
};

struct Color {
	int R, G, B;
	Color(int _R, int _G, int _B) : R(_R), G(_G), B(_B) {}
};

struct Segment {
	Point begin, end;
	Color color;
	Segment(Point _begin, Point _end, Color _color) : begin(_begin), end(_end), color(_color) {}
};

// ******* chyba wygodnie bêdzie tak rozdzieliæ dane na 3 wektory, dla ka¿dego panelu osobno
std::vector<Segment> data_1;
std::vector<Segment> data_2;
std::vector<Segment> data_3;

/*Matrices which allow various transformations*/

Matrix4 Translation(double dx, double dy, double dz)
{
	Matrix4 translation;
	translation.data[0][3] = dx;
	translation.data[1][3] = -dy;
	translation.data[2][3] = dz;
	translation.data[0][0] = 1;
	translation.data[1][1] = 1;
	translation.data[2][2] = 1;
	return translation;
}

Matrix4 RotateX(int theta)
{
	Matrix4 rotateX;
	rotateX.data[0][0] = 1;
	rotateX.data[1][1] = cos(theta * M_PI / 180);
	rotateX.data[1][2] = -sin(theta * M_PI / 180);
	rotateX.data[2][1] = sin(theta * M_PI / 180);
	rotateX.data[2][2] = cos(theta * M_PI / 180);
	return rotateX;
}

Matrix4 RotateY(int theta)
{
	Matrix4 rotateY;
	rotateY.data[0][0] = cos(-(theta * M_PI / 180));
	rotateY.data[0][2] = sin(-(theta * M_PI / 180));
	rotateY.data[1][1] = 1;
	rotateY.data[2][0] = -sin(-(theta * M_PI / 180));
	rotateY.data[2][2] = cos(-(theta * M_PI / 180));
	return rotateY;
}

Matrix4 RotateZ(int theta)
{
	Matrix4 rotateZ;
	rotateZ.data[0][0] = cos(theta * M_PI / 180);
	rotateZ.data[0][1] = -sin(theta * M_PI / 180);
	rotateZ.data[1][0] = sin(theta * M_PI / 180);
	rotateZ.data[1][1] = cos(theta * M_PI / 180);
	rotateZ.data[2][2] = 1;
	return rotateZ;
}

Matrix4 Scale(double s_x, double s_y, double s_z)
{
	Matrix4 scale;
	scale.data[0][0] = s_x;
	scale.data[1][1] = -s_y;
	scale.data[2][2] = s_z;
	return scale;
}

Matrix4 MakeCentred()
{
	Matrix4 centre;
	centre.data[0][0] = 1;
	centre.data[1][1] = 1;
	centre.data[2][2] = 1;
	centre.data[0][3] = 0.5;
	centre.data[1][3] = 0.5;
	return centre;
}


GUIMyFrame::GUIMyFrame( wxWindow* parent )
:
MyFrame( parent )
{
	m_scrollBar_Translation_X->SetScrollbar(100,  1, 200,  1, true);
	m_scrollBar_Translation_Y->SetScrollbar(100,  1, 200,  1, true);
	m_scrollBar_Translation_Z->SetScrollbar(100,  1, 200,  1, true);

	m_scrollBar_Rotation_X->SetScrollbar(0,  1, 360,  1, true);
	m_scrollBar_Rotation_Y->SetScrollbar(0,  1, 360,  1, true);
	m_scrollBar_Rotation_Z->SetScrollbar(0,  1, 360,  1, true);

	m_scrollBar_Scale_X->SetScrollbar(50,  1, 200,  1, true);
	m_scrollBar_Scale_Y->SetScrollbar(50,  1, 200,  1, true);
	m_scrollBar_Scale_Z->SetScrollbar(50,  1, 200,  1, true);

}

void GUIMyFrame::m_scrollBar_Translation_XOnScroll( wxScrollEvent& event )
{
	//m_staticText_Translation_X_val->SetLabel(wxString::Format(wxT("%g"), (m_scrollBar_Translation_X->GetThumbPosition() - 50) / 100));
}

void GUIMyFrame::m_scrollBar_Translation_YOnScroll( wxScrollEvent& event )
{
	//m_staticText_Translation_Y_val->SetLabel(wxString::Format(wxT("%g"), (m_scrollBar_Translation_Y->GetThumbPosition() - 100) /100));
}

void GUIMyFrame::m_scrollBar_Translation_ZOnScroll( wxScrollEvent& event )
{
	//m_staticText_Translation_Z_val->SetLabel(wxString::Format(wxT("%g"), (m_scrollBar_Translation_Z->GetThumbPosition() - 100) /100));
}

void GUIMyFrame::m_scrollBar_Rotation_XOnScroll( wxScrollEvent& event )
{
	//mm_staticText_Rotation_X_val->SetLabel(wxString::Format(wxT("%g"), m_scrollBar_Rotation_X->GetThumbPosition()));
}

void GUIMyFrame::m_scrollBar_Rotation_YOnScroll( wxScrollEvent& event )
{
	//mm_staticText_Rotation_Y_val->SetLabel(wxString::Format(wxT("%g"), m_scrollBar_Rotation_Y->GetThumbPosition()));
}

void GUIMyFrame::m_scrollBar_Rotation_ZOnScroll( wxScrollEvent& event )
{
	//mm_staticText_Rotation_Z_val->SetLabel(wxString::Format(wxT("%g"), m_scrollBar_Rotation_Z->GetThumbPosition()));
}

void GUIMyFrame::m_scrollBar_Scale_XOnScroll(wxScrollEvent& event)
{
	mm_staticText_Scale_X_val->SetLabel(wxString::Format(wxT("%g"), m_scrollBar_Scale_X->GetThumbPosition() / 100.0));
}

void GUIMyFrame::m_scrollBar_Scale_YOnScroll(wxScrollEvent& event)
{
	mm_staticText_Scale_Y_val->SetLabel(wxString::Format(wxT("%g"), m_scrollBar_Scale_Y->GetThumbPosition() / 100.0));
}

void GUIMyFrame::m_scrollBar_Scale_ZOnScroll(wxScrollEvent& event)
{
	mm_staticText_Scale_Z_val->SetLabel(wxString::Format(wxT("%g"), m_scrollBar_Scale_Z->GetThumbPosition() / 100.0));
}

void GUIMyFrame::mm_checkBox_Refl_XOnCheckBox( wxCommandEvent& event )
{
// TODO: Implement mm_checkBox_Refl_XOnCheckBox
}

void GUIMyFrame::m_checkBox_Refl_YOnCheckBox( wxCommandEvent& event )
{
// TODO: Implement m_checkBox_Refl_YOnCheckBox
}

void GUIMyFrame::m_checkBox_Refl_ZOnCheckBox( wxCommandEvent& event )
{
// TODO: Implement m_checkBox_Refl_ZOnCheckBox
}

void GUIMyFrame::m_button_Load_SolidOnButtonClick( wxCommandEvent& event )
{

	wxFileDialog WxOpenFileDialog(this, wxT("Choose a file"), wxT(""), wxT(""), wxT("Geometry file (*.geo)|*.geo"), wxFD_OPEN | wxFD_FILE_MUST_EXIST);

	if (WxOpenFileDialog.ShowModal() == wxID_OK)
	{
		double x1, y1, z1, x2, y2, z2;
		int r, g, b;

		std::ifstream in(WxOpenFileDialog.GetPath().ToAscii());
		if (in.is_open())
		{
			data_1.clear();
			data_2.clear();
			data_3.clear();
			while (!in.eof())
			{
				in >> x1 >> y1 >> z1 >> x2 >> y2 >> z2 >> r >> g >> b;
				data_1.push_back(Segment(Point(x1, y1, z1), Point(x2, y2, z2), Color(r, g, b)));
				data_2.push_back(Segment(Point(x1, y1, z1), Point(x2, y2, z2), Color(r, g, b)));
				data_3.push_back(Segment(Point(x1, y1, z1), Point(x2, y2, z2), Color(r, g, b)));
			}
			in.close();
		}
	}
	

}

void GUIMyFrame::m_button_Save_SettingsOnButtonClick( wxCommandEvent& event )
{
// TODO: Implement m_button_Save_SettingsOnButtonClick
}

void GUIMyFrame::m_button_Load_SettingsOnButtonClick( wxCommandEvent& event )
{
// TODO: Implement m_button_Load_SettingsOnButtonClick
}

void GUIMyFrame::m_panel_1OnUpdateUI( wxUpdateUIEvent& event )
{
	Repaint_ukosny(45.0, 31.0);
}

void GUIMyFrame::m_panel_2OnUpdateUI( wxUpdateUIEvent& event )
{
	Repaint_2();
}

void GUIMyFrame::m_panel_3OnUpdateUI( wxUpdateUIEvent& event )
{
	Repaint_3();
}

void GUIMyFrame::m_radioBoxOrtog_1OnRadioBox( wxCommandEvent& event )
{
// TODO: Implement m_radioBoxOrtog_1OnRadioBox
}

void GUIMyFrame::m_radioBoxUkos_1OnRadioBox( wxCommandEvent& event )
{
// TODO: Implement m_radioBoxUkos_1OnRadioBox
}

void GUIMyFrame::m_radioBoxAkson_1OnRadioBox( wxCommandEvent& event )
{
// TODO: Implement m_radioBoxAkson_1OnRadioBox
}

void GUIMyFrame::m_radioBoxPersp_1OnRadioBox( wxCommandEvent& event )
{
// TODO: Implement m_radioBoxPersp_1OnRadioBox
}

void GUIMyFrame::m_radioBoxOrtog_2OnRadioBox( wxCommandEvent& event )
{
// TODO: Implement m_radioBoxOrtog_2OnRadioBox
}

void GUIMyFrame::m_radioBoxUkos_2OnRadioBox( wxCommandEvent& event )
{
// TODO: Implement m_radioBoxUkos_2OnRadioBox
}

void GUIMyFrame::m_radioBoxAkson_2OnRadioBox( wxCommandEvent& event )
{
// TODO: Implement m_radioBoxAkson_2OnRadioBox
}

void GUIMyFrame::m_radioBoxPersp_2OnRadioBox( wxCommandEvent& event )
{
// TODO: Implement m_radioBoxPersp_2OnRadioBox
}

void GUIMyFrame::m_radioBoxOrtog_3OnRadioBox( wxCommandEvent& event )
{
// TODO: Implement m_radioBoxOrtog_3OnRadioBox
}

void GUIMyFrame::m_radioBoxUkos_3OnRadioBox( wxCommandEvent& event )
{
// TODO: Implement m_radioBoxUkos_3OnRadioBox
}

void GUIMyFrame::m_radioBoxAkson_3OnRadioBox( wxCommandEvent& event )
{
// TODO: Implement m_radioBoxAkson_3OnRadioBox
}

void GUIMyFrame::m_radioBoxPersp_3OnRadioBox( wxCommandEvent& event )
{
// TODO: Implement m_radioBoxPersp_3OnRadioBox
}


Matrix4 GUIMyFrame::Repaint_general()
{
	//////////////////////// scale /////////////////////////
	Matrix4 scale_matrix = Scale(m_scrollBar_Scale_X->GetThumbPosition() / 100.0, -m_scrollBar_Scale_Y->GetThumbPosition() / 100.0, m_scrollBar_Scale_Z->GetThumbPosition() / 100.0);

	/////////////////////// rotation ///////////////////////
	Matrix4 rotation_matrix;
	Matrix4 X_rotation_matrix, Y_rotation_matrix, Z_rotation_matrix;

	X_rotation_matrix = RotateX(m_scrollBar_Rotation_X->GetThumbPosition());
	Y_rotation_matrix = RotateY(m_scrollBar_Rotation_Y->GetThumbPosition());
	Z_rotation_matrix = RotateY(m_scrollBar_Rotation_Z->GetThumbPosition());

	rotation_matrix = X_rotation_matrix * Y_rotation_matrix * Z_rotation_matrix;

	////////////////////// translation //////////////////////
	Matrix4 translation_matrix;
	translation_matrix = Translation((m_scrollBar_Translation_X->GetThumbPosition() - 100.0) / 50.0,
		(m_scrollBar_Translation_Y->GetThumbPosition() - 100.0) / 50.0, (m_scrollBar_Translation_Z->GetThumbPosition() - 100.0) / 50.0);

	// transformation matrix = translation * rotation * scale
	auto transformation = std::make_unique<Matrix4>();
	*transformation = translation_matrix * rotation_matrix * scale_matrix;
	return *transformation;
}

void GUIMyFrame::Repaint_1()
{
	wxClientDC client_dc(m_panel_1);
	wxBufferedDC dc(&client_dc);
	int w, h;
	m_panel_1->GetSize(&w, &h);
	dc.Clear();

	Matrix4 transformation = Repaint_general();

	Matrix4 centre = MakeCentred();

	for (auto& element : data_1)
	{
		Vector4 _begin;
		_begin.Set(element.begin.x, element.begin.y, element.begin.z);
		_begin = transformation * _begin;

		Vector4 _end;
		_end.Set(element.end.x, element.end.y, element.end.z);
		_end = transformation * _end;

		dc.SetPen(wxPen(wxColour(element.color.R, element.color.G, element.color.B)));

		_begin.Set(_begin.GetX(), _begin.GetY() / 2, _begin.GetZ() / 2);
		_begin = centre * _begin;
		_end.Set(_end.GetX(), _end.GetY() / 2, _end.GetZ() / 2);
		_end = centre * _end;

		dc.DrawLine(_begin.GetY() * w, _begin.GetZ() * h, _end.GetY() * w, _end.GetZ() * h);
	}
}

void GUIMyFrame::Repaint_2()
{

	wxClientDC client_dc(m_panel_2);
	wxBufferedDC dc(&client_dc);
	int w, h;
	m_panel_2->GetSize(&w, &h);
	dc.Clear();

	Matrix4 transformation = Repaint_general();

	Matrix4 centre = MakeCentred();

	for (auto &element: data_2)
	{
		Vector4 _begin;
		_begin.Set(element.begin.x, element.begin.y, element.begin.z);
		_begin = transformation * _begin;

		Vector4 _end;
		_end.Set(element.end.x, element.end.y, element.end.z);
		_end = transformation * _end;

		dc.SetPen(wxPen(wxColour(element.color.R, element.color.G, element.color.B)));

		_begin.Set(_begin.GetX() / 2, _begin.GetY() , _begin.GetZ() / 2);
		_begin = centre * _begin;
		_end.Set(_end.GetX() / 2, _end.GetY() , _end.GetZ() / 2);
		_end = centre * _end;

		dc.DrawLine(_begin.GetX() * w, _begin.GetZ() * h, _end.GetX() * w, _end.GetZ() * h);
	}
}

void GUIMyFrame::Repaint_3()
{
	wxClientDC client_dc(m_panel_3);
	wxBufferedDC dc(&client_dc);
	int w, h;
	m_panel_3->GetSize(&w, &h);
	dc.Clear();
	Matrix4 transformation = Repaint_general();

	Matrix4 centre = MakeCentred();

	for (auto& element : data_3)
	{
		Vector4 _begin;
		_begin.Set(element.begin.x, element.begin.y, element.begin.z);
		_begin = transformation * _begin;

		Vector4 _end;
		_end.Set(element.end.x, element.end.y, element.end.z);
		_end = transformation * _end;

		dc.SetPen(wxPen(wxColour(element.color.R, element.color.G, element.color.B)));

		_begin.Set(_begin.GetX() / 2, _begin.GetY() / 2, _begin.GetZ());
		_begin = centre * _begin;
		_end.Set(_end.GetX() / 2, _end.GetY() / 2, _end.GetZ());
		_end = centre * _end;

		dc.DrawLine(_begin.GetX() * w, _begin.GetY() * h, _end.GetX() * w, _end.GetY() * h);
	}
}

void GUIMyFrame::Repaint_ukosny(double alpha, double phi)
{
	wxClientDC client_dc(m_panel_1);
	wxBufferedDC dc(&client_dc);
	int w, h;
	m_panel_1->GetSize(&w, &h);
	dc.Clear();
	Matrix4 transformation = Repaint_general();

	Matrix4 centre = MakeCentred();

	for (auto& element : data_3)
	{
		Vector4 _begin;
		_begin.Set(element.begin.x, element.begin.y, element.begin.z);
		_begin = transformation * _begin;

		Vector4 _end;
		_end.Set(element.end.x, element.end.y, element.end.z);
		_end = transformation * _end;

		dc.SetPen(wxPen(wxColour(element.color.R, element.color.G, element.color.B)));
		
		//double tg_alpha;

		_begin.Set(_begin.GetX()+_begin.GetZ()*(cos(phi*M_PI/180.0)/tan(alpha*M_PI/180.0)), _begin.GetY() + _begin.GetZ() * (sin(phi * M_PI / 180.0) / tan(alpha * M_PI / 180.0)), _begin.GetZ());
		_begin = centre * _begin;
		_end.Set(_end.GetX()+ _end.GetZ() * (cos(phi * M_PI / 180.0) / tan(alpha * M_PI / 180.0)), _end.GetY()+ _end.GetZ() * (sin(phi * M_PI / 180.0) / tan(alpha * M_PI / 180.0)), _end.GetZ());
		_end = centre * _end;

		dc.DrawLine(_begin.GetX() * w, _begin.GetY() * h, _end.GetX() * w, _end.GetY() * h);
	}
}
