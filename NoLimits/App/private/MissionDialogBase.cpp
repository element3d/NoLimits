#include "MissionDialogBase.h"

#include <e3/ViewFactory.h>
#include "NoLimitsValues.h"

MissionDialogBase::MissionDialogBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("100%");
        this->SetHeight("100%");
        this->SetBackgroundColor(glm::vec4(0, 0, 0, 200));
        this->SetPositionType((e3::EPositionType)1);
        this->SetAlignItemsVer((e3::EAlignment)1);
    mContent = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mContent);
        mContent->SetWidth("90%");
        mContent->SetHeight("80%");
        mContent->SetMarginBottom("30dp");
        mContent->SetBackgroundColor(glm::vec4(20, 20, 20, 255));
        mContent->SetBorderRadius(glm::vec4(20));
        mContent->SetOverflow((e3::EOverflow)0);
        mContent->SetOrientation((e3::EOrientation)1);
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mContent->AddElement(pElement1);
        pElement1->SetWidth("100%");
        pElement1->SetHeight("50dp");
        pElement1->SetBackgroundColor(glm::vec4(75.000000, 49.000000, 176.000000, 255.000000));
        pElement1->SetAlignItemsHor((e3::EAlignment)3);
    e3::Element* pElement2 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement1->AddElement(pElement2);
        pElement2->SetHeight("100%");
        e3::FontIcon* pFontIcon1 = e3::ViewFactory::CreateFontIcon();
        pElement2->AddElement(pFontIcon1);
        pFontIcon1->SetMarginLeft("20dp");
        pFontIcon1->SetWidth("30dp");
        pFontIcon1->SetAspectRatio(1.000000);
        pFontIcon1->SetFont(_s(NoLimits/icomoon.ttf));
        pFontIcon1->SetCharcode(59654);
        pFontIcon1->SetColor(glm::vec4(255));
    e3::Element* pElement3 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement2->AddElement(pElement3);
        pElement3->SetMarginLeft("10dp");
        pElement3->SetWidth("150dp");
        pElement3->SetHeight("60%");
        pElement3->SetBorderRadius(glm::vec4(15));
        pElement3->SetBackgroundColor(glm::vec4(255));
        e3::Text* pText1 = e3::ViewFactory::CreateText();
        pElement3->AddElement(pText1);
        pText1->SetText("DAILY TASKS");
        pText1->SetFontSize("16dp");
        pText1->SetTextColor(glm::vec4(99.000000, 77.000000, 185.000000, 255.000000));
    e3::Element* pElement4 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement2->AddElement(pElement4);
        pElement4->SetMarginLeft("10dp");
        pElement4->SetWidth("150dp");
        pElement4->SetHeight("60%");
        pElement4->SetBorderRadius(glm::vec4(15));
        pElement4->SetBorderSize("2dp");
        pElement4->SetBorderColor(glm::vec4(255));
        e3::Text* pText2 = e3::ViewFactory::CreateText();
        pElement4->AddElement(pText2);
        pText2->SetText("MISSIONS");
        pText2->SetFontSize("16dp");
        pText2->SetTextColor(glm::vec4(255));
    e3::Element* pElement5 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement1->AddElement(pElement5);
    e3::Element* pElement6 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement5->AddElement(pElement6);
        pElement6->SetMarginRight("20dp");
        pElement6->SetAspectRatio(1.000000);
        pElement6->SetHeight("60%");
        pElement6->SetBorderRadius(glm::vec4(20));
        pElement6->SetBackgroundColor(glm::vec4(255.000000, 0.000000, 84.000000, 255.000000));
        e3::FontIcon* pFontIcon2 = e3::ViewFactory::CreateFontIcon();
        pElement6->AddElement(pFontIcon2);
        pFontIcon2->SetWidth("20dp");
        pFontIcon2->SetAspectRatio(1.000000);
        pFontIcon2->SetFont(_s(NoLimits/icomoon.ttf));
        pFontIcon2->SetCharcode(59665);
        pFontIcon2->SetColor(glm::vec4(255));
    mScroll = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mContent->AddElement(mScroll);
        mScroll->SetOrientation((e3::EOrientation)1);
        mScroll->SetWidth("100%");
        mScroll->SetHeight("100%");
        mScroll->SetOverflow((e3::EOverflow)2);
        mScroll->SetScaling((e3::EScaling)1);
        mScroll->SetAlignItemsHor((e3::EAlignment)2);

}
