#include "BottomMenuBase.h"

#include <e3/ViewFactory.h>
#include "NoLimitsValues.h"

BottomMenuBase::BottomMenuBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("70%");
        this->SetHeight("55dp");
        this->SetMarginBottom("10dp");
        this->SetBorderRadius(glm::vec4(30));
        this->SetOverflow((e3::EOverflow)0);
        mHome = new BottomMenuItem();
        AddElement(mHome);
        mHome->SetBorderRadius(glm::vec4(20, 0, 0, 20));
        mHome->SetOverflow((e3::EOverflow)0);
        mGame = new BottomMenuItem();
        AddElement(mGame);
        mPVP = new BottomMenuItem();
        AddElement(mPVP);
        mShop = new BottomMenuItem();
        AddElement(mShop);
        mShop->SetBorderRadius(glm::vec4(0, 20, 20, 0));
        mShop->SetOverflow((e3::EOverflow)0);

}
