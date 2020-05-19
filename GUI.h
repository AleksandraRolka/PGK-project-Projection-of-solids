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
#include <wx/aui/auibook.h>
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
		wxStaticText* mm_staticText_Rotation_X_val;
		wxStaticText* m_staticText_Rotation_Y;
		wxScrollBar* m_scrollBar_Rotation_Y;
		wxStaticText* mm_staticText_Rotation_Y_val;
		wxStaticText* m_staticText_Rotation_Z;
		wxScrollBar* m_scrollBar_Rotation_Z;
		wxStaticText* mm_staticText_Rotation_Z_val;
		wxStaticText* m_staticText_Scale_X;
		wxScrollBar* m_scrollBar_Scale_X;
		wxStaticText* mm_staticText_Scale_X_val;
		wxStaticText* m_staticText_Scale_Y;
		wxScrollBar* m_scrollBar_Scale_Y;
		wxStaticText* mm_staticText_Scale_Y_val;
		wxStaticText* m_staticText_Scale_Z;
		wxScrollBar* m_scrollBar_Scale_Z;
		wxStaticText* mm_staticText_Scale_Z_val;
		wxCheckBox* m_checkBox_Refl_X;
		wxCheckBox* m_checkBox_Refl_Y;
		wxCheckBox* m_checkBox_Refl_Z;
		wxButton* m_button_Load_Solid;
		wxButton* m_button_Save_Settings;
		wxButton* m_button_Load_Settings;
		wxPanel* m_panel_1;
		wxPanel* m_panel_2;
		wxPanel* m_panel_3;
		wxAuiNotebook* m_auinotebook1;
		wxPanel* m_auinotebook1_panel_1;
		wxRadioBox* m_radioBoxOrtog_1;
		wxPanel* m_auinotebook1_panel_2;
		wxRadioBox* m_radioBoxUkos_1;
		wxPanel* m_auinotebook1_panel_3;
		wxRadioBox* m_radioBoxAkson_1;
		wxPanel* m_auinotebook1_panel_4;
		wxRadioBox* m_radioBoxPersp_1;
		wxAuiNotebook* m_auinotebook2;
		wxPanel* m_auinotebook2_panel_1;
		wxRadioBox* m_radioBoxOrtog_2;
		wxPanel* m_auinotebook2_panel_2;
		wxRadioBox* m_radioBoxUkos_2;
		wxPanel* m_auinotebook2_panel_3;
		wxRadioBox* m_radioBoxAkson_2;
		wxPanel* m_auinotebook2_panel_4;
		wxRadioBox* m_radioBoxPersp_2;
		wxAuiNotebook* m_auinotebook3;
		wxPanel* m_auinotebook3_panel_1;
		wxRadioBox* m_radioBoxOrtog_3;
		wxPanel* m_auinotebook3_panel_2;
		wxRadioBox* m_radioBoxUkos_3;
		wxPanel* m_auinotebook3_panel_3;
		wxRadioBox* m_radioBoxAkson_3;
		wxPanel* m_auinotebook3_panel_4;
		wxRadioBox* m_radioBoxPersp_3;

		// Virtual event handlers, overide them in your derived class
		virtual void m_scrollBar_Translation_XOnScroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void m_scrollBar_Translation_YOnScroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void m_scrollBar_Translation_ZOnScroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void m_scrollBar_Rotation_XOnScroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void m_scrollBar_Rotation_YOnScroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void m_scrollBar_Rotation_ZOnScroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void m_scrollBar_Scale_ZOnScroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void mm_checkBox_Refl_XOnCheckBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_checkBox_Refl_YOnCheckBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_checkBox_Refl_ZOnCheckBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_button_Load_SolidOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_button_Save_SettingsOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_button_Load_SettingsOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_panel_1OnUpdateUI( wxUpdateUIEvent& event ) { event.Skip(); }
		virtual void m_panel_2OnUpdateUI( wxUpdateUIEvent& event ) { event.Skip(); }
		virtual void m_panel_3OnUpdateUI( wxUpdateUIEvent& event ) { event.Skip(); }
		virtual void m_radioBoxOrtog_1OnRadioBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_radioBoxUkos_1OnRadioBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_radioBoxAkson_1OnRadioBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_radioBoxPersp_1OnRadioBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_radioBoxOrtog_2OnRadioBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_radioBoxUkos_2OnRadioBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_radioBoxAkson_2OnRadioBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_radioBoxPersp_2OnRadioBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_radioBoxOrtog_3OnRadioBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_radioBoxUkos_3OnRadioBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_radioBoxAkson_3OnRadioBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_radioBoxPersp_3OnRadioBox( wxCommandEvent& event ) { event.Skip(); }


	public:

		MyFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Projection_of_solids"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1250,750 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~MyFrame();

};

