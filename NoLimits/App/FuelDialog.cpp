#include "FuelDialog.h"

FuelDialog::FuelDialog(e3::Element* pParent)
	: FuelDialogBase(pParent)
{
	mFront->SetBackgroundRadialGradient(glm::vec2(600, 600), 0, 600, glm::vec4(0, 0, 0, 255), glm::vec4(99, 77, 185, 255));

	e3::Rect2f r = GetGeometry();
	mBack->SetTranslation(glm::vec3(r.width, 0, 0));
	e3::Animation* pA = new e3::Animation();
	pA->Start(0.3, e3::EAnimation::EaseOutBack, [this, r](float v) {
		mBack->SetTranslation(glm::vec3(r.width * (1 - v) + 10, 0, 0));
	}, []() {

	});

	e3::Animation* pA1 = new e3::Animation();
	pA1->Start(0.2, e3::EAnimation::EaseOutQuad, [this, r](float v) {
		mFront->SetTranslation(glm::vec3((r.width) * (1 - v) + 10, 0, 0));
	}, []() {

	});
	printf("aasdf");
}
