#include "HomeElementBase.h"

#include <e3/ViewFactory.h>
#include "NoLimitsValues.h"

HomeElementBase::HomeElementBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("100%");
        this->SetHeight(e3::Dim("80%", "80%", "80%", "500", "500", "500"));
        this->SetPadding("0dp");
        this->SetPaddingLeft("60dp");
        this->SetPaddingRight("200dp");
        this->SetAlignItemsHor((e3::EAlignment)0);
        this->SetOverflow((e3::EOverflow)2);
        this->SetScaling((e3::EScaling)1);
        mGarage = new MainMenuGarage();
        AddElement(mGarage);
                MainMenuEvent* pCustomView1 = new MainMenuEvent();
        AddElement(pCustomView1);
                MainMenuCampaign* pCustomView2 = new MainMenuCampaign();
        AddElement(pCustomView2);
                MainMenuTunning* pCustomView3 = new MainMenuTunning();
        AddElement(pCustomView3);

}
