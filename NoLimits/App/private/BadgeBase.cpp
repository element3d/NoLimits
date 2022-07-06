#include "BadgeBase.h"

#include <e3/ViewFactory.h>
#include "NoLimitsValues.h"

BadgeBase::BadgeBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetBackgroundColor(glm::vec4(240.000000, 194.000000, 20.000000, 255.000000));
        this->SetBorderRadius(glm::vec4(10));
        this->SetPositionType((e3::EPositionType)1);

}
