#include "BottomMenuItemBase.h"

#include <e3/ViewFactory.h>
#include "NoLimitsValues.h"

BottomMenuItemBase::BottomMenuItemBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("25%");
        this->SetHeight("100%");
        this->SetOrientation((e3::EOrientation)1);
        this->SetBackgroundColor(glm::vec4(84.000000, 181.000000, 224.000000, 255.000000));
        this->SetAlignItemsHor((e3::EAlignment)0);
        this->SetAlignItemsVer((e3::EAlignment)3);
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement1);
        pElement1->SetWidth("100%");
        pElement1->SetHeight("10dp");
        pElement1->SetBackgroundColor(glm::vec4(255));
        e3::Text* pText1 = e3::ViewFactory::CreateText();
        AddElement(pText1);
        pText1->SetText("HOME");
        pText1->SetFontSize("18dp");
        pText1->SetTextColor(glm::vec4(41.000000, 33.000000, 108.000000, 255.000000));
        pText1->SetFontStyle((e3::EFontStyle)2);
        pText1->SetMargin("5dp");
                BadgeNew* pCustomView1 = new BadgeNew();
        AddElement(pCustomView1);

}
