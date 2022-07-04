
#ifndef __BottomMenuBase_H__
#define __BottomMenuBase_H__

#include <e3/ViewFactory.h>
#include <BottomMenuItem.h>


class BottomMenuBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    BottomMenuBase(e3::Element* pParent = nullptr);

 
protected:
	BottomMenuItem* mHome = nullptr;
BottomMenuItem* mGame = nullptr;
BottomMenuItem* mPVP = nullptr;
BottomMenuItem* mShop = nullptr;


};

#endif // __BottomMenuBase_H__

