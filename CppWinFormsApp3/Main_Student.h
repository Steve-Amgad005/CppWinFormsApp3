#pragma once

namespace CppWinFormsApp3 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Windows::Forms;
    using namespace System::Drawing;
    using namespace System::Drawing::Drawing2D;
    using namespace System::Drawing;

    public ref class Main_student : public Form
    {
    public:
        Main_student()
        {
            InitializeComponent();
        }

    protected:
        ~Main_student()
        {
            if (components)
                delete components;
        }

    private:
        Panel^ Headr;
        System::ComponentModel::Container^ components;

        // ================= FORM BACKGROUND GRADIENT =================
    protected:
        virtual void OnPaint(PaintEventArgs^ e) override
        {
            if (this->DesignMode)
            {
                Form::OnPaint(e);
                return;
            }

            LinearGradientBrush^ brush =
                gcnew LinearGradientBrush(
                    this->ClientRectangle,
                    Color::FromArgb(92, 15, 143),
                    Color::FromArgb(179, 179, 179),
                    LinearGradientMode::Horizontal);

            e->Graphics->FillRectangle(brush, this->ClientRectangle);
            Form::OnPaint(e);
        }

        // ================= ROUNDED RECT FUNCTION =================
    private:
        GraphicsPath^ GetRoundedRect(System::Drawing::Rectangle rect, int radius)
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

        // ================= INITIALIZE COMPONENT =================
    private:
        void InitializeComponent()
        {
            this->components = gcnew System::ComponentModel::Container();
            this->Headr = gcnew Panel();

            this->SuspendLayout();

            // ===== Header Panel =====
            this->Headr->Height = 150;
            this->Headr->Left = 40;
            this->Headr->Top = 30;
            this->Headr->Width = 800;
            this->Headr->BackColor = this->BackColor; // NOT Transparent
            this->Headr->Anchor =
                AnchorStyles::Top | AnchorStyles::Left | AnchorStyles::Right;

            this->Headr->Paint +=
                gcnew PaintEventHandler(this, &Main_student::Headr_Paint);

            // ===== Form =====
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
            this->ClientSize = Drawing::Size(1032, 588);
            this->Text = L"Student Main Page";
            this->WindowState = FormWindowState::Maximized;
            this->FormBorderStyle =
            System::Windows::Forms::FormBorderStyle::FixedSingle;this->MaximizeBox = false;

            this->Load +=
                gcnew EventHandler(this, &Main_student::Main_student_Load);

            // ===== Add Controls =====
            this->Controls->Add(this->Headr);

            this->ResumeLayout(false);
        }

        // ================= LOAD EVENT =================
    private:
        System::Void Main_student_Load(System::Object^ sender, System::EventArgs^ e)
        {
            int marginLeft = 40;
            int marginRight = 40;
            int marginTop = 30;

            this->Headr->Top = marginTop;
            this->Headr->Left = marginLeft;
            this->Headr->Width =
                this->ClientSize.Width - (marginLeft + marginRight);
        }

        // ================= HEADER PAINT =================
    private:
        System::Void Headr_Paint(System::Object^ sender, PaintEventArgs^ e)
        {
            if (this->DesignMode) return;

            e->Graphics->SmoothingMode = SmoothingMode::AntiAlias;

            System::Drawing::Rectangle rect = Headr->ClientRectangle;
            rect.Width -= 1;
            rect.Height -= 1;

            GraphicsPath^ path = GetRoundedRect(rect, 30);
            SolidBrush^ brush =
                gcnew SolidBrush(Color::FromArgb(80, 34, 92));

            e->Graphics->FillPath(brush, path);
        }
    };
}
