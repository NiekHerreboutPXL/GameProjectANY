#include "StageTwoFrame.h"

StageTwoFrame::StageTwoFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, "Extra Venster", wxDefaultPosition, wxSize(1080, 920)) {
    wxPanel* panel = new wxPanel(this);
    wxStaticText* tekst = new wxStaticText(panel, wxID_ANY, "test paneel");
}
