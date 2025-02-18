#include "BackgroundPanel.h"
#include <wx/image.h>
#include "StageTwoFrame.h"

BackgroundPanel::BackgroundPanel(wxWindow* parent, const wxString& imagePath) : wxPanel(parent, wxID_ANY) {
    wxInitAllImageHandlers();
	backgroundImage.LoadFile(imagePath, wxBITMAP_TYPE_PNG);
	SetBackgroundStyle(wxBG_STYLE_PAINT);
	this->Bind(wxEVT_PAINT, &BackgroundPanel::OnPaint, this);
    this->Bind(wxEVT_LEFT_DOWN, &BackgroundPanel::OnPositionClick, this);
}

void BackgroundPanel::OnPaint(wxPaintEvent& evt) {
    wxBufferedPaintDC dc(this);
    if (backgroundImage.IsOk()) {  
        dc.DrawBitmap(backgroundImage, 0, 0, true);
    }
    else {
        wxMessageBox("Fout: Kan de achtergrondafbeelding niet laden!", "Fout", wxOK | wxICON_ERROR);
    }
}

void BackgroundPanel::OnPositionClick(wxMouseEvent& evt) {
    wxPoint clickPos = evt.GetPosition();



    int doorX1 = 520, doorY1 = 500;
    int doorX2 = 695, doorY2 = 770;

    if (clickPos.x >= doorX1 && clickPos.x <= doorX2 &&
        clickPos.y >= doorY1 && clickPos.y <= doorY2)
    {
        wxMessageBox("Je hebt op de deur geklikt!", "Info", wxOK | wxICON_INFORMATION);

        StageTwoFrame* tweedeFrame = new StageTwoFrame("Stage 2");
        tweedeFrame->SetSize(1080, 920);
        tweedeFrame->Center();
        tweedeFrame->Show();

        wxWindow* parent = GetParent();
        if (parent) {
            parent->Close();
            parent->Destroy();
        }
    }
}

