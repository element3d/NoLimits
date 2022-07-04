
#ifndef Main_H_
#define Main_H_

#include "private/MainBase.h"
#include "GameElement.h"

class E3_EXPORT Main : public MainBase
{
public:
	Main(e3::Element* pParent = nullptr);

	GameElement* mGameElement = nullptr;
};

#endif // Main_H_

