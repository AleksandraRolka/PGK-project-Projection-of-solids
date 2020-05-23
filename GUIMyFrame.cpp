#include "GUIMyFrame.h"
#include <vector>
#include <fstream>
#include <cmath>
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
	Repaint_1();
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


void GUIMyFrame::Repaint_1()
{
	wxClientDC client_dc(m_panel_1);
	wxBufferedDC dc(&client_dc);
	int w, h;
	m_panel_1->GetSize(&w, &h);
	dc.Clear();


	//////////////////////// scale /////////////////////////
	Matrix4 scale_matrix;

	scale_matrix.data[0][0] = m_scrollBar_Scale_X->GetThumbPosition() / 100.0;
	scale_matrix.data[1][1] = -m_scrollBar_Scale_Y->GetThumbPosition() / 100.0;
	scale_matrix.data[2][2] = m_scrollBar_Scale_Z->GetThumbPosition() / 100.0;
	scale_matrix.data[3][3] = 1.0;


	/////////////////////// rotation ///////////////////////
	Matrix4 rotation_matrix;
	Matrix4 X_rotation_matrix, Y_rotation_matrix, Z_rotation_matrix;

	//converting angles for radians 
	double rotation_x = m_scrollBar_Rotation_X->GetThumbPosition() * PI / 180;
	double rotation_y = m_scrollBar_Rotation_Y->GetThumbPosition() * PI / 180;
	double rotation_z = m_scrollBar_Rotation_Z->GetThumbPosition() * PI / 180;

	//rotation around axis x
	X_rotation_matrix.data[0][0] = 1.0;
	X_rotation_matrix.data[1][1] = cos(rotation_x);
	X_rotation_matrix.data[1][2] = -sin(rotation_x);
	X_rotation_matrix.data[2][1] = sin(rotation_x);
	X_rotation_matrix.data[2][2] = cos(rotation_x);
	//rotation around axis y
	Y_rotation_matrix.data[0][0] = cos(rotation_y);
	Y_rotation_matrix.data[0][2] = sin(rotation_y);
	Y_rotation_matrix.data[1][1] = 1.0;
	Y_rotation_matrix.data[2][0] = -sin(rotation_y);
	Y_rotation_matrix.data[2][2] = cos(rotation_y);
	//rotation around axis z
	Z_rotation_matrix.data[0][0] = cos(rotation_z);
	Z_rotation_matrix.data[0][1] = -sin(rotation_z);
	Z_rotation_matrix.data[1][0] = sin(rotation_z);
	Z_rotation_matrix.data[1][1] = cos(rotation_z);
	Z_rotation_matrix.data[2][2] = 1.0;

	rotation_matrix = X_rotation_matrix * Y_rotation_matrix * Z_rotation_matrix;


	////////////////////// translation //////////////////////
	Matrix4 translation_matrix;

	translation_matrix.data[0][0] = 1.0;
	translation_matrix.data[1][1] = 1.0;
	translation_matrix.data[2][2] = 1.0;
	translation_matrix.data[0][3] = (m_scrollBar_Translation_X->GetThumbPosition() - 100.0) / 50.0;
	translation_matrix.data[1][3] = -(m_scrollBar_Translation_Y->GetThumbPosition() - 100.0) / 50.0;
	translation_matrix.data[2][3] = (m_scrollBar_Translation_Z->GetThumbPosition() - 100.0) / 50.0 + 2;

	// transformation matrix = translation * rotation * scale
	Matrix4 transformation = translation_matrix * rotation_matrix * scale_matrix;

	Matrix4 centre;
	centre.data[0][0] = 1;
	centre.data[1][1] = 1;
	centre.data[2][2] = 1;
	centre.data[0][3] = 0.5;
	centre.data[1][3] = 0.5;


	for (unsigned int i = 0; i < data_1.size(); ++i)
	{
		Vector4 _begin;
		_begin.Set(data_1[i].begin.x, data_1[i].begin.y, data_1[i].begin.z);
		_begin = transformation * _begin;

		Vector4 _end;
		_end.Set(data_1[i].end.x, data_1[i].end.y, data_1[i].end.z);
		_end = transformation * _end;

		dc.SetPen(wxPen(wxColour(data_1[i].color.R, data_1[i].color.G, data_1[i].color.B)));

		if (_begin.GetZ() > 0 && _end.GetZ() > 0)
		{
			_begin.Set(_begin.GetX() / _begin.GetZ(), _begin.GetY() / _begin.GetZ(), _begin.GetZ());
			_begin = centre * _begin;
			_end.Set(_end.GetX() / _end.GetZ(), _end.GetY() / _end.GetZ(), _end.GetZ());
			_end = centre * _end;

			dc.DrawLine(_begin.GetX() * w, _begin.GetY() * h, _end.GetX() * w, _end.GetY() * h);
		}
	}
}

void GUIMyFrame::Repaint_2()
{

	wxClientDC client_dc(m_panel_2);
	wxBufferedDC dc(&client_dc);
	int w, h;
	m_panel_2->GetSize(&w, &h);
	dc.Clear();


	//////////////////////// scale /////////////////////////
	Matrix4 scale_matrix;

	scale_matrix.data[0][0] = m_scrollBar_Scale_X->GetThumbPosition() / 100.0;
	scale_matrix.data[1][1] = -m_scrollBar_Scale_Y->GetThumbPosition() / 100.0;
	scale_matrix.data[2][2] = m_scrollBar_Scale_Z->GetThumbPosition() / 100.0;
	scale_matrix.data[3][3] = 1.0;


	/////////////////////// rotation ///////////////////////
	Matrix4 rotation_matrix;
	Matrix4 X_rotation_matrix, Y_rotation_matrix, Z_rotation_matrix;

	//converting angles for radians 
	double rotation_x = m_scrollBar_Rotation_X->GetThumbPosition() * PI / 180;
	double rotation_y = m_scrollBar_Rotation_Y->GetThumbPosition() * PI / 180;
	double rotation_z = m_scrollBar_Rotation_Z->GetThumbPosition() * PI / 180;

	//rotation around axis x
	X_rotation_matrix.data[0][0] = 1.0;
	X_rotation_matrix.data[1][1] = cos(rotation_x);
	X_rotation_matrix.data[1][2] = -sin(rotation_x);
	X_rotation_matrix.data[2][1] = sin(rotation_x);
	X_rotation_matrix.data[2][2] = cos(rotation_x);
	//rotation around axis y
	Y_rotation_matrix.data[0][0] = cos(rotation_y);
	Y_rotation_matrix.data[0][2] = sin(rotation_y);
	Y_rotation_matrix.data[1][1] = 1.0;
	Y_rotation_matrix.data[2][0] = -sin(rotation_y);
	Y_rotation_matrix.data[2][2] = cos(rotation_y);
	//rotation around axis z
	Z_rotation_matrix.data[0][0] = cos(rotation_z);
	Z_rotation_matrix.data[0][1] = -sin(rotation_z);
	Z_rotation_matrix.data[1][0] = sin(rotation_z);
	Z_rotation_matrix.data[1][1] = cos(rotation_z);
	Z_rotation_matrix.data[2][2] = 1.0;

	rotation_matrix = X_rotation_matrix * Y_rotation_matrix * Z_rotation_matrix;


	////////////////////// translation //////////////////////
	Matrix4 translation_matrix;

	translation_matrix.data[0][0] = 1.0;
	translation_matrix.data[1][1] = 1.0;
	translation_matrix.data[2][2] = 1.0;
	translation_matrix.data[0][3] = (m_scrollBar_Translation_X->GetThumbPosition() - 100.0) / 50.0;
	translation_matrix.data[1][3] = -(m_scrollBar_Translation_Y->GetThumbPosition() - 100.0) / 50.0;
	translation_matrix.data[2][3] = (m_scrollBar_Translation_Z->GetThumbPosition() - 100.0) / 50.0 + 2;

	// transformation matrix = translation * rotation * scale
	Matrix4 transformation = translation_matrix * rotation_matrix * scale_matrix;

	Matrix4 centre;
	centre.data[0][0] = 1;
	centre.data[1][1] = 1;
	centre.data[2][2] = 1;
	centre.data[0][3] = 0.5;
	centre.data[1][3] = 0.5;


	for (unsigned int i = 0; i < data_2.size(); ++i)
	{
		Vector4 _begin;
		_begin.Set(data_2[i].begin.x, data_2[i].begin.y, data_2[i].begin.z);
		_begin = transformation * _begin;

		Vector4 _end;
		_end.Set(data_2[i].end.x, data_2[i].end.y, data_2[i].end.z);
		_end = transformation * _end;

		dc.SetPen(wxPen(wxColour(data_2[i].color.R, data_2[i].color.G, data_2[i].color.B)));

		if (_begin.GetZ() > 0 && _end.GetZ() > 0)
		{
			_begin.Set(_begin.GetX() / _begin.GetZ(), _begin.GetY() / _begin.GetZ(), _begin.GetZ());
			_begin = centre * _begin;
			_end.Set(_end.GetX() / _end.GetZ(), _end.GetY() / _end.GetZ(), _end.GetZ());
			_end = centre * _end;

			dc.DrawLine(_begin.GetX() * w, _begin.GetY() * h, _end.GetX() * w, _end.GetY() * h);
		}
	}
}

void GUIMyFrame::Repaint_3()
{
	wxClientDC client_dc(m_panel_3);
	wxBufferedDC dc(&client_dc);
	int w, h;
	m_panel_3->GetSize(&w, &h);
	dc.Clear();


	//////////////////////// scale /////////////////////////
	Matrix4 scale_matrix;

	scale_matrix.data[0][0] = m_scrollBar_Scale_X->GetThumbPosition() / 100.0;
	scale_matrix.data[1][1] = -m_scrollBar_Scale_Y->GetThumbPosition() / 100.0;
	scale_matrix.data[2][2] = m_scrollBar_Scale_Z->GetThumbPosition() / 100.0;
	scale_matrix.data[3][3] = 1.0;


	/////////////////////// rotation ///////////////////////
	Matrix4 rotation_matrix;
	Matrix4 X_rotation_matrix, Y_rotation_matrix, Z_rotation_matrix;

	//converting angles for radians 
	double rotation_x = m_scrollBar_Rotation_X->GetThumbPosition() * PI / 180;
	double rotation_y = m_scrollBar_Rotation_Y->GetThumbPosition() * PI / 180;
	double rotation_z = m_scrollBar_Rotation_Z->GetThumbPosition() * PI / 180;

	//rotation around axis x
	X_rotation_matrix.data[0][0] = 1.0;
	X_rotation_matrix.data[1][1] = cos(rotation_x);
	X_rotation_matrix.data[1][2] = -sin(rotation_x);
	X_rotation_matrix.data[2][1] = sin(rotation_x);
	X_rotation_matrix.data[2][2] = cos(rotation_x);
	//rotation around axis y
	Y_rotation_matrix.data[0][0] = cos(rotation_y);
	Y_rotation_matrix.data[0][2] = sin(rotation_y);
	Y_rotation_matrix.data[1][1] = 1.0;
	Y_rotation_matrix.data[2][0] = -sin(rotation_y);
	Y_rotation_matrix.data[2][2] = cos(rotation_y);
	//rotation around axis z
	Z_rotation_matrix.data[0][0] = cos(rotation_z);
	Z_rotation_matrix.data[0][1] = -sin(rotation_z);
	Z_rotation_matrix.data[1][0] = sin(rotation_z);
	Z_rotation_matrix.data[1][1] = cos(rotation_z);
	Z_rotation_matrix.data[2][2] = 1.0;

	rotation_matrix = X_rotation_matrix * Y_rotation_matrix * Z_rotation_matrix;


	////////////////////// translation //////////////////////
	Matrix4 translation_matrix;

	translation_matrix.data[0][0] = 1.0;
	translation_matrix.data[1][1] = 1.0;
	translation_matrix.data[2][2] = 1.0;
	translation_matrix.data[0][3] = (m_scrollBar_Translation_X->GetThumbPosition() - 100.0) / 50.0;
	translation_matrix.data[1][3] = -(m_scrollBar_Translation_Y->GetThumbPosition() - 100.0) / 50.0;
	translation_matrix.data[2][3] = (m_scrollBar_Translation_Z->GetThumbPosition() - 100.0) / 50.0 + 2;

	// transformation matrix = translation * rotation * scale
	Matrix4 transformation = translation_matrix * rotation_matrix * scale_matrix;

	Matrix4 centre;
	centre.data[0][0] = 1;
	centre.data[1][1] = 1;
	centre.data[2][2] = 1;
	centre.data[0][3] = 0.5;
	centre.data[1][3] = 0.5;


	for (unsigned int i = 0; i < data_3.size(); ++i)
	{
		Vector4 _begin;
		_begin.Set(data_3[i].begin.x, data_3[i].begin.y, data_3[i].begin.z);
		_begin = transformation * _begin;

		Vector4 _end;
		_end.Set(data_3[i].end.x, data_3[i].end.y, data_3[i].end.z);
		_end = transformation * _end;

		dc.SetPen(wxPen(wxColour(data_3[i].color.R, data_3[i].color.G, data_3[i].color.B)));

		if (_begin.GetZ() > 0 && _end.GetZ() > 0)
		{
			_begin.Set(_begin.GetX() / _begin.GetZ(), _begin.GetY() / _begin.GetZ(), _begin.GetZ());
			_begin = centre * _begin;
			_end.Set(_end.GetX() / _end.GetZ(), _end.GetY() / _end.GetZ(), _end.GetZ());
			_end = centre * _end;

			dc.DrawLine(_begin.GetX() * w, _begin.GetY() * h, _end.GetX() * w, _end.GetY() * h);
		}
	}
}