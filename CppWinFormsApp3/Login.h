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
#include "Main_Student.h"


    public ref class Login : public System::Windows::Forms::Form
    {
    public:
        Login(void)
        {
            InitializeComponent();

            RoundButton(btnStudents, 30);
            RoundButton(btnDepartments, 30);
            RoundButton(btnResult, 30);

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
            this->SuspendLayout();
            // 
            // txtUsername
            // 
            this->txtUsername->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->txtUsername->Location = System::Drawing::Point(395, 163);
            this->txtUsername->Name = L"txtUsername";
            this->txtUsername->Size = System::Drawing::Size(150, 20);
            this->txtUsername->TabIndex = 1;
            // 
            // txtPassword
            // 
            this->txtPassword->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->txtPassword->Location = System::Drawing::Point(395, 203);
            this->txtPassword->Name = L"txtPassword";
            this->txtPassword->PasswordChar = '*';
            this->txtPassword->Size = System::Drawing::Size(150, 20);
            this->txtPassword->TabIndex = 3;
            // 
            // btnLogin
            // 
            this->btnLogin->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->btnLogin->Location = System::Drawing::Point(395, 243);
            this->btnLogin->Name = L"btnLogin";
            this->btnLogin->Size = System::Drawing::Size(75, 23);
            this->btnLogin->TabIndex = 4;
            this->btnLogin->Text = L"Login";
            this->btnLogin->Click += gcnew System::EventHandler(this, &Login::btnLogin_Click);
            // 
            // lblUsername
            // 
            this->lblUsername->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->lblUsername->BackColor = System::Drawing::Color::Transparent;
            this->lblUsername->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->lblUsername->Location = System::Drawing::Point(315, 163);
            this->lblUsername->Name = L"lblUsername";
            this->lblUsername->Size = System::Drawing::Size(70, 20);
            this->lblUsername->TabIndex = 0;
            this->lblUsername->Text = L"Username:";
            // 
            // lblPassword
            // 
            this->lblPassword->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->lblPassword->BackColor = System::Drawing::Color::Transparent;
            this->lblPassword->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->lblPassword->Location = System::Drawing::Point(315, 203);
            this->lblPassword->Name = L"lblPassword";
            this->lblPassword->Size = System::Drawing::Size(70, 20);
            this->lblPassword->TabIndex = 2;
            this->lblPassword->Text = L"Password:";
            // 
            // lblMessage
            // 
            this->lblMessage->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->lblMessage->BackColor = System::Drawing::Color::Transparent;
            this->lblMessage->ForeColor = System::Drawing::Color::Red;
            this->lblMessage->Location = System::Drawing::Point(370, 283);
            this->lblMessage->Name = L"lblMessage";
            this->lblMessage->Size = System::Drawing::Size(250, 20);
            this->lblMessage->TabIndex = 5;
            // 
            // Login
            // 
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(863, 496);
            this->Controls->Add(this->lblUsername);
            this->Controls->Add(this->txtUsername);
            this->Controls->Add(this->lblPassword);
            this->Controls->Add(this->txtPassword);
            this->Controls->Add(this->btnLogin);
            this->Controls->Add(this->lblMessage);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->MaximizeBox = false;
            this->Name = L"Login";
            this->Text = L"Login Page";
            this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

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
};
}
