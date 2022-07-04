#include "MissionDialog.h"
#include "MissionDIalogListItem.h"

MissionDialog::MissionDialog(e3::Element* pParent)
	: MissionDialogBase(pParent)
{
	SetScale(glm::vec3(0.8, 0.8, 0), e3::ETransformAlignment::Center);
	e3::Animation* pA = new e3::Animation();
	pA->Start(0.3, 0.2, 1.0, e3::EAnimation::EaseOutBack, [this](float v) {
		//SetScale(glm::vec3(0.8 + 0.2 * v, 0.8 + 0.2 * v, 0), e3::ETransformAlignment::Center);
		SetScale(glm::vec3(v, v, 0), e3::ETransformAlignment::Center);
	}, []() {
	});

	for (int i = 0; i < 20; ++i) 
	{
		MissionDIalogListItem* pItem = new MissionDIalogListItem();
		if (i == 0) pItem->SetMarginTop("10dp");
		mScroll->AddElement(pItem);
	}

	SetOnClickCallback([this](e3::MouseEvent*) {
		e3::Animation* pA = new e3::Animation();
		pA->Start(0.1, 1.0, 0.8, [this](float v) {
			//SetScale(glm::vec3(0.8 + 0.2 * v, 0.8 + 0.2 * v, 0), e3::ETransformAlignment::Center);
			SetScale(glm::vec3(v, v, 0), e3::ETransformAlignment::Center);
		}, [this]() {
			mOnCloseCallback();
		});
	});
}
