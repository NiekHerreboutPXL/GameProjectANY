#include "MainFrame.h"
#include <wx/wx.h>

MainFrame::MainFrame(const wxString& title): wxFrame(nullptr, wxID_ANY, title) {
	wxPanel* panel = new wxPanel(this);
	wxButton* schaarKnop = new wxButton(panel, wxID_ANY, "schaar", wxPoint(350, 250), wxSize(100, 35));
	wxCheckBox* checkBox = new wxCheckBox(panel, wxID_ANY, "testCB", wxPoint(150, 50), wxSize(100, 35));
	wxStaticText* tekst = new wxStaticText(panel, wxID_ANY, "dit is een display tekst", wxPoint(250, 50));
	wxTextCtrl* aanpasTekst = new wxTextCtrl(panel, wxID_ANY, "tekst", wxPoint(200, 200));

}