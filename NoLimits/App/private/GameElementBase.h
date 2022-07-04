
#ifndef __GameElementBase_H__
#define __GameElementBase_H__

#include <e3/ViewFactory.h>
#include <GameMenuCampaign.h>
#include <GameMenuEvents.h>
#include <GameMenuMono.h>


class GameElementBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    GameElementBase(e3::Element* pParent = nullptr);

 
protected:
	GameMenuEvents* mMenuEvents = nullptr;
GameMenuMono* mMenuMono = nullptr;


};

#endif // __GameElementBase_H__

