#include "MainFrame.h"
#include <wx/wx.h>

//blokken in commentaarzetten door ctrl + k + c
//blokken uit commentaar halen ctrl + k + u


MainFrame::MainFrame(const wxString& title): wxFrame(nullptr, wxID_ANY, title) {
	wxPanel* panel = new wxPanel(this);
	panel->SetBackgroundColour(*wxBLACK);

	wxButton* button = new wxButton(panel, wxID_ANY, "test knop",wxPoint(100,100), wxSize(100,50));
	button->SetBackgroundColour(*wxBLACK);
	button->SetForegroundColour(*wxWHITE);
	button->Bind(wxEVT_BUTTON, &MainFrame::OnButtonClicked, this); // je maakt de knop met functionalliteit
	
	CreateStatusBar();
	 
}

void MainFrame::OnButtonClicked(wxCommandEvent& evt) {
	wxLogStatus("waiting for opponent to move");
}


