#pragma once

#include <iostream>

namespace Project1 {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for VerFoto
	/// </summary>
	public ref class VerFoto : public System::Windows::Forms::Form
	{
	public:
		VerFoto(std::string str)
		{
			InitializeComponent();
			String ^link = gcnew String(str.c_str());
			webBrowser1->Navigate("google.com");
			//
			//TODO: Add the constructor code here
			//
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~VerFoto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::WebBrowser^  webBrowser1;
	protected:

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
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->SuspendLayout();
			// 
			// webBrowser1
			// 
			this->webBrowser1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->webBrowser1->Location = System::Drawing::Point(0, 0);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(813, 450);
			this->webBrowser1->TabIndex = 0;
			this->webBrowser1->DocumentCompleted += gcnew System::Windows::Forms::WebBrowserDocumentCompletedEventHandler(this, &VerFoto::webBrowser1_DocumentCompleted);
			// 
			// VerFoto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(813, 450);
			this->Controls->Add(this->webBrowser1);
			this->Name = L"VerFoto";
			this->Text = L"VerFoto";
			this->Load += gcnew System::EventHandler(this, &VerFoto::VerFoto_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void webBrowser1_DocumentCompleted(System::Object^  sender, System::Windows::Forms::WebBrowserDocumentCompletedEventArgs^  e) {
	}
	private: System::Void VerFoto_Load(System::Object^  sender, System::EventArgs^  e) {




	}
	};
}
