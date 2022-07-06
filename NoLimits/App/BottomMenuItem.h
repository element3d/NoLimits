
#ifndef BottomMenuItem_H_
#define BottomMenuItem_H_

#include "private/BottomMenuItemBase.h"

class E3_EXPORT BottomMenuItem : public BottomMenuItemBase
{
public:
	BottomMenuItem(e3::Element* pParent = nullptr);

	void Select();
	void Unselect();
	bool OnClick(e3::MouseEvent*) override;
};

#endif // BottomMenuItem_H_

