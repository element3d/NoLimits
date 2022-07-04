#include "GamePage.h"
#include "Main.h"
#include <e3/Application.h>

GamePage::GamePage(e3::Element* pParent)
	: GamePageBase(pParent)
{
	mBottomMenu->SetOnChooseCallback([this](int menu) {
		GetApplication()->PushElement(new Main());
	});


}
