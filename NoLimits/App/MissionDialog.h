
#ifndef MissionDialog_H_
#define MissionDialog_H_

#include "private/MissionDialogBase.h"

class E3_EXPORT MissionDialog : public MissionDialogBase
{
public:
	MissionDialog(e3::Element* pParent = nullptr);

	void SetOnCloseCallback(std::function<void()> c) { mOnCloseCallback = c; }

private:
	std::function<void()> mOnCloseCallback;
};

#endif // MissionDialog_H_

