#include "HomeElementBase.h"

#include <e3/ViewFactory.h>
#include "NoLimitsValues.h"

HomeElementBase::HomeElementBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("100%");
        this->SetHeight("500dp");
        this->SetPadding("40dp");
        this->SetPaddingLeft("100dp");
        this->SetAlignItemsHor((e3::EAlignment)0);
        this->SetOverflow((e3::EOverflow)2);
        this->SetScaling((e3::EScaling)1);
                MainMenuGarage* pCustomView1 = new MainMenuGarage();
        AddElement(pCustomView1);
                MainMenuEvent* pCustomView2 = new MainMenuEvent();
        AddElement(pCustomView2);
                MainMenuCampaign* pCustomView3 = new MainMenuCampaign();
        AddElement(pCustomView3);
                MainMenuTunning* pCustomView4 = new MainMenuTunning();
        AddElement(pCustomView4);

}
