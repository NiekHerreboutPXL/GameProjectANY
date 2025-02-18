#pragma once
#include <wx/dcbuffer.h>
#include <iostream>
#include <string>
#include <wx/wx.h>

class StageTwoFrame : public wxFrame {
public:
    StageTwoFrame(const wxString& title); 
private:
	wxBitmap backgroundImage;
	wxPanel* panel; 
	wxButton* praatKnop;

	void OnPaint(wxPaintEvent& evt);
	void OnButtonClick(wxCommandEvent& evt);
	void RandomZin();

};

