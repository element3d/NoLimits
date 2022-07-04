
#ifndef __GamePageBase_H__
#define __GamePageBase_H__

#include <e3/ViewFactory.h>
#include <AppBar.h>
#include <BottomMenu.h>


class GamePageBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    GamePageBase(e3::Element* pParent = nullptr);

 
protected:
	BottomMenu* mBottomMenu = nullptr;


};

#endif // __GamePageBase_H__

