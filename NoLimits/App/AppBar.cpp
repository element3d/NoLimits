#include "AppBar.h"

AppBar::AppBar(e3::Element* pParent)
	: AppBarBase(pParent)
{
	mFuel->SetOnClickCallback([this](e3::MouseEvent*) {
		mOnFuelClickCallback();
	});

	mMissions->SetOnClickCallback([this](e3::MouseEvent*) {
		mOnMissionsClickCallback();
	});

}
