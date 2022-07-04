#include "Main.h"
#include "GamePage.h"
#include <e3/Application.h>
#include "MissionDialog.h"
#include "FuelDialog.h"
#include "GameElement.h"

Main::Main(e3::Element* pParent)
	: MainBase(pParent)
{
	mAppBar->SetOnMissionsClickCallback([this]() {
		MissionDialog* pD = new MissionDialog();
		AddElement(pD);
		pD->SetOnCloseCallback([this, pD]() {
			RemoveElement(pD);
		});
	});

	mAppBar->SetOnFuelClickCallback([this]() {
		AddElement(new FuelDialog());
		
	});

	mBottomMenu->SetOnChooseCallback([this](int menu) {
		if (menu == 1) 
		{
			mRouter->RemoveElement(mContent, false);
			mGameElement = new GameElement();
			mRouter->AddElement(mGameElement);
			SetBackgroundImage("NoLimits/bg.png");
			//GetApplication()->PushElement(new GamePage());
		} 
		else if (menu == 0) 
		{
			mRouter->RemoveElement(mGameElement, false);
			mRouter->AddElement(mContent);
			SetBackgroundImage("NoLimits/event.jpg");
		}
	});


	
}
