#pragma once
#include <wx/wx.h>
class MainFrame : public wxFrame
{
public:
	MainFrame(const wxString& title);

private:
	void OnAnyButtonClicked(wxCommandEvent& evt); 
	void TestTest(wxCommandEvent& evt);
	void knop2(wxCommandEvent& evt);
	void ClosingButton(wxCloseEvent& evt);
	void AfbeeldingKnop(wxCommandEvent& evt);

};

