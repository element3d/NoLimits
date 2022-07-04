
#ifndef __AppBarBase_H__
#define __AppBarBase_H__

#include <e3/ViewFactory.h>
#include <BadgeIcon.h>


class AppBarBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    AppBarBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mMissions = nullptr;
e3::Element* mFuel = nullptr;


};

#endif // __AppBarBase_H__

