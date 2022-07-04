
#ifndef __MainBase_H__
#define __MainBase_H__

#include <e3/ViewFactory.h>
#include <AppBar.h>
#include <HomeElement.h>
#include <BottomMenu.h>


class MainBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    MainBase(e3::Element* pParent = nullptr);

 
protected:
	AppBar* mAppBar = nullptr;
e3::Element* mRouter = nullptr;
HomeElement* mContent = nullptr;
BottomMenu* mBottomMenu = nullptr;


};

#endif // __MainBase_H__

