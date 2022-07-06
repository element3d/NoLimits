#include "GamePageBase.h"

#include <e3/ViewFactory.h>
#include "./NoLimitsValues.h"

GamePageBase::GamePageBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetBackgroundImage("NoLimits/bg.png");
        this->SetBackgroundImageFit((e3::EBackgroundSize)1);
        this->SetOrientation((e3::EOrientation)1);
                AppBar* pCustomView1 = new AppBar();
        AddElement(pCustomView1);
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement1);
        pElement1->SetHeight("100%");
        pElement1->SetScaling((e3::EScaling)1);
        mBottomMenu = new BottomMenu();
        AddElement(mBottomMenu);

}
