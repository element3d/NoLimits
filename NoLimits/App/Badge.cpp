#include "Badge.h"

Badge::Badge(e3::Element* pParent)
	: BadgeBase(pParent)
{
	e3::Timeout* pT = new e3::Timeout();
	e3::OnTimeoutCallback* pC = new e3::OnTimeoutCallback([this, pT]() {
		pT->Reset(3);

		_Zoom([this, pT]() {
			_Zoom(nullptr);
		});
	});
	pT->Start(3, pC);
}

void Badge::_Zoom(std::function<void()> c)
{
	_ZoomInBadge(c);
	//if (c) c();
}

void Badge::_ZoomInBadge(std::function<void()> c)
{
	e3::Animation* pA = new e3::Animation();
	pA->Start(0.1, 1, 0.90, [this](float v) {
		SetScale(glm::vec3(v, v, 1), e3::ETransformAlignment::Center);
	}, [this, c]() {
		_ZoomOutBadge(c);
	});
}

void Badge::_ZoomOutBadge(std::function<void()> c)
{
	e3::Animation* pA = new e3::Animation();
	pA->Start(0.1, 0.90, 1, [this](float v) {
		SetScale(glm::vec3(v, v, 1), e3::ETransformAlignment::Center);
	}, [c]() {
		if (c) c();
	});
}
