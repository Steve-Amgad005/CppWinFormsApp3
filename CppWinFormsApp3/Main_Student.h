#pragma once

namespace CppWinFormsApp3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;

	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}

		// هنا بنرسم الخلفية بالـ Gradient
		virtual void OnPaint(PaintEventArgs^ e) override
		{
			// ألوان الجريدينت (غيرهم زي ما انت عايز)
			Color color1 = Color::FromArgb(92, 15, 143);   // اللون الأول
			Color color2 = Color::FromArgb(179, 179, 179);    // اللون الثاني

			// Brush بيعمل التدرج اللوني
			LinearGradientBrush^ brush =
				gcnew LinearGradientBrush(this->ClientRectangle, color1, color2, LinearGradientMode::Vertical);

			// يرسم الخلفية
			e->Graphics->FillRectangle(brush, this->ClientRectangle);

			// مهم جدًا عشان باقي العناصر تظهر صح
			Form::OnPaint(e);
		}

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->SuspendLayout();

			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1032, 588);
			this->Name = L"Student Main Page";
			this->Text = L"Student Main Page";

			// يمنع تغيير الحجم (اختياري)
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;

			this->ResumeLayout(false);
		}
#pragma endregion
	};
}
