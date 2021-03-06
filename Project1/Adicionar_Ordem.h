#pragma once
#include <iostream>
#include <string.h>
#include "VerFoto.h"
#include <msclr\marshal_cppstd.h>
#include "Ordem_de_Servico.h"
#include "Ordem_de_ServicoDAO.h"


namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for Adicionar_Ordem
	/// </summary>
	public ref class Adicionar_Ordem : public System::Windows::Forms::Form
	{
	public:
		Adicionar_Ordem(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Adicionar_Ordem()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	public: Ordem_de_Servico ** select()
	{
		Ordem_de_Servico ** os = new Ordem_de_Servico*[dgvOrdem->SelectedRows->Count + 1];
		int i = 0;
		if (add)
		{
			for each (DataGridViewRow^ row in dgvOrdem->SelectedRows)
			{
				os[i] = new Ordem_de_Servico();
				os[i]->setidordem(Convert::ToInt32(row->Cells[0]->Value->ToString()));
				os[i]->getburaco()->setnomerua(msclr::interop::marshal_as<std::string>(row->Cells[2]->Value->ToString()));
				i++;
			}
		}
		os[i] = NULL;
		return os;
	}
	
	private: System::Windows::Forms::DataGridView^  dgvOrdem;
	public:

	public:






	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txtRua;
	private: System::Windows::Forms::Button^  btnFilt;
	private: System::Windows::Forms::Button^  btnAdd;
	private: System::Windows::Forms::Button^  btnCancel;
	private: System::Windows::Forms::Label^  label8;





	private: System::Windows::Forms::Button^  button2;

	private: bool add = false;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dgvColId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dgvColPrior;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  data;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dgvRua;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dgvColNum;



	public:
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
			this->dgvOrdem = (gcnew System::Windows::Forms::DataGridView());
			this->dgvColId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvColPrior = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->data = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvRua = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvColNum = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtRua = (gcnew System::Windows::Forms::TextBox());
			this->btnFilt = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvOrdem))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvOrdem
			// 
			this->dgvOrdem->AllowUserToAddRows = false;
			this->dgvOrdem->AllowUserToDeleteRows = false;
			this->dgvOrdem->AllowUserToResizeColumns = false;
			this->dgvOrdem->AllowUserToResizeRows = false;
			this->dgvOrdem->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvOrdem->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dgvColId, this->dgvColPrior,
					this->data, this->dgvRua, this->dgvColNum
			});
			this->dgvOrdem->Location = System::Drawing::Point(62, 137);
			this->dgvOrdem->Name = L"dgvOrdem";
			this->dgvOrdem->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvOrdem->ShowEditingIcon = false;
			this->dgvOrdem->Size = System::Drawing::Size(844, 283);
			this->dgvOrdem->TabIndex = 11;
			this->dgvOrdem->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Adicionar_Ordem::dgvEquipamento_CellContentClick);
			// 
			// dgvColId
			// 
			this->dgvColId->HeaderText = L"Id Ordem";
			this->dgvColId->Name = L"dgvColId";
			this->dgvColId->ReadOnly = true;
			// 
			// dgvColPrior
			// 
			this->dgvColPrior->HeaderText = L"Prioridade";
			this->dgvColPrior->Name = L"dgvColPrior";
			this->dgvColPrior->ReadOnly = true;
			// 
			// data
			// 
			this->data->HeaderText = L"Data";
			this->data->Name = L"data";
			this->data->ReadOnly = true;
			// 
			// dgvRua
			// 
			this->dgvRua->HeaderText = L"Logradouro";
			this->dgvRua->Name = L"dgvRua";
			this->dgvRua->ReadOnly = true;
			this->dgvRua->Width = 400;
			// 
			// dgvColNum
			// 
			this->dgvColNum->HeaderText = L"N�mero";
			this->dgvColNum->Name = L"dgvColNum";
			this->dgvColNum->ReadOnly = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(73, 93);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(107, 20);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Filtrar por rua:";
			// 
			// txtRua
			// 
			this->txtRua->Location = System::Drawing::Point(186, 90);
			this->txtRua->Name = L"txtRua";
			this->txtRua->Size = System::Drawing::Size(509, 26);
			this->txtRua->TabIndex = 13;
			// 
			// btnFilt
			// 
			this->btnFilt->Location = System::Drawing::Point(701, 88);
			this->btnFilt->Name = L"btnFilt";
			this->btnFilt->Size = System::Drawing::Size(100, 30);
			this->btnFilt->TabIndex = 14;
			this->btnFilt->Text = L"Filtrar";
			this->btnFilt->UseVisualStyleBackColor = true;
			this->btnFilt->Click += gcnew System::EventHandler(this, &Adicionar_Ordem::btnFilt_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(76, 445);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(148, 35);
			this->btnAdd->TabIndex = 15;
			this->btnAdd->Text = L"Adicionar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &Adicionar_Ordem::btnAdd_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(738, 445);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(148, 35);
			this->btnCancel->TabIndex = 16;
			this->btnCancel->Text = L"Cancelar";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &Adicionar_Ordem::btnCancel_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(30, 29);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(373, 31);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Selecionar Ordens de Servi�o";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(807, 88);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 30);
			this->button2->TabIndex = 19;
			this->button2->Text = L"Ver Todos";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// Adicionar_Ordem
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(951, 501);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btnFilt);
			this->Controls->Add(this->txtRua);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dgvOrdem);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Adicionar_Ordem";
			this->Text = L"Adicionar_Ordem";
			this->Load += gcnew System::EventHandler(this, &Adicionar_Ordem::Adicionar_Ordem_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvOrdem))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
	}
	private: System::Void Adicionar_Ordem_Load(System::Object^  sender, System::EventArgs^  e) 
	{

		Ordem_de_Servico **os = Ordem_De_ServicoDAO::SelecionarAbertas();
		int i = 0;
		while(os[i] != NULL)
		{
			System::String^ str = gcnew String(os[i]->getburaco()->getnomerua().c_str());
			dgvOrdem->Rows->Add(os[i]->getidordem().ToString(), os[i]->getprioridade().ToString(),gcnew String(os[i]->getdata().c_str()),str, os[i]->getburaco()->getnumero().ToString());
			i++;
		}

		
	}
	private: System::Void dgvEquipamento_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
private: System::Void btnAdd_Click(System::Object^  sender, System::EventArgs^  e) {
		add = true;
		this->Close();
}
private: System::Void btnFilt_Click(System::Object^  sender, System::EventArgs^  e) {
		
	dgvOrdem->Rows->Clear();
	Ordem_de_Servico **os = Ordem_De_ServicoDAO::buscarOrdemDeServico(msclr::interop::marshal_as<std::string>(txtRua->Text));
	int i = 0;
	while (os[i] != NULL)
	{
		System::String^ str = gcnew String(os[i]->getburaco()->getnomerua().c_str());
		dgvOrdem->Rows->Add(os[i]->getidordem().ToString(), os[i]->getprioridade().ToString(), str, os[i]->getburaco()->getnumero().ToString());
		i++;
	}

}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {

	this->Hide();
	VerFoto ^vf = gcnew VerFoto("batata");
	vf->ShowDialog();
	this->Show();
}
private: System::Void btnCancel_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
};
}
