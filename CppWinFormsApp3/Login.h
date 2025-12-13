#pragma once
#include <Windows.h>
namespace CppWinFormsApp3 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    namespace CppWinFormsApp3 { ref class MyForm1; };
    namespace CppWinFormsApp3 { ref class Admin_Page; };
#include "Main_Student.h"
#include "Admin_Page.h"



    public ref class Login : public System::Windows::Forms::Form
    {
    public:
        Login(void)
        {
            InitializeComponent();

        }

    protected:
        ~Login()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::TextBox^ txtUsername;
    private: System::Windows::Forms::TextBox^ txtPassword;
    private: System::Windows::Forms::Button^ btnLogin;
    private: System::Windows::Forms::Label^ lblUsername;
    private: System::Windows::Forms::Label^ lblPassword;
    private: System::Windows::Forms::Label^ lblMessage;
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::Button^ button1;

    private:
        System::ComponentModel::Container^ components;

        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
            this->txtUsername = (gcnew System::Windows::Forms::TextBox());
            this->txtPassword = (gcnew System::Windows::Forms::TextBox());
            this->btnLogin = (gcnew System::Windows::Forms::Button());
            this->lblUsername = (gcnew System::Windows::Forms::Label());
            this->lblPassword = (gcnew System::Windows::Forms::Label());
            this->lblMessage = (gcnew System::Windows::Forms::Label());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->panel1->SuspendLayout();
            this->SuspendLayout();
            // 
            // txtUsername
            // 
            this->txtUsername->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->txtUsername->Location = System::Drawing::Point(249, 62);
            this->txtUsername->Multiline = true;
            this->txtUsername->Name = L"txtUsername";
            this->txtUsername->Size = System::Drawing::Size(221, 31);
            this->txtUsername->TabIndex = 1;
            this->txtUsername->TextChanged += gcnew System::EventHandler(this, &Login::txtUsername_TextChanged);
            // 
            // txtPassword
            // 
            this->txtPassword->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->txtPassword->Location = System::Drawing::Point(249, 103);
            this->txtPassword->Multiline = true;
            this->txtPassword->Name = L"txtPassword";
            this->txtPassword->PasswordChar = '*';
            this->txtPassword->Size = System::Drawing::Size(221, 31);
            this->txtPassword->TabIndex = 3;
            // 
            // btnLogin
            // 
            this->btnLogin->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->btnLogin->Location = System::Drawing::Point(175, 190);
            this->btnLogin->Name = L"btnLogin";
            this->btnLogin->Size = System::Drawing::Size(188, 50);
            this->btnLogin->TabIndex = 4;
            this->btnLogin->Text = L"Login";
            this->btnLogin->Click += gcnew System::EventHandler(this, &Login::btnLogin_Click);
            // 
            // lblUsername
            // 
            this->lblUsername->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->lblUsername->BackColor = System::Drawing::Color::Transparent;
            this->lblUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblUsername->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->lblUsername->Location = System::Drawing::Point(73, 103);
            this->lblUsername->Name = L"lblUsername";
            this->lblUsername->Size = System::Drawing::Size(159, 31);
            this->lblUsername->TabIndex = 0;
            this->lblUsername->Text = L"National Number";
            this->lblUsername->Click += gcnew System::EventHandler(this, &Login::lblUsername_Click);
            // 
            // lblPassword
            // 
            this->lblPassword->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->lblPassword->BackColor = System::Drawing::Color::Transparent;
            this->lblPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblPassword->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->lblPassword->Location = System::Drawing::Point(83, 62);
            this->lblPassword->Name = L"lblPassword";
            this->lblPassword->Size = System::Drawing::Size(137, 31);
            this->lblPassword->TabIndex = 2;
            this->lblPassword->Text = L"Student Code";
            this->lblPassword->Click += gcnew System::EventHandler(this, &Login::lblPassword_Click);
            // 
            // lblMessage
            // 
            this->lblMessage->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->lblMessage->BackColor = System::Drawing::Color::Transparent;
            this->lblMessage->ForeColor = System::Drawing::Color::Red;
            this->lblMessage->Location = System::Drawing::Point(530, 48);
            this->lblMessage->Name = L"lblMessage";
            this->lblMessage->Size = System::Drawing::Size(250, 20);
            this->lblMessage->TabIndex = 5;
            // 
            // panel1
            // 
            this->panel1->Controls->Add(this->button1);
            this->panel1->Controls->Add(this->txtUsername);
            this->panel1->Controls->Add(this->lblUsername);
            this->panel1->Controls->Add(this->btnLogin);
            this->panel1->Controls->Add(this->lblPassword);
            this->panel1->Controls->Add(this->txtPassword);
            this->panel1->Location = System::Drawing::Point(205, 167);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(539, 257);
            this->panel1->TabIndex = 6;
            this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Login::panel1_Paint);
            // 
            // button1
            // 
            this->button1->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->button1->Location = System::Drawing::Point(13, 188);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(143, 55);
            this->button1->TabIndex = 7;
            this->button1->Text = L"Fuck u steve";
            this->button1->Click += gcnew System::EventHandler(this, &Login::button1_Click);
            // 
            // Login
            // 
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(939, 590);
            this->Controls->Add(this->lblMessage);
            this->Controls->Add(this->panel1);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->MaximizeBox = false;
            this->Name = L"Login";
            this->Text = L"Login Page";
            this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->ResumeLayout(false);

        }


    private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
        String^ username = txtUsername->Text;
        String^ password = txtPassword->Text;

        if (username == "admin" && password == "1234") {
            lblMessage->ForeColor = System::Drawing::Color::Green;
            lblMessage->Text = "Login Successful!";

            // Create the Main_student form, not MyForm1
            CppWinFormsApp3::Main_student^ mainForm = gcnew CppWinFormsApp3::Main_student();
            mainForm->Show();  // Show the main form
            this->Hide();      // Hide the login form
        }
        else {
            lblMessage->ForeColor = System::Drawing::Color::Red;
            lblMessage->Text = "Invalid Username or Password";
        }
    }
    private: System::Void Login_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
        Panel^ pnl = dynamic_cast<Panel^>(sender);
        if (!pnl) return;

        // Rounded rectangle path
        int radius = 30;
        System::Drawing::Drawing2D::GraphicsPath^ path = gcnew System::Drawing::Drawing2D::GraphicsPath();
        path->AddArc(0, 0, radius, radius, 180, 90); // Top-left
        path->AddArc(pnl->Width - radius, 0, radius, radius, 270, 90); // Top-right
        path->AddArc(pnl->Width - radius, pnl->Height - radius, radius, radius, 0, 90); // Bottom-right
        path->AddArc(0, pnl->Height - radius, radius, radius, 90, 90); // Bottom-left
        path->CloseFigure();

        // Set the panel region to rounded rectangle (clips edges)
        pnl->Region = gcnew System::Drawing::Region(path);

        // Gradient background
        System::Drawing::Drawing2D::LinearGradientBrush^ brush =
            gcnew System::Drawing::Drawing2D::LinearGradientBrush(
                pnl->ClientRectangle,
                System::Drawing::Color::FromArgb(0x5C, 0x0F, 0x8F), // Purple (left)
                System::Drawing::Color::FromArgb(0xB3, 0xB3, 0xB3), // Gray (right)
                System::Drawing::Drawing2D::LinearGradientMode::Horizontal);

        e->Graphics->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::AntiAlias;
        e->Graphics->FillPath(brush, path);
    }

    private: System::Void lblUsername_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void lblPassword_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void txtUsername_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }

    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        CppWinFormsApp3::Admin_Page^ mainForm = gcnew CppWinFormsApp3::Admin_Page();
        mainForm->Show();  // Show the main form
        this->Hide();      // Hide the login form
    }
};
}