#include "StageTwoFrame.h"
#include <wx/wx.h>
#include <wx/image.h>
#include <iostream>
#include <list>
#include <string>
#include <cstdlib>



StageTwoFrame::StageTwoFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, "Binnen in het huis") {
    wxInitAllImageHandlers();
    panel = new wxPanel(this);

    backgroundImage.LoadFile("binnenkant.png", wxBITMAP_TYPE_PNG);
    panel->SetBackgroundStyle(wxBG_STYLE_PAINT);

	panel->Bind(wxEVT_PAINT, &StageTwoFrame::OnPaint, this);

    praatKnop = new wxButton(panel, wxID_ANY, "Press to Talk", wxPoint(500,300), wxSize(150, 50));
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

void StageTwoFrame::OnButtonClick(wxCommandEvent& evt) {

}

std::string StageTwoFrame::RandomZin() {
    std::list<std::string> zinnen = {
        "Ahmed zei dat hij zou coderen, maar hij zit weer op TikTok.",
        "De enige code die Ahmed schrijft, zijn cheats voor games.",
        "Ahmed's debugging strategie: gewoon alles opnieuw opstarten.",
        "Zijn favoriete programmeertaal? Copy-paste.",
        "Ahmed dacht dat 'segmentation fault' een nieuw game-item was.",
        "Git commit? Ahmed vergeet zelfs zijn wachtwoord.",
        "Hij zei dat hij een functie maakte, maar het was gewoon een infinite loop.",
        "Ahmed denkt dat 'NULL' een feature is en niet een probleem.",
        "Zijn code werkt… totdat je het runt.",
        "Als Ahmed zijn code ziet, zegt zelfs ChatGPT: 'Ik geef het op'."
    };
    
}


