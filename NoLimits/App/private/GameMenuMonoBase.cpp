#include "GameMenuMonoBase.h"

#include <e3/ViewFactory.h>
#include "NoLimitsValues.h"

GameMenuMonoBase::GameMenuMonoBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("200dp");
        this->SetHeight("100%");
        this->SetOrientation((e3::EOrientation)1);
        this->SetOpacity(0.000000);
                MenuItem* pCustomView1 = new MenuItem();
        AddElement(pCustomView1);
        pCustomView1->SetWidth("100%");
        pCustomView1->SetHeight("50%");
        pCustomView1->SetMarginBottom("10dp");
        pCustomView1->SetBackgroundColor(glm::vec4(248.000000, 190.000000, 65.000000, 255.000000));
        pCustomView1->SetBackgroundImageFit((e3::EBackgroundSize)1);
        pCustomView1->SetBackgroundImage("NoLimits/game3.jpg");
        pCustomView1->SetScaling((e3::EScaling)1);
                NextIcon* pCustomView2 = new NextIcon();
        pCustomView1->AddElement(pCustomView2);
                MenuItem* pCustomView3 = new MenuItem();
        AddElement(pCustomView3);
        pCustomView3->SetWidth("100%");
        pCustomView3->SetHeight("50%");
        pCustomView3->SetBackgroundColor(glm::vec4(176.000000, 159.000000, 113.000000, 255.000000));
        pCustomView3->SetBackgroundImageFit((e3::EBackgroundSize)1);
        pCustomView3->SetBackgroundImage("NoLimits/game4.jpg");
        pCustomView3->SetScaling((e3::EScaling)1);
                NextIcon* pCustomView4 = new NextIcon();
        pCustomView3->AddElement(pCustomView4);

}
