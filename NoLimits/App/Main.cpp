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
			RemoveElement(pD, false);
		});
	});

	mAppBar->SetOnFuelClickCallback([this]() {
		AddElement(new FuelDialog());
		
	});

	mContent->Show();
	mBottomMenu->SetOnChooseCallback([this](int menu) {
		if (menu == 1) 
		{
			mRouter->RemoveElement(mContent, false);
			if (!mGameElement)
				mGameElement = new GameElement();
			mGameElement->Show();
			mRouter->AddElement(mGameElement);
			SetBackgroundImage("NoLimits/bg.png");
			//GetApplication()->PushElement(new GamePage());
		} 
		else if (menu == 0) 
		{
			mRouter->RemoveElement(mGameElement, false);
			mRouter->AddElement(mContent);
			mContent->Show();
			SetBackgroundImage("NoLimits/event.jpg");
		}
	});


	
}
