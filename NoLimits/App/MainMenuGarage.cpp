#include "MainMenuGarage.h"

MainMenuGarage::MainMenuGarage(e3::Element* pParent)
	: MainMenuGarageBase(pParent)
{
	mGolds->SetBackgroundRadialGradient(glm::vec2(0), e3::Dim(0), e3::Dim(120), glm::vec4(255, 223, 27, 255), glm::vec4(254, 180, 33, 255));
}
