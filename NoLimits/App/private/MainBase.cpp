#include "MainBase.h"

#include <e3/ViewFactory.h>
#include "NoLimitsValues.h"

MainBase::MainBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetBackgroundImage("NoLimits/bg4.jpg");
        this->SetBackgroundImageFit((e3::EBackgroundSize)1);
        this->SetOrientation((e3::EOrientation)1);
        mAppBar = new AppBar();
        AddElement(mAppBar);
    mRouter = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mRouter);
        mRouter->SetHeight("100%");
        mRouter->SetScaling((e3::EScaling)1);
        mContent = new HomeElement();
        mRouter->AddElement(mContent);
        mBottomMenu = new BottomMenu();
        AddElement(mBottomMenu);

}
