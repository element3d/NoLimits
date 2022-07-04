
#ifndef __MainMenuCampaignBase_H__
#define __MainMenuCampaignBase_H__

#include <e3/ViewFactory.h>
#include <MenuItem.h>
#include <NextIcon.h>
#include <BadgeNew.h>


class MainMenuCampaignBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    MainMenuCampaignBase(e3::Element* pParent = nullptr);

 
protected:
	MenuItem* mCampaign = nullptr;
MenuItem* mFreeItem1 = nullptr;
MenuItem* mFreeItem2 = nullptr;
e3::Element* mShine = nullptr;


};

#endif // __MainMenuCampaignBase_H__

