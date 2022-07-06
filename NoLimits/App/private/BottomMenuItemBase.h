
#ifndef __BottomMenuItemBase_H__
#define __BottomMenuItemBase_H__

#include <e3/ViewFactory.h>
#include <BadgeNew.h>


class BottomMenuItemBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    BottomMenuItemBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mSelection = nullptr;
e3::Text* mTitle = nullptr;


};

#endif // __BottomMenuItemBase_H__

