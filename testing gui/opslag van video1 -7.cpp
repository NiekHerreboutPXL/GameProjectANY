//#include "MainFrame.h"
//#include <wx/wx.h>
//
//blokken in commentaarzetten door ctrl + k + c
//blokken uit commentaar halen ctrl + k + u
//
//enum ids { // video 6 statische event handeling
//	/*
//	regels
//	moet positief nummer zijn
//	mag niet 0 of 1 zijn
//	mag niet in de range zijn van wxid_lowest (4999) to wxid_highest (5999)
//	*/
//	button_id = 2,
//	slider_id = 3,
//	text_id = 4
//};
//
///*wxBEGIN_EVENT_TABLE(MainFrame, wxFrame) // video 6 statische event handeling
//	EVT_BUTTON(BUTTON_ID,MainFrame::OnButtonClicked)
//	EVT_SLIDER(SLIDER_ID, MainFrame::OnSliderChanged)
//	EVT_TEXT(TEXT_ID, MainFrame::OnTextChanged)
//wxEND_EVENT_TABLE()*/
//
//MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
//	wxPanel* panel = new wxPanel(this);
//	panel->SetBackgroundColour(*wxBLACK);
//
//	wxButton* button = new wxButton(panel, wxID_ANY, "test knop", wxPoint(100, 100), wxSize(100, 50));
//	button->SetBackgroundColour(*wxBLACK);
//	button->SetForegroundColour(*wxWHITE);
//	button->Bind(wxEVT_BUTTON, &MainFrame::OnButtonClicked, this); // je maakt de knop met functionalliteit
//
//	CreateStatusBar();
//
//
//
//
//
//
//	 gemaakt in video 7 het dynamisch binden
//	button->Unbind(wxEVT_BUTTON, &MainFrame::OnButtonClicked, this); // unbind de table dit kan je bv gebruiken in loops, of statements
//
//	wxSlider* slider = new wxSlider(panel, wxID_ANY, 50, 0, 100, wxPoint(100, 200), wxDefaultSize, wxSL_VALUE_LABEL);
//	slider->SetForegroundColour(*wxWHITE);
//	slider->Bind(wxEVT_SLIDER, &MainFrame::OnSliderChanged, this);
//
//	wxTextCtrl* tekst = new wxTextCtrl(panel, wxID_ANY, "randomTekst", wxPoint(100, 300));
//	tekst->Bind(wxEVT_TEXT, &MainFrame::OnTextChanged, this);
//
//
//
//
//
//
//	/*maken van willekeurige functies video 4/5
//	wxButton* schaarKnop = new wxButton(panel, wxID_ANY, "schaar", wxPoint(350, 250), wxSize(100, 35));
//	schaarKnop->SetBackgroundColour(*wxBLUE); //achtergrond kleur
//	wxCheckBox* checkBox = new wxCheckBox(panel, wxID_ANY, "testCB", wxPoint(150, 50), wxSize(100, 35));
//	wxStaticText* tekst = new wxStaticText(panel, wxID_ANY, "dit is een display tekst", wxPoint(250, 50), wxDefaultSize, wxTE_PASSWORD);
//	wxTextCtrl* aanpasTekst = new wxTextCtrl(panel, wxID_ANY, "tekst", wxPoint(200, 200), wxDefaultSize, wxTE_PASSWORD); // geëncrypteerd maken dus dat die niet gezien of gekoppieerd kan worden
//	wxSlider* slider = new wxSlider(panel, wxID_ANY, 50, 0, 100, wxPoint(100, 250), wxDefaultSize, wxSL_VALUE_LABEL); // de waarde van de slider erbij zetten
//	wxGauge* laadBar = new wxGauge(panel, wxID_ANY, 100, wxPoint(600, 100));
//	laadBar->SetValue(75);
//	wxArrayString choises;
//	choises.Add("item a");
//	choises.Add("item c");
//	choises.Add("item b");
//	wxChoice* choice = new wxChoice(panel, wxID_ANY, wxPoint(600, 200), wxDefaultSize, choises, wxCB_SORT); // sorteren op alphabetische order
//	choice->Select(0);*/
//
//
//
//}
//
//void MainFrame::OnButtonClicked(wxCommandEvent& evt) {
//	wxLogStatus("waiting for opponent to move");
//}
//
//void MainFrame::OnSliderChanged(wxCommandEvent& evt) { video 7
//	wxString str = wxString::Format("slider value: %d", evt.GetInt());
//	wxLogStatus(str);
//}
//
//void MainFrame::OnTextChanged(wxCommandEvent& evt) {
//	wxString str = wxString::Format("you typed: %s", evt.GetString());
//	wxLogStatus(str);
//}