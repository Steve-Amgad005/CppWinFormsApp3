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

	private:
		System::Windows::Forms::Panel^ Headr;
		System::ComponentModel::Container^ components;

		// ====== Gradient Background ======
	protected:
		virtual void OnPaint(PaintEventArgs^ e) override
		{
			Color color1 = Color::FromArgb(92, 15, 143);
			Color color2 = Color::FromArgb(179, 179, 179);

			LinearGradientBrush^ brush =
				gcnew LinearGradientBrush(this->ClientRectangle, color1, color2, LinearGradientMode::Horizontal);

			e->Graphics->FillRectangle(brush, this->ClientRectangle);

			Form::OnPaint(e);
		}

		// ====== Rounded Rectangle Function ======
	private:
		GraphicsPath^ GetRoundedRect(Rectangle rect, int radius)
		{
			GraphicsPath^ path = gcnew GraphicsPath();
			int d = radius * 2;

			path->AddArc(rect.X, rect.Y, d, d, 180, 90);
			path->AddArc(rect.Right - d, rect.Y, d, d, 270, 90);
			path->AddArc(rect.Right - d, rect.Bottom - d, d, d, 0, 90);
			path->AddArc(rect.X, rect.Bottom - d, d, d, 90, 90);
			path->CloseFigure();

			return path;
		}

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->Headr = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();

			// 
			// Headr
			// 
			this->Headr->Location = System::Drawing::Point(100, 30);
			this->Headr->Name = L"Headr";
			this->Headr->Size = System::Drawing::Size(850, 90);
			this->Headr->BackColor = Color::Transparent;
			this->Headr->Paint += gcnew PaintEventHandler(this, &Main_student::Headr_Paint);

			// 
			// Main_student
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1032, 588);
			this->Controls->Add(this->Headr);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Main_student";
			this->Text = L"Student Main Page";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->ResumeLayout(false);
		}
#pragma endregion

		// ====== Panel Paint (Rounded Header) ======
	private:
		System::Void Headr_Paint(System::Object^ sender, PaintEventArgs^ e)
		{
			Panel^ panel = safe_cast<Panel^>(sender);

			e->Graphics->SmoothingMode = SmoothingMode::AntiAlias;

			// لون الـ Header (غيره براحتك)
			Color panelColor = Color::FromArgb(45, 45, 48);

			Rectangle rect = panel->ClientRectangle;
			rect.Width -= 1;
			rect.Height -= 1;

			// درجة التدوير
			int radius = 30;

			GraphicsPath^ path = GetRoundedRect(rect, radius);
			SolidBrush^ brush = gcnew SolidBrush(panelColor);

			e->Graphics->FillPath(brush, path);
		}
	};
}
