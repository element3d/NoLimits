
#ifndef Badge_H_
#define Badge_H_

#include "private/BadgeBase.h"

class E3_EXPORT Badge : public BadgeBase
{
public:
	Badge(e3::Element* pParent = nullptr);

	void _ZoomInBadge(std::function<void()> c);
	void _ZoomOutBadge(std::function<void()> c);
	void _Zoom(std::function<void()> c);
};

#endif // Badge_H_

