
#ifndef GameElement_H_
#define GameElement_H_

#include "private/GameElementBase.h"

class E3_EXPORT GameElement : public GameElementBase
{
public:
	GameElement(e3::Element* pParent = nullptr);
};

#endif // GameElement_H_

