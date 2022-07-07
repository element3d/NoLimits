#include "MainMenuCampaign.h"

MainMenuCampaign::MainMenuCampaign(e3::Element* pParent)
	: MainMenuCampaignBase(pParent)
{
	mCampaign->SetBackgroundLinearGradient(10, glm::vec4(99, 76, 184, 255), glm::vec4(129, 106, 176, 255));
	mFreeItem1->SetBackgroundLinearGradient(-45, glm::vec4(254, 180, 33, 255), glm::vec4(255, 223, 27, 255));
	mFreeItem2->SetBackgroundLinearGradient(-45, glm::vec4(252, 158, 5, 255), glm::vec4(252, 202, 0, 255));

	Rotate();
}

void MainMenuCampaign::Rotate()
{
	e3::Animation* pA = new e3::Animation();
	pA->Start(15, [this](float v) {
		mShine->SetRotation(v * 360, glm::vec3(0, 0, 1), e3::ETransformAlignment::Center);
	}, [this]() {
		Rotate();
	});
}
