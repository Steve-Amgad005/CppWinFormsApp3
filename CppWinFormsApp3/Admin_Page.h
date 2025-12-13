#pragma once
#include<Windows.h>
namespace CppWinFormsApp3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class Admin_Page : public System::Windows::Forms::Form
	{
	public:
		Admin_Page(void)
		{
			InitializeComponent();

			RoundButton(btnStudents, 30);
			RoundButton(btnDepartments, 30);
			RoundButton(btnResult, 30);
		}

	protected:

		~Admin_Page()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ lblTitle;
	private: System::Windows::Forms::PictureBox^ pictureBoxLogo;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button2;


	protected:

	private:
		void RoundButton(System::Windows::Forms::Button^ btn, int radius)
		{
			System::Drawing::Drawing2D::GraphicsPath^ path =
				gcnew System::Drawing::Drawing2D::GraphicsPath();

			path->AddArc(0, 0, radius, radius, 180, 90);
			path->AddArc(btn->Width - radius, 0, radius, radius, 270, 90);
			path->AddArc(btn->Width - radius, btn->Height - radius, radius, radius, 0, 90);
			path->AddArc(0, btn->Height - radius, radius, radius, 90, 90);
			path->CloseAllFigures();

			btn->Region = gcnew System::Drawing::Region(path);
		}
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Admin_Page::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBoxLogo = (gcnew System::Windows::Forms::PictureBox());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxLogo))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->AccessibleName = L"panelHeader";
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(83)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->panel1->Controls->Add(this->pictureBoxLogo);
			this->panel1->Controls->Add(this->lblTitle);
			this->panel1->Location = System::Drawing::Point(96, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1156, 116);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Admin_Page::panel1_Paint);
			// 
			// pictureBoxLogo
			// 
			this->pictureBoxLogo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBoxLogo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxLogo.Image")));
			this->pictureBoxLogo->Location = System::Drawing::Point(1035, 7);
			this->pictureBoxLogo->Name = L"pictureBoxLogo";
			this->pictureBoxLogo->Size = System::Drawing::Size(101, 98);
			this->pictureBoxLogo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxLogo->TabIndex = 1;
			this->pictureBoxLogo->TabStop = false;
			// 
			// lblTitle
			// 
			this->lblTitle->AccessibleDescription = L"";
			this->lblTitle->AccessibleName = L"";
			this->lblTitle->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle->ForeColor = System::Drawing::Color::White;
			this->lblTitle->Location = System::Drawing::Point(0, 0);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(1156, 116);
			this->lblTitle->TabIndex = 0;
			this->lblTitle->Text = L"????? ??????? ??????? ???????????";
			this->lblTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblTitle->Click += gcnew System::EventHandler(this, &Admin_Page::label1_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(90)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(800, 300);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(240, 60);
			this->button3->TabIndex = 1;
			this->button3->Text = L"??????";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Admin_Page::button1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(90)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(520, 300);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(240, 60);
			this->button1->TabIndex = 1;
			this->button1->Text = L"???????";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Admin_Page::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(90)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(240, 300);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(240, 60);
			this->button2->TabIndex = 1;
			this->button2->Text = L"????? ????? ??????";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Admin_Page::button1_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(90)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(15, 20);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 49);
			this->button4->TabIndex = 2;
			this->button4->Text = L"?";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// Admin_Page
			// 
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(118)), static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->panel1);
			this->MaximizeBox = false;
			this->Name = L"Admin_Page";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &Admin_Page::Admin_Page_Load_1);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxLogo))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Admin_Page_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Admin_Page_Load_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
