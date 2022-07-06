
#ifndef MainMenuGarage_H_
#define MainMenuGarage_H_

#include "private/MainMenuGarageBase.h"

class E3_EXPORT MainMenuGarage : public MainMenuGarageBase
{
public:
	MainMenuGarage(e3::Element* pParent = nullptr);
	void AnimateGolds(float v);
};

#endif // MainMenuGarage_H_

