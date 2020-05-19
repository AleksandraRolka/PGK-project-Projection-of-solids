#include "GUIMyFrame.h"
#include <vector>
#include <fstream>
#include <cmath>
#include "vecmat.h"


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

}

void GUIMyFrame::m_scrollBar_Translation_XOnScroll( wxScrollEvent& event )
{
// TODO: Implement m_scrollBar_Translation_XOnScroll
}

void GUIMyFrame::m_scrollBar_Translation_YOnScroll( wxScrollEvent& event )
{
// TODO: Implement m_scrollBar_Translation_YOnScroll
}

void GUIMyFrame::m_scrollBar_Translation_ZOnScroll( wxScrollEvent& event )
{
// TODO: Implement m_scrollBar_Translation_ZOnScroll
}

void GUIMyFrame::m_scrollBar_Rotation_XOnScroll( wxScrollEvent& event )
{
// TODO: Implement m_scrollBar_Rotation_XOnScroll
}

void GUIMyFrame::m_scrollBar_Rotation_YOnScroll( wxScrollEvent& event )
{
// TODO: Implement m_scrollBar_Rotation_YOnScroll
}

void GUIMyFrame::m_scrollBar_Rotation_ZOnScroll( wxScrollEvent& event )
{
// TODO: Implement m_scrollBar_Rotation_ZOnScroll
}

void GUIMyFrame::m_scrollBar_Scale_ZOnScroll( wxScrollEvent& event )
{
// TODO: Implement m_scrollBar_Scale_ZOnScroll
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
// TODO: Implement m_button_Load_SolidOnButtonClick
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
// TODO: Implement m_panel_1OnUpdateUI
}

void GUIMyFrame::m_panel_2OnUpdateUI( wxUpdateUIEvent& event )
{
// TODO: Implement m_panel_2OnUpdateUI
}

void GUIMyFrame::m_panel_3OnUpdateUI( wxUpdateUIEvent& event )
{
// TODO: Implement m_panel_3OnUpdateUI
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
