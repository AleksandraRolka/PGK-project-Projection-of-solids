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


std::vector<Segment> data;

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
	translation.data[3][3] = 1;
	return translation;
}

Matrix4 RotateX(double theta)
{
	Matrix4 rotateX;
	rotateX.data[0][0] = 1;
	rotateX.data[1][1] = cos(theta * M_PI / 180);
	rotateX.data[1][2] = -sin(theta * M_PI / 180);
	rotateX.data[2][1] = sin(theta * M_PI / 180);
	rotateX.data[2][2] = cos(theta * M_PI / 180);
	rotateX.data[3][3] = 1;
	return rotateX;
}

Matrix4 RotateY(double theta)
{
	Matrix4 rotateY;
	rotateY.data[0][0] = cos(-(theta * M_PI / 180));
	rotateY.data[0][2] = sin(-(theta * M_PI / 180));
	rotateY.data[1][1] = 1;
	rotateY.data[2][0] = -sin(-(theta * M_PI / 180));
	rotateY.data[2][2] = cos(-(theta * M_PI / 180));
	rotateY.data[3][3] = 1;
	return rotateY;
}

Matrix4 RotateZ(double theta)
{
	Matrix4 rotateZ;
	rotateZ.data[0][0] = cos(theta * M_PI / 180);
	rotateZ.data[0][1] = -sin(theta * M_PI / 180);
	rotateZ.data[1][0] = sin(theta * M_PI / 180);
	rotateZ.data[1][1] = cos(theta * M_PI / 180);
	rotateZ.data[2][2] = 1;
	rotateZ.data[3][3] = 1;
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
	centre.data[0][0] = 0.5;
	centre.data[1][1] = 0.5;
	centre.data[2][2] = 0.5;
	centre.data[0][3] = 0.5;
	centre.data[1][3] = 0.5;
	centre.data[2][3] = 0.5;
	return centre;
}


GUIMyFrame::GUIMyFrame(wxWindow* parent)
	:
	MyFrame(parent)
{
	m_scrollBar_Translation_X->SetScrollbar(100, 1, 201, 1, true);
	m_scrollBar_Translation_Y->SetScrollbar(100, 1, 201, 1, true);
	m_scrollBar_Translation_Z->SetScrollbar(100, 1, 201, 1, true);

	m_scrollBar_Rotation_X->SetScrollbar(0, 1, 361, 1, true);
	m_scrollBar_Rotation_Y->SetScrollbar(0, 1, 361, 1, true);
	m_scrollBar_Rotation_Z->SetScrollbar(0, 1, 361, 1, true);

	m_scrollBar_Scale_X->SetScrollbar(50, 1, 201, 1, true);
	m_scrollBar_Scale_Y->SetScrollbar(50, 1, 201, 1, true);
	m_scrollBar_Scale_Z->SetScrollbar(50, 1, 201, 1, true);


	m_scrollBar_ukosny1_alfa->SetScrollbar(35, 1, 161, 1, true);
	m_scrollBar_ukosny1_phi->SetScrollbar(45, 1, 361, 1, true);
	m_scrollBar_akson1_alfa->SetScrollbar(35, 1, 361, 1, true);
	m_scrollBar_akson1_beta->SetScrollbar(45, 1, 361, 1, true);

	m_scrollBar_ukosny2_alfa->SetScrollbar(35, 1, 161, 1, true);
	m_scrollBar_ukosny2_phi->SetScrollbar(45, 1, 361, 1, true);
	m_scrollBar_akson2_alfa->SetScrollbar(35, 1, 361, 1, true);
	m_scrollBar_akson2_beta->SetScrollbar(45, 1, 361, 1, true);

	m_scrollBar_ukosny3_alfa->SetScrollbar(35, 1, 161, 1, true);
	m_scrollBar_ukosny3_phi->SetScrollbar(45, 1, 361, 1, true);
	m_scrollBar_akson3_alfa->SetScrollbar(35, 1, 361, 1, true);
	m_scrollBar_akson3_beta->SetScrollbar(45, 1, 361, 1, true);

}

void GUIMyFrame::m_scrollBar_Translation_XOnScroll(wxScrollEvent& event)
{
	m_staticText_Translation_X_val->SetLabel(wxString::Format(wxT("%g"), (static_cast<double>( m_scrollBar_Translation_X->GetThumbPosition() ) - 100.) / 100.));
}

void GUIMyFrame::m_scrollBar_Translation_YOnScroll(wxScrollEvent& event)
{
	m_staticText_Translation_Y_val->SetLabel(wxString::Format(wxT("%g"), (static_cast<double>(m_scrollBar_Translation_Y->GetThumbPosition() ) - 100.) /100.));
}

void GUIMyFrame::m_scrollBar_Translation_ZOnScroll(wxScrollEvent& event)
{
	m_staticText_Translation_Z_val->SetLabel(wxString::Format(wxT("%g"), (static_cast<double>(m_scrollBar_Translation_Z->GetThumbPosition() ) - 100.) /100.));
}

void GUIMyFrame::m_scrollBar_Rotation_XOnScroll(wxScrollEvent& event)
{
	mm_staticText_Rotation_X_val->SetLabel(wxString::Format(wxT("%d"), m_scrollBar_Rotation_X->GetThumbPosition()));
}

void GUIMyFrame::m_scrollBar_Rotation_YOnScroll(wxScrollEvent& event)
{
	mm_staticText_Rotation_Y_val->SetLabel(wxString::Format(wxT("%d"), m_scrollBar_Rotation_Y->GetThumbPosition()));
}

void GUIMyFrame::m_scrollBar_Rotation_ZOnScroll(wxScrollEvent& event)
{
	mm_staticText_Rotation_Z_val->SetLabel(wxString::Format(wxT("%d"), m_scrollBar_Rotation_Z->GetThumbPosition()));
}

void GUIMyFrame::m_scrollBar_Scale_XOnScroll(wxScrollEvent& event)
{
	mm_staticText_Scale_X_val->SetLabel(wxString::Format(wxT("%g"), static_cast<double>(m_scrollBar_Scale_X->GetThumbPosition() ) / 100.0));
}

void GUIMyFrame::m_scrollBar_Scale_YOnScroll(wxScrollEvent& event)
{
	mm_staticText_Scale_Y_val->SetLabel(wxString::Format(wxT("%g"), static_cast<double>(m_scrollBar_Scale_Y->GetThumbPosition() ) / 100.0));
}

void GUIMyFrame::m_scrollBar_Scale_ZOnScroll(wxScrollEvent& event)
{
	mm_staticText_Scale_Z_val->SetLabel(wxString::Format(wxT("%g"), static_cast<double>(m_scrollBar_Scale_Z->GetThumbPosition() )/ 100.0));
}

void GUIMyFrame::m_scrollBar_ukosny1_alfaOnScroll(wxScrollEvent& event)
{
	m_staticText_ukosny1_alfa_val->SetLabel(wxString::Format(wxT("%d"), m_scrollBar_ukosny1_alfa->GetThumbPosition() + 10 ));
}

void GUIMyFrame::m_scrollBar_ukosny1_phiOnScroll(wxScrollEvent& event)
{
	m_staticText_ukosny1_phi_val->SetLabel(wxString::Format(wxT("%d"), m_scrollBar_ukosny1_phi->GetThumbPosition() ));
}

void GUIMyFrame::m_scrollBar_akson1_alfaOnScroll(wxScrollEvent& event)
{
	m_staticText_akson1_alfa_val->SetLabel(wxString::Format(wxT("%d"), m_scrollBar_akson1_alfa->GetThumbPosition()));
}

void GUIMyFrame::m_scrollBar_akson1_betaOnScroll(wxScrollEvent& event)
{
	m_staticText_akson1_beta_val->SetLabel(wxString::Format(wxT("%d"), m_scrollBar_akson1_beta->GetThumbPosition()));
}

void GUIMyFrame::m_scrollBar_ukosny2_alfaOnScroll(wxScrollEvent& event)
{
	m_staticText_ukosny2_alfa_val->SetLabel(wxString::Format(wxT("%d"), m_scrollBar_ukosny2_alfa->GetThumbPosition()));
}

void GUIMyFrame::m_scrollBar_ukosny2_phiOnScroll(wxScrollEvent& event)
{
	m_staticText_ukosny2_phi_val->SetLabel(wxString::Format(wxT("%d"), m_scrollBar_ukosny2_phi->GetThumbPosition() ));
}

void GUIMyFrame::m_scrollBar_akson2_alfaOnScroll(wxScrollEvent& event)
{
	m_staticText_akson2_alfa_val->SetLabel(wxString::Format(wxT("%d"), m_scrollBar_akson2_alfa->GetThumbPosition()));
}

void GUIMyFrame::m_scrollBar_akson2_betaOnScroll(wxScrollEvent& event)
{
	m_staticText_akson2_beta_val->SetLabel(wxString::Format(wxT("%d"), m_scrollBar_akson2_beta->GetThumbPosition()));
}

void GUIMyFrame::m_scrollBar_ukosny3_alfaOnScroll(wxScrollEvent& event)
{
	m_staticText_ukosny3_alfa_val->SetLabel(wxString::Format(wxT("%d"), m_scrollBar_ukosny3_alfa->GetThumbPosition()));
}

void GUIMyFrame::m_scrollBar_ukosny3_phiOnScroll(wxScrollEvent& event)
{
m_staticText_ukosny3_phi_val->SetLabel(wxString::Format(wxT("%d"), m_scrollBar_ukosny3_phi->GetThumbPosition()));
}

void GUIMyFrame::m_scrollBar_akson3_alfaOnScroll(wxScrollEvent& event)
{
	m_staticText_akson3_alfa_val->SetLabel(wxString::Format(wxT("%d"), m_scrollBar_akson3_alfa->GetThumbPosition())) ;
}

void GUIMyFrame::m_scrollBar_akson3_betaOnScroll(wxScrollEvent& event)
{
	m_staticText_akson3_beta_val->SetLabel(wxString::Format(wxT("%d"), m_scrollBar_akson3_beta->GetThumbPosition())) ;
}



void GUIMyFrame::m_button_Load_SolidOnButtonClick(wxCommandEvent& event)
{

	wxFileDialog WxOpenFileDialog(this, wxT("Choose a file"), wxT(""), wxT(""), wxT("Geometry file (*.geo)|*.geo"), wxFD_OPEN | wxFD_FILE_MUST_EXIST);

	if (WxOpenFileDialog.ShowModal() == wxID_OK)
	{
		double x1, y1, z1, x2, y2, z2;
		int r, g, b;

		std::ifstream in(WxOpenFileDialog.GetPath().ToAscii());
		if (in.is_open())
		{
			data.clear();
			while (!in.eof())
			{
				in >> x1 >> y1 >> z1 >> x2 >> y2 >> z2 >> r >> g >> b;
				data.push_back(Segment(Point(x1, y1, z1), Point(x2, y2, z2), Color(r, g, b)));
			}
			in.close();
		}
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////  PANEL 1.  /////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void GUIMyFrame::m_panel_1OnUpdateUI(wxUpdateUIEvent& event)	
{

	if (m_notebook1->GetSelection() == 0) {					 // gdy wlaczona jest zakladka 'Ortogonalny'

		if (m_radioBoxOrtog_1->GetSelection() == 0)
			Repaint_OrtogYZ(m_panel_1);
		else if (m_radioBoxOrtog_1->GetSelection() == 1)
			Repaint_OrtogXZ(m_panel_1);
		else if (m_radioBoxOrtog_1->GetSelection() == 2)
			Repaint_OrtogXY(m_panel_1);
	}
	else if (m_notebook1->GetSelection() == 1) {			  // gdy wlaczona jest zakladka 'Ukosny'
		if (m_radioBoxUkos_1->GetSelection() == 0) {
			m_scrollBar_ukosny1_alfa->Enable(false);
			m_staticText_ukosny1_alfa_val->SetLabel(wxString::Format(wxT("%d"), 45));
			m_staticText_ukosny1_phi_val->SetLabel(wxString::Format(wxT("%d"), m_scrollBar_ukosny1_phi->GetThumbPosition()));
			Repaint_ukosny(m_panel_1, 45.0, 31.0);
		}
		else if (m_radioBoxUkos_1->GetSelection() == 1) {	
			m_scrollBar_ukosny1_alfa->Enable(false);
			m_staticText_ukosny1_alfa_val->SetLabel(wxString::Format(wxT("%d"), 63));
			m_staticText_ukosny1_phi_val->SetLabel(wxString::Format(wxT("%d"), m_scrollBar_ukosny1_phi->GetThumbPosition()));
			Repaint_ukosny(m_panel_1, 63.0, 31.0);
		}
		else if (m_radioBoxUkos_1->GetSelection() == 2) {
			m_scrollBar_ukosny1_alfa->Enable(true);
			m_staticText_ukosny1_alfa_val->SetLabel(wxString::Format(wxT("%d"), m_scrollBar_ukosny1_alfa->GetThumbPosition() + 10));
			m_staticText_ukosny1_phi_val->SetLabel(wxString::Format(wxT("%d"), m_scrollBar_ukosny1_phi->GetThumbPosition()));
			Repaint_ukosny(m_panel_1, m_scrollBar_ukosny1_alfa->GetThumbPosition() + 10., m_scrollBar_ukosny1_phi->GetThumbPosition());
		}
	}
	else if (m_notebook1->GetSelection() == 2) {			 // gdy wlaczona jest zakladka 'Aksjometryczny'
		if (m_radioBoxAkson_1->GetSelection() == 0) {
			m_scrollBar_akson1_alfa->Enable(false);
			m_scrollBar_akson1_beta->Enable(true);
			m_staticText_akson1_alfa_val->SetLabel(wxString::Format(wxT("%d"), m_scrollBar_akson1_alfa->GetThumbPosition()));
			m_staticText_akson1_beta_val->SetLabel(wxString::Format(wxT("%d"), m_scrollBar_akson1_beta->GetThumbPosition()));
			Repaint_Izometryczny(m_panel_1, 35.26, 45);
		}
		else if (m_radioBoxAkson_1->GetSelection() == 1) {
			m_scrollBar_akson1_alfa->Enable(true);
			m_scrollBar_akson1_beta->Enable(true);
			m_staticText_akson1_alfa_val->SetLabel(wxString::Format(wxT("%d"), m_scrollBar_akson1_alfa->GetThumbPosition()));
			m_staticText_akson1_beta_val->SetLabel(wxString::Format(wxT("%d"), m_scrollBar_akson1_beta->GetThumbPosition()));
			Repaint_ukosny(m_panel_1, m_scrollBar_akson1_alfa->GetThumbPosition(), m_scrollBar_akson1_beta->GetThumbPosition());
		}
	}
	else if (m_notebook1->GetSelection() == 3) {			// gdy wlaczona jest zakladka 'Perspektywiczny'
		if (m_radioBoxPersp_1->GetSelection() == 0)
			Repaint_Perspektywiczny(m_panel_1);
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////  PANEL 2.  /////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void GUIMyFrame::m_panel_2OnUpdateUI(wxUpdateUIEvent& event)
{

	if (m_notebook2->GetSelection() == 0) {					// gdy wlaczona jest zakladka 'Ortogonalny'

		if (m_radioBoxOrtog_2->GetSelection() == 0)
			Repaint_OrtogYZ(m_panel_2);
		else if (m_radioBoxOrtog_2->GetSelection() == 1)
			Repaint_OrtogXZ(m_panel_2);
		else if (m_radioBoxOrtog_2->GetSelection() == 2)
			Repaint_OrtogXY(m_panel_2);
	}
	else if (m_notebook2->GetSelection() == 1) {			// gdy wlaczona jest zakladka 'Ukosny'
		if (m_radioBoxUkos_2->GetSelection() == 0) {
			m_scrollBar_ukosny2_alfa->Enable(false);
			m_staticText_ukosny2_alfa_val->SetLabel(wxString::Format(wxT("%d"), 45));
			m_staticText_ukosny2_phi_val->SetLabel(wxString::Format(wxT("%d"), m_scrollBar_ukosny2_phi->GetThumbPosition()));
			Repaint_ukosny(m_panel_2, 45.0, 31.0);
		}
		else if (m_radioBoxUkos_2->GetSelection() == 1) {
			m_scrollBar_ukosny2_alfa->Enable(false);
			m_staticText_ukosny2_alfa_val->SetLabel(wxString::Format(wxT("%d"), 63));
			m_staticText_ukosny2_phi_val->SetLabel(wxString::Format(wxT("%d"), m_scrollBar_ukosny2_phi->GetThumbPosition()));
			Repaint_ukosny(m_panel_2, 63.0, 31.0);
		}
		else if (m_radioBoxUkos_2->GetSelection() == 2) {
			m_scrollBar_ukosny2_alfa->Enable(true);
			m_staticText_ukosny2_alfa_val->SetLabel(wxString::Format(wxT("%d"), m_scrollBar_ukosny2_alfa->GetThumbPosition() + 10));
			m_staticText_ukosny2_phi_val->SetLabel(wxString::Format(wxT("%d"), m_scrollBar_ukosny2_phi->GetThumbPosition()));
			Repaint_ukosny(m_panel_2, m_scrollBar_ukosny2_alfa->GetThumbPosition() + 10., m_scrollBar_ukosny2_phi->GetThumbPosition() + 10 );
		}
	}
	else if (m_notebook2->GetSelection() == 2) {			// gdy wlaczona jest zakladka 'Aksjometryczny'
		if (m_radioBoxAkson_2->GetSelection() == 0) {
			m_scrollBar_akson2_alfa->Enable(false);
			m_scrollBar_akson2_beta->Enable(true);
			m_staticText_akson2_alfa_val->SetLabel(wxString::Format(wxT("%d"), m_scrollBar_akson2_alfa->GetThumbPosition()));
			m_staticText_akson2_beta_val->SetLabel(wxString::Format(wxT("%d"), m_scrollBar_akson2_beta->GetThumbPosition()));
			Repaint_Izometryczny(m_panel_2, 35.26, 45);
		}
		else if (m_radioBoxAkson_2->GetSelection() == 1) {
			m_scrollBar_akson2_alfa->Enable(true);
			m_scrollBar_akson2_beta->Enable(true);
			m_staticText_akson2_alfa_val->SetLabel(wxString::Format(wxT("%d"), m_scrollBar_akson2_alfa->GetThumbPosition()));
			m_staticText_akson2_beta_val->SetLabel(wxString::Format(wxT("%d"), m_scrollBar_akson2_beta->GetThumbPosition()));
			Repaint_ukosny(m_panel_2, m_scrollBar_akson2_alfa->GetThumbPosition() + 10., m_scrollBar_akson2_beta->GetThumbPosition());
		}

	}
	else if (m_notebook2->GetSelection() == 3) {			// gdy wlaczona jest zakladka 'Perspektywiczny'
		if (m_radioBoxPersp_2->GetSelection() == 0)
			Repaint_Perspektywiczny(m_panel_2);
	}

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////  PANEL 3.  /////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void GUIMyFrame::m_panel_3OnUpdateUI(wxUpdateUIEvent& event)
{

	if (m_notebook3->GetSelection() == 0) {					// gdy wlaczona jest zakladka 'Ortogonalny'
		if (m_radioBoxOrtog_3->GetSelection() == 0)
			Repaint_OrtogYZ(m_panel_3);
		else if (m_radioBoxOrtog_3->GetSelection() == 1)
			Repaint_OrtogXZ(m_panel_3);
		else if (m_radioBoxOrtog_3->GetSelection() == 2)
			Repaint_OrtogXY(m_panel_3);
	}
	else if (m_notebook3->GetSelection() == 1) {			// gdy wlaczona jest zakladka 'Ukosny'
		if (m_radioBoxUkos_3->GetSelection() == 0) {
			m_scrollBar_ukosny3_alfa->Enable(false);
			m_staticText_ukosny3_alfa_val->SetLabel(wxString::Format(wxT("%d"), 45));
			m_staticText_ukosny3_phi_val->SetLabel(wxString::Format(wxT("%d"), m_scrollBar_ukosny3_phi->GetThumbPosition()));
			Repaint_ukosny(m_panel_3, 45.0, 31.0);
		}
		else if (m_radioBoxUkos_3->GetSelection() == 1) {
			m_scrollBar_ukosny3_alfa->Enable(false);
			m_staticText_ukosny3_alfa_val->SetLabel(wxString::Format(wxT("%d"), 63));
			m_staticText_ukosny3_phi_val->SetLabel(wxString::Format(wxT("%d"), m_scrollBar_ukosny3_phi->GetThumbPosition()));
			Repaint_ukosny(m_panel_3, 63.0, 31.0);
		}
		else if (m_radioBoxUkos_3->GetSelection() == 2) {
			m_scrollBar_ukosny3_alfa->Enable(true);

			m_staticText_ukosny3_alfa_val->SetLabel(wxString::Format(wxT("%d"), m_scrollBar_ukosny3_alfa->GetThumbPosition() + 10));
			m_staticText_ukosny3_phi_val->SetLabel(wxString::Format(wxT("%d"), m_scrollBar_ukosny3_phi->GetThumbPosition()));
			Repaint_ukosny(m_panel_3, m_scrollBar_ukosny3_alfa->GetThumbPosition(), m_scrollBar_ukosny3_phi->GetThumbPosition() + 10);
		}
	}
	else if (m_notebook3->GetSelection() == 2) {			// gdy wlaczona jest zakladka 'Aksjometryczny'
		if (m_radioBoxAkson_3->GetSelection() == 0) {
			m_scrollBar_akson3_alfa->Enable(false);
			m_scrollBar_akson3_beta->Enable(true);
			m_staticText_akson3_alfa_val->SetLabel(wxString::Format(wxT("%d"), m_scrollBar_akson3_alfa->GetThumbPosition()));
			m_staticText_akson3_beta_val->SetLabel(wxString::Format(wxT("%d"), m_scrollBar_akson3_beta->GetThumbPosition()));
			Repaint_Izometryczny(m_panel_3, 35.26, 45);
		}
		else if (m_radioBoxAkson_3->GetSelection() == 1) {
			m_scrollBar_akson3_alfa->Enable(true);
			m_scrollBar_akson3_beta->Enable(true);
			m_staticText_akson3_alfa_val->SetLabel(wxString::Format(wxT("%d"), m_scrollBar_akson3_alfa->GetThumbPosition()));
			m_staticText_akson3_beta_val->SetLabel(wxString::Format(wxT("%d"), m_scrollBar_akson3_beta->GetThumbPosition()));
			Repaint_ukosny(m_panel_3, m_scrollBar_akson3_alfa->GetThumbPosition(), m_scrollBar_akson3_beta->GetThumbPosition());
		}
	}
	else if (m_notebook3->GetSelection() == 3) {			// gdy wlaczona jest zakladka 'Perspektywiczny'
		if (m_radioBoxPersp_3->GetSelection() == 0)
			Repaint_Perspektywiczny(m_panel_3);
	}

}




///////////////////////////////////////////////////////////////////////////////////////////////   funkcje rysujace odpowiedni typ rzutowania   ///////////////////////////////////////////////////////////////////////////////////////////////

Matrix4 GUIMyFrame::Repaint_general()
{
	//////////////////////// scale /////////////////////////
	Matrix4 scale_matrix = Scale(m_scrollBar_Scale_X->GetThumbPosition() / 100.0, m_scrollBar_Scale_Y->GetThumbPosition() / 100.0, m_scrollBar_Scale_Z->GetThumbPosition() / 100.0);

	/////////////////////// rotation ///////////////////////
	Matrix4 rotation_matrix;
	Matrix4 X_rotation_matrix, Y_rotation_matrix, Z_rotation_matrix;

	X_rotation_matrix = RotateX(m_scrollBar_Rotation_X->GetThumbPosition());
	Y_rotation_matrix = RotateY(m_scrollBar_Rotation_Y->GetThumbPosition());
	Z_rotation_matrix = RotateZ(m_scrollBar_Rotation_Z->GetThumbPosition());

	rotation_matrix = X_rotation_matrix * Y_rotation_matrix * Z_rotation_matrix;

	////////////////////// translation //////////////////////
	Matrix4 translation_matrix;
	translation_matrix = Translation((m_scrollBar_Translation_X->GetThumbPosition() - 100.0) / 50.0,
		(m_scrollBar_Translation_Y->GetThumbPosition() - 100.0) / 50.0, (m_scrollBar_Translation_Z->GetThumbPosition() - 100.0) / 50.0);

	auto transformation = std::make_unique<Matrix4>();
	*transformation = translation_matrix * rotation_matrix * scale_matrix;
	return *transformation;
}


void GUIMyFrame::Repaint_OrtogYZ(wxPanel* m_panel_num)
{
	wxClientDC client_dc(m_panel_num);
	wxBufferedDC dc(&client_dc);
	int w, h;
	m_panel_num->GetSize(&w, &h);
	dc.Clear();

	Matrix4 transformation = Repaint_general();

	Matrix4 centre = MakeCentred();

	for (auto& element : data)
	{
		Vector4 _begin;
		_begin.Set(element.begin.x, element.begin.y, element.begin.z);
		_begin = transformation * _begin;

		Vector4 _end;
		_end.Set(element.end.x, element.end.y, element.end.z);
		_end = transformation * _end;

		dc.SetPen(wxPen(wxColour(element.color.R, element.color.G, element.color.B)));

		_begin = centre * _begin;
		_end = centre * _end;

		dc.DrawLine(_begin.GetZ() * w, _begin.GetY() * h, _end.GetZ() * w, _end.GetY() * h);
	}
}


void GUIMyFrame::Repaint_OrtogXZ(wxPanel* m_panel_num)
{
	wxClientDC client_dc(m_panel_num);
	wxBufferedDC dc(&client_dc);
	int w, h;
	m_panel_num->GetSize(&w, &h);
	dc.Clear();

	Matrix4 transformation = Repaint_general();

	Matrix4 centre = MakeCentred();

	for (auto& element : data)
	{
		Vector4 _begin;
		_begin.Set(element.begin.x, element.begin.y, element.begin.z);
		_begin = transformation * _begin;

		Vector4 _end;
		_end.Set(element.end.x, element.end.y, element.end.z);
		_end = transformation * _end;

		dc.SetPen(wxPen(wxColour(element.color.R, element.color.G, element.color.B)));

		_begin = centre * _begin;
		_end = centre * _end;

		dc.DrawLine(_begin.GetX() * w, _begin.GetZ() * h, _end.GetX() * w, _end.GetZ() * h);
	}
}


void GUIMyFrame::Repaint_OrtogXY(wxPanel* m_panel_num)
{
	wxClientDC client_dc(m_panel_num);
	wxBufferedDC dc(&client_dc);
	int w, h;
	m_panel_num->GetSize(&w, &h);
	dc.Clear();

	Matrix4 transformation = Repaint_general();

	Matrix4 centre = MakeCentred();

	for (auto& element : data)
	{
		Vector4 _begin;
		_begin.Set(element.begin.x, element.begin.y, element.begin.z);
		_begin = transformation * _begin;

		Vector4 _end;
		_end.Set(element.end.x, element.end.y, element.end.z);
		_end = transformation * _end;

		dc.SetPen(wxPen(wxColour(element.color.R, element.color.G, element.color.B)));

		_begin = centre * _begin;
		_end = centre * _end;

		dc.DrawLine(_begin.GetX() * w, _begin.GetY() * h, _end.GetX() * w, _end.GetY() * h);
	}
}


void GUIMyFrame::Repaint_ukosny(wxPanel* m_panel_num, double alpha, double phi)
{
	wxClientDC client_dc(m_panel_num);
	wxBufferedDC dc(&client_dc);
	int w, h;
	m_panel_num->GetSize(&w, &h);
	dc.Clear();
	Matrix4 transformation = Repaint_general();

	Matrix4 centre = MakeCentred();


	for (auto& element : data)
	{
		Vector4 _begin;
		_begin.Set(element.begin.x, element.begin.y, element.begin.z);
		_begin = transformation * _begin;

		Vector4 _end;
		_end.Set(element.end.x, element.end.y, element.end.z);
		_end = transformation * _end;

		dc.SetPen(wxPen(wxColour(element.color.R, element.color.G, element.color.B)));

		//double tg_alpha;

		_begin.Set(_begin.GetX() + _begin.GetZ() * (cos(phi * M_PI / 180.0) / tan(alpha * M_PI / 180.0)), _begin.GetY() + _begin.GetZ() * (sin(phi * M_PI / 180.0) / tan(alpha * M_PI / 180.0)), _begin.GetZ());
		_begin = centre * _begin;
		_end.Set(_end.GetX() + _end.GetZ() * (cos(phi * M_PI / 180.0) / tan(alpha * M_PI / 180.0)), _end.GetY() + _end.GetZ() * (sin(phi * M_PI / 180.0) / tan(alpha * M_PI / 180.0)), _end.GetZ());
		_end = centre * _end;

		dc.DrawLine(_begin.GetX() * w, _begin.GetY() * h, _end.GetX() * w, _end.GetY() * h);
	}
}

void GUIMyFrame::Repaint_Perspektywiczny(wxPanel* m_panel_num)
{
	wxClientDC client_dc(m_panel_num);
	wxBufferedDC dc(&client_dc);
	int w, h;
	m_panel_num->GetSize(&w, &h);
	dc.Clear();
	Matrix4 transformation = Repaint_general();

	Matrix4 centre = MakeCentred();


	for (auto& element : data)
	{
		Vector4 _begin;
		_begin.Set(element.begin.x, element.begin.y, element.begin.z);
		//_begin = transformation * _begin;

		Vector4 _end;
		_end.Set(element.end.x, element.end.y, element.end.z);
		//_end = transformation * _end;

		dc.SetPen(wxPen(wxColour(element.color.R, element.color.G, element.color.B)));

		_begin = centre * _begin;
		_end = centre * _end;

		Matrix4 perspective;
		perspective.data[0][0] = -2 * _begin.GetZ() / (_end.GetX() - _begin.GetX());
		perspective.data[0][2] = (_end.GetX() + _begin.GetX()) / (_end.GetX() - _begin.GetX());
		perspective.data[1][1] = -2 * _begin.GetZ() / (_end.GetY() - _begin.GetY());
		perspective.data[1][2] = (_end.GetY() + _begin.GetY()) / (_end.GetY() - _begin.GetY());
		perspective.data[2][2] = (_end.GetZ() + _begin.GetZ()) / (_begin.GetZ() - _end.GetZ());
		perspective.data[2][3] = -2 * _begin.GetZ() * _end.GetZ() / (_begin.GetZ() - _end.GetZ());
		perspective.data[3][2] = -1;

		_begin = perspective * _begin;
		_end = perspective * _end;

		dc.DrawLine(_begin.GetX() * w, _begin.GetY() * h, _end.GetX() * w, _end.GetY() * h);
	}
}

void GUIMyFrame::Repaint_Izometryczny(wxPanel* m_panel_num, double alpha, double beta)
{
	wxClientDC client_dc(m_panel_num);
	wxBufferedDC dc(&client_dc);
	int w, h;
	m_panel_num->GetSize(&w, &h);
	dc.Clear();

	Matrix4 transformation = Repaint_general();

	Matrix4 centre = MakeCentred();

	for (auto& element : data)
	{
		Vector4 _begin;
		_begin.Set(element.begin.x, element.begin.y, element.begin.z);
		_begin = transformation * _begin;

		Vector4 _end;
		_end.Set(element.end.x, element.end.y, element.end.z);
		_end = transformation * _end;

		dc.SetPen(wxPen(wxColour(element.color.R, element.color.G, element.color.B)));

		_begin.Set(cos(alpha)*_begin.GetX() + sin(alpha)*sin(beta)*_begin.GetY() + sin(alpha)*cos(beta)*_begin.GetZ(), cos(beta)*_begin.GetY() - sin(beta)*_begin.GetZ(), 0);
		_begin = centre * _begin;
		_end.Set(cos(alpha) * _end.GetX() + sin(alpha) * sin(beta) * _end.GetY() + sin(alpha) * cos(beta) * _end.GetZ(), cos(beta) * _end.GetY() - sin(beta) * _end.GetZ(), 0);
		_end = centre * _end;


		dc.DrawLine(_begin.GetX() * w, _begin.GetY() * h, _end.GetX() * w, _end.GetY() * h);
	}
}