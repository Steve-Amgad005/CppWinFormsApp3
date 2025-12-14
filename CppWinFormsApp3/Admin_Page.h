#pragma once
#include <Windows.h>

namespace CppWinFormsApp3 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Drawing::Drawing2D;

    public ref class Admin_Page : public System::Windows::Forms::Form
    {
    public:
        Admin_Page(void)
        {
            InitializeComponent();

            // Round buttons AFTER InitializeComponent
            RoundButton(btnStudents, 30);
            RoundButton(btnDepartments, 30);
            RoundButton(btnResult, 30);
        }

    protected:
        ~Admin_Page()
        {
            if (components)
                delete components;
        }

    private:
        // ===== Controls =====
        Panel^ panel1;
        Label^ lblTitle;
        PictureBox^ pictureBoxLogo;

        Button^ btnStudents;
        Button^ btnDepartments;
        Button^ btnResult;
        Button^ buttonBack;

        System::ComponentModel::Container^ components;

        // ===== Rounded Button Function =====
    private:
        void RoundButton(Button^ btn, int radius)
        {
            if (btn == nullptr) return;

            GraphicsPath^ path = gcnew GraphicsPath();
            int d = radius * 2;

            path->AddArc(0, 0, d, d, 180, 90);
            path->AddArc(btn->Width - d, 0, d, d, 270, 90);
            path->AddArc(btn->Width - d, btn->Height - d, d, d, 0, 90);
            path->AddArc(0, btn->Height - d, d, d, 90, 90);
            path->CloseFigure();

            btn->Region = gcnew System::Drawing::Region(path);
        }

#pragma region Windows Form Designer generated code
    private:
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources =
                gcnew System::ComponentModel::ComponentResourceManager(Admin_Page::typeid);

            this->panel1 = gcnew Panel();
            this->pictureBoxLogo = gcnew PictureBox();
            this->lblTitle = gcnew Label();

            this->btnStudents = gcnew Button();
            this->btnDepartments = gcnew Button();
            this->btnResult = gcnew Button();
            this->buttonBack = gcnew Button();

            this->SuspendLayout();
            this->panel1->SuspendLayout();
            (cli::safe_cast<ISupportInitialize^>(this->pictureBoxLogo))->BeginInit();

            // ===== Header Panel =====
            this->panel1->BackColor = Color::FromArgb(83, 39, 112);
            this->panel1->Location = Point(96, 12);
            this->panel1->Size = Drawing::Size(1156, 116);

            this->panel1->Controls->Add(this->pictureBoxLogo);
            this->panel1->Controls->Add(this->lblTitle);

            // ===== Logo =====
            
            this->pictureBoxLogo->Location = Point(1035, 7);
            this->pictureBoxLogo->Size = Drawing::Size(101, 98);
            this->pictureBoxLogo->SizeMode = PictureBoxSizeMode::Zoom;

            // ===== Title =====
            this->lblTitle->Dock = DockStyle::Fill;
            this->lblTitle->Font = gcnew Drawing::Font(L"Arial", 24, FontStyle::Bold);
            this->lblTitle->ForeColor = Color::White;
            this->lblTitle->Text = L"Admin Page";
            this->lblTitle->TextAlign = ContentAlignment::MiddleCenter;

            // ===== Buttons =====
            SetupButton(this->btnStudents, L"Students", Point(240, 300));
            SetupButton(this->btnDepartments, L"Departments", Point(520, 300));
            SetupButton(this->btnResult, L"Results", Point(800, 300));

            // Back button
            this->buttonBack->Text = L"<";
            this->buttonBack->Location = Point(15, 20);
            this->buttonBack->Size = Drawing::Size(75, 49);

            // ===== Form =====
            this->BackColor = Color::FromArgb(118, 63, 155);
            this->ClientSize = Drawing::Size(1264, 681);
            this->StartPosition = FormStartPosition::CenterScreen;
            this->MaximizeBox = false;

            this->Controls->Add(this->buttonBack);
            this->Controls->Add(this->btnStudents);
            this->Controls->Add(this->btnDepartments);
            this->Controls->Add(this->btnResult);
            this->Controls->Add(this->panel1);

            (cli::safe_cast<ISupportInitialize^>(this->pictureBoxLogo))->EndInit();
            this->panel1->ResumeLayout(false);
            this->ResumeLayout(false);
        }
#pragma endregion

        // ===== Helper for buttons =====
    private:
        void SetupButton(Button^ btn, String^ text, Point location)
        {
            btn->Text = text;
            btn->Location = location;
            btn->Size = Drawing::Size(240, 60);
            btn->BackColor = Color::FromArgb(90, 40, 120);
            btn->FlatStyle = FlatStyle::Flat;
            btn->FlatAppearance->BorderSize = 0;
            btn->Font = gcnew Drawing::Font(L"Arial", 18, FontStyle::Bold);
            btn->ForeColor = Color::White;
        }
    };
}
