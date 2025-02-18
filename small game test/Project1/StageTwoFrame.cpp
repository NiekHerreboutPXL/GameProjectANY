#include "StageTwoFrame.h"
#include <wx/wx.h>
#include <wx/image.h>



StageTwoFrame::StageTwoFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, "Binnen in het huis") {
    wxInitAllImageHandlers();
    panel = new wxPanel(this);
    backgroundImage.LoadFile("binnenkant.png", wxBITMAP_TYPE_PNG);
    SetBackgroundStyle(wxBG_STYLE_PAINT);
	this->Bind(wxEVT_PAINT, &StageTwoFrame::OnPaint, this);
    this->Bind(wxEVT_LEFT_DOWN, &StageTwoFrame::OnPositionClick, this);
    praatKnop = new wxButton(panel, wxID_ANY, "Press to Talk", wxPoint(500, 600), wxSize(150, 50));
}


void StageTwoFrame::OnPaint(wxPaintEvent& evt) {
    wxBufferedPaintDC dc(panel);
    if (backgroundImage.IsOk()) {  
        dc.DrawBitmap(backgroundImage, 0, 0, true);
    }
    else {
        wxMessageBox("Fout: Kan de achtergrondafbeelding niet laden!", "Fout", wxOK | wxICON_ERROR);
    }
}

void StageTwoFrame::OnPositionClick(wxMouseEvent& evt) {
    wxPoint clickPos = evt.GetPosition();
    wxLogMessage("Klik geregistreerd op positie: (%d, %d)", clickPos.x, clickPos.y);

}
