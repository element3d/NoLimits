#include "BottomMenu.h"

BottomMenu::BottomMenu(e3::Element* pParent)
	: BottomMenuBase(pParent)
{
	mHome->SetOnClickCallback([this](e3::MouseEvent*) {
		mOnChooseCallback(0);
	});

	mGame->SetOnClickCallback([this](e3::MouseEvent*) {
		mOnChooseCallback(1);
	});

	mHome->SetBackgroundLinearGradient(45, glm::vec4(84, 181, 224, 255), glm::vec4(73, 85, 185, 255));
	mGame->SetBackgroundLinearGradient(45, glm::vec4(45, 22, 102, 255), glm::vec4(24, 18, 46, 255));
	mPVP->SetBackgroundLinearGradient(45, glm::vec4(45, 22, 102, 255), glm::vec4(24, 18, 46, 255));
	mShop->SetBackgroundLinearGradient(45, glm::vec4(105, 221, 140, 255), glm::vec4(93, 215, 128, 255));



	

	
}

