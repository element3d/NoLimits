#include "MissionDIalogListItemBase.h"

#include <e3/ViewFactory.h>
#include "NoLimitsValues.h"

MissionDIalogListItemBase::MissionDIalogListItemBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("96%");
        this->SetHeight("46dp");
        this->SetBackgroundColor(glm::vec4(48.000000, 35.000000, 97.000000, 255.000000));
        this->SetMarginBottom("10dp");
        this->SetBorderRadius(glm::vec4(20));
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement1);
        pElement1->SetWidth("65%");
        pElement1->SetHeight("100%");
        pElement1->SetAlignItemsHor((e3::EAlignment)0);
    e3::Element* pElement2 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement1->AddElement(pElement2);
        pElement2->SetMarginLeft("20dp");
        pElement2->SetHeight("40%");
        pElement2->SetAspectRatio(1.000000);
        pElement2->SetBorderRadius(glm::vec4(0.5));
        pElement2->SetBackgroundColor(glm::vec4(75.000000, 49.000000, 176.000000, 255.000000));
    e3::Element* pElement3 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement1->AddElement(pElement3);
        pElement3->SetOrientation((e3::EOrientation)1);
        pElement3->SetAlignItemsHor((e3::EAlignment)0);
        pElement3->SetMarginLeft("20dp");
        e3::Text* pText1 = e3::ViewFactory::CreateText();
        pElement3->AddElement(pText1);
        pText1->SetText("FINISH AT LEAST 6 RACES AGAINST UNDERGROUND RIVALS");
        pText1->SetFontSize("12dp");
        pText1->SetTextColor(glm::vec4(66.000000, 135.000000, 245.000000, 255.000000));
        e3::Text* pText2 = e3::ViewFactory::CreateText();
        pElement3->AddElement(pText2);
        pText2->SetText("0/5 FINISHED");
        pText2->SetFontSize("13dp");
        pText2->SetTextColor(glm::vec4(255, 255, 255, 150));
    e3::Element* pElement4 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement4);
        pElement4->SetWidth("35%");
        pElement4->SetHeight("100%");
        pElement4->SetAlignItemsHor((e3::EAlignment)3);
    e3::Element* pElement5 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement4->AddElement(pElement5);
        e3::FontIcon* pFontIcon1 = e3::ViewFactory::CreateFontIcon();
        pElement5->AddElement(pFontIcon1);
        pFontIcon1->SetWidth("18dp");
        pFontIcon1->SetAspectRatio(1.000000);
        pFontIcon1->SetFont(_s(NoLimits/icomoon.ttf));
        pFontIcon1->SetCharcode(59656);
        pFontIcon1->SetColor(glm::vec4(240.000000, 194.000000, 20.000000, 255.000000));
        e3::Text* pText3 = e3::ViewFactory::CreateText();
        pElement5->AddElement(pText3);
        pText3->SetMarginLeft("10dp");
        pText3->SetText("5");
        pText3->SetTextColor(glm::vec4(240.000000, 194.000000, 20.000000, 255.000000));
        pText3->SetFontSize("14dp");
    e3::Element* pElement6 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement4->AddElement(pElement6);
        e3::FontIcon* pFontIcon2 = e3::ViewFactory::CreateFontIcon();
        pElement6->AddElement(pFontIcon2);
        pFontIcon2->SetWidth("18dp");
        pFontIcon2->SetAspectRatio(1.000000);
        pFontIcon2->SetFont(_s(NoLimits/icomoon.ttf));
        pFontIcon2->SetCharcode(59657);
        pFontIcon2->SetColor(glm::vec4(255));
        e3::Text* pText4 = e3::ViewFactory::CreateText();
        pElement6->AddElement(pText4);
        pText4->SetMarginLeft("10dp");
        pText4->SetText("25");
        pText4->SetTextColor(glm::vec4(255));
        pText4->SetFontSize("14dp");
                MenuItem* pCustomView1 = new MenuItem();
        pElement4->AddElement(pCustomView1);
        pCustomView1->SetMarginRight("5dp");
        pCustomView1->SetHeight("80%");
        pCustomView1->SetWidth("100dp");
        pCustomView1->SetOpacity(1.000000);
        pCustomView1->SetBackgroundColor(glm::vec4(75.000000, 49.000000, 176.000000, 255.000000));
        e3::Text* pText5 = e3::ViewFactory::CreateText();
        pCustomView1->AddElement(pText5);
        pText5->SetText("PLAY");
        pText5->SetFontSize("16dp");
        pText5->SetTextColor(glm::vec4(255));

}
