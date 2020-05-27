#ifndef __GUIMyFrame__
#define __GUIMyFrame__

/**
@file
Subclass of MyFrame, which is generated by wxFormBuilder.
*/

#include "GUI.h"
#include <wx\filedlg.h>
#include <wx/dcmemory.h>
#include <wx/dcclient.h>
#include <wx/dcbuffer.h>

class Matrix4;

//// end generated include

/** Implementing MyFrame */
class GUIMyFrame : public MyFrame
{
	protected:
		// Handlers for MyFrame events.
		void m_scrollBar_Translation_XOnScroll( wxScrollEvent& event );
		void m_scrollBar_Translation_YOnScroll( wxScrollEvent& event );
		void m_scrollBar_Translation_ZOnScroll( wxScrollEvent& event );
		void m_scrollBar_Rotation_XOnScroll( wxScrollEvent& event );
		void m_scrollBar_Rotation_YOnScroll( wxScrollEvent& event );
		void m_scrollBar_Rotation_ZOnScroll( wxScrollEvent& event );
		void m_scrollBar_Scale_XOnScroll( wxScrollEvent& event );
		void m_scrollBar_Scale_YOnScroll( wxScrollEvent& event );
		void m_scrollBar_Scale_ZOnScroll( wxScrollEvent& event );
		void mm_checkBox_Refl_XOnCheckBox( wxCommandEvent& event );
		void m_checkBox_Refl_YOnCheckBox( wxCommandEvent& event );
		void m_checkBox_Refl_ZOnCheckBox( wxCommandEvent& event );
		void m_button_Load_SolidOnButtonClick( wxCommandEvent& event );
		void m_button_Save_SettingsOnButtonClick( wxCommandEvent& event );
		void m_button_Load_SettingsOnButtonClick( wxCommandEvent& event );
		void m_panel_1OnUpdateUI( wxUpdateUIEvent& event );
		void m_panel_2OnUpdateUI( wxUpdateUIEvent& event );
		void m_panel_3OnUpdateUI( wxUpdateUIEvent& event );
		void m_radioBoxOrtog_1OnRadioBox( wxCommandEvent& event );
		void m_radioBoxUkos_1OnRadioBox( wxCommandEvent& event );
		void m_radioBoxAkson_1OnRadioBox( wxCommandEvent& event );
		void m_radioBoxPersp_1OnRadioBox( wxCommandEvent& event );
		void m_radioBoxOrtog_2OnRadioBox( wxCommandEvent& event );
		void m_radioBoxUkos_2OnRadioBox( wxCommandEvent& event );
		void m_radioBoxAkson_2OnRadioBox( wxCommandEvent& event );
		void m_radioBoxPersp_2OnRadioBox( wxCommandEvent& event );
		void m_radioBoxOrtog_3OnRadioBox( wxCommandEvent& event );
		void m_radioBoxUkos_3OnRadioBox( wxCommandEvent& event );
		void m_radioBoxAkson_3OnRadioBox( wxCommandEvent& event );
		void m_radioBoxPersp_3OnRadioBox( wxCommandEvent& event );
	public:
		/** Constructor */
		GUIMyFrame( wxWindow* parent );
	//// end generated class members
		Matrix4 Repaint_general(); // returns Matrix after all transformations
		void Repaint_1();
		void Repaint_2();
		void Repaint_3();
		void Repaint_ukosny(double alpha, double phi);






};

#endif // __GUIMyFrame__
