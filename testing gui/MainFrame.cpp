#include "MainFrame.h"
#include <wx/wx.h>

enum IDs {
	/*
	regels
	moet positief nummer zijn
	mag niet 0 of 1 zijn
	mag niet in de range zijn van wxID_LOWEST (4999) to wxID_HIGHEST (5999)
	*/
	BUTTON_ID = 2,
	SLIDER_ID = 3,
	TEXT_ID = 4
};

wxBEGIN_EVENT_TABLE(MainFrame, wxFrame)
	EVT_BUTTON(BUTTON_ID,MainFrame::OnButtonClicked)
	EVT_SLIDER(SLIDER_ID, MainFrame::OnSliderChanged)
	EVT_TEXT(TEXT_ID, MainFrame::OnTextChanged)
wxEND_EVENT_TABLE()

MainFrame::MainFrame(const wxString& title): wxFrame(nullptr, wxID_ANY, title) {
	wxPanel* panel = new wxPanel(this);
	panel->SetBackgroundColour(*wxBLACK);

	wxButton* button = new wxButton(panel, BUTTON_ID, "test knop",wxPoint(100,100), wxSize(100,50));
	button->SetBackgroundColour(*wxBLACK);
	button->SetForegroundColour(*wxWHITE);

	wxSlider* slider = new wxSlider(panel, SLIDER_ID, 50, 0, 100, wxPoint(100, 200), wxDefaultSize, wxSL_VALUE_LABEL);
	slider->SetForegroundColour(*wxWHITE);

	wxTextCtrl* tekst = new wxTextCtrl(panel, TEXT_ID, "randomTekst", wxPoint(100, 300));
	
	CreateStatusBar();




	/*maken van willekeurige functies video 4/5
	wxButton* schaarKnop = new wxButton(panel, wxID_ANY, "schaar", wxPoint(350, 250), wxSize(100, 35));
	schaarKnop->SetBackgroundColour(*wxBLUE); //achtergrond kleur
	wxCheckBox* checkBox = new wxCheckBox(panel, wxID_ANY, "testCB", wxPoint(150, 50), wxSize(100, 35));
	wxStaticText* tekst = new wxStaticText(panel, wxID_ANY, "dit is een display tekst", wxPoint(250, 50), wxDefaultSize, wxTE_PASSWORD);
	wxTextCtrl* aanpasTekst = new wxTextCtrl(panel, wxID_ANY, "tekst", wxPoint(200, 200), wxDefaultSize, wxTE_PASSWORD); // geëncrypteerd maken dus dat die niet gezien of gekoppieerd kan worden
	wxSlider* slider = new wxSlider(panel, wxID_ANY, 50, 0, 100, wxPoint(100, 250), wxDefaultSize, wxSL_VALUE_LABEL); // de waarde van de slider erbij zetten
	wxGauge* laadBar = new wxGauge(panel, wxID_ANY, 100, wxPoint(600, 100));
	laadBar->SetValue(75);
	wxArrayString choises;
	choises.Add("item a");
	choises.Add("item c");
	choises.Add("item b");
	wxChoice* choice = new wxChoice(panel, wxID_ANY, wxPoint(600, 200), wxDefaultSize, choises, wxCB_SORT); // sorteren op alphabetische order
	choice->Select(0);*/


	 
}

void MainFrame::OnButtonClicked(wxCommandEvent& evt) {
	wxLogStatus("waiting for opponent to move");
}

void MainFrame::OnSliderChanged(wxCommandEvent& evt) {
	wxString str = wxString::Format("Slider value: %d", evt.GetInt());
	wxLogStatus(str);
}

void MainFrame::OnTextChanged(wxCommandEvent& evt) {
	wxString str = wxString::Format("you typed: %s", evt.GetString());
	wxLogStatus(str);
}