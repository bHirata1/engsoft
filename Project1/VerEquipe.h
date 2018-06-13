#pragma once
#include "Equipe.h"
#include <vcclr.h>

namespace InfoBuraco {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for VerEquipe
	/// </summary>
	public ref class VerEquipe : public System::Windows::Forms::Form
	{
	public:
		VerEquipe(Equipe * equipe)
		{
			InitializeComponent();
			lblCusto->Text = equipe->getcusto().ToString();
			String ^str = gcnew String(equipe->getencarregado().c_str());
			lblEnc->Text = str;
			str = gcnew String(equipe->getnomeequipe().c_str());
			lblNome->Text = str;
			lblTam->Text = equipe->gettamanho().ToString();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~VerEquipe()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lblNome;
	protected:

	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  lblEnc;
	private: System::Windows::Forms::Label^  lblTam;
	private: System::Windows::Forms::Label^  lblCusto;



	private: System::Windows::Forms::Button^  button1;

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
			this->lblNome = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lblEnc = (gcnew System::Windows::Forms::Label());
			this->lblTam = (gcnew System::Windows::Forms::Label());
			this->lblCusto = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblNome
			// 
			this->lblNome->AutoSize = true;
			this->lblNome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNome->Location = System::Drawing::Point(13, 21);
			this->lblNome->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblNome->Name = L"lblNome";
			this->lblNome->Size = System::Drawing::Size(164, 25);
			this->lblNome->TabIndex = 0;
			this->lblNome->Text = L"nome_da_equipe";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(15, 86);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Encarregado";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(15, 131);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Tamanho";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(15, 174);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Custo";
			this->label4->Click += gcnew System::EventHandler(this, &VerEquipe::label4_Click);
			// 
			// lblEnc
			// 
			this->lblEnc->AutoSize = true;
			this->lblEnc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEnc->Location = System::Drawing::Point(146, 86);
			this->lblEnc->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblEnc->Name = L"lblEnc";
			this->lblEnc->Size = System::Drawing::Size(175, 20);
			this->lblEnc->TabIndex = 4;
			this->lblEnc->Text = L"nome_do_encarregado";
			// 
			// lblTam
			// 
			this->lblTam->AutoSize = true;
			this->lblTam->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTam->Location = System::Drawing::Point(146, 131);
			this->lblTam->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblTam->Name = L"lblTam";
			this->lblTam->Size = System::Drawing::Size(156, 20);
			this->lblTam->TabIndex = 5;
			this->lblTam->Text = L"tamanho_da_equipe";
			// 
			// lblCusto
			// 
			this->lblCusto->AutoSize = true;
			this->lblCusto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCusto->Location = System::Drawing::Point(146, 174);
			this->lblCusto->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblCusto->Name = L"lblCusto";
			this->lblCusto->Size = System::Drawing::Size(193, 20);
			this->lblCusto->TabIndex = 6;
			this->lblCusto->Text = L"custo_da_equipe R$/hora";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(246, 233);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 35);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Fechar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &VerEquipe::button1_Click);
			// 
			// VerEquipe
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(358, 299);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lblCusto);
			this->Controls->Add(this->lblTam);
			this->Controls->Add(this->lblEnc);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lblNome);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"VerEquipe";
			this->Load += gcnew System::EventHandler(this, &VerEquipe::VerEquipe_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void VerEquipe_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
