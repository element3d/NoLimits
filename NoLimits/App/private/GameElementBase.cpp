#include "GameElementBase.h"

#include <e3/ViewFactory.h>
#include "NoLimitsValues.h"

GameElementBase::GameElementBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("100%");
        this->SetHeight(e3::Dim("80%", "80%", "80%", "500", "500", "500"));
        this->SetPadding("0dp");
        this->SetPaddingLeft("100dp");
        this->SetAlignItemsHor((e3::EAlignment)0);
        this->SetOverflow((e3::EOverflow)2);
                GameMenuCampaign* pCustomView1 = new GameMenuCampaign();
        AddElement(pCustomView1);
        mMenuEvents = new GameMenuEvents();
        AddElement(mMenuEvents);
        mMenuMono = new GameMenuMono();
        AddElement(mMenuMono);

}
