#include "MainFrame.h"
#include <wx/wx.h>
#include "BackgroundPanel.h"
#include "StageTwoFrame.h"

MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
	BackgroundPanel* panel = new BackgroundPanel(this, "frame1foto.png");

}

