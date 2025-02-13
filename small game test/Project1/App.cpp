#include "App.h"
#include <wx/wx.h>
#include "MainFrame.h"

wxIMPLEMENT_APP(App);

bool App::OnInit() {
	MainFrame* mainframe = new MainFrame("rustige bergen");
	mainframe->Show();
	mainframe->SetClientSize(1080,920);
	mainframe->Center();

	return true;
}
