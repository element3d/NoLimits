#ifndef __E3_INPUT__
#define __E3_INPUT__

#include "ScrollView.h"

namespace ftgl
{
	struct vertex_buffer_t;
	struct texture_atlas_t;
	struct texture_font_t;
	struct font_manager_t;
	struct markup_t;
}

namespace e3 
{
	class Input : public Element
	{
		friend class SelectionLayer;
		typedef std::function<void(const std::string& text)> OnChangeCallback;
	public:
		Input();

	public:
		virtual void Render() override;
		virtual void Update() override;

	public:
		void SetText(const std::string& text);
		std::string GetText();
		void SetFontSize(float fontSize);
		float GetFontSize();
		void SetTextColor(const glm::vec4& color);

		void SetHint(const std::string &hint);
		void SetHint(const std::string &hint, bool translate);
		void SetHintColor(const glm::vec4 &hintColor);

		virtual void SetScale(const glm::vec3 &direction) override;

		void SetCursorColor(const glm::vec4 &cursorColor);
		void SetOnSubmitCallback(OnSubmitCallback onSubmitCallback);
		void SetOnChangeCallback(OnChangeCallback onChangeCallback);

	public:
		void OnKey(e3::EKey key, int mods, char c);
		void OnKey(e3::EKey key, int mods, unsigned short c);
		bool OnClick(MouseEvent* pEvent) override;
		bool OnMouseLongDown(MouseEvent* pEvent) override;
		void OnMouseEnter(MouseEvent* pEvent) override;
		void OnMouseLeave(MouseEvent* pEvent) override;

	public:
		virtual void Focus() override;
		virtual void Unfocus() override;

	private:
		void CreateTextBuffer();
		void UpdateCursorPosition();
		glm::vec4 GetLineBBox(char* text, glm::vec2* pen);
		glm::vec4 AddText(char *text, ftgl::vertex_buffer_t* pBuffer, glm::vec4 * color, glm::vec2 * pen);
		void RenderHint();
		void RenderCursor();
		int GetCursorFromClick(glm::vec2 pos);
		void _EnableSelection(int startIndex, int endIndex);
		void _ReactOnClick();
	private:
		bool mSimulateSroll = false;
		ScrollView* mScrollView = nullptr;
		Element* mTextLayout = nullptr;
		Element* mTextSelectionBackground = nullptr;

		std::wstring mText = L"";

		std::string mHint = "";
		std::vector<glm::ivec4> mLineBBoxes;
		std::vector<e3::Rect2f> mCharRects;
		int mI18Id = -1;

		ftgl::vertex_buffer_t* mBuffer;
		ftgl::texture_atlas_t* mAtlas;
		ftgl::markup_t* mMarkup;
		ftgl::texture_font_t* font = nullptr;

		bool mHindUpdated = false;
		bool mShowHint = true;
		ftgl::vertex_buffer_t* pHintVertexBuffer = nullptr;

		struct 
		{
			GLuint VAO;
			Carbon::Buffer *vertexBuffer;
			Carbon::ShaderProgram* ShaderProgram = nullptr;
			float LastDiff;
		} mCursor;

		glm::vec4 mColor = glm::vec4(0, 0, 0, 255);
		glm::vec4 mHintColor = glm::vec4(0, 0, 0, 255);
		glm::vec4 mCursorColor = glm::vec4(100, 100, 100, 255);

		glm::vec2           pen;
		glm::vec2 mCursorPos = glm::vec2(0);
		glm::vec2 mClickedPos = glm::vec2(0);

		bool mTextUpdated = false;
		size_t         cursor = 0;
		bool mShowCursor = false;
		bool mSelectionEnabled = false;
		std::clock_t mCursorAnimationTimerStart;
		float mFontSize = 0.0f;

		Carbon::ShaderProgram* mShaderProgram = nullptr;
		bool mHideCursorDropOnScroll = true;
		struct 
		{
			int StartIndex;
			int EndIndex;
			float LastDiff;
		} mSelection;

		OnSubmitCallback mOnSubmitCallback;
		OnChangeCallback mOnChangeCallback;
	};
}

#endif // __E3_INPUT__