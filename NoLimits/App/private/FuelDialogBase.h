
#ifndef __FuelDialogBase_H__
#define __FuelDialogBase_H__

#include <e3/ViewFactory.h>


class FuelDialogBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    FuelDialogBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mBack = nullptr;
e3::Element* mFront = nullptr;


};

#endif // __FuelDialogBase_H__

