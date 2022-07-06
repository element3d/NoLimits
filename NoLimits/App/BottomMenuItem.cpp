#include "BottomMenuItem.h"

BottomMenuItem::BottomMenuItem(e3::Element* pParent)
	: BottomMenuItemBase(pParent)
{
	SetBackgroundLinearGradient(45, glm::vec4(45, 22, 102, 255), glm::vec4(24, 18, 46, 255));
	Unselect();
}

void BottomMenuItem::Select()
{
	mTitle->SetTextColor(glm::vec4(41, 33, 108, 255));
	mSelection->SetOpacity(1);
	SetBackgroundLinearGradient(45, glm::vec4(84, 181, 224, 255), glm::vec4(73, 85, 185, 255));
}


void BottomMenuItem::Unselect()
{
	mTitle->SetTextColor(glm::vec4(255));
	mSelection->SetOpacity(0);
	SetBackgroundLinearGradient(45, glm::vec4(45, 22, 102, 255), glm::vec4(24, 18, 46, 255));
}

bool BottomMenuItem::OnClick(e3::MouseEvent* e)
{
	Select();
	return BottomMenuItemBase::OnClick(e);
}
