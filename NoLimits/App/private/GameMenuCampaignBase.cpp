#include "GameMenuCampaignBase.h"

#include <e3/ViewFactory.h>
#include "NoLimitsValues.h"

GameMenuCampaignBase::GameMenuCampaignBase(e3::Element* pParent)
	: MenuItem(pParent)
{
        this->SetWidth("220dp");
        this->SetHeight("100%");
        this->SetMarginRight("10dp");
        this->SetBackgroundImageFit((e3::EBackgroundSize)1);
        this->SetBorderSize("2dp");
        this->SetBorderColor(glm::vec4(255, 255, 255, 80));
        this->SetBackgroundImage("NoLimits/game1.jpg");
        this->SetOpacity(1.000000);
                NextIcon* pCustomView1 = new NextIcon();
        AddElement(pCustomView1);

}
