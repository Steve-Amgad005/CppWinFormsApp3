#pragma once

namespace CppWinFormsApp3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;

	public ref class Main_student : public System::Windows::Forms::Form
	{
	public:
		Main_student(void)
		{
			InitializeComponent();
		}

	protected:
		~Main_student()
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
				gcnew LinearGradientBrush(this->ClientRectangle, color2, color1, LinearGradientMode::Horizontal);

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
			// 
			// Main_student
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1032, 588);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Main_student";
			this->Text = L"Student Main Page";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Main_student::Main_student_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Main_student_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
