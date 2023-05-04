#pragma once

namespace SPProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace IO;

	/// <summary>
	/// Summary for AddText
	/// </summary>
	public ref class AddText : public System::Windows::Forms::Form
	{
	public:
		AddText(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		// passing data from MyForm form to AddText form
		AddText(array<String^>^ temp1, array<String^>^ temp2, array<String^>^ temp3)
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
		~AddText()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;



	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ newTextBox;
	private: System::Windows::Forms::Button^ enterButton;
	private: System::Windows::Forms::Button^ backButton;
	private: System::Windows::Forms::ComboBox^ documentNameComboBox;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddText::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->newTextBox = (gcnew System::Windows::Forms::TextBox());
			this->enterButton = (gcnew System::Windows::Forms::Button());
			this->backButton = (gcnew System::Windows::Forms::Button());
			this->documentNameComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::LightBlue;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::PaleVioletRed;
			this->label1->Location = System::Drawing::Point(7, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(188, 28);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Document Name";
			this->label1->Click += gcnew System::EventHandler(this, &AddText::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::LightBlue;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::PaleVioletRed;
			this->label2->Location = System::Drawing::Point(7, 178);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 28);
			this->label2->TabIndex = 4;
			this->label2->Text = L"New Text";
			this->label2->Click += gcnew System::EventHandler(this, &AddText::label2_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::PaleVioletRed;
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Location = System::Drawing::Point(12, 264);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(249, 2);
			this->panel3->TabIndex = 11;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AddText::panel3_Paint);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::PaleVioletRed;
			this->panel4->Location = System::Drawing::Point(0, -7);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(249, 2);
			this->panel4->TabIndex = 3;
			// 
			// newTextBox
			// 
			this->newTextBox->BackColor = System::Drawing::Color::LightBlue;
			this->newTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->newTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->newTextBox->Location = System::Drawing::Point(12, 234);
			this->newTextBox->Multiline = true;
			this->newTextBox->Name = L"newTextBox";
			this->newTextBox->Size = System::Drawing::Size(249, 32);
			this->newTextBox->TabIndex = 10;
			this->newTextBox->TextChanged += gcnew System::EventHandler(this, &AddText::newTextBox_TextChanged);
			this->newTextBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &AddText::newTextBox_KeyDown);
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
			this->enterButton->TabIndex = 13;
			this->enterButton->Text = L"Enter";
			this->enterButton->UseVisualStyleBackColor = false;
			this->enterButton->Click += gcnew System::EventHandler(this, &AddText::enterButton_Click);
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
			this->backButton->TabIndex = 14;
			this->backButton->Text = L"Back";
			this->backButton->UseVisualStyleBackColor = false;
			this->backButton->Click += gcnew System::EventHandler(this, &AddText::backButton_Click);
			// 
			// documentNameComboBox
			// 
			this->documentNameComboBox->FormattingEnabled = true;
			this->documentNameComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Adventure", L"Cooking", L"Horror",
					L"Productivity", L"Programming", L"Social"
			});
			this->documentNameComboBox->Location = System::Drawing::Point(12, 95);
			this->documentNameComboBox->Name = L"documentNameComboBox";
			this->documentNameComboBox->Size = System::Drawing::Size(249, 21);
			this->documentNameComboBox->TabIndex = 16;
			this->documentNameComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &AddText::documentNameComboBox_SelectedIndexChanged);
			this->documentNameComboBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &AddText::documentNameComboBox_KeyDown);
			// 
			// AddText
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(595, 435);
			this->Controls->Add(this->documentNameComboBox);
			this->Controls->Add(this->backButton);
			this->Controls->Add(this->enterButton);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->newTextBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AddText";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AddText";
			this->Load += gcnew System::EventHandler(this, &AddText::AddText_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AddText::AddText_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &AddText::AddText_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &AddText::AddText_MouseUp);
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		// the documents' contents and titles
		static array<String^>^ document_content = gcnew array<String^>(6);
		static array<String^>^ document_lowercase_content = gcnew array<String^>(6);
		static array<String^>^ document_title = gcnew array<String^>(6);

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

		// adding text function
		Void Adding_Text()
		{
			for (int i = 0; i < 6; i++)
			{
				// finding the array index by using its title
				if (document_title[i] == documentNameComboBox->Text)
				{
					// adding text to content's arrays
					document_content[i] = document_content[i]->Insert(document_content[i]->Length, " " + newTextBox->Text);
					document_lowercase_content[i] = document_lowercase_content[i]->Insert(document_lowercase_content[i]->Length, " " + Convert_To_Lower(newTextBox->Text));

					// adding text to its document
					StreamWriter file(Document_Name(i), true);
					file.Write(" " + newTextBox->Text);

					// operation is done!
					MessageBox::Show("The text '" + newTextBox->Text + "' has been successfully added to Document : " + document_title[i], "Done!", MessageBoxButtons::OK, MessageBoxIcon::Information);

					// returning to MyForm form
					AddText::Hide();
				}
			}
		}

	private: System::Void AddText_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void newTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void enterButton_Click(System::Object^ sender, System::EventArgs^ e) {

	// start adding operation
	Adding_Text();
}
private: System::Void backButton_Click(System::Object^ sender, System::EventArgs^ e) {

	// returning to MyForm form
	AddText::Hide();
}
private: System::Void documentNameComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}


	   //dragging the form
	   bool dragging = false;
	   Point mouse;

private: System::Void AddText_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	//enable dragging
	dragging = true;
	mouse.X = e->X;
	mouse.Y = e->Y;
}
private: System::Void AddText_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	//check whether able to move
	if (dragging)
	{
		Point currentScreenPosition = PointToScreen(Point(e->X, e->Y));
		Location = Point(currentScreenPosition.X - mouse.X, currentScreenPosition.Y - mouse.Y);
	}
}
private: System::Void AddText_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	//disable dragging
	dragging = false;
}


	   // keyboard Enter Key
private: System::Void documentNameComboBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

	// if user pressed enter after choosing the document name
	if (e->KeyValue == (int)Keys::Enter)
	{
		// go to newTextBox automatically
		newTextBox->Focus();
	}
}
private: System::Void newTextBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

	// if user pressed enter after inserting the new text
	if (e->KeyValue == (int)Keys::Enter)
	{
		// press enterButton automatically
		enterButton->PerformClick();
	}
}
};
}
