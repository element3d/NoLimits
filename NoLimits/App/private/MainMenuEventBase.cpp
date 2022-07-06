#include "MainMenuEventBase.h"

#include <e3/ViewFactory.h>
#include "NoLimitsValues.h"

MainMenuEventBase::MainMenuEventBase(e3::Element* pParent)
	: MenuItem(pParent)
{
        this->SetWidth("300dp");
        this->SetHeight("100%");
        this->SetMarginRight("10dp");
        this->SetBackgroundImage("NoLimits/event.png");
        this->SetBackgroundImageFit((e3::EBackgroundSize)1);
        this->SetBorderSize("2dp");
        this->SetBorderColor(glm::vec4(255, 255, 255, 100));
        this->SetOpacity(1.000000);
        this->SetOrientation((e3::EOrientation)1);
        this->SetAlignItemsVer((e3::EAlignment)3);
        this->SetPadding("10dp");
                NextIcon* pCustomView1 = new NextIcon();
        AddElement(pCustomView1);

}
