#include "GameMenuEventsBase.h"

#include <e3/ViewFactory.h>
#include "NoLimitsValues.h"

GameMenuEventsBase::GameMenuEventsBase(e3::Element* pParent)
	: MenuItem(pParent)
{
        this->SetWidth("160dp");
        this->SetHeight("100%");
        this->SetMarginRight("10dp");
        this->SetBackgroundColor(glm::vec4(249.000000, 135.000000, 21.000000, 255.000000));
        this->SetBackgroundImageFit((e3::EBackgroundSize)1);
        this->SetBorderSize("2dp");
        this->SetBorderColor(glm::vec4(146.000000, 219.000000, 163.000000, 255.000000));
        this->SetOpacity(0.000000);
        this->SetBackgroundImage("NoLimits/game2.jpg");
                NextIcon* pCustomView1 = new NextIcon();
        AddElement(pCustomView1);

}
