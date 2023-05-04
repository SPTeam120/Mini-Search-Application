#pragma once
#include "AddText.h"
#include "Search.h"

namespace SPProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace IO;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			// hiding AboutPanel at the start of the project
			AboutPanel->Hide();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ searchButton;
	private: System::Windows::Forms::Button^ addButton;

	private: System::Windows::Forms::Label^ AboutLabel;






	private: System::Windows::Forms::Button^ exitButton;
	private: System::Windows::Forms::Panel^ AboutPanel;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;







	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->searchButton = (gcnew System::Windows::Forms::Button());
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->AboutLabel = (gcnew System::Windows::Forms::Label());
			this->exitButton = (gcnew System::Windows::Forms::Button());
			this->AboutPanel = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->AboutPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::PowderBlue;
			this->label1->Font = (gcnew System::Drawing::Font(L"Californian FB", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::PaleVioletRed;
			this->label1->Location = System::Drawing::Point(2, 7);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(275, 55);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Mini Search ";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// searchButton
			// 
			this->searchButton->BackColor = System::Drawing::Color::PaleVioletRed;
			this->searchButton->FlatAppearance->BorderSize = 0;
			this->searchButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->searchButton->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchButton->ForeColor = System::Drawing::Color::LightBlue;
			this->searchButton->Location = System::Drawing::Point(18, 197);
			this->searchButton->Margin = System::Windows::Forms::Padding(2);
			this->searchButton->Name = L"searchButton";
			this->searchButton->Size = System::Drawing::Size(123, 44);
			this->searchButton->TabIndex = 3;
			this->searchButton->Text = L"Search";
			this->searchButton->UseVisualStyleBackColor = false;
			this->searchButton->Click += gcnew System::EventHandler(this, &MyForm::searchButton_Click);
			// 
			// addButton
			// 
			this->addButton->BackColor = System::Drawing::Color::LightBlue;
			this->addButton->FlatAppearance->BorderSize = 0;
			this->addButton->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addButton->ForeColor = System::Drawing::Color::PaleVioletRed;
			this->addButton->Location = System::Drawing::Point(172, 197);
			this->addButton->Margin = System::Windows::Forms::Padding(2);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(123, 44);
			this->addButton->TabIndex = 4;
			this->addButton->Text = L"Add ";
			this->addButton->UseVisualStyleBackColor = false;
			this->addButton->Click += gcnew System::EventHandler(this, &MyForm::addButton_Click);
			// 
			// AboutLabel
			// 
			this->AboutLabel->AutoSize = true;
			this->AboutLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(183)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)));
			this->AboutLabel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AboutLabel->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AboutLabel->ForeColor = System::Drawing::Color::PaleVioletRed;
			this->AboutLabel->Location = System::Drawing::Point(527, 337);
			this->AboutLabel->Name = L"AboutLabel";
			this->AboutLabel->Size = System::Drawing::Size(65, 22);
			this->AboutLabel->TabIndex = 6;
			this->AboutLabel->Text = L"About";
			this->AboutLabel->Click += gcnew System::EventHandler(this, &MyForm::AboutLabel_Click);
			// 
			// exitButton
			// 
			this->exitButton->BackColor = System::Drawing::Color::LightBlue;
			this->exitButton->FlatAppearance->BorderColor = System::Drawing::Color::LightBlue;
			this->exitButton->FlatAppearance->BorderSize = 0;
			this->exitButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exitButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"exitButton.Image")));
			this->exitButton->Location = System::Drawing::Point(561, 7);
			this->exitButton->Name = L"exitButton";
			this->exitButton->Size = System::Drawing::Size(23, 23);
			this->exitButton->TabIndex = 8;
			this->exitButton->UseVisualStyleBackColor = false;
			this->exitButton->Click += gcnew System::EventHandler(this, &MyForm::exitButton_Click);
			// 
			// AboutPanel
			// 
			this->AboutPanel->BackColor = System::Drawing::Color::LightBlue;
			this->AboutPanel->Controls->Add(this->button1);
			this->AboutPanel->Controls->Add(this->textBox1);
			this->AboutPanel->Controls->Add(this->label2);
			this->AboutPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->AboutPanel->ForeColor = System::Drawing::Color::PaleVioletRed;
			this->AboutPanel->Location = System::Drawing::Point(0, 0);
			this->AboutPanel->Name = L"AboutPanel";
			this->AboutPanel->Size = System::Drawing::Size(595, 435);
			this->AboutPanel->TabIndex = 10;
			this->AboutPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::AboutPanel_Paint);
			// 
			// button1
			// 
			this->button1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button1->BackColor = System::Drawing::Color::PaleVioletRed;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::LightBlue;
			this->button1->Location = System::Drawing::Point(409, 346);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(123, 44);
			this->button1->TabIndex = 10;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::LightBlue;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 14.25F));
			this->textBox1->ForeColor = System::Drawing::Color::PaleVioletRed;
			this->textBox1->Location = System::Drawing::Point(54, 77);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(478, 255);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = resources->GetString(L"textBox1.Text");
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 18, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(49, 33);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 31);
			this->label2->TabIndex = 0;
			this->label2->Text = L"About";
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(595, 435);
			this->Controls->Add(this->AboutPanel);
			this->Controls->Add(this->exitButton);
			this->Controls->Add(this->AboutLabel);
			this->Controls->Add(this->addButton);
			this->Controls->Add(this->searchButton);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
			this->AboutPanel->ResumeLayout(false);
			this->AboutPanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		// the documents' contents and titles
		static array<String^>^ document_content = gcnew array<String^>(6);
		static array<String^>^ document_lowercase_content = gcnew array<String^>(6);
		static array<String^>^ document_title = gcnew array<String^> { "Adventure", "Cooking", "Horror", "Productivity", "Programming", "Social" };

		// returning the document's name function
		String^ Document_Name(int j)
		{
			String^ file = document_title[j] + ".txt";
			return file;
		}

		// converting text to lowercase function
		String^ Convert_To_Lower(String^ s)
		{
			s = s->ToLower();
			return s;
		}

		// storing the documents' contents into the content's arrays function
		Void Storage()
		{
			for (int i = 0; i < 6; ++i) {

				// opening the document to read
				// storing the document original content
				StreamReader file1(Document_Name(i));
				document_content[i] = file1.ReadToEnd();

				// opening the document to read
				// storing the document lowercase content
				StreamReader file2(Document_Name(i));
				document_lowercase_content[i] = Convert_To_Lower(file2.ReadToEnd());
			}
		}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void searchButton_Click(System::Object^ sender, System::EventArgs^ e) {

	// storing the documents' content into the content's arrays
	Storage();

	// going to the Search Form
	Search^ obj1 = gcnew Search(document_content, document_lowercase_content, document_title);
	obj1->ShowDialog();
}
private: System::Void addButton_Click(System::Object^ sender, System::EventArgs^ e) {

	// storing the documents' content into the content's arrays
	Storage();

	// going to the AddText Form
	AddText^ obj2 = gcnew AddText(document_content, document_lowercase_content, document_title);
	obj2->ShowDialog();
}
private: System::Void exitButton_Click(System::Object^ sender, System::EventArgs^ e) {

	// closing the application
	Application::Exit();
}


	   //dragging the form
	   bool dragging = false;
	   Point mouse;

private: System::Void MyForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	//enable dragging
	dragging = true;
	mouse.X = e->X;
	mouse.Y = e->Y;
}
private: System::Void MyForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	//check whether able to move
	if (dragging)
	{
		Point currentScreenPosition = PointToScreen(Point(e->X, e->Y));
		Location = Point(currentScreenPosition.X - mouse.X, currentScreenPosition.Y - mouse.Y);
	}
}
private: System::Void MyForm_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	//disable dragging
	dragging = false;
}


	   //AboutPanel
private: System::Void AboutLabel_Click(System::Object^ sender, System::EventArgs^ e) {
	AboutPanel->Show();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	AboutPanel->Hide();
}
private: System::Void AboutPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
