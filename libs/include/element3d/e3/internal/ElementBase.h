#ifndef __E3_ELEMENT_BASE__
#define __E3_ELEMENT_BASE__

#include <e3/Style.h>
#include <e3/Enum.h>
#include <e3/Camera.h>
#include <e3/RenderTarget.h>

namespace _e3 
{
	class ElementBase 
	{
	public:
		ElementBase();
		virtual ~ElementBase();

	protected:
		void _UpdateNode();
		//void _UpdateGeometry();
		int _FindElementIndexById(int id);
		void _UpdateGeometryRecoursive();
		bool _UpdateYoga();
		virtual void _SetScrollTranslation(float value, e3::EOrientation direction);
		void _SetState(e3::EElementState state);
		void _SetParentTransform(const glm::mat4& transform);
		void _CalcGeometry();

		virtual void RenderToTexture();
		virtual bool _PrepareSnapshot();
		virtual void _RenderSnapshotOffscreen(e3::Element* pSnaphotElement, e3::Rect2f parentRect);
		virtual void _RenderSnapshot();

	protected:
		e3::Style         mStyle;
		void*             mUsrPtr = nullptr;
		e3::Element*      mParent = nullptr;
		int               mId = -1;
		int               mIndex = -1;
		void*             mNode = nullptr;
		e3::EElementType  mType;
		e3::Rect2f        mRect;
		e3::Rect2f        mGeometry;
		float             mOpacityUpdated = false;

		e3::EElementState mState;
		e3::Transform mInternalTransform;
		e3::Transform mTransform;
		e3::ETransformAlignment mScaleAlignment = e3::ETransformAlignment::Center;
		e3::ETransformAlignment mRotationAlignment = e3::ETransformAlignment::Center;
		glm::vec4 mScrollTranslation;
		glm::mat4 mScrollMatrix;
		glm::mat4 mParentTransform = glm::mat4(1);


		e3::ShadowParams* mShadowParams = nullptr;
		bool mUpdateShadows = false;
		bool mUpdateTexture = false;
		bool mUpdateSnapshot = true;

		bool mForcedWidth = false;
		bool mForcedHeight = false;

		bool mFocused = false;

		// Event callbacks
		e3::OnClickCallback mOnClickCallback = nullptr;
		e3::OnDoubleClickCallback mOnDoubleClickCallback = nullptr;
		e3::OnMouseDownCallback mOnDownCallback = nullptr;
		e3::OnScaleCallback mOnScaleCallback = nullptr;
		e3::OnMouseUpCallback mOnUpCallback = nullptr;
		e3::OnLongClickCallback mOnLongClickCallback = nullptr;
		e3::OnMouseLongDownCallback mOnLongDownCallback = nullptr;
		e3::OnMouseMoveCallback mOnMoveCallback = nullptr;
		e3::OnMouseEnterCallback mOnMouseEnterCallback = nullptr;
		e3::OnMouseHoverCallback mOnMouseHoverCallback = nullptr;
		e3::OnMouseLeaveCallback mOnMouseLeaveCallback = nullptr;
		e3::OnStateChangeCallback mOnStateChangeCallback = nullptr;

	protected:
		e3::RenderTarget* mRenderTarget = 0;
		e3::RenderTarget* mRenderTargetSnapshot = 0;
		GLuint     mSnapshotTexture = 0;

		void* mParams = nullptr;
		glm::vec2 mChildrenScrollDirection = glm::vec2(0);
		std::shared_ptr<Camera> mCamera = nullptr;
		bool mInternalUpdated = false;

	protected: // Container props
		friend class Application;
		std::vector<e3::Element*> mChildren;
		bool mGeometrUpdated = false;
		bool mLayoutUpdated = false;

		struct
		{
			bool HasWidth = false;
			e3::Dim Width;
			bool HasHeight = false;
			e3::Dim Height;
			bool HasMinWidth = false;
			e3::Dim MinWidth;
			bool HasMinHeight = false;
			e3::Dim MinHeight;
			bool HasMaxWidth = false;
			e3::Dim MaxWidth;
			bool HasMaxHeight = false;
			e3::Dim MaxHeight;

			bool HasPadding = false;
			e3::Dim Padding;
			bool HasPaddingLeft = false;
			e3::Dim PaddingLeft;
			bool HasPaddingRight = false;
			e3::Dim PaddingRight;
			bool HasPaddingTop = false;
			e3::Dim PaddingTop;
			bool HasPaddingBottom = false;
			e3::Dim PaddingBottom;

			bool HasMargin = false;
			e3::Dim Margin;
			bool HasMarginLeft = false;
			e3::Dim MarginLeft;
			bool HasMarginRight = false;
			e3::Dim MarginRight;
			bool HasMarginTop = false;
			e3::Dim MarginTop;
			bool HasMarginBottom = false;
			e3::Dim MarginBottom;

			bool HasLeft = false;
			e3::Dim Left;
			bool HasRight = false;
			e3::Dim Right;
			bool HasTop = false;
			e3::Dim Top;
			bool HasBottom = false;
			e3::Dim Bottom;
		} mDims;
	};
}

#endif // __E3_ELEMENT_BASE__