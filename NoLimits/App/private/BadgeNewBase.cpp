#include "BadgeNewBase.h"

#include <e3/ViewFactory.h>
#include "NoLimitsValues.h"

BadgeNewBase::BadgeNewBase(e3::Element* pParent)
	: Badge(pParent)
{
        this->SetWidth("40dp");
        this->SetHeight("16dp");
        this->SetTop("10dp");
        this->SetRight("10dp");
        e3::Text* pText1 = e3::ViewFactory::CreateText();
        AddElement(pText1);
        pText1->SetText("NEW");
        pText1->SetFontSize("12dp");
        pText1->SetTextColor(glm::vec4(0, 0, 0, 255));

}
