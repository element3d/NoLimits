
#ifndef MainMenuCampaign_H_
#define MainMenuCampaign_H_

#include "private/MainMenuCampaignBase.h"

class E3_EXPORT MainMenuCampaign : public MainMenuCampaignBase
{
public:
	MainMenuCampaign(e3::Element* pParent = nullptr);

	void Rotate();
};

#endif // MainMenuCampaign_H_

