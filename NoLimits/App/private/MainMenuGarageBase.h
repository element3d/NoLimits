
#ifndef __MainMenuGarageBase_H__
#define __MainMenuGarageBase_H__

#include <e3/ViewFactory.h>
#include <MenuItem.h>


class MainMenuGarageBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    MainMenuGarageBase(e3::Element* pParent = nullptr);

 
protected:
	MenuItem* mGolds = nullptr;


};

#endif // __MainMenuGarageBase_H__

