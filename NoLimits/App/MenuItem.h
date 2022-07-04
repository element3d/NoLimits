
#ifndef MenuItem_H_
#define MenuItem_H_

#include "private/MenuItemBase.h"

class E3_EXPORT MenuItem : public MenuItemBase
{
public:
	MenuItem(e3::Element* pParent = nullptr);

	void _ShineIn();
	void _ShineOut();
};

#endif // MenuItem_H_

