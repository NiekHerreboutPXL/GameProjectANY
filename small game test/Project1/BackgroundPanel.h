#pragma once
#include <wx/wx.h>
#include <wx/dcbuffer.h>
class BackgroundPanel: public wxPanel
{
public:
	BackgroundPanel(wxWindow* parent, const wxString& imagePath);
private:
	wxBitmap backgroundImage;
	void OnPaint(wxPaintEvent& evt);
	void OnPositionClick(wxMouseEvent& evt);
};

