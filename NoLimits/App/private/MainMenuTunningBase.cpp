#include "MainMenuTunningBase.h"

#include <e3/ViewFactory.h>
#include "NoLimitsValues.h"

MainMenuTunningBase::MainMenuTunningBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("200dp");
        this->SetHeight("100%");
        this->SetMarginRight("10dp");
        this->SetOrientation((e3::EOrientation)1);
        this->SetOpacity(0.000000);
                MenuItem* pCustomView1 = new MenuItem();
        AddElement(pCustomView1);
        pCustomView1->SetWidth("100%");
        pCustomView1->SetHeight("50%");
        pCustomView1->SetScaling((e3::EScaling)1);
        pCustomView1->SetMarginBottom("10dp");
        pCustomView1->SetBackgroundImage("NoLimits/lambo.jpg");
        pCustomView1->SetBackgroundImageFit((e3::EBackgroundSize)1);
        pCustomView1->SetAlignItemsVer((e3::EAlignment)0);
        pCustomView1->SetAlignItemsHor((e3::EAlignment)0);
        pCustomView1->SetOrientation((e3::EOrientation)1);
        pCustomView1->SetPadding("5dp");
        e3::Text* pText1 = e3::ViewFactory::CreateText();
        pCustomView1->AddElement(pText1);
        pText1->SetText("TUNNING");
        pText1->SetFontSize("18dp");
        pText1->SetTextColor(glm::vec4(255));
        pText1->SetFontStyle((e3::EFontStyle)2);
        e3::Text* pText2 = e3::ViewFactory::CreateText();
        pCustomView1->AddElement(pText2);
        pText2->SetText("SHOP");
        pText2->SetFontSize("18dp");
        pText2->SetTextColor(glm::vec4(255));
        pText2->SetFontStyle((e3::EFontStyle)2);
                NextIcon* pCustomView2 = new NextIcon();
        pCustomView1->AddElement(pCustomView2);
                MenuItem* pCustomView3 = new MenuItem();
        AddElement(pCustomView3);
        pCustomView3->SetWidth("100%");
        pCustomView3->SetHeight("50%");
        pCustomView3->SetScaling((e3::EScaling)1);
        pCustomView3->SetBackgroundImage("NoLimits/lambo2.jpg");
        pCustomView3->SetBackgroundImageFit((e3::EBackgroundSize)1);
        pCustomView3->SetAlignItemsVer((e3::EAlignment)0);
        pCustomView3->SetAlignItemsHor((e3::EAlignment)0);
        pCustomView3->SetOrientation((e3::EOrientation)1);
        pCustomView3->SetPadding("5dp");
        e3::Text* pText3 = e3::ViewFactory::CreateText();
        pCustomView3->AddElement(pText3);
        pText3->SetText("CHOPSHOP");
        pText3->SetFontSize("18dp");
        pText3->SetTextColor(glm::vec4(255));
        pText3->SetFontStyle((e3::EFontStyle)2);
                NextIcon* pCustomView4 = new NextIcon();
        pCustomView3->AddElement(pCustomView4);

}
