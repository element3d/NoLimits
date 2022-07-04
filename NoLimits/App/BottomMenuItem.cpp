#include "BottomMenuItem.h"

BottomMenuItem::BottomMenuItem(e3::Element* pParent)
	: BottomMenuItemBase(pParent)
{
	SetBackgroundLinearGradient(45, glm::vec4(45, 22, 102, 255), glm::vec4(24, 18, 46, 255));
}

void BottomMenuItem::Unselect()
{
	SetBackgroundLinearGradient(45, glm::vec4(45, 22, 102, 255), glm::vec4(24, 18, 46, 255));
}

bool BottomMenuItem::OnClick(e3::MouseEvent* e)
{
	SetBackgroundLinearGradient(45, glm::vec4(84, 181, 224, 255), glm::vec4(73, 85, 185, 255));
	return BottomMenuItemBase::OnClick(e);
}
