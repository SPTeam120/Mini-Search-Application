#pragma once
#include "ModificationText.h"

namespace SPProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace IO;

	/// <summary>
	/// Summary for Search
	/// </summary>
	public ref class Search : public System::Windows::Forms::Form
	{
	public:
		Search(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		// passing data from MyForm form to Search form
		Search(array<String^>^ temp1, array<String^>^ temp2, array<String^>^ temp3)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			document_content = temp1;
			document_lowercase_content = temp2;
			document_title = temp3;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Search()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ searchTextBox;
	private: System::Windows::Forms::Button^ enterButton;
	private: System::Windows::Forms::Button^ backButton;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Search::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->searchTextBox = (gcnew System::Windows::Forms::TextBox());
			this->enterButton = (gcnew System::Windows::Forms::Button());
			this->backButton = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::LightBlue;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::PaleVioletRed;
			this->label1->Location = System::Drawing::Point(46, 84);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(190, 28);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Text to search for";
			this->label1->Click += gcnew System::EventHandler(this, &Search::label1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::PaleVioletRed;
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(6, 197);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(286, 2);
			this->panel1->TabIndex = 6;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Search::panel1_Paint);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::PaleVioletRed;
			this->panel2->Location = System::Drawing::Point(0, -7);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(249, 2);
			this->panel2->TabIndex = 3;
			// 
			// searchTextBox
			// 
			this->searchTextBox->BackColor = System::Drawing::Color::LightBlue;
			this->searchTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->searchTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchTextBox->Location = System::Drawing::Point(6, 167);
			this->searchTextBox->Multiline = true;
			this->searchTextBox->Name = L"searchTextBox";
			this->searchTextBox->Size = System::Drawing::Size(286, 32);
			this->searchTextBox->TabIndex = 5;
			this->searchTextBox->TextChanged += gcnew System::EventHandler(this, &Search::searchTextBox_TextChanged);
			this->searchTextBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Search::searchTextBox_KeyDown);
			// 
			// enterButton
			// 
			this->enterButton->BackColor = System::Drawing::Color::PaleVioletRed;
			this->enterButton->FlatAppearance->BorderSize = 0;
			this->enterButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->enterButton->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->enterButton->ForeColor = System::Drawing::Color::LightBlue;
			this->enterButton->Location = System::Drawing::Point(12, 323);
			this->enterButton->Margin = System::Windows::Forms::Padding(2);
			this->enterButton->Name = L"enterButton";
			this->enterButton->Size = System::Drawing::Size(123, 44);
			this->enterButton->TabIndex = 12;
			this->enterButton->Text = L"Enter";
			this->enterButton->UseVisualStyleBackColor = false;
			this->enterButton->Click += gcnew System::EventHandler(this, &Search::enterButton_Click);
			// 
			// backButton
			// 
			this->backButton->BackColor = System::Drawing::Color::LightBlue;
			this->backButton->FlatAppearance->BorderSize = 0;
			this->backButton->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backButton->ForeColor = System::Drawing::Color::PaleVioletRed;
			this->backButton->Location = System::Drawing::Point(166, 323);
			this->backButton->Margin = System::Windows::Forms::Padding(2);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(123, 44);
			this->backButton->TabIndex = 13;
			this->backButton->Text = L"Back";
			this->backButton->UseVisualStyleBackColor = false;
			this->backButton->Click += gcnew System::EventHandler(this, &Search::backButton_Click);
			// 
			// Search
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(595, 435);
			this->Controls->Add(this->backButton);
			this->Controls->Add(this->enterButton);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->searchTextBox);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Search";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Search";
			this->Load += gcnew System::EventHandler(this, &Search::Search_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Search::Search_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Search::Search_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Search::Search_MouseUp);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		// the documents' contents and titles
		static array<String^>^ document_content = gcnew array<String^>(6);
		static array<String^>^ document_lowercase_content = gcnew array<String^>(6);
		static array<String^>^ document_title = gcnew array<String^>(6);
		
		// converting text to lowercase function
		String^ Convert_To_Lower(String^ s)
		{
			s = s->ToLower();
			return s;
		}

		// searching in the documents
		Void Searching()
		{
			// taking the text needed to search for from the user
			String^ Required_Text = searchTextBox->Text;

			bool isFound = false;
			int i = 0, Document_Index;
			for (; i < 6; i++)
			{
				// converting the text to lowercase
				// and searching for it in the content's array
				Document_Index = document_lowercase_content[i]->IndexOf(Convert_To_Lower(Required_Text));
				if (Document_Index != -1)
				{
					isFound = true;
					break;
				}
			}
			if (isFound) // asking whether user wants to do another operation
			{
				if (MessageBox::Show("The text '" + Required_Text + "' exists in the Document : " + document_title[i] + "\nDo you want to update or delete it?", "Found!", MessageBoxButtons::YesNo, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::Yes)
				{
					// if yes
					// going to ModificationText form
					ModificationText^ obj3 = gcnew ModificationText(document_content, document_lowercase_content, document_title, Required_Text, i, Document_Index);
					obj3->ShowDialog();

					// empty search box
					searchTextBox->Clear();
				}
				else
				{
					// if no
					// empty search box
					searchTextBox->Clear();
				}
			}
			else
			{
				// text not found
				MessageBox::Show("The text '" + Required_Text + "' doesn't exist in the included Documents!\nPlease try again", "Bad Luck!", MessageBoxButtons::OK, MessageBoxIcon::Error);

				// empty search box
				searchTextBox->Clear();
			}
		}

	private: System::Void Search_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void searchTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void enterButton_Click(System::Object^ sender, System::EventArgs^ e) {

	// start searching operation
	Searching();
}
private: System::Void backButton_Click(System::Object^ sender, System::EventArgs^ e) {

	// returning to the MyForm form
	Search::Hide();
}


	   //dragging the form
	   bool dragging = false;
	   Point mouse;

private: System::Void Search_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	//enable dragging
	dragging = true;
	mouse.X = e->X;
	mouse.Y = e->Y;
}
private: System::Void Search_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	//check whether able to move
	if (dragging)
	{
		Point currentScreenPosition = PointToScreen(Point(e->X, e->Y));
		Location = Point(currentScreenPosition.X - mouse.X, currentScreenPosition.Y - mouse.Y);
	}
}
private: System::Void Search_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	//disable dragging
	dragging = false;
}


	   // keyboard Enter Key
private: System::Void searchTextBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

	// if user pressed enter after inserting the searched text
	if (e->KeyValue == (int)Keys::Enter)
	{
		// press enterButton automatically
		enterButton->PerformClick();
	}
}
};
}
