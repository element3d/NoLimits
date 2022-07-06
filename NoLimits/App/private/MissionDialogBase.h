
#ifndef __MissionDialogBase_H__
#define __MissionDialogBase_H__

#include <e3/ViewFactory.h>


class MissionDialogBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    MissionDialogBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mContent = nullptr;
e3::Element* mScroll = nullptr;


};

#endif // __MissionDialogBase_H__

