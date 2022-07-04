
#ifndef BottomMenu_H_
#define BottomMenu_H_

#include "private/BottomMenuBase.h"

class E3_EXPORT BottomMenu : public BottomMenuBase
{
public:
	BottomMenu(e3::Element* pParent = nullptr);

	void SetOnChooseCallback(std::function<void(int)> c) { mOnChooseCallback = c; }
	
private:
	std::function<void(int)> mOnChooseCallback;
};

#endif // BottomMenu_H_

