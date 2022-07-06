#include "MenuItemBase.h"

#include <e3/ViewFactory.h>
#include "NoLimitsValues.h"

MenuItemBase::MenuItemBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetBorderRadius(glm::vec4(30));
        this->SetBorderSize("2dp");
        this->SetBorderColor(glm::vec4(255, 255, 255, 100));
        this->SetOpacity(1.000000);
        this->SetOverflow((e3::EOverflow)0);

}
