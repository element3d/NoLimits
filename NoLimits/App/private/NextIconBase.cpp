#include "NextIconBase.h"

#include <e3/ViewFactory.h>
#include "NoLimitsValues.h"

NextIconBase::NextIconBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("45dp");
        this->SetHeight("30dp");
        this->SetPositionType((e3::EPositionType)1);
        this->SetRight(0);
        this->SetBottom(0);
        this->SetBorderType((e3::EBorderType)1);
        this->SetBorderRadius(glm::vec4(1, 0, 0, 0));
        this->SetBackgroundColor(glm::vec4(255));
        this->SetOverflow((e3::EOverflow)0);
        this->SetAlignItemsHor((e3::EAlignment)1);
        e3::FontIcon* pFontIcon1 = e3::ViewFactory::CreateFontIcon();
        AddElement(pFontIcon1);
        pFontIcon1->SetWidth("14dp");
        pFontIcon1->SetAspectRatio(1.000000);
        pFontIcon1->SetFont(_s(NoLimits/icomoon.ttf));
        pFontIcon1->SetCharcode(59661);
        pFontIcon1->SetMarginRight("5dp");
        pFontIcon1->SetColor(glm::vec4(99.000000, 77.000000, 185.000000, 255.000000));

}
