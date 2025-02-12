#include "MainFrame.h"
#include <wx/wx.h>

//blokken in commentaarzetten door ctrl + k + c
//blokken uit commentaar halen ctrl + k + u


MainFrame::MainFrame(const wxString& title): wxFrame(nullptr, wxID_ANY, title) {
	wxPanel* panel = new wxPanel(this);
	panel->SetBackgroundColour(*wxBLACK);

	wxButton* button1 = new wxButton(panel, wxID_ANY, "test knop1", wxPoint(200, 200), wxSize(100, 50));
	wxButton* button2 = new wxButton(panel, wxID_ANY, "test knop2",wxPoint(100,100), wxSize(100,50));
	button1->SetBackgroundColour(*wxBLACK);
	button1->SetForegroundColour(*wxWHITE);


	this->Bind(wxEVT_CLOSE_WINDOW, &MainFrame::ClosingButton, this);
	this->Bind(wxEVT_BUTTON, &MainFrame::OnAnyButtonClicked, this); // zo maak je een bind dat voor alle knoppen werkt dus niet specifiek, alleen als je die andere knop nog niet specifiek hebt ingesteld
	button1->Bind(wxEVT_BUTTON, &MainFrame::TestTest, this); // je maakt de knop met functionalliteit dit is ook specifiek naar een knop toegewezen
	button2->Bind(wxEVT_BUTTON, &MainFrame::knop2, this);
	
	
	CreateStatusBar();
	 
}

void MainFrame::OnAnyButtonClicked(wxCommandEvent& evt) {
	wxLogMessage("werkt");
}

void MainFrame::TestTest(wxCommandEvent& evt) {
	wxLogStatus("dit is knop 1");
	evt.Skip(); // de skip zorgt ervoor dat die ook nog andere event handelers aan de beurt laat komen, dus het process stopt hier niet 
}
void MainFrame::knop2(wxCommandEvent& evt) {
	wxLogStatus("dit is knop 2");
	evt.Skip();
}

void MainFrame::ClosingButton(wxCloseEvent& evt) {
	wxLogStatus("je sluit het venster");
	wxLogMessage("kijk naar de status");
	evt.Skip();
}

