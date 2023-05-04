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
	/// Summary for UpdateText
	/// </summary>
	public ref class UpdateText : public System::Windows::Forms::Form
	{
	public:
		UpdateText(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		// passing data from ModificationText form to UpdateText form
		UpdateText(array<String^>^ temp1, array<String^>^ temp2, array<String^>^ temp3, String^ str, int num1)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			document_content = temp1;
			document_lowercase_content = temp2;
			document_title = temp3;
			Found_Text = str;
			Array_Index = num1;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UpdateText()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ updateTextBox;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UpdateText::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->updateTextBox = (gcnew System::Windows::Forms::TextBox());
			this->enterButton = (gcnew System::Windows::Forms::Button());
			this->backButton = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::LightBlue;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::PaleVioletRed;
			this->label2->Location = System::Drawing::Point(35, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(214, 28);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Text to replace with";
			this->label2->Click += gcnew System::EventHandler(this, &UpdateText::label2_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::PaleVioletRed;
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(6, 197);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(286, 2);
			this->panel1->TabIndex = 8;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &UpdateText::panel1_Paint);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::PaleVioletRed;
			this->panel2->Location = System::Drawing::Point(0, -7);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(249, 2);
			this->panel2->TabIndex = 3;
			// 
			// updateTextBox
			// 
			this->updateTextBox->BackColor = System::Drawing::Color::LightBlue;
			this->updateTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->updateTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->updateTextBox->Location = System::Drawing::Point(6, 167);
			this->updateTextBox->Multiline = true;
			this->updateTextBox->Name = L"updateTextBox";
			this->updateTextBox->Size = System::Drawing::Size(286, 32);
			this->updateTextBox->TabIndex = 7;
			this->updateTextBox->TextChanged += gcnew System::EventHandler(this, &UpdateText::updateTextBox_TextChanged);
			this->updateTextBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &UpdateText::updateTextBox_KeyDown);
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
			this->enterButton->Click += gcnew System::EventHandler(this, &UpdateText::enterButton_Click);
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
			this->backButton->Click += gcnew System::EventHandler(this, &UpdateText::backButton_Click);
			// 
			// UpdateText
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(595, 435);
			this->Controls->Add(this->backButton);
			this->Controls->Add(this->enterButton);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->updateTextBox);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"UpdateText";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"UpdateText";
			this->Load += gcnew System::EventHandler(this, &UpdateText::UpdateText_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &UpdateText::UpdateText_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &UpdateText::UpdateText_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &UpdateText::UpdateText_MouseUp);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		// the documents' contents and titles
		static array<String^>^ document_content = gcnew array<String^>(6);
		static array<String^>^ document_lowercase_content = gcnew array<String^>(6);
		static array<String^>^ document_title = gcnew array<String^>(6);
		
		// found text needed to modify
		// array index of the text's document
		String^ Found_Text;
		int Array_Index;

		// returning the document name function
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

		// updating the found text function
		Void Update_Found_Text()
		{
			// updating text in content's arrays
			document_content[Array_Index] = document_content[Array_Index]->Replace(Found_Text, updateTextBox->Text);
			document_lowercase_content[Array_Index] = document_lowercase_content[Array_Index]->Replace(Convert_To_Lower(Found_Text), Convert_To_Lower(updateTextBox->Text));

			// updating text in its document
			// by storing the modified text in it
			StreamWriter file(Document_Name(Array_Index));
			file.Write(document_content[Array_Index]);
			
			// operation is done!
			MessageBox::Show("The text '" + Found_Text + "' has been successfully replaced with '" + updateTextBox->Text + "' in Document : " + document_title[Array_Index], "Done!", MessageBoxButtons::OK, MessageBoxIcon::Information);

			// returning to the ModificationText form
			UpdateText::Hide();
		}

	private: System::Void UpdateText_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void updateTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void enterButton_Click(System::Object^ sender, System::EventArgs^ e) {

	// start updating operation
	Update_Found_Text();
}
private: System::Void backButton_Click(System::Object^ sender, System::EventArgs^ e) {

	// returning to the ModificationText form
	UpdateText::Hide();
}


	   //dragging the form
	   bool dragging = false;
	   Point mouse;

private: System::Void UpdateText_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	//enable dragging
	dragging = true;
	mouse.X = e->X;
	mouse.Y = e->Y;
}
private: System::Void UpdateText_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	//check whether able to move
	if (dragging)
	{
		Point currentScreenPosition = PointToScreen(Point(e->X, e->Y));
		Location = Point(currentScreenPosition.X - mouse.X, currentScreenPosition.Y - mouse.Y);
	}
}
private: System::Void UpdateText_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	//disable dragging
	dragging = false;
}


	   // keyboard Enter Key
private: System::Void updateTextBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

	// if user pressed enter after inserting the updated text
	if (e->KeyValue == (int)Keys::Enter)
	{
		// press enterButton automatically
		enterButton->PerformClick();
	}
}
};
}
