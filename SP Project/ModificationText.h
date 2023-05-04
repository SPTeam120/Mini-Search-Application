#pragma once
#include "UpdateText.h"

namespace SPProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace IO;

	/// <summary>
	/// Summary for ModificationText
	/// </summary>
	public ref class ModificationText : public System::Windows::Forms::Form
	{
	public:
		ModificationText(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		// passing data from Search form to ModificationText form
		ModificationText(array<String^>^ temp1, array<String^>^ temp2, array<String^>^ temp3, String^ str, int num1, int num2)
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
			Text_Index = num2;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ModificationText()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ updateButton;
	private: System::Windows::Forms::Button^ deleteButton;
	private: System::Windows::Forms::Button^ cancelButton;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ModificationText::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->updateButton = (gcnew System::Windows::Forms::Button());
			this->deleteButton = (gcnew System::Windows::Forms::Button());
			this->cancelButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::LightBlue;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::PaleVioletRed;
			this->label1->Location = System::Drawing::Point(62, 85);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(176, 34);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Modification";
			this->label1->Click += gcnew System::EventHandler(this, &ModificationText::label1_Click);
			// 
			// updateButton
			// 
			this->updateButton->BackColor = System::Drawing::Color::PaleVioletRed;
			this->updateButton->FlatAppearance->BorderSize = 0;
			this->updateButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->updateButton->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->updateButton->ForeColor = System::Drawing::Color::LightBlue;
			this->updateButton->Location = System::Drawing::Point(18, 197);
			this->updateButton->Margin = System::Windows::Forms::Padding(2);
			this->updateButton->Name = L"updateButton";
			this->updateButton->Size = System::Drawing::Size(123, 44);
			this->updateButton->TabIndex = 4;
			this->updateButton->Text = L"Update";
			this->updateButton->UseVisualStyleBackColor = false;
			this->updateButton->Click += gcnew System::EventHandler(this, &ModificationText::updateButton_Click);
			// 
			// deleteButton
			// 
			this->deleteButton->BackColor = System::Drawing::Color::PaleVioletRed;
			this->deleteButton->FlatAppearance->BorderSize = 0;
			this->deleteButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->deleteButton->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deleteButton->ForeColor = System::Drawing::Color::LightBlue;
			this->deleteButton->Location = System::Drawing::Point(172, 197);
			this->deleteButton->Margin = System::Windows::Forms::Padding(2);
			this->deleteButton->Name = L"deleteButton";
			this->deleteButton->Size = System::Drawing::Size(123, 44);
			this->deleteButton->TabIndex = 6;
			this->deleteButton->Text = L"Delete";
			this->deleteButton->UseVisualStyleBackColor = false;
			this->deleteButton->Click += gcnew System::EventHandler(this, &ModificationText::deleteButton_Click);
			// 
			// cancelButton
			// 
			this->cancelButton->BackColor = System::Drawing::Color::LightBlue;
			this->cancelButton->FlatAppearance->BorderSize = 0;
			this->cancelButton->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancelButton->ForeColor = System::Drawing::Color::PaleVioletRed;
			this->cancelButton->Location = System::Drawing::Point(93, 264);
			this->cancelButton->Margin = System::Windows::Forms::Padding(2);
			this->cancelButton->Name = L"cancelButton";
			this->cancelButton->Size = System::Drawing::Size(123, 44);
			this->cancelButton->TabIndex = 7;
			this->cancelButton->Text = L"Cancel";
			this->cancelButton->UseVisualStyleBackColor = false;
			this->cancelButton->Click += gcnew System::EventHandler(this, &ModificationText::cancelButton_Click);
			// 
			// ModificationText
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(595, 435);
			this->Controls->Add(this->cancelButton);
			this->Controls->Add(this->deleteButton);
			this->Controls->Add(this->updateButton);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ModificationText";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ModificationText";
			this->Load += gcnew System::EventHandler(this, &ModificationText::ModificationText_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ModificationText::ModificationText_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &ModificationText::ModificationText_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &ModificationText::ModificationText_MouseUp);
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
		// text's index in the document
		String^ Found_Text;
		int Array_Index;
		int Text_Index;

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

		// deleting the found text function
		Void Delete_Found_Text()
		{
			// deleting text from content's arrays
			// from the text start index to the length of the text
			document_content[Array_Index] = document_content[Array_Index]->Remove(Text_Index, Found_Text->Length);
			document_lowercase_content[Array_Index] = document_lowercase_content[Array_Index]->Remove(Text_Index, Found_Text->Length);

			// deleting text from its document
			// by storing the modified text in it
			StreamWriter file(Document_Name(Array_Index));
			file.Write(document_content[Array_Index]);

			// operation is done!
			MessageBox::Show("The text '" + Found_Text + "' has been successfully deleted from Document : " + document_title[Array_Index], "Done!", MessageBoxButtons::OK, MessageBoxIcon::Information);

			// disable ModificationText form
			ModificationText::Hide();
		}

	private: System::Void ModificationText_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void updateButton_Click(System::Object^ sender, System::EventArgs^ e) {

	// going to UpdateText form
	UpdateText^ obj4 = gcnew UpdateText(document_content, document_lowercase_content, document_title, Found_Text, Array_Index);
	obj4->ShowDialog();

	// disable ModificationText form
	ModificationText::Hide();
}
private: System::Void deleteButton_Click(System::Object^ sender, System::EventArgs^ e) {

	// start deleting operation
	Delete_Found_Text();
}
private: System::Void cancelButton_Click(System::Object^ sender, System::EventArgs^ e) {

	// returning to Search form
	ModificationText::Hide();
}


	   //dragging the form
	   bool dragging = false;
	   Point mouse;

private: System::Void ModificationText_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	//enable dragging
	dragging = true;
	mouse.X = e->X;
	mouse.Y = e->Y;
}
private: System::Void ModificationText_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	//check whether able to move
	if (dragging)
	{
		Point currentScreenPosition = PointToScreen(Point(e->X, e->Y));
		Location = Point(currentScreenPosition.X - mouse.X, currentScreenPosition.Y - mouse.Y);
	}
}
private: System::Void ModificationText_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	//disable dragging
	dragging = false;
}
};
}
