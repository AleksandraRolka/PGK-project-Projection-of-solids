///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/scrolbar.h>
#include <wx/sizer.h>
#include <wx/checkbox.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/button.h>
#include <wx/panel.h>
#include <wx/radiobox.h>
#include <wx/notebook.h>
#include <wx/frame.h>


///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MyFrame
///////////////////////////////////////////////////////////////////////////////
class MyFrame : public wxFrame
{
private:

protected:
	wxStaticText* m_staticText_Translation_X;
	wxScrollBar* m_scrollBar_Translation_X;
	wxStaticText* m_staticText_Translation_X_val;
	wxStaticText* m_staticText_Translation_Y;
	wxScrollBar* m_scrollBar_Translation_Y;
	wxStaticText* m_staticText_Translation_Y_val;
	wxStaticText* m_staticText_Translation_Z;
	wxScrollBar* m_scrollBar_Translation_Z;
	wxStaticText* m_staticText_Translation_Z_val;
	wxStaticText* m_staticText_Rotation_X;
	wxScrollBar* m_scrollBar_Rotation_X;
	wxStaticText* m_staticText_Rotation_X_val;
	wxStaticText* m_staticText_Rotation_Y;
	wxScrollBar* m_scrollBar_Rotation_Y;
	wxStaticText* m_staticText_Rotation_Y_val;
	wxStaticText* m_staticText_Rotation_Z;
	wxScrollBar* m_scrollBar_Rotation_Z;
	wxStaticText* m_staticText_Rotation_Z_val;
	wxStaticText* m_staticText_Scale_X;
	wxScrollBar* m_scrollBar_Scale_X;
	wxStaticText* m_staticText_Scale_X_val;
	wxStaticText* m_staticText_Scale_Y;
	wxScrollBar* m_scrollBar_Scale_Y;
	wxStaticText* m_staticText_Scale_Y_val;
	wxStaticText* m_staticText_Scale_Z;
	wxScrollBar* m_scrollBar_Scale_Z;
	wxStaticText* m_staticText_Scale_Z_val;
	wxButton* m_button_Load_Solid;
	wxPanel* m_panel_1;
	wxPanel* m_panel_2;
	wxPanel* m_panel_3;
	wxNotebook* m_notebook1;
	wxPanel* m_notebook1_page_1;
	wxRadioBox* m_radioBoxOrtog_1;
	wxPanel* m_notebook1_page_2;
	wxRadioBox* m_radioBoxUkos_1;
	wxStaticText* m_staticText_ukosny1_alfa;
	wxScrollBar* m_scrollBar_ukosny1_alfa;
	wxStaticText* m_staticText_ukosny1_alfa_val;
	wxStaticText* m_staticText_ukosny1_phi;
	wxScrollBar* m_scrollBar_ukosny1_phi;
	wxStaticText* m_staticText_ukosny1_phi_val;
	wxPanel* m_notebook1_page_3;
	wxRadioBox* m_radioBoxAkson_1;
	wxStaticText* m_staticText_akson1_alfa;
	wxScrollBar* m_scrollBar_akson1_alfa;
	wxStaticText* m_staticText_akson1_alfa_val;
	wxStaticText* m_staticText_akson1_beta;
	wxScrollBar* m_scrollBar_akson1_beta;
	wxStaticText* m_staticText_akson1_beta_val;
	wxPanel* m_notebook1_page_4;
	wxRadioBox* m_radioBoxPersp_1;
	wxNotebook* m_notebook2;
	wxPanel* m_notebook2_page_1;
	wxRadioBox* m_radioBoxOrtog_2;
	wxPanel* m_notebook2_page_2;
	wxRadioBox* m_radioBoxUkos_2;
	wxStaticText* m_staticText_ukosny2_alfa;
	wxScrollBar* m_scrollBar_ukosny2_alfa;
	wxStaticText* m_staticText_ukosny2_alfa_val;
	wxStaticText* m_staticText_ukosny2_phi;
	wxScrollBar* m_scrollBar_ukosny2_phi;
	wxStaticText* m_staticText_ukosny2_phi_val;
	wxPanel* m_notebook2_page_3;
	wxRadioBox* m_radioBoxAkson_2;
	wxStaticText* m_staticText_akson2_alfa;
	wxScrollBar* m_scrollBar_akson2_alfa;
	wxStaticText* m_staticText_akson2_alfa_val;
	wxStaticText* m_staticText_akson2_beta;
	wxScrollBar* m_scrollBar_akson2_beta;
	wxStaticText* m_staticText_akson2_beta_val;
	wxPanel* m_notebook2_page_4;
	wxRadioBox* m_radioBoxPersp_2;
	wxNotebook* m_notebook3;
	wxPanel* m_notebook3_page_1;
	wxRadioBox* m_radioBoxOrtog_3;
	wxPanel* m_notebook3_page_2;
	wxRadioBox* m_radioBoxUkos_3;
	wxStaticText* m_staticText_ukosny3_alfa;
	wxScrollBar* m_scrollBar_ukosny3_alfa;
	wxStaticText* m_staticText_ukosny3_alfa_val;
	wxStaticText* m_staticText_ukosny3_phi;
	wxScrollBar* m_scrollBar_ukosny3_phi;
	wxStaticText* m_staticText_ukosny3_phi_val;
	wxPanel* m_notebook3_page_3;
	wxRadioBox* m_radioBoxAkson_3;
	wxStaticText* m_staticText_akson3_alfa;
	wxScrollBar* m_scrollBar_akson3_alfa;
	wxStaticText* m_staticText_akson3_alfa_val;
	wxStaticText* m_staticText_akson3_beta;
	wxScrollBar* m_scrollBar_akson3_beta;
	wxStaticText* m_staticText_akson3_beta_val;
	wxPanel* m_notebook3_page_4;
	wxRadioBox* m_radioBoxPersp_3;

	// Virtual event handlers, overide them in your derived class
	virtual void m_scrollBar_Translation_XOnScroll(wxScrollEvent& event) { event.Skip(); }
	virtual void m_scrollBar_Translation_YOnScroll(wxScrollEvent& event) { event.Skip(); }
	virtual void m_scrollBar_Translation_ZOnScroll(wxScrollEvent& event) { event.Skip(); }
	virtual void m_scrollBar_Rotation_XOnScroll(wxScrollEvent& event) { event.Skip(); }
	virtual void m_scrollBar_Rotation_YOnScroll(wxScrollEvent& event) { event.Skip(); }
	virtual void m_scrollBar_Rotation_ZOnScroll(wxScrollEvent& event) { event.Skip(); }
	virtual void m_scrollBar_Scale_XOnScroll(wxScrollEvent& event) { event.Skip(); }
	virtual void m_scrollBar_Scale_YOnScroll(wxScrollEvent& event) { event.Skip(); }
	virtual void m_scrollBar_Scale_ZOnScroll(wxScrollEvent& event) { event.Skip(); }
	virtual void m_button_Load_SolidOnButtonClick(wxCommandEvent& event) { event.Skip(); }
	virtual void m_panel_1OnUpdateUI(wxUpdateUIEvent& event) { event.Skip(); }
	virtual void m_panel_2OnUpdateUI(wxUpdateUIEvent& event) { event.Skip(); }
	virtual void m_panel_3OnUpdateUI(wxUpdateUIEvent& event) { event.Skip(); }
	virtual void m_scrollBar_ukosny1_alfaOnScroll(wxScrollEvent& event) { event.Skip(); }
	virtual void m_scrollBar_ukosny1_phiOnScroll(wxScrollEvent& event) { event.Skip(); }
	virtual void m_scrollBar_akson1_alfaOnScroll(wxScrollEvent& event) { event.Skip(); }
	virtual void m_scrollBar_akson1_betaOnScroll(wxScrollEvent& event) { event.Skip(); }
	virtual void m_scrollBar_ukosny2_alfaOnScroll(wxScrollEvent& event) { event.Skip(); }
	virtual void m_scrollBar_ukosny2_phiOnScroll(wxScrollEvent& event) { event.Skip(); }
	virtual void m_scrollBar_akson2_alfaOnScroll(wxScrollEvent& event) { event.Skip(); }
	virtual void m_scrollBar_akson2_betaOnScroll(wxScrollEvent& event) { event.Skip(); }
	virtual void m_scrollBar_ukosny3_alfaOnScroll(wxScrollEvent& event) { event.Skip(); }
	virtual void m_scrollBar_ukosny3_phiOnScroll(wxScrollEvent& event) { event.Skip(); }
	virtual void m_scrollBar_akson3_alfaOnScroll(wxScrollEvent& event) { event.Skip(); }
	virtual void m_scrollBar_akson3_betaOnScroll(wxScrollEvent& event) { event.Skip(); }



public:

	MyFrame(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Projection_of_solids"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(1250, 750), long style = wxDEFAULT_FRAME_STYLE | wxTAB_TRAVERSAL);

	~MyFrame();

};
