#include "FuelDialogBase.h"

#include <e3/ViewFactory.h>
#include "NoLimitsValues.h"

FuelDialogBase::FuelDialogBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("100%");
        this->SetHeight("100%");
        this->SetPositionType((e3::EPositionType)1);
        this->SetBackgroundColor(glm::vec4(0, 0, 0, 240));
    mBack = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mBack);
        mBack->SetWidth("100%");
        mBack->SetHeight("110%");
        mBack->SetPositionType((e3::EPositionType)1);
        mBack->SetBorderType((e3::EBorderType)1);
        mBack->SetBackgroundColor(glm::vec4(5.000000, 183.000000, 247.000000, 255.000000));
        mBack->SetBorderRadius(glm::vec4(1, 0, 0, 0));
    mFront = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mFront);
        mFront->SetWidth("100%");
        mFront->SetHeight("110%");
        mFront->SetPositionType((e3::EPositionType)1);
        mFront->SetBorderType((e3::EBorderType)1);
        mFront->SetBackgroundColor(glm::vec4(0, 0, 0, 255));
        mFront->SetBorderSize(10);
        mFront->SetBorderColor(glm::vec4(99.000000, 77.000000, 185.000000, 255.000000));
        mFront->SetBorderRadius(glm::vec4(1, 0, 0, 0));
        mFront->SetOrientation((e3::EOrientation)1);
        mFront->SetOverflow((e3::EOverflow)0);
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mFront->AddElement(pElement1);
        pElement1->SetWidth("100%");
        pElement1->SetHeight("80%");
    e3::Element* pElement2 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mFront->AddElement(pElement2);
        pElement2->SetWidth("100%");
        pElement2->SetHeight("20%");
        pElement2->SetBackgroundColor(glm::vec4(231.000000, 255.000000, 255.000000, 255.000000));

}
