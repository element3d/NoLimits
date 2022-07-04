
#ifndef AppBar_H_
#define AppBar_H_

#include "private/AppBarBase.h"

class E3_EXPORT AppBar : public AppBarBase
{
public:
	AppBar(e3::Element* pParent = nullptr);

	void SetOnMissionsClickCallback(std::function<void(void)> c) { mOnMissionsClickCallback = c; }
	void SetOnFuelClickCallback(std::function<void(void)> c) { mOnFuelClickCallback = c; }

private:
	std::function<void(void)> mOnMissionsClickCallback;
	std::function<void(void)> mOnFuelClickCallback;
};

#endif // AppBar_H_

