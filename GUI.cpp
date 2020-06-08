///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "GUI.h"

///////////////////////////////////////////////////////////////////////////

MyFrame::MyFrame(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxFrame(parent, id, title, pos, size, style)
{
	this->SetSizeHints(wxDefaultSize, wxDefaultSize);
	this->SetBackgroundColour(wxColour(236, 245, 255));

	wxBoxSizer* bSizerTop;
	bSizerTop = new wxBoxSizer(wxVERTICAL);

	wxBoxSizer* bSUpperOptions;
	bSUpperOptions = new wxBoxSizer(wxHORIZONTAL);

	wxBoxSizer* bS_Sliders;
	bS_Sliders = new wxBoxSizer(wxHORIZONTAL);

	bS_Sliders->SetMinSize(wxSize(900, 100));
	wxBoxSizer* bS_Translation;
	bS_Translation = new wxBoxSizer(wxVERTICAL);

	wxBoxSizer* bS_Translation_X;
	bS_Translation_X = new wxBoxSizer(wxHORIZONTAL);

	m_staticText_Translation_X = new wxStaticText(this, wxID_ANY, wxT("Translacja X:"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText_Translation_X->Wrap(-1);
	bS_Translation_X->Add(m_staticText_Translation_X, 0, wxALL, 5);

	m_scrollBar_Translation_X = new wxScrollBar(this, wxID_ANY, wxDefaultPosition, wxSize(150, -1), wxSB_HORIZONTAL);
	bS_Translation_X->Add(m_scrollBar_Translation_X, 0, wxALL, 5);

	m_staticText_Translation_X_val = new wxStaticText(this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText_Translation_X_val->Wrap(-1);
	bS_Translation_X->Add(m_staticText_Translation_X_val, 0, wxALL, 5);


	bS_Translation->Add(bS_Translation_X, 1, wxEXPAND, 5);

	wxBoxSizer* bS_Translation_Y;
	bS_Translation_Y = new wxBoxSizer(wxHORIZONTAL);

	m_staticText_Translation_Y = new wxStaticText(this, wxID_ANY, wxT("Translacja Y:"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText_Translation_Y->Wrap(-1);
	bS_Translation_Y->Add(m_staticText_Translation_Y, 0, wxALL, 5);

	m_scrollBar_Translation_Y = new wxScrollBar(this, wxID_ANY, wxDefaultPosition, wxSize(150, -1), wxSB_HORIZONTAL);
	bS_Translation_Y->Add(m_scrollBar_Translation_Y, 0, wxALL, 5);

	m_staticText_Translation_Y_val = new wxStaticText(this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText_Translation_Y_val->Wrap(-1);
	bS_Translation_Y->Add(m_staticText_Translation_Y_val, 0, wxALL, 5);


	bS_Translation->Add(bS_Translation_Y, 1, wxEXPAND, 5);

	wxBoxSizer* bS_Translation_Z;
	bS_Translation_Z = new wxBoxSizer(wxHORIZONTAL);

	m_staticText_Translation_Z = new wxStaticText(this, wxID_ANY, wxT("Translacja Z:"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText_Translation_Z->Wrap(-1);
	bS_Translation_Z->Add(m_staticText_Translation_Z, 0, wxALL, 5);

	m_scrollBar_Translation_Z = new wxScrollBar(this, wxID_ANY, wxDefaultPosition, wxSize(150, -1), wxSB_HORIZONTAL);
	bS_Translation_Z->Add(m_scrollBar_Translation_Z, 0, wxALL, 5);

	m_staticText_Translation_Z_val = new wxStaticText(this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText_Translation_Z_val->Wrap(-1);
	bS_Translation_Z->Add(m_staticText_Translation_Z_val, 0, wxALL, 5);


	bS_Translation->Add(bS_Translation_Z, 1, wxEXPAND, 5);


	bS_Sliders->Add(bS_Translation, 1, wxEXPAND, 5);

	wxBoxSizer* bS_Rotation;
	bS_Rotation = new wxBoxSizer(wxVERTICAL);

	wxBoxSizer* bS_Rotation_X;
	bS_Rotation_X = new wxBoxSizer(wxHORIZONTAL);

	m_staticText_Rotation_X = new wxStaticText(this, wxID_ANY, wxT("Obrót X:"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText_Rotation_X->Wrap(-1);
	bS_Rotation_X->Add(m_staticText_Rotation_X, 0, wxALL, 5);

	m_scrollBar_Rotation_X = new wxScrollBar(this, wxID_ANY, wxDefaultPosition, wxSize(150, -1), wxSB_HORIZONTAL);
	bS_Rotation_X->Add(m_scrollBar_Rotation_X, 0, wxALL, 5);
	Bind(wxEVT_SCROLL_THUMBTRACK, &MyFrame::m_scrollBar_Rotation_XOnScroll, this, wxID_ANY);

	mm_staticText_Rotation_X_val = new wxStaticText(this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0);
	mm_staticText_Rotation_X_val->Wrap(-1);
	bS_Rotation_X->Add(mm_staticText_Rotation_X_val, 0, wxALL, 5);


	bS_Rotation->Add(bS_Rotation_X, 1, wxEXPAND, 5);

	wxBoxSizer* bS_Rotation_Y;
	bS_Rotation_Y = new wxBoxSizer(wxHORIZONTAL);

	m_staticText_Rotation_Y = new wxStaticText(this, wxID_ANY, wxT("Obrót Y:"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText_Rotation_Y->Wrap(-1);
	bS_Rotation_Y->Add(m_staticText_Rotation_Y, 0, wxALL, 5);

	m_scrollBar_Rotation_Y = new wxScrollBar(this, wxID_ANY, wxDefaultPosition, wxSize(150, -1), wxSB_HORIZONTAL);
	bS_Rotation_Y->Add(m_scrollBar_Rotation_Y, 0, wxALL, 5);

	mm_staticText_Rotation_Y_val = new wxStaticText(this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0);
	mm_staticText_Rotation_Y_val->Wrap(-1);
	bS_Rotation_Y->Add(mm_staticText_Rotation_Y_val, 0, wxALL, 5);


	bS_Rotation->Add(bS_Rotation_Y, 1, wxEXPAND, 5);

	wxBoxSizer* bS_Rotation_Z;
	bS_Rotation_Z = new wxBoxSizer(wxHORIZONTAL);

	m_staticText_Rotation_Z = new wxStaticText(this, wxID_ANY, wxT("Obrót Z:"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText_Rotation_Z->Wrap(-1);
	bS_Rotation_Z->Add(m_staticText_Rotation_Z, 0, wxALL, 5);

	m_scrollBar_Rotation_Z = new wxScrollBar(this, wxID_ANY, wxDefaultPosition, wxSize(150, -1), wxSB_HORIZONTAL);
	bS_Rotation_Z->Add(m_scrollBar_Rotation_Z, 0, wxALL, 5);

	mm_staticText_Rotation_Z_val = new wxStaticText(this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0);
	mm_staticText_Rotation_Z_val->Wrap(-1);
	bS_Rotation_Z->Add(mm_staticText_Rotation_Z_val, 0, wxALL, 5);


	bS_Rotation->Add(bS_Rotation_Z, 1, wxEXPAND, 5);


	bS_Sliders->Add(bS_Rotation, 1, wxEXPAND, 5);

	wxBoxSizer* bS_Scale;
	bS_Scale = new wxBoxSizer(wxVERTICAL);

	wxBoxSizer* bS_Scale_X;
	bS_Scale_X = new wxBoxSizer(wxHORIZONTAL);

	m_staticText_Scale_X = new wxStaticText(this, wxID_ANY, wxT("Skala X:"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText_Scale_X->Wrap(-1);
	bS_Scale_X->Add(m_staticText_Scale_X, 0, wxALL, 5);

	m_scrollBar_Scale_X = new wxScrollBar(this, wxID_ANY, wxDefaultPosition, wxSize(150, -1), wxSB_HORIZONTAL);
	bS_Scale_X->Add(m_scrollBar_Scale_X, 0, wxALL, 5);

	mm_staticText_Scale_X_val = new wxStaticText(this, wxID_ANY, wxT("1"), wxDefaultPosition, wxDefaultSize, 0);
	mm_staticText_Scale_X_val->Wrap(-1);
	bS_Scale_X->Add(mm_staticText_Scale_X_val, 0, wxALL, 5);


	bS_Scale->Add(bS_Scale_X, 1, wxEXPAND, 5);

	wxBoxSizer* bS_Scale_Y;
	bS_Scale_Y = new wxBoxSizer(wxHORIZONTAL);

	m_staticText_Scale_Y = new wxStaticText(this, wxID_ANY, wxT("Skala Y:"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText_Scale_Y->Wrap(-1);
	bS_Scale_Y->Add(m_staticText_Scale_Y, 0, wxALL, 5);

	m_scrollBar_Scale_Y = new wxScrollBar(this, wxID_ANY, wxDefaultPosition, wxSize(150, -1), wxSB_HORIZONTAL);
	bS_Scale_Y->Add(m_scrollBar_Scale_Y, 0, wxALL, 5);

	mm_staticText_Scale_Y_val = new wxStaticText(this, wxID_ANY, wxT("1"), wxDefaultPosition, wxDefaultSize, 0);
	mm_staticText_Scale_Y_val->Wrap(-1);
	bS_Scale_Y->Add(mm_staticText_Scale_Y_val, 0, wxALL, 5);


	bS_Scale->Add(bS_Scale_Y, 1, wxEXPAND, 5);

	wxBoxSizer* bbS_Scale_Z;
	bbS_Scale_Z = new wxBoxSizer(wxHORIZONTAL);

	m_staticText_Scale_Z = new wxStaticText(this, wxID_ANY, wxT("Skala Z:"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText_Scale_Z->Wrap(-1);
	bbS_Scale_Z->Add(m_staticText_Scale_Z, 0, wxALL, 5);

	m_scrollBar_Scale_Z = new wxScrollBar(this, wxID_ANY, wxPoint(-1, -1), wxSize(150, -1), wxSB_HORIZONTAL);
	bbS_Scale_Z->Add(m_scrollBar_Scale_Z, 0, wxALL, 5);

	mm_staticText_Scale_Z_val = new wxStaticText(this, wxID_ANY, wxT("1"), wxDefaultPosition, wxDefaultSize, 0);
	mm_staticText_Scale_Z_val->Wrap(-1);
	bbS_Scale_Z->Add(mm_staticText_Scale_Z_val, 0, wxALL, 5);


	bS_Scale->Add(bbS_Scale_Z, 1, wxEXPAND, 5);


	bS_Sliders->Add(bS_Scale, 1, wxEXPAND, 5);


	bSUpperOptions->Add(bS_Sliders, 1, wxALIGN_CENTER | wxALL, 5);


	wxBoxSizer* bS_Settings;
	bS_Settings = new wxBoxSizer(wxVERTICAL);

	bS_Settings->SetMinSize(wxSize(250, -1));
	m_button_Load_Solid = new wxButton(this, wxID_ANY, wxT("Wczytaj bryłę"), wxDefaultPosition, wxDefaultSize, 0);
	bS_Settings->Add(m_button_Load_Solid, 0, wxALL, 5);

	bSUpperOptions->Add(bS_Settings, 1, wxALIGN_CENTER | wxALL, 5);

	bSizerTop->Add(bSUpperOptions, 1, wxEXPAND, 5);


	wxBoxSizer* bS_Panels;
	bS_Panels = new wxBoxSizer(wxHORIZONTAL);

	m_panel_1 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	m_panel_1->SetBackgroundColour(wxColour(*wxWHITE));
	m_panel_1->SetMaxSize(wxSize(400, 400));

	bS_Panels->Add(m_panel_1, 1, wxEXPAND | wxALL, 5);

	m_panel_2 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(400, 400), wxTAB_TRAVERSAL);
	m_panel_2->SetBackgroundColour(wxColour(*wxWHITE));

	bS_Panels->Add(m_panel_2, 1, wxEXPAND | wxALL, 5);

	m_panel_3 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	m_panel_3->SetBackgroundColour(wxColour(*wxWHITE));

	bS_Panels->Add(m_panel_3, 1, wxEXPAND | wxALL, 5);


	bSizerTop->Add(bS_Panels, 1, wxEXPAND, 5);

	wxBoxSizer* bS_Tabs;
	bS_Tabs = new wxBoxSizer(wxHORIZONTAL);

	m_notebook1 = new wxNotebook(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0);
	m_notebook1_panel_1 = new wxPanel(m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	m_notebook1_panel_1->SetBackgroundColour(wxColour(246, 246, 246));

	wxBoxSizer* bS_m_notebook1_panel_1;
	bS_m_notebook1_panel_1 = new wxBoxSizer(wxVERTICAL);

	wxString m_radioBoxOrtog_1Choices[] = { wxT("na płaszczyznę YZ "), wxT("na płaszczyznę XZ"), wxT("na płaszczyznę XY") };
	int m_radioBoxOrtog_1NChoices = sizeof(m_radioBoxOrtog_1Choices) / sizeof(wxString);
	m_radioBoxOrtog_1 = new wxRadioBox(m_notebook1_panel_1, wxID_ANY, wxT("Kierunek rzutu"), wxDefaultPosition, wxDefaultSize, m_radioBoxOrtog_1NChoices, m_radioBoxOrtog_1Choices, 1, wxRA_SPECIFY_COLS);
	m_radioBoxOrtog_1->SetSelection(0);
	bS_m_notebook1_panel_1->Add(m_radioBoxOrtog_1, 0, wxALL, 5);


	m_notebook1_panel_1->SetSizer(bS_m_notebook1_panel_1);
	m_notebook1_panel_1->Layout();
	bS_m_notebook1_panel_1->Fit(m_notebook1_panel_1);
	m_notebook1->AddPage(m_notebook1_panel_1, wxT("Ortogonalny"), false);
	m_notebook1_panel_2 = new wxPanel(m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	m_notebook1_panel_2->SetBackgroundColour(wxColour(243, 243, 243));
	wxBoxSizer* bS_m_notebook1_panel_2;
	bS_m_notebook1_panel_2 = new wxBoxSizer(wxHORIZONTAL);

	wxString m_radioBoxUkos_1Choices[] = { wxT("Gabinetowy"), wxT("Kawaleryjski"), wxT("inny") };
	int m_radioBoxUkos_1NChoices = sizeof(m_radioBoxUkos_1Choices) / sizeof(wxString);
	m_radioBoxUkos_1 = new wxRadioBox(m_notebook1_panel_2, wxID_ANY, wxT("Podtyp"), wxDefaultPosition, wxDefaultSize, m_radioBoxUkos_1NChoices, m_radioBoxUkos_1Choices, 1, wxRA_SPECIFY_COLS);
	m_radioBoxUkos_1->SetSelection(0);
	bS_m_notebook1_panel_2->Add(m_radioBoxUkos_1, 0, wxALL, 5);

	wxBoxSizer* bSizer_ukosny1;
	bSizer_ukosny1 = new wxBoxSizer(wxVERTICAL);

	wxBoxSizer* bSizer_ukosny1_upper;
	bSizer_ukosny1_upper = new wxBoxSizer(wxHORIZONTAL);

	m_staticText_ukosny1_alfa = new wxStaticText(m_notebook1_panel_2, wxID_ANY, wxT("alfa :"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText_ukosny1_alfa->Wrap(-1);
	bSizer_ukosny1_upper->Add(m_staticText_ukosny1_alfa, 0, wxALIGN_CENTER | wxALL, 5);

	m_scrollBar_ukosny1_alfa = new wxScrollBar(m_notebook1_panel_2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSB_HORIZONTAL);
	m_scrollBar_ukosny1_alfa->Enable(false);

	bSizer_ukosny1_upper->Add(m_scrollBar_ukosny1_alfa, 0, wxALIGN_CENTER | wxALL, 5);

	m_staticText_ukosny1_alfa_val = new wxStaticText(m_notebook1_panel_2, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText_ukosny1_alfa_val->Wrap(-1);
	bSizer_ukosny1_upper->Add(m_staticText_ukosny1_alfa_val, 0, wxALIGN_CENTER | wxALL, 5);


	bSizer_ukosny1->Add(bSizer_ukosny1_upper, 1, wxEXPAND, 5);

	wxBoxSizer* bSizer_ukosny1_bottom;
	bSizer_ukosny1_bottom = new wxBoxSizer(wxHORIZONTAL);

	m_staticText_ukosny1_phi = new wxStaticText(m_notebook1_panel_2, wxID_ANY, wxT("phi :"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText_ukosny1_phi->Wrap(-1);
	bSizer_ukosny1_bottom->Add(m_staticText_ukosny1_phi, 0, wxALL, 5);

	m_scrollBar_ukosny1_phi = new wxScrollBar(m_notebook1_panel_2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSB_HORIZONTAL);
	bSizer_ukosny1_bottom->Add(m_scrollBar_ukosny1_phi, 0, wxALL, 5);

	m_staticText_ukosny1_phi_val = new wxStaticText(m_notebook1_panel_2, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText_ukosny1_phi_val->Wrap(-1);
	bSizer_ukosny1_bottom->Add(m_staticText_ukosny1_phi_val, 0, wxALL, 5);


	bSizer_ukosny1->Add(bSizer_ukosny1_bottom, 1, wxEXPAND, 5);


	bS_m_notebook1_panel_2->Add(bSizer_ukosny1, 1, wxEXPAND, 5);


	m_notebook1_panel_2->SetSizer(bS_m_notebook1_panel_2);

	m_notebook1_panel_2->Layout();
	bS_m_notebook1_panel_2->Fit(m_notebook1_panel_2);
	m_notebook1->AddPage(m_notebook1_panel_2, wxT("Ukośny"), false);
	m_notebook1_panel_3 = new wxPanel(m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	m_notebook1_panel_3->SetBackgroundColour(wxColour(243, 243, 243));
	wxBoxSizer* bS_m_notebook1_panel_3;
	bS_m_notebook1_panel_3 = new wxBoxSizer(wxHORIZONTAL);

	wxString m_radioBoxAkson_1Choices[] = { wxT("Izometryczny"), wxT("inny") };
	int m_radioBoxAkson_1NChoices = sizeof(m_radioBoxAkson_1Choices) / sizeof(wxString);
	m_radioBoxAkson_1 = new wxRadioBox(m_notebook1_panel_3, wxID_ANY, wxT("Podtyp"), wxDefaultPosition, wxDefaultSize, m_radioBoxAkson_1NChoices, m_radioBoxAkson_1Choices, 1, wxRA_SPECIFY_COLS);
	m_radioBoxAkson_1->SetSelection(0);
	bS_m_notebook1_panel_3->Add(m_radioBoxAkson_1, 0, wxALL, 5);


	wxBoxSizer* bSizer_akson1;
	bSizer_akson1 = new wxBoxSizer(wxVERTICAL);

	wxBoxSizer* bSizer_akson1_upper;
	bSizer_akson1_upper = new wxBoxSizer(wxHORIZONTAL);

	m_staticText_akson1_alfa = new wxStaticText(m_notebook1_panel_3, wxID_ANY, wxT("alfa :"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText_akson1_alfa->Wrap(-1);
	bSizer_akson1_upper->Add(m_staticText_akson1_alfa, 0, wxALIGN_CENTER | wxALL, 5);

	m_scrollBar_akson1_alfa = new wxScrollBar(m_notebook1_panel_3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSB_HORIZONTAL);
	m_scrollBar_akson1_alfa->Enable(false);

	bSizer_akson1_upper->Add(m_scrollBar_akson1_alfa, 0, wxALIGN_CENTER | wxALL, 5);

	m_staticText_akson1_alfa_val = new wxStaticText(m_notebook1_panel_3, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText_akson1_alfa_val->Wrap(-1);
	bSizer_akson1_upper->Add(m_staticText_akson1_alfa_val, 0, wxALIGN_CENTER | wxALL, 5);


	bSizer_akson1->Add(bSizer_akson1_upper, 1, wxEXPAND, 5);

	wxBoxSizer* bSizer_akson1_bottom;
	bSizer_akson1_bottom = new wxBoxSizer(wxHORIZONTAL);

	m_staticText_akson1_beta = new wxStaticText(m_notebook1_panel_3, wxID_ANY, wxT("beta :"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText_akson1_beta->Wrap(-1);
	bSizer_akson1_bottom->Add(m_staticText_akson1_beta, 0, wxALL, 5);

	m_scrollBar_akson1_beta = new wxScrollBar(m_notebook1_panel_3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSB_HORIZONTAL);
	m_scrollBar_akson1_beta->Enable(false);

	bSizer_akson1_bottom->Add(m_scrollBar_akson1_beta, 0, wxALL, 5);

	m_staticText_akson1_beta_val = new wxStaticText(m_notebook1_panel_3, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText_akson1_beta_val->Wrap(-1);
	bSizer_akson1_bottom->Add(m_staticText_akson1_beta_val, 0, wxALL, 5);


	bSizer_akson1->Add(bSizer_akson1_bottom, 1, wxEXPAND, 5);


	bS_m_notebook1_panel_3->Add(bSizer_akson1, 1, wxEXPAND, 5);


	m_notebook1_panel_3->SetSizer(bS_m_notebook1_panel_3);

	m_notebook1_panel_3->Layout();
	bS_m_notebook1_panel_3->Fit(m_notebook1_panel_3);
	m_notebook1->AddPage(m_notebook1_panel_3, wxT("Aksonometryczny"), false);
	m_notebook1_panel_4 = new wxPanel(m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	m_notebook1_panel_4->SetBackgroundColour(wxColour(243, 243, 243));
	wxBoxSizer* bS_m_notebook1_panel_4;
	bS_m_notebook1_panel_4 = new wxBoxSizer(wxVERTICAL);

	wxString m_radioBoxPersp_1Choices[] = { wxT("Jeden punkt zbieżności") };
	int m_radioBoxPersp_1NChoices = sizeof(m_radioBoxPersp_1Choices) / sizeof(wxString);
	m_radioBoxPersp_1 = new wxRadioBox(m_notebook1_panel_4, wxID_ANY, wxT("Podtyp"), wxDefaultPosition, wxDefaultSize, m_radioBoxPersp_1NChoices, m_radioBoxPersp_1Choices, 1, wxRA_SPECIFY_COLS);
	m_radioBoxPersp_1->SetSelection(0);
	bS_m_notebook1_panel_4->Add(m_radioBoxPersp_1, 0, wxALL, 5);


	m_notebook1_panel_4->SetSizer(bS_m_notebook1_panel_4);
	m_notebook1_panel_4->Layout();
	bS_m_notebook1_panel_4->Fit(m_notebook1_panel_4);
	m_notebook1->AddPage(m_notebook1_panel_4, wxT("Perspektywiczny"), false);

	bS_Tabs->Add(m_notebook1, 1, wxEXPAND | wxALL, 5);

	m_notebook1->SetSelection(0);

	m_notebook2 = new wxNotebook(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0);
	m_notebook2_panel_1 = new wxPanel(m_notebook2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	m_notebook2_panel_1->SetBackgroundColour(wxColour(246, 246, 246));

	wxBoxSizer* bS_m_notebook2_panel_1;
	bS_m_notebook2_panel_1 = new wxBoxSizer(wxVERTICAL);

	wxString m_radioBoxOrtog_2Choices[] = { wxT("na płaszczyznę YZ "), wxT("na płaszczyznę XZ"), wxT("na płaszczyznę XY") };
	int m_radioBoxOrtog_2NChoices = sizeof(m_radioBoxOrtog_2Choices) / sizeof(wxString);
	m_radioBoxOrtog_2 = new wxRadioBox(m_notebook2_panel_1, wxID_ANY, wxT("Kierunek rzutu"), wxDefaultPosition, wxDefaultSize, m_radioBoxOrtog_2NChoices, m_radioBoxOrtog_2Choices, 1, wxRA_SPECIFY_COLS);
	m_radioBoxOrtog_2->SetSelection(0);
	bS_m_notebook2_panel_1->Add(m_radioBoxOrtog_2, 0, wxALL, 5);


	m_notebook2_panel_1->SetSizer(bS_m_notebook2_panel_1);
	m_notebook2_panel_1->Layout();
	bS_m_notebook2_panel_1->Fit(m_notebook2_panel_1);
	m_notebook2->AddPage(m_notebook2_panel_1, wxT("Ortogonalny"), false);
	m_notebook2_panel_2 = new wxPanel(m_notebook2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	m_notebook2_panel_2->SetBackgroundColour(wxColour(243, 243, 243));
	wxBoxSizer* bS_m_notebook2_panel_2;
	bS_m_notebook2_panel_2 = new wxBoxSizer(wxHORIZONTAL);

	wxString m_radioBoxUkos_2Choices[] = { wxT("Gabinetowy"), wxT("Kawaleryjski"), wxT("inny") };
	int m_radioBoxUkos_2NChoices = sizeof(m_radioBoxUkos_2Choices) / sizeof(wxString);
	m_radioBoxUkos_2 = new wxRadioBox(m_notebook2_panel_2, wxID_ANY, wxT("Podtyp"), wxDefaultPosition, wxDefaultSize, m_radioBoxUkos_2NChoices, m_radioBoxUkos_2Choices, 1, wxRA_SPECIFY_COLS);
	m_radioBoxUkos_2->SetSelection(0);
	bS_m_notebook2_panel_2->Add(m_radioBoxUkos_2, 0, wxALL, 5);

	wxBoxSizer* bSizer_ukosny2;
	bSizer_ukosny2 = new wxBoxSizer(wxVERTICAL);

	wxBoxSizer* bSizer_ukosny2_upper;
	bSizer_ukosny2_upper = new wxBoxSizer(wxHORIZONTAL);

	m_staticText_ukosny2_alfa = new wxStaticText(m_notebook2_panel_2, wxID_ANY, wxT("alfa :"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText_ukosny2_alfa->Wrap(-1);
	bSizer_ukosny2_upper->Add(m_staticText_ukosny2_alfa, 0, wxALIGN_CENTER | wxALL, 5);

	m_scrollBar_ukosny2_alfa = new wxScrollBar(m_notebook2_panel_2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSB_HORIZONTAL);
	m_scrollBar_ukosny2_alfa->Enable(false);

	bSizer_ukosny2_upper->Add(m_scrollBar_ukosny2_alfa, 0, wxALIGN_CENTER | wxALL, 5);

	m_staticText_ukosny2_alfa_val = new wxStaticText(m_notebook2_panel_2, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText_ukosny2_alfa_val->Wrap(-1);
	bSizer_ukosny2_upper->Add(m_staticText_ukosny2_alfa_val, 0, wxALIGN_CENTER | wxALL, 5);


	bSizer_ukosny2->Add(bSizer_ukosny2_upper, 1, wxEXPAND, 5);

	wxBoxSizer* bSizer_ukosny2_bottom;
	bSizer_ukosny2_bottom = new wxBoxSizer(wxHORIZONTAL);

	m_staticText_ukosny2_phi = new wxStaticText(m_notebook2_panel_2, wxID_ANY, wxT("phi :"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText_ukosny2_phi->Wrap(-1);
	bSizer_ukosny2_bottom->Add(m_staticText_ukosny2_phi, 0, wxALL, 5);

	m_scrollBar_ukosny2_phi = new wxScrollBar(m_notebook2_panel_2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSB_HORIZONTAL);
	bSizer_ukosny2_bottom->Add(m_scrollBar_ukosny2_phi, 0, wxALL, 5);

	m_staticText_ukosny2_phi_val = new wxStaticText(m_notebook2_panel_2, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText_ukosny2_phi_val->Wrap(-1);
	bSizer_ukosny2_bottom->Add(m_staticText_ukosny2_phi_val, 0, wxALL, 5);


	bSizer_ukosny2->Add(bSizer_ukosny2_bottom, 1, wxEXPAND, 5);


	bS_m_notebook2_panel_2->Add(bSizer_ukosny2, 1, wxEXPAND, 5);


	m_notebook2_panel_2->SetSizer(bS_m_notebook2_panel_2);

	m_notebook2_panel_2->Layout();
	bS_m_notebook2_panel_2->Fit(m_notebook2_panel_2);
	m_notebook2->AddPage(m_notebook2_panel_2, wxT("Ukośny"), false);
	m_notebook2_panel_3 = new wxPanel(m_notebook2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	m_notebook2_panel_3->SetBackgroundColour(wxColour(243, 243, 243));
	wxBoxSizer* bS_m_notebook2_panel_3;
	bS_m_notebook2_panel_3 = new wxBoxSizer(wxHORIZONTAL);

	wxString m_radioBoxAkson_2Choices[] = { wxT("Izometryczny"), wxT("inny") };
	int m_radioBoxAkson_2NChoices = sizeof(m_radioBoxAkson_2Choices) / sizeof(wxString);
	m_radioBoxAkson_2 = new wxRadioBox(m_notebook2_panel_3, wxID_ANY, wxT("Podtyp"), wxDefaultPosition, wxDefaultSize, m_radioBoxAkson_2NChoices, m_radioBoxAkson_2Choices, 1, wxRA_SPECIFY_COLS);
	m_radioBoxAkson_2->SetSelection(0);
	bS_m_notebook2_panel_3->Add(m_radioBoxAkson_2, 0, wxALL, 5);

	wxBoxSizer* bSizer_akson2;
	bSizer_akson2 = new wxBoxSizer(wxVERTICAL);

	wxBoxSizer* bSizer_akson2_upper;
	bSizer_akson2_upper = new wxBoxSizer(wxHORIZONTAL);

	m_staticText_akson2_alfa = new wxStaticText(m_notebook2_panel_3, wxID_ANY, wxT("alfa :"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText_akson2_alfa->Wrap(-1);
	bSizer_akson2_upper->Add(m_staticText_akson2_alfa, 0, wxALIGN_CENTER | wxALL, 5);

	m_scrollBar_akson2_alfa = new wxScrollBar(m_notebook2_panel_3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSB_HORIZONTAL);
	m_scrollBar_akson2_alfa->Enable(false);

	bSizer_akson2_upper->Add(m_scrollBar_akson2_alfa, 0, wxALIGN_CENTER | wxALL, 5);

	m_staticText_akson2_alfa_val = new wxStaticText(m_notebook2_panel_3, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText_akson2_alfa_val->Wrap(-1);
	bSizer_akson2_upper->Add(m_staticText_akson2_alfa_val, 0, wxALIGN_CENTER | wxALL, 5);


	bSizer_akson2->Add(bSizer_akson2_upper, 1, wxEXPAND, 5);

	wxBoxSizer* bSizer_akson2_bottom;
	bSizer_akson2_bottom = new wxBoxSizer(wxHORIZONTAL);

	m_staticText_akson2_beta = new wxStaticText(m_notebook2_panel_3, wxID_ANY, wxT("beta :"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText_akson2_beta->Wrap(-1);
	bSizer_akson2_bottom->Add(m_staticText_akson2_beta, 0, wxALL, 5);

	m_scrollBar_akson2_beta = new wxScrollBar(m_notebook2_panel_3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSB_HORIZONTAL);
	m_scrollBar_akson2_beta->Enable(false);

	bSizer_akson2_bottom->Add(m_scrollBar_akson2_beta, 0, wxALL, 5);

	m_staticText_akson2_beta_val = new wxStaticText(m_notebook2_panel_3, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText_akson2_beta_val->Wrap(-1);
	bSizer_akson2_bottom->Add(m_staticText_akson2_beta_val, 0, wxALL, 5);


	bSizer_akson2->Add(bSizer_akson2_bottom, 1, wxEXPAND, 5);


	bS_m_notebook2_panel_3->Add(bSizer_akson2, 1, wxEXPAND, 5);


	m_notebook2_panel_3->SetSizer(bS_m_notebook2_panel_3);

	m_notebook2_panel_3->Layout();
	bS_m_notebook2_panel_3->Fit(m_notebook2_panel_3);
	m_notebook2->AddPage(m_notebook2_panel_3, wxT("Aksonometryczny"), false);
	m_notebook2_panel_4 = new wxPanel(m_notebook2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	m_notebook2_panel_4->SetBackgroundColour(wxColour(243, 243, 243));
	wxBoxSizer* bS_m_notebook2_panel_4;
	bS_m_notebook2_panel_4 = new wxBoxSizer(wxVERTICAL);

	wxString m_radioBoxPersp_2Choices[] = { wxT("Jeden punkt zbieżności") };
	int m_radioBoxPersp_2NChoices = sizeof(m_radioBoxPersp_2Choices) / sizeof(wxString);
	m_radioBoxPersp_2 = new wxRadioBox(m_notebook2_panel_4, wxID_ANY, wxT("Podtyp"), wxDefaultPosition, wxDefaultSize, m_radioBoxPersp_2NChoices, m_radioBoxPersp_2Choices, 1, wxRA_SPECIFY_COLS);
	m_radioBoxPersp_2->SetSelection(0);
	bS_m_notebook2_panel_4->Add(m_radioBoxPersp_2, 0, wxALL, 5);


	m_notebook2_panel_4->SetSizer(bS_m_notebook2_panel_4);
	m_notebook2_panel_4->Layout();
	bS_m_notebook2_panel_4->Fit(m_notebook2_panel_4);
	m_notebook2->AddPage(m_notebook2_panel_4, wxT("Perspektywiczny"), true);

	bS_Tabs->Add(m_notebook2, 1, wxEXPAND | wxALL, 5);

	m_notebook2->SetSelection(0);

	m_notebook3 = new wxNotebook(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0);
	m_notebook3_panel_1 = new wxPanel(m_notebook3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	m_notebook3_panel_1->SetBackgroundColour(wxColour(246, 246, 246));

	wxBoxSizer* bS_m_notebook3_panel_1;
	bS_m_notebook3_panel_1 = new wxBoxSizer(wxVERTICAL);

	wxString m_radioBoxOrtog_3Choices[] = { wxT("na płaszczyznę YZ "), wxT("na płaszczyznę XZ"), wxT("na płaszczyznę XY") };
	int m_radioBoxOrtog_3NChoices = sizeof(m_radioBoxOrtog_3Choices) / sizeof(wxString);
	m_radioBoxOrtog_3 = new wxRadioBox(m_notebook3_panel_1, wxID_ANY, wxT("Kierunek rzutu"), wxDefaultPosition, wxDefaultSize, m_radioBoxOrtog_3NChoices, m_radioBoxOrtog_3Choices, 1, wxRA_SPECIFY_COLS);
	m_radioBoxOrtog_3->SetSelection(0);
	bS_m_notebook3_panel_1->Add(m_radioBoxOrtog_3, 0, wxALL, 5);


	m_notebook3_panel_1->SetSizer(bS_m_notebook3_panel_1);
	m_notebook3_panel_1->Layout();
	bS_m_notebook3_panel_1->Fit(m_notebook3_panel_1);
	m_notebook3->AddPage(m_notebook3_panel_1, wxT("Ortogonalny"), false);
	m_notebook3_panel_2 = new wxPanel(m_notebook3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	m_notebook3_panel_2->SetBackgroundColour(wxColour(243, 243, 243));
	wxBoxSizer* bS_m_notebook3_panel_2;
	bS_m_notebook3_panel_2 = new wxBoxSizer(wxHORIZONTAL);

	wxString m_radioBoxUkos_3Choices[] = { wxT("Gabinetowy"), wxT("Kawaleryjski"), wxT("inny") };
	int m_radioBoxUkos_3NChoices = sizeof(m_radioBoxUkos_3Choices) / sizeof(wxString);
	m_radioBoxUkos_3 = new wxRadioBox(m_notebook3_panel_2, wxID_ANY, wxT("Podtyp"), wxDefaultPosition, wxDefaultSize, m_radioBoxUkos_3NChoices, m_radioBoxUkos_3Choices, 1, wxRA_SPECIFY_COLS);
	m_radioBoxUkos_3->SetSelection(0);
	bS_m_notebook3_panel_2->Add(m_radioBoxUkos_3, 0, wxALL, 5);


	wxBoxSizer* bSizer_ukosny3;
	bSizer_ukosny3 = new wxBoxSizer(wxVERTICAL);

	wxBoxSizer* bSizer_ukosny3_upper;
	bSizer_ukosny3_upper = new wxBoxSizer(wxHORIZONTAL);

	m_staticText_ukosny3_alfa = new wxStaticText(m_notebook3_panel_2, wxID_ANY, wxT("alfa :"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText_ukosny3_alfa->Wrap(-1);
	bSizer_ukosny3_upper->Add(m_staticText_ukosny3_alfa, 0, wxALIGN_CENTER | wxALL, 5);

	m_scrollBar_ukosny3_alfa = new wxScrollBar(m_notebook3_panel_2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSB_HORIZONTAL);
	m_scrollBar_ukosny3_alfa->Enable(false);

	bSizer_ukosny3_upper->Add(m_scrollBar_ukosny3_alfa, 0, wxALIGN_CENTER | wxALL, 5);

	m_staticText_ukosny3_alfa_val = new wxStaticText(m_notebook3_panel_2, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText_ukosny3_alfa_val->Wrap(-1);
	bSizer_ukosny3_upper->Add(m_staticText_ukosny3_alfa_val, 0, wxALIGN_CENTER | wxALL, 5);


	bSizer_ukosny3->Add(bSizer_ukosny3_upper, 1, wxEXPAND, 5);

	wxBoxSizer* bSizer_ukosny3_bottom;
	bSizer_ukosny3_bottom = new wxBoxSizer(wxHORIZONTAL);

	m_staticText_ukosny3_phi = new wxStaticText(m_notebook3_panel_2, wxID_ANY, wxT("phi :"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText_ukosny3_phi->Wrap(-1);
	bSizer_ukosny3_bottom->Add(m_staticText_ukosny3_phi, 0, wxALL, 5);

	m_scrollBar_ukosny3_phi = new wxScrollBar(m_notebook3_panel_2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSB_HORIZONTAL);
	bSizer_ukosny3_bottom->Add(m_scrollBar_ukosny3_phi, 0, wxALL, 5);

	m_staticText_ukosny3_phi_val = new wxStaticText(m_notebook3_panel_2, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText_ukosny3_phi_val->Wrap(-1);
	bSizer_ukosny3_bottom->Add(m_staticText_ukosny3_phi_val, 0, wxALL, 5);


	bSizer_ukosny3->Add(bSizer_ukosny3_bottom, 1, wxEXPAND, 5);


	bS_m_notebook3_panel_2->Add(bSizer_ukosny3, 1, wxEXPAND, 5);


	m_notebook3_panel_2->SetSizer(bS_m_notebook3_panel_2);

	m_notebook3_panel_2->Layout();
	bS_m_notebook3_panel_2->Fit(m_notebook3_panel_2);
	m_notebook3->AddPage(m_notebook3_panel_2, wxT("Ukośny"), false);
	m_notebook3_panel_3 = new wxPanel(m_notebook3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	m_notebook3_panel_3->SetBackgroundColour(wxColour(243, 243, 243));
	wxBoxSizer* bS_m_notebook3_panel_3;
	bS_m_notebook3_panel_3 = new wxBoxSizer(wxHORIZONTAL);

	wxString m_radioBoxAkson_3Choices[] = { wxT("Izometryczny"), wxT("inny") };
	int m_radioBoxAkson_3NChoices = sizeof(m_radioBoxAkson_3Choices) / sizeof(wxString);
	m_radioBoxAkson_3 = new wxRadioBox(m_notebook3_panel_3, wxID_ANY, wxT("Podtyp"), wxDefaultPosition, wxDefaultSize, m_radioBoxAkson_3NChoices, m_radioBoxAkson_3Choices, 1, wxRA_SPECIFY_COLS);
	m_radioBoxAkson_3->SetSelection(0);
	bS_m_notebook3_panel_3->Add(m_radioBoxAkson_3, 0, wxALL, 5);

	wxBoxSizer* bSizer_akson3;
	bSizer_akson3 = new wxBoxSizer(wxVERTICAL);

	wxBoxSizer* bSizer_akson3_upper;
	bSizer_akson3_upper = new wxBoxSizer(wxHORIZONTAL);

	m_staticText_akson3_alfa = new wxStaticText(m_notebook3_panel_3, wxID_ANY, wxT("alfa :"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText_akson3_alfa->Wrap(-1);
	bSizer_akson3_upper->Add(m_staticText_akson3_alfa, 0, wxALIGN_CENTER | wxALL, 5);

	m_scrollBar_akson3_alfa = new wxScrollBar(m_notebook3_panel_3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSB_HORIZONTAL);
	m_scrollBar_akson3_alfa->Enable(false);

	bSizer_akson3_upper->Add(m_scrollBar_akson3_alfa, 0, wxALIGN_CENTER | wxALL, 5);

	m_staticText_akson3_alfa_val = new wxStaticText(m_notebook3_panel_3, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText_akson3_alfa_val->Wrap(-1);
	bSizer_akson3_upper->Add(m_staticText_akson3_alfa_val, 0, wxALIGN_CENTER | wxALL, 5);


	bSizer_akson3->Add(bSizer_akson3_upper, 1, wxEXPAND, 5);

	wxBoxSizer* bSizer_akson3_bottom;
	bSizer_akson3_bottom = new wxBoxSizer(wxHORIZONTAL);

	m_staticText_akson3_beta = new wxStaticText(m_notebook3_panel_3, wxID_ANY, wxT("beta :"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText_akson3_beta->Wrap(-1);
	bSizer_akson3_bottom->Add(m_staticText_akson3_beta, 0, wxALL, 5);

	m_scrollBar_akson3_beta = new wxScrollBar(m_notebook3_panel_3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSB_HORIZONTAL);
	m_scrollBar_akson3_beta->Enable(false);

	bSizer_akson3_bottom->Add(m_scrollBar_akson3_beta, 0, wxALL, 5);

	m_staticText_akson3_beta_val = new wxStaticText(m_notebook3_panel_3, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText_akson3_beta_val->Wrap(-1);
	bSizer_akson3_bottom->Add(m_staticText_akson3_beta_val, 0, wxALL, 5);


	bSizer_akson3->Add(bSizer_akson3_bottom, 1, wxEXPAND, 5);


	bS_m_notebook3_panel_3->Add(bSizer_akson3, 1, wxEXPAND, 5);


	m_notebook3_panel_3->SetSizer(bS_m_notebook3_panel_3);

	m_notebook3_panel_3->Layout();
	bS_m_notebook3_panel_3->Fit(m_notebook3_panel_3);
	m_notebook3->AddPage(m_notebook3_panel_3, wxT("Aksonometryczny"), false);
	m_notebook3_panel_4 = new wxPanel(m_notebook3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	m_notebook3_panel_4->SetBackgroundColour(wxColour(243, 243, 243));
	wxBoxSizer* bS_m_notebook3_panel_4;
	bS_m_notebook3_panel_4 = new wxBoxSizer(wxVERTICAL);

	wxString m_radioBoxPersp_3Choices[] = { wxT("Jeden punkt zbieżności") };
	int m_radioBoxPersp_3NChoices = sizeof(m_radioBoxPersp_3Choices) / sizeof(wxString);
	m_radioBoxPersp_3 = new wxRadioBox(m_notebook3_panel_4, wxID_ANY, wxT("Podtyp"), wxDefaultPosition, wxDefaultSize, m_radioBoxPersp_3NChoices, m_radioBoxPersp_3Choices, 1, wxRA_SPECIFY_COLS);
	m_radioBoxPersp_3->SetSelection(0);
	bS_m_notebook3_panel_4->Add(m_radioBoxPersp_3, 0, wxALL, 5);


	m_notebook3_panel_4->SetSizer(bS_m_notebook3_panel_4);
	m_notebook3_panel_4->Layout();
	bS_m_notebook3_panel_4->Fit(m_notebook3_panel_4);
	m_notebook3->AddPage(m_notebook3_panel_4, wxT("Perspektywiczny"), true);

	bS_Tabs->Add(m_notebook3, 1, wxEXPAND | wxALL, 5);

	m_notebook3->SetSelection(0);

	bSizerTop->Add(bS_Tabs, 1, wxEXPAND, 5);


	this->SetSizer(bSizerTop);
	this->Layout();

	this->Centre(wxBOTH);

	// Connect Events
	m_scrollBar_Translation_X->Connect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_XOnScroll), NULL, this);
	m_scrollBar_Translation_X->Connect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_XOnScroll), NULL, this);
	m_scrollBar_Translation_X->Connect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_XOnScroll), NULL, this);
	m_scrollBar_Translation_X->Connect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_XOnScroll), NULL, this);
	m_scrollBar_Translation_X->Connect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_XOnScroll), NULL, this);
	m_scrollBar_Translation_X->Connect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_XOnScroll), NULL, this);
	m_scrollBar_Translation_X->Connect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_XOnScroll), NULL, this);
	m_scrollBar_Translation_X->Connect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_XOnScroll), NULL, this);
	m_scrollBar_Translation_X->Connect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_XOnScroll), NULL, this);
	m_scrollBar_Translation_Y->Connect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_YOnScroll), NULL, this);
	m_scrollBar_Translation_Y->Connect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_YOnScroll), NULL, this);
	m_scrollBar_Translation_Y->Connect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_YOnScroll), NULL, this);
	m_scrollBar_Translation_Y->Connect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_YOnScroll), NULL, this);
	m_scrollBar_Translation_Y->Connect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_YOnScroll), NULL, this);
	m_scrollBar_Translation_Y->Connect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_YOnScroll), NULL, this);
	m_scrollBar_Translation_Y->Connect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_YOnScroll), NULL, this);
	m_scrollBar_Translation_Y->Connect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_YOnScroll), NULL, this);
	m_scrollBar_Translation_Y->Connect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_YOnScroll), NULL, this);
	m_scrollBar_Translation_Z->Connect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_ZOnScroll), NULL, this);
	m_scrollBar_Translation_Z->Connect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_ZOnScroll), NULL, this);
	m_scrollBar_Translation_Z->Connect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_ZOnScroll), NULL, this);
	m_scrollBar_Translation_Z->Connect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_ZOnScroll), NULL, this);
	m_scrollBar_Translation_Z->Connect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_ZOnScroll), NULL, this);
	m_scrollBar_Translation_Z->Connect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_ZOnScroll), NULL, this);
	m_scrollBar_Translation_Z->Connect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_ZOnScroll), NULL, this);
	m_scrollBar_Translation_Z->Connect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_ZOnScroll), NULL, this);
	m_scrollBar_Translation_Z->Connect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_ZOnScroll), NULL, this);
	m_scrollBar_Rotation_X->Connect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_XOnScroll), NULL, this);
	m_scrollBar_Rotation_X->Connect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_XOnScroll), NULL, this);
	m_scrollBar_Rotation_X->Connect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_XOnScroll), NULL, this);
	m_scrollBar_Rotation_X->Connect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_XOnScroll), NULL, this);
	m_scrollBar_Rotation_X->Connect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_XOnScroll), NULL, this);
	m_scrollBar_Rotation_X->Connect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_XOnScroll), NULL, this);
	m_scrollBar_Rotation_X->Connect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_XOnScroll), NULL, this);
	m_scrollBar_Rotation_X->Connect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_XOnScroll), NULL, this);
	m_scrollBar_Rotation_X->Connect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_XOnScroll), NULL, this);
	m_scrollBar_Rotation_Y->Connect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_YOnScroll), NULL, this);
	m_scrollBar_Rotation_Y->Connect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_YOnScroll), NULL, this);
	m_scrollBar_Rotation_Y->Connect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_YOnScroll), NULL, this);
	m_scrollBar_Rotation_Y->Connect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_YOnScroll), NULL, this);
	m_scrollBar_Rotation_Y->Connect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_YOnScroll), NULL, this);
	m_scrollBar_Rotation_Y->Connect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_YOnScroll), NULL, this);
	m_scrollBar_Rotation_Y->Connect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_YOnScroll), NULL, this);
	m_scrollBar_Rotation_Y->Connect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_YOnScroll), NULL, this);
	m_scrollBar_Rotation_Y->Connect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_YOnScroll), NULL, this);
	m_scrollBar_Rotation_Z->Connect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_ZOnScroll), NULL, this);
	m_scrollBar_Rotation_Z->Connect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_ZOnScroll), NULL, this);
	m_scrollBar_Rotation_Z->Connect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_ZOnScroll), NULL, this);
	m_scrollBar_Rotation_Z->Connect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_ZOnScroll), NULL, this);
	m_scrollBar_Rotation_Z->Connect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_ZOnScroll), NULL, this);
	m_scrollBar_Rotation_Z->Connect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_ZOnScroll), NULL, this);
	m_scrollBar_Rotation_Z->Connect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_ZOnScroll), NULL, this);
	m_scrollBar_Rotation_Z->Connect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_ZOnScroll), NULL, this);
	m_scrollBar_Rotation_Z->Connect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_ZOnScroll), NULL, this);
	m_scrollBar_Scale_X->Connect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::m_scrollBar_Scale_XOnScroll), NULL, this);
	m_scrollBar_Scale_X->Connect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::m_scrollBar_Scale_XOnScroll), NULL, this);
	m_scrollBar_Scale_X->Connect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::m_scrollBar_Scale_XOnScroll), NULL, this);
	m_scrollBar_Scale_X->Connect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_Scale_XOnScroll), NULL, this);
	m_scrollBar_Scale_X->Connect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::m_scrollBar_Scale_XOnScroll), NULL, this);
	m_scrollBar_Scale_X->Connect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_Scale_XOnScroll), NULL, this);
	m_scrollBar_Scale_X->Connect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::m_scrollBar_Scale_XOnScroll), NULL, this);
	m_scrollBar_Scale_X->Connect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::m_scrollBar_Scale_XOnScroll), NULL, this);
	m_scrollBar_Scale_X->Connect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame::m_scrollBar_Scale_XOnScroll), NULL, this);
	m_scrollBar_Scale_Y->Connect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::m_scrollBar_Scale_YOnScroll), NULL, this);
	m_scrollBar_Scale_Y->Connect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::m_scrollBar_Scale_YOnScroll), NULL, this);
	m_scrollBar_Scale_Y->Connect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::m_scrollBar_Scale_YOnScroll), NULL, this);
	m_scrollBar_Scale_Y->Connect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_Scale_YOnScroll), NULL, this);
	m_scrollBar_Scale_Y->Connect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::m_scrollBar_Scale_YOnScroll), NULL, this);
	m_scrollBar_Scale_Y->Connect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_Scale_YOnScroll), NULL, this);
	m_scrollBar_Scale_Y->Connect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::m_scrollBar_Scale_YOnScroll), NULL, this);
	m_scrollBar_Scale_Y->Connect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::m_scrollBar_Scale_YOnScroll), NULL, this);
	m_scrollBar_Scale_Y->Connect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame::m_scrollBar_Scale_YOnScroll), NULL, this);
	m_scrollBar_Scale_Z->Connect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::m_scrollBar_Scale_ZOnScroll), NULL, this);
	m_scrollBar_Scale_Z->Connect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::m_scrollBar_Scale_ZOnScroll), NULL, this);
	m_scrollBar_Scale_Z->Connect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::m_scrollBar_Scale_ZOnScroll), NULL, this);
	m_scrollBar_Scale_Z->Connect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_Scale_ZOnScroll), NULL, this);
	m_scrollBar_Scale_Z->Connect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::m_scrollBar_Scale_ZOnScroll), NULL, this);
	m_scrollBar_Scale_Z->Connect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_Scale_ZOnScroll), NULL, this);
	m_scrollBar_Scale_Z->Connect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::m_scrollBar_Scale_ZOnScroll), NULL, this);
	m_scrollBar_Scale_Z->Connect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::m_scrollBar_Scale_ZOnScroll), NULL, this);
	m_scrollBar_Scale_Z->Connect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame::m_scrollBar_Scale_ZOnScroll), NULL, this);
	m_button_Load_Solid->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame::m_button_Load_SolidOnButtonClick), NULL, this);
	m_panel_1->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(MyFrame::m_panel_1OnUpdateUI), NULL, this);
	m_panel_2->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(MyFrame::m_panel_2OnUpdateUI), NULL, this);
	m_panel_3->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(MyFrame::m_panel_3OnUpdateUI), NULL, this);
	m_scrollBar_ukosny1_alfa->Connect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny1_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny1_alfa->Connect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny1_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny1_alfa->Connect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny1_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny1_alfa->Connect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny1_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny1_alfa->Connect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny1_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny1_alfa->Connect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny1_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny1_alfa->Connect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny1_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny1_alfa->Connect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny1_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny1_alfa->Connect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny1_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny1_phi->Connect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny1_phiOnScroll), NULL, this);
	m_scrollBar_ukosny1_phi->Connect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny1_phiOnScroll), NULL, this);
	m_scrollBar_ukosny1_phi->Connect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny1_phiOnScroll), NULL, this);
	m_scrollBar_ukosny1_phi->Connect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny1_phiOnScroll), NULL, this);
	m_scrollBar_ukosny1_phi->Connect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny1_phiOnScroll), NULL, this);
	m_scrollBar_ukosny1_phi->Connect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny1_phiOnScroll), NULL, this);
	m_scrollBar_ukosny1_phi->Connect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny1_phiOnScroll), NULL, this);
	m_scrollBar_ukosny1_phi->Connect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny1_phiOnScroll), NULL, this);
	m_scrollBar_ukosny1_phi->Connect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny1_phiOnScroll), NULL, this);
	m_scrollBar_akson1_alfa->Connect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::m_scrollBar_akson1_alfaOnScroll), NULL, this);
	m_scrollBar_akson1_alfa->Connect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::m_scrollBar_akson1_alfaOnScroll), NULL, this);
	m_scrollBar_akson1_alfa->Connect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::m_scrollBar_akson1_alfaOnScroll), NULL, this);
	m_scrollBar_akson1_alfa->Connect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_akson1_alfaOnScroll), NULL, this);
	m_scrollBar_akson1_alfa->Connect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::m_scrollBar_akson1_alfaOnScroll), NULL, this);
	m_scrollBar_akson1_alfa->Connect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_akson1_alfaOnScroll), NULL, this);
	m_scrollBar_akson1_alfa->Connect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::m_scrollBar_akson1_alfaOnScroll), NULL, this);
	m_scrollBar_akson1_alfa->Connect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::m_scrollBar_akson1_alfaOnScroll), NULL, this);
	m_scrollBar_akson1_alfa->Connect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame::m_scrollBar_akson1_alfaOnScroll), NULL, this);
	m_scrollBar_akson1_beta->Connect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::m_scrollBar_akson1_betaOnScroll), NULL, this);
	m_scrollBar_akson1_beta->Connect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::m_scrollBar_akson1_betaOnScroll), NULL, this);
	m_scrollBar_akson1_beta->Connect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::m_scrollBar_akson1_betaOnScroll), NULL, this);
	m_scrollBar_akson1_beta->Connect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_akson1_betaOnScroll), NULL, this);
	m_scrollBar_akson1_beta->Connect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::m_scrollBar_akson1_betaOnScroll), NULL, this);
	m_scrollBar_akson1_beta->Connect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_akson1_betaOnScroll), NULL, this);
	m_scrollBar_akson1_beta->Connect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::m_scrollBar_akson1_betaOnScroll), NULL, this);
	m_scrollBar_akson1_beta->Connect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::m_scrollBar_akson1_betaOnScroll), NULL, this);
	m_scrollBar_akson1_beta->Connect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame::m_scrollBar_akson1_betaOnScroll), NULL, this);
	m_scrollBar_ukosny2_alfa->Connect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny2_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny2_alfa->Connect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny2_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny2_alfa->Connect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny2_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny2_alfa->Connect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny2_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny2_alfa->Connect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny2_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny2_alfa->Connect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny2_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny2_alfa->Connect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny2_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny2_alfa->Connect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny2_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny2_alfa->Connect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny2_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny2_phi->Connect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny2_phiOnScroll), NULL, this);
	m_scrollBar_ukosny2_phi->Connect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny2_phiOnScroll), NULL, this);
	m_scrollBar_ukosny2_phi->Connect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny2_phiOnScroll), NULL, this);
	m_scrollBar_ukosny2_phi->Connect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny2_phiOnScroll), NULL, this);
	m_scrollBar_ukosny2_phi->Connect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny2_phiOnScroll), NULL, this);
	m_scrollBar_ukosny2_phi->Connect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny2_phiOnScroll), NULL, this);
	m_scrollBar_ukosny2_phi->Connect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny2_phiOnScroll), NULL, this);
	m_scrollBar_ukosny2_phi->Connect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny2_phiOnScroll), NULL, this);
	m_scrollBar_ukosny2_phi->Connect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny2_phiOnScroll), NULL, this);
	m_scrollBar_akson2_alfa->Connect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::m_scrollBar_akson2_alfaOnScroll), NULL, this);
	m_scrollBar_akson2_alfa->Connect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::m_scrollBar_akson2_alfaOnScroll), NULL, this);
	m_scrollBar_akson2_alfa->Connect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::m_scrollBar_akson2_alfaOnScroll), NULL, this);
	m_scrollBar_akson2_alfa->Connect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_akson2_alfaOnScroll), NULL, this);
	m_scrollBar_akson2_alfa->Connect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::m_scrollBar_akson2_alfaOnScroll), NULL, this);
	m_scrollBar_akson2_alfa->Connect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_akson2_alfaOnScroll), NULL, this);
	m_scrollBar_akson2_alfa->Connect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::m_scrollBar_akson2_alfaOnScroll), NULL, this);
	m_scrollBar_akson2_alfa->Connect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::m_scrollBar_akson2_alfaOnScroll), NULL, this);
	m_scrollBar_akson2_alfa->Connect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame::m_scrollBar_akson2_alfaOnScroll), NULL, this);
	m_scrollBar_akson2_beta->Connect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::m_scrollBar_akson2_betaOnScroll), NULL, this);
	m_scrollBar_akson2_beta->Connect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::m_scrollBar_akson2_betaOnScroll), NULL, this);
	m_scrollBar_akson2_beta->Connect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::m_scrollBar_akson2_betaOnScroll), NULL, this);
	m_scrollBar_akson2_beta->Connect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_akson2_betaOnScroll), NULL, this);
	m_scrollBar_akson2_beta->Connect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::m_scrollBar_akson2_betaOnScroll), NULL, this);
	m_scrollBar_akson2_beta->Connect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_akson2_betaOnScroll), NULL, this);
	m_scrollBar_akson2_beta->Connect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::m_scrollBar_akson2_betaOnScroll), NULL, this);
	m_scrollBar_akson2_beta->Connect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::m_scrollBar_akson2_betaOnScroll), NULL, this);
	m_scrollBar_akson2_beta->Connect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame::m_scrollBar_akson2_betaOnScroll), NULL, this);
	m_scrollBar_ukosny3_alfa->Connect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny3_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny3_alfa->Connect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny3_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny3_alfa->Connect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny3_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny3_alfa->Connect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny3_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny3_alfa->Connect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny3_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny3_alfa->Connect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny3_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny3_alfa->Connect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny3_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny3_alfa->Connect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny3_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny3_alfa->Connect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny3_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny3_phi->Connect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny3_phiOnScroll), NULL, this);
	m_scrollBar_ukosny3_phi->Connect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny3_phiOnScroll), NULL, this);
	m_scrollBar_ukosny3_phi->Connect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny3_phiOnScroll), NULL, this);
	m_scrollBar_ukosny3_phi->Connect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny3_phiOnScroll), NULL, this);
	m_scrollBar_ukosny3_phi->Connect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny3_phiOnScroll), NULL, this);
	m_scrollBar_ukosny3_phi->Connect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny3_phiOnScroll), NULL, this);
	m_scrollBar_ukosny3_phi->Connect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny3_phiOnScroll), NULL, this);
	m_scrollBar_ukosny3_phi->Connect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny3_phiOnScroll), NULL, this);
	m_scrollBar_ukosny3_phi->Connect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny3_phiOnScroll), NULL, this);
	m_scrollBar_akson3_alfa->Connect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::m_scrollBar_akson3_alfaOnScroll), NULL, this);
	m_scrollBar_akson3_alfa->Connect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::m_scrollBar_akson3_alfaOnScroll), NULL, this);
	m_scrollBar_akson3_alfa->Connect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::m_scrollBar_akson3_alfaOnScroll), NULL, this);
	m_scrollBar_akson3_alfa->Connect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_akson3_alfaOnScroll), NULL, this);
	m_scrollBar_akson3_alfa->Connect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::m_scrollBar_akson3_alfaOnScroll), NULL, this);
	m_scrollBar_akson3_alfa->Connect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_akson3_alfaOnScroll), NULL, this);
	m_scrollBar_akson3_alfa->Connect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::m_scrollBar_akson3_alfaOnScroll), NULL, this);
	m_scrollBar_akson3_alfa->Connect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::m_scrollBar_akson3_alfaOnScroll), NULL, this);
	m_scrollBar_akson3_alfa->Connect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame::m_scrollBar_akson3_alfaOnScroll), NULL, this);
	m_scrollBar_akson3_beta->Connect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::m_scrollBar_akson3_betaOnScroll), NULL, this);
	m_scrollBar_akson3_beta->Connect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::m_scrollBar_akson3_betaOnScroll), NULL, this);
	m_scrollBar_akson3_beta->Connect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::m_scrollBar_akson3_betaOnScroll), NULL, this);
	m_scrollBar_akson3_beta->Connect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_akson3_betaOnScroll), NULL, this);
	m_scrollBar_akson3_beta->Connect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::m_scrollBar_akson3_betaOnScroll), NULL, this);
	m_scrollBar_akson3_beta->Connect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_akson3_betaOnScroll), NULL, this);
	m_scrollBar_akson3_beta->Connect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::m_scrollBar_akson3_betaOnScroll), NULL, this);
	m_scrollBar_akson3_beta->Connect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::m_scrollBar_akson3_betaOnScroll), NULL, this);
	m_scrollBar_akson3_beta->Connect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame::m_scrollBar_akson3_betaOnScroll), NULL, this);


}

MyFrame::~MyFrame()
{
	// Disconnect Events
	m_scrollBar_Translation_X->Disconnect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_XOnScroll), NULL, this);
	m_scrollBar_Translation_X->Disconnect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_XOnScroll), NULL, this);
	m_scrollBar_Translation_X->Disconnect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_XOnScroll), NULL, this);
	m_scrollBar_Translation_X->Disconnect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_XOnScroll), NULL, this);
	m_scrollBar_Translation_X->Disconnect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_XOnScroll), NULL, this);
	m_scrollBar_Translation_X->Disconnect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_XOnScroll), NULL, this);
	m_scrollBar_Translation_X->Disconnect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_XOnScroll), NULL, this);
	m_scrollBar_Translation_X->Disconnect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_XOnScroll), NULL, this);
	m_scrollBar_Translation_X->Disconnect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_XOnScroll), NULL, this);
	m_scrollBar_Translation_Y->Disconnect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_YOnScroll), NULL, this);
	m_scrollBar_Translation_Y->Disconnect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_YOnScroll), NULL, this);
	m_scrollBar_Translation_Y->Disconnect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_YOnScroll), NULL, this);
	m_scrollBar_Translation_Y->Disconnect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_YOnScroll), NULL, this);
	m_scrollBar_Translation_Y->Disconnect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_YOnScroll), NULL, this);
	m_scrollBar_Translation_Y->Disconnect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_YOnScroll), NULL, this);
	m_scrollBar_Translation_Y->Disconnect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_YOnScroll), NULL, this);
	m_scrollBar_Translation_Y->Disconnect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_YOnScroll), NULL, this);
	m_scrollBar_Translation_Y->Disconnect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_YOnScroll), NULL, this);
	m_scrollBar_Translation_Z->Disconnect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_ZOnScroll), NULL, this);
	m_scrollBar_Translation_Z->Disconnect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_ZOnScroll), NULL, this);
	m_scrollBar_Translation_Z->Disconnect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_ZOnScroll), NULL, this);
	m_scrollBar_Translation_Z->Disconnect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_ZOnScroll), NULL, this);
	m_scrollBar_Translation_Z->Disconnect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_ZOnScroll), NULL, this);
	m_scrollBar_Translation_Z->Disconnect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_ZOnScroll), NULL, this);
	m_scrollBar_Translation_Z->Disconnect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_ZOnScroll), NULL, this);
	m_scrollBar_Translation_Z->Disconnect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_ZOnScroll), NULL, this);
	m_scrollBar_Translation_Z->Disconnect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame::m_scrollBar_Translation_ZOnScroll), NULL, this);
	m_scrollBar_Rotation_X->Disconnect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_XOnScroll), NULL, this);
	m_scrollBar_Rotation_X->Disconnect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_XOnScroll), NULL, this);
	m_scrollBar_Rotation_X->Disconnect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_XOnScroll), NULL, this);
	m_scrollBar_Rotation_X->Disconnect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_XOnScroll), NULL, this);
	m_scrollBar_Rotation_X->Disconnect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_XOnScroll), NULL, this);
	m_scrollBar_Rotation_X->Disconnect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_XOnScroll), NULL, this);
	m_scrollBar_Rotation_X->Disconnect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_XOnScroll), NULL, this);
	m_scrollBar_Rotation_X->Disconnect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_XOnScroll), NULL, this);
	m_scrollBar_Rotation_X->Disconnect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_XOnScroll), NULL, this);
	m_scrollBar_Rotation_Y->Disconnect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_YOnScroll), NULL, this);
	m_scrollBar_Rotation_Y->Disconnect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_YOnScroll), NULL, this);
	m_scrollBar_Rotation_Y->Disconnect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_YOnScroll), NULL, this);
	m_scrollBar_Rotation_Y->Disconnect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_YOnScroll), NULL, this);
	m_scrollBar_Rotation_Y->Disconnect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_YOnScroll), NULL, this);
	m_scrollBar_Rotation_Y->Disconnect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_YOnScroll), NULL, this);
	m_scrollBar_Rotation_Y->Disconnect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_YOnScroll), NULL, this);
	m_scrollBar_Rotation_Y->Disconnect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_YOnScroll), NULL, this);
	m_scrollBar_Rotation_Y->Disconnect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_YOnScroll), NULL, this);
	m_scrollBar_Rotation_Z->Disconnect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_ZOnScroll), NULL, this);
	m_scrollBar_Rotation_Z->Disconnect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_ZOnScroll), NULL, this);
	m_scrollBar_Rotation_Z->Disconnect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_ZOnScroll), NULL, this);
	m_scrollBar_Rotation_Z->Disconnect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_ZOnScroll), NULL, this);
	m_scrollBar_Rotation_Z->Disconnect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_ZOnScroll), NULL, this);
	m_scrollBar_Rotation_Z->Disconnect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_ZOnScroll), NULL, this);
	m_scrollBar_Rotation_Z->Disconnect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_ZOnScroll), NULL, this);
	m_scrollBar_Rotation_Z->Disconnect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_ZOnScroll), NULL, this);
	m_scrollBar_Rotation_Z->Disconnect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_ZOnScroll), NULL, this);
	m_scrollBar_Scale_X->Disconnect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_XOnScroll), NULL, this);
	m_scrollBar_Scale_X->Disconnect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_XOnScroll), NULL, this);
	m_scrollBar_Scale_X->Disconnect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_XOnScroll), NULL, this);
	m_scrollBar_Scale_X->Disconnect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_XOnScroll), NULL, this);
	m_scrollBar_Scale_X->Disconnect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_XOnScroll), NULL, this);
	m_scrollBar_Scale_X->Disconnect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_XOnScroll), NULL, this);
	m_scrollBar_Scale_X->Disconnect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_XOnScroll), NULL, this);
	m_scrollBar_Scale_X->Disconnect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_XOnScroll), NULL, this);
	m_scrollBar_Scale_X->Disconnect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_XOnScroll), NULL, this);
	m_scrollBar_Scale_Y->Disconnect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_YOnScroll), NULL, this);
	m_scrollBar_Scale_Y->Disconnect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_YOnScroll), NULL, this);
	m_scrollBar_Scale_Y->Disconnect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_YOnScroll), NULL, this);
	m_scrollBar_Scale_Y->Disconnect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_YOnScroll), NULL, this);
	m_scrollBar_Scale_Y->Disconnect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_YOnScroll), NULL, this);
	m_scrollBar_Scale_Y->Disconnect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_YOnScroll), NULL, this);
	m_scrollBar_Scale_Y->Disconnect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_YOnScroll), NULL, this);
	m_scrollBar_Scale_Y->Disconnect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_YOnScroll), NULL, this);
	m_scrollBar_Scale_Y->Disconnect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame::m_scrollBar_Rotation_YOnScroll), NULL, this);
	m_scrollBar_Scale_Z->Disconnect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::m_scrollBar_Scale_ZOnScroll), NULL, this);
	m_scrollBar_Scale_Z->Disconnect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::m_scrollBar_Scale_ZOnScroll), NULL, this);
	m_scrollBar_Scale_Z->Disconnect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::m_scrollBar_Scale_ZOnScroll), NULL, this);
	m_scrollBar_Scale_Z->Disconnect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_Scale_ZOnScroll), NULL, this);
	m_scrollBar_Scale_Z->Disconnect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::m_scrollBar_Scale_ZOnScroll), NULL, this);
	m_scrollBar_Scale_Z->Disconnect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_Scale_ZOnScroll), NULL, this);
	m_scrollBar_Scale_Z->Disconnect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::m_scrollBar_Scale_ZOnScroll), NULL, this);
	m_scrollBar_Scale_Z->Disconnect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::m_scrollBar_Scale_ZOnScroll), NULL, this);
	m_scrollBar_Scale_Z->Disconnect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame::m_scrollBar_Scale_ZOnScroll), NULL, this);
	m_button_Load_Solid->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame::m_button_Load_SolidOnButtonClick), NULL, this);
	m_panel_1->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(MyFrame::m_panel_1OnUpdateUI), NULL, this);
	m_panel_2->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(MyFrame::m_panel_2OnUpdateUI), NULL, this);
	m_panel_3->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(MyFrame::m_panel_3OnUpdateUI), NULL, this);
	m_scrollBar_ukosny1_alfa->Disconnect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny1_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny1_alfa->Disconnect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny1_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny1_alfa->Disconnect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny1_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny1_alfa->Disconnect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny1_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny1_alfa->Disconnect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny1_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny1_alfa->Disconnect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny1_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny1_alfa->Disconnect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny1_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny1_alfa->Disconnect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny1_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny1_alfa->Disconnect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny1_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny1_phi->Disconnect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny1_phiOnScroll), NULL, this);
	m_scrollBar_ukosny1_phi->Disconnect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny1_phiOnScroll), NULL, this);
	m_scrollBar_ukosny1_phi->Disconnect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny1_phiOnScroll), NULL, this);
	m_scrollBar_ukosny1_phi->Disconnect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny1_phiOnScroll), NULL, this);
	m_scrollBar_ukosny1_phi->Disconnect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny1_phiOnScroll), NULL, this);
	m_scrollBar_ukosny1_phi->Disconnect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny1_phiOnScroll), NULL, this);
	m_scrollBar_ukosny1_phi->Disconnect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny1_phiOnScroll), NULL, this);
	m_scrollBar_ukosny1_phi->Disconnect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny1_phiOnScroll), NULL, this);
	m_scrollBar_ukosny1_phi->Disconnect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny1_phiOnScroll), NULL, this);
	m_scrollBar_akson1_alfa->Disconnect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::m_scrollBar_akson1_alfaOnScroll), NULL, this);
	m_scrollBar_akson1_alfa->Disconnect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::m_scrollBar_akson1_alfaOnScroll), NULL, this);
	m_scrollBar_akson1_alfa->Disconnect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::m_scrollBar_akson1_alfaOnScroll), NULL, this);
	m_scrollBar_akson1_alfa->Disconnect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_akson1_alfaOnScroll), NULL, this);
	m_scrollBar_akson1_alfa->Disconnect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::m_scrollBar_akson1_alfaOnScroll), NULL, this);
	m_scrollBar_akson1_alfa->Disconnect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_akson1_alfaOnScroll), NULL, this);
	m_scrollBar_akson1_alfa->Disconnect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::m_scrollBar_akson1_alfaOnScroll), NULL, this);
	m_scrollBar_akson1_alfa->Disconnect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::m_scrollBar_akson1_alfaOnScroll), NULL, this);
	m_scrollBar_akson1_alfa->Disconnect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame::m_scrollBar_akson1_alfaOnScroll), NULL, this);
	m_scrollBar_akson1_beta->Disconnect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::m_scrollBar_akson1_betaOnScroll), NULL, this);
	m_scrollBar_akson1_beta->Disconnect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::m_scrollBar_akson1_betaOnScroll), NULL, this);
	m_scrollBar_akson1_beta->Disconnect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::m_scrollBar_akson1_betaOnScroll), NULL, this);
	m_scrollBar_akson1_beta->Disconnect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_akson1_betaOnScroll), NULL, this);
	m_scrollBar_akson1_beta->Disconnect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::m_scrollBar_akson1_betaOnScroll), NULL, this);
	m_scrollBar_akson1_beta->Disconnect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_akson1_betaOnScroll), NULL, this);
	m_scrollBar_akson1_beta->Disconnect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::m_scrollBar_akson1_betaOnScroll), NULL, this);
	m_scrollBar_akson1_beta->Disconnect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::m_scrollBar_akson1_betaOnScroll), NULL, this);
	m_scrollBar_akson1_beta->Disconnect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame::m_scrollBar_akson1_betaOnScroll), NULL, this);
	m_scrollBar_ukosny2_alfa->Disconnect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny2_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny2_alfa->Disconnect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny2_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny2_alfa->Disconnect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny2_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny2_alfa->Disconnect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny2_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny2_alfa->Disconnect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny2_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny2_alfa->Disconnect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny2_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny2_alfa->Disconnect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny2_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny2_alfa->Disconnect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny2_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny2_alfa->Disconnect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny2_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny2_phi->Disconnect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny2_phiOnScroll), NULL, this);
	m_scrollBar_ukosny2_phi->Disconnect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny2_phiOnScroll), NULL, this);
	m_scrollBar_ukosny2_phi->Disconnect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny2_phiOnScroll), NULL, this);
	m_scrollBar_ukosny2_phi->Disconnect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny2_phiOnScroll), NULL, this);
	m_scrollBar_ukosny2_phi->Disconnect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny2_phiOnScroll), NULL, this);
	m_scrollBar_ukosny2_phi->Disconnect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny2_phiOnScroll), NULL, this);
	m_scrollBar_ukosny2_phi->Disconnect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny2_phiOnScroll), NULL, this);
	m_scrollBar_ukosny2_phi->Disconnect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny2_phiOnScroll), NULL, this);
	m_scrollBar_ukosny2_phi->Disconnect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny2_phiOnScroll), NULL, this);
	m_scrollBar_akson2_alfa->Disconnect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::m_scrollBar_akson2_alfaOnScroll), NULL, this);
	m_scrollBar_akson2_alfa->Disconnect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::m_scrollBar_akson2_alfaOnScroll), NULL, this);
	m_scrollBar_akson2_alfa->Disconnect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::m_scrollBar_akson2_alfaOnScroll), NULL, this);
	m_scrollBar_akson2_alfa->Disconnect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_akson2_alfaOnScroll), NULL, this);
	m_scrollBar_akson2_alfa->Disconnect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::m_scrollBar_akson2_alfaOnScroll), NULL, this);
	m_scrollBar_akson2_alfa->Disconnect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_akson2_alfaOnScroll), NULL, this);
	m_scrollBar_akson2_alfa->Disconnect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::m_scrollBar_akson2_alfaOnScroll), NULL, this);
	m_scrollBar_akson2_alfa->Disconnect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::m_scrollBar_akson2_alfaOnScroll), NULL, this);
	m_scrollBar_akson2_alfa->Disconnect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame::m_scrollBar_akson2_alfaOnScroll), NULL, this);
	m_scrollBar_akson2_beta->Disconnect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::m_scrollBar_akson2_betaOnScroll), NULL, this);
	m_scrollBar_akson2_beta->Disconnect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::m_scrollBar_akson2_betaOnScroll), NULL, this);
	m_scrollBar_akson2_beta->Disconnect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::m_scrollBar_akson2_betaOnScroll), NULL, this);
	m_scrollBar_akson2_beta->Disconnect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_akson2_betaOnScroll), NULL, this);
	m_scrollBar_akson2_beta->Disconnect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::m_scrollBar_akson2_betaOnScroll), NULL, this);
	m_scrollBar_akson2_beta->Disconnect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_akson2_betaOnScroll), NULL, this);
	m_scrollBar_akson2_beta->Disconnect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::m_scrollBar_akson2_betaOnScroll), NULL, this);
	m_scrollBar_akson2_beta->Disconnect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::m_scrollBar_akson2_betaOnScroll), NULL, this);
	m_scrollBar_akson2_beta->Disconnect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame::m_scrollBar_akson2_betaOnScroll), NULL, this);
	m_scrollBar_ukosny3_alfa->Disconnect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny3_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny3_alfa->Disconnect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny3_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny3_alfa->Disconnect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny3_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny3_alfa->Disconnect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny3_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny3_alfa->Disconnect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny3_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny3_alfa->Disconnect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny3_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny3_alfa->Disconnect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny3_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny3_alfa->Disconnect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny3_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny3_alfa->Disconnect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny3_alfaOnScroll), NULL, this);
	m_scrollBar_ukosny3_phi->Disconnect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny3_phiOnScroll), NULL, this);
	m_scrollBar_ukosny3_phi->Disconnect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny3_phiOnScroll), NULL, this);
	m_scrollBar_ukosny3_phi->Disconnect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny3_phiOnScroll), NULL, this);
	m_scrollBar_ukosny3_phi->Disconnect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny3_phiOnScroll), NULL, this);
	m_scrollBar_ukosny3_phi->Disconnect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny3_phiOnScroll), NULL, this);
	m_scrollBar_ukosny3_phi->Disconnect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny3_phiOnScroll), NULL, this);
	m_scrollBar_ukosny3_phi->Disconnect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny3_phiOnScroll), NULL, this);
	m_scrollBar_ukosny3_phi->Disconnect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny3_phiOnScroll), NULL, this);
	m_scrollBar_ukosny3_phi->Disconnect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame::m_scrollBar_ukosny3_phiOnScroll), NULL, this);
	m_scrollBar_akson3_alfa->Disconnect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::m_scrollBar_akson3_alfaOnScroll), NULL, this);
	m_scrollBar_akson3_alfa->Disconnect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::m_scrollBar_akson3_alfaOnScroll), NULL, this);
	m_scrollBar_akson3_alfa->Disconnect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::m_scrollBar_akson3_alfaOnScroll), NULL, this);
	m_scrollBar_akson3_alfa->Disconnect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_akson3_alfaOnScroll), NULL, this);
	m_scrollBar_akson3_alfa->Disconnect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::m_scrollBar_akson3_alfaOnScroll), NULL, this);
	m_scrollBar_akson3_alfa->Disconnect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_akson3_alfaOnScroll), NULL, this);
	m_scrollBar_akson3_alfa->Disconnect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::m_scrollBar_akson3_alfaOnScroll), NULL, this);
	m_scrollBar_akson3_alfa->Disconnect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::m_scrollBar_akson3_alfaOnScroll), NULL, this);
	m_scrollBar_akson3_alfa->Disconnect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame::m_scrollBar_akson3_alfaOnScroll), NULL, this);
	m_scrollBar_akson3_beta->Disconnect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame::m_scrollBar_akson3_betaOnScroll), NULL, this);
	m_scrollBar_akson3_beta->Disconnect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame::m_scrollBar_akson3_betaOnScroll), NULL, this);
	m_scrollBar_akson3_beta->Disconnect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame::m_scrollBar_akson3_betaOnScroll), NULL, this);
	m_scrollBar_akson3_beta->Disconnect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_akson3_betaOnScroll), NULL, this);
	m_scrollBar_akson3_beta->Disconnect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame::m_scrollBar_akson3_betaOnScroll), NULL, this);
	m_scrollBar_akson3_beta->Disconnect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame::m_scrollBar_akson3_betaOnScroll), NULL, this);
	m_scrollBar_akson3_beta->Disconnect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame::m_scrollBar_akson3_betaOnScroll), NULL, this);
	m_scrollBar_akson3_beta->Disconnect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame::m_scrollBar_akson3_betaOnScroll), NULL, this);
	m_scrollBar_akson3_beta->Disconnect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame::m_scrollBar_akson3_betaOnScroll), NULL, this);


}