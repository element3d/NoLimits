#include "MainMenuGarage.h"

MainMenuGarage::MainMenuGarage(e3::Element* pParent)
	: MainMenuGarageBase(pParent)
{
	mGolds->SetBackgroundRadialGradient(glm::vec2(0), e3::Dim(0), e3::Dim(420), glm::vec4(255, 223, 27, 255), glm::vec4(254, 180, 33, 255));
}

void MainMenuGarage::AnimateGolds(float v)
{
	e3::Animation* pA = new e3::Animation();
	pA->Start(0.2, 0.5, 1, [this](float v){
		mGolds->SetScale(glm::vec3(v, v, 1), e3::ETransformAlignment::Center);
	}, [](){});
}