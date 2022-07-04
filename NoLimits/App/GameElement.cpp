#include "GameElement.h"

GameElement::GameElement(e3::Element* pParent)
	: GameElementBase(pParent)
{
	e3::Timeout* pT = new e3::Timeout();

	e3::OnTimeoutCallback* pC2 = new e3::OnTimeoutCallback([this]() {
		GetChildren()[2]->SetOpacity(1);

	});
	e3::OnTimeoutCallback* pC = new e3::OnTimeoutCallback([this, pC2]() {
		GetChildren()[1]->SetOpacity(1);

		e3::Timeout* pT2 = new e3::Timeout();
		pT2->Start(0.1, pC2);
	});

	pT->Start(0.1, pC);

	SetTranslation(glm::vec3(10, 0, 0));
	e3::Animation* pA = new e3::Animation();
	pA->Start(0.3, e3::EAnimation::EaseOutQuad, [this](float v) {
		SetTranslation(glm::vec3(10 * (1 - v), 0, 0));
	}, []() {
	});
}
