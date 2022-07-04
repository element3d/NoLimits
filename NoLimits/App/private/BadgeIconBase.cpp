#include "BadgeIconBase.h"

#include <e3/ViewFactory.h>
#include "./NoLimitsValues.h"

BadgeIconBase::BadgeIconBase(e3::Element* pParent)
	: Badge(pParent)
{
        this->SetWidth("16dp");
        this->SetHeight("16dp");
        this->SetTop(-4);
        this->SetRight(-4);
        this->SetShapeType((e3::EShapeType)1);
        e3::FontIcon* pFontIcon1 = e3::ViewFactory::CreateFontIcon();
        AddElement(pFontIcon1);
        pFontIcon1->SetWidth("10dp");
        pFontIcon1->SetAspectRatio(1.000000);
        pFontIcon1->SetFont(_s(NoLimits/icomoon.ttf));
        pFontIcon1->SetCharcode(59659);
        pFontIcon1->SetColor(glm::vec4(0, 0, 0, 255));

}
