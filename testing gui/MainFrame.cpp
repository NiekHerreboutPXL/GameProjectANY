#include "MainFrame.h"
#include <wx/wx.h>

MainFrame::MainFrame(const wxString& title): wxFrame(nullptr, wxID_ANY, title) {
	//maken van willekeurige functies
	wxPanel* panel = new wxPanel(this);
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
	choice->Select(0);


	 
}