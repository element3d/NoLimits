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
    mSelection = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mSelection);
        mSelection->SetWidth("100%");
        mSelection->SetOrientation((e3::EOrientation)1);
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mSelection->AddElement(pElement1);
        pElement1->SetWidth("100%");
        pElement1->SetHeight("6dp");
        pElement1->SetBackgroundColor(glm::vec4(255));
    e3::Element* pElement2 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mSelection->AddElement(pElement2);
        pElement2->SetWidth(32);
        pElement2->SetHeight(16);
        pElement2->SetBorderType((e3::EBorderType)1);
        pElement2->SetBorderRadius(glm::vec4(0, 0, 16, 16));
        pElement2->SetBackgroundColor(glm::vec4(255));
        mTitle = e3::ViewFactory::CreateText();
        AddElement(mTitle);
        mTitle->SetText("HOME");
        mTitle->SetFontSize("16dp");
        mTitle->SetTextColor(glm::vec4(41.000000, 33.000000, 108.000000, 255.000000));
        mTitle->SetFontStyle((e3::EFontStyle)2);
        mTitle->SetMargin("5dp");
                BadgeNew* pCustomView1 = new BadgeNew();
        AddElement(pCustomView1);

}
