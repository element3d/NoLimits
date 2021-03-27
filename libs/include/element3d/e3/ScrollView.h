#ifndef __CARBON_SCROLL_VIEW__
#define __CARBON_SCROLL_VIEW__

#include "Element.h"
#include "ApplicationSharedData.h"
#include "Animation.h"
#include <mutex>

namespace e3
{
	typedef std::function<void(const glm::vec2&)> OnScrollCallback;

    class ScrollView : public e3::Element
    {
    public:
		ScrollView();

		void Render() override;
        virtual void Update() override;

        virtual void OnMove(MouseEvent* pEvent) override;

        virtual bool OnMouseDown(MouseEvent* pEvent) override;
        virtual bool OnPointerUp(MouseEvent* pEvent) override;

        bool Scroll(const glm::vec3& direction);

		void SetOnScrollCallback(OnScrollCallback onScrollCallback) { mOnScrollCallback = onScrollCallback; }

	public:
		glm::vec2 GetScrollVec();

	private:
		bool ScrollUnsafe(const glm::vec3& direction);

    private:
		bool mPicked = false;
		Element* mContainer = nullptr;
        bool mEnableScroll = false;
        float mScrollSpeed = 0.0f;
        std::clock_t mBegin;
        float mScrollAmount = 0.0f;
        Animation* mScrollAnimation = nullptr;
        std::mutex mMutex;
		OnScrollCallback mOnScrollCallback = nullptr;
    };
}

#endif // __CARBON_SCROLL_VIEW__

