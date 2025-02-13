#include "MainFrame.h"
#include <wx/wx.h>
#include "StageTwoFrame.h"

MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
	wxPanel* panel = new wxPanel(this);

	wxButton* btnOpen = new wxButton(panel, wxID_ANY, "Open Extra Venster", wxPoint(100, 100));
	btnOpen->Bind(wxEVT_BUTTON, &MainFrame::NewFrameButton, this);

}

void MainFrame::NewFrameButton(wxCommandEvent& evt) {
	StageTwoFrame* tweedeFrame = new StageTwoFrame("stage 2");
	tweedeFrame->Show();
	tweedeFrame->Center();
	this->Close();
}