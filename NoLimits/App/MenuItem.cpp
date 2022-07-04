#include "MenuItem.h"

MenuItem::MenuItem(e3::Element* pParent)
	: MenuItemBase(pParent)
{
	_ShineIn();
}

void MenuItem::_ShineIn()
{
	e3::Animation* pA = new e3::Animation();
	pA->Start(1.5, 20, 80, [this](float v) {
		SetBorderColor(glm::vec4(255, 255, 255, v));
	}, [this]() {
		_ShineOut();
	});
}

void MenuItem::_ShineOut()
{
	e3::Animation* pA = new e3::Animation();
	pA->Start(1.5, 80, 20, [this](float v) {
		SetBorderColor(glm::vec4(255, 255, 255, v));
	}, [this]() {
		_ShineIn();
	});
}