#include "App.h"
#include <wx/wx.h>
#include "MainFrame.h"

wxIMPLEMENT_APP(App);

bool App::OnInit() {
	MainFrame* mainFrame = new MainFrame("eerste programma C++");
	mainFrame->Show();
	mainFrame->SetClientSize(1080, 920);
	mainFrame->Center();

	return true;
}
