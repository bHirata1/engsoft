#pragma once
#include "Ordem_de_ServicoDAO.h"
#include <msclr\marshal_cppstd.h>
#include "UsuarioDAO.h"

namespace InfoBuraco {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DashboardGestor
	/// </summary>
	public ref class DashboardGestor : public System::Windows::Forms::Form
	{
	public:
		DashboardGestor(string login)
		{
			InitializeComponent();
			lblNome->Text = gcnew String(login.c_str());

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DashboardGestor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabPage^  tpCidadao;
	protected:

	private: System::Windows::Forms::Label^  label12;

	private: System::Windows::Forms::PictureBox^  picRel;















	private: System::Windows::Forms::TabPage^  tpNot;

	private: System::Windows::Forms::Button^  btnResolve;
	private: System::Windows::Forms::TextBox^  txtNovaP;
	private: Ordem_de_Servico * * os;

	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::DataGridView^  dgvOrdem;







	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::PictureBox^  picprior;

	private: System::Windows::Forms::TabPage^  tp1;



	private: System::Windows::Forms::PictureBox^  picPerfil;
	private: System::Windows::Forms::Label^  lblNome;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabControl^  tabcontrol;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Prioridade;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  data;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  clmStatusOS;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dgvRua;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dgvColNum;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Posicao;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  lblnumb;
	private: System::Windows::Forms::Label^  lblreg;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;

	protected:
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
			this->tpCidadao = (gcnew System::Windows::Forms::TabPage());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->picRel = (gcnew System::Windows::Forms::PictureBox());
			this->tpNot = (gcnew System::Windows::Forms::TabPage());
			this->btnResolve = (gcnew System::Windows::Forms::Button());
			this->txtNovaP = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->dgvOrdem = (gcnew System::Windows::Forms::DataGridView());
			this->Prioridade = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->data = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->clmStatusOS = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvRua = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvColNum = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Posicao = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->picprior = (gcnew System::Windows::Forms::PictureBox());
			this->tp1 = (gcnew System::Windows::Forms::TabPage());
			this->lblnumb = (gcnew System::Windows::Forms::Label());
			this->lblreg = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->picPerfil = (gcnew System::Windows::Forms::PictureBox());
			this->lblNome = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabcontrol = (gcnew System::Windows::Forms::TabControl());
			this->tpCidadao->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picRel))->BeginInit();
			this->tpNot->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvOrdem))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picprior))->BeginInit();
			this->tp1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picPerfil))->BeginInit();
			this->tabcontrol->SuspendLayout();
			this->SuspendLayout();
			// 
			// tpCidadao
			// 
			this->tpCidadao->Controls->Add(this->button3);
			this->tpCidadao->Controls->Add(this->button2);
			this->tpCidadao->Controls->Add(this->button1);
			this->tpCidadao->Controls->Add(this->label12);
			this->tpCidadao->Controls->Add(this->picRel);
			this->tpCidadao->Location = System::Drawing::Point(4, 79);
			this->tpCidadao->Name = L"tpCidadao";
			this->tpCidadao->Padding = System::Windows::Forms::Padding(3);
			this->tpCidadao->Size = System::Drawing::Size(1011, 499);
			this->tpCidadao->TabIndex = 5;
			this->tpCidadao->Text = L"RELATÓRIOS";
			this->tpCidadao->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(290, 252);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(498, 57);
			this->button3->TabIndex = 20;
			this->button3->Text = L"Emitir Relatório Físico p/ demanda judicial";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(290, 178);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(498, 57);
			this->button2->TabIndex = 19;
			this->button2->Text = L"Emitir Relatório Físico-Financeiro";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(290, 100);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(498, 57);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Emitir Fatura Mensal";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(30, 30);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(335, 31);
			this->label12->TabIndex = 17;
			this->label12->Text = L"Emitir Faturas e Relatórios";
			// 
			// picRel
			// 
			this->picRel->Location = System::Drawing::Point(30, 100);
			this->picRel->Name = L"picRel";
			this->picRel->Size = System::Drawing::Size(192, 192);
			this->picRel->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picRel->TabIndex = 16;
			this->picRel->TabStop = false;
			// 
			// tpNot
			// 
			this->tpNot->Controls->Add(this->btnResolve);
			this->tpNot->Controls->Add(this->txtNovaP);
			this->tpNot->Controls->Add(this->label18);
			this->tpNot->Controls->Add(this->label17);
			this->tpNot->Controls->Add(this->dgvOrdem);
			this->tpNot->Controls->Add(this->label10);
			this->tpNot->Controls->Add(this->picprior);
			this->tpNot->Location = System::Drawing::Point(4, 79);
			this->tpNot->Name = L"tpNot";
			this->tpNot->Size = System::Drawing::Size(1011, 499);
			this->tpNot->TabIndex = 4;
			this->tpNot->Text = L"PRIORIDADE";
			this->tpNot->UseVisualStyleBackColor = true;
			// 
			// btnResolve
			// 
			this->btnResolve->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnResolve->Location = System::Drawing::Point(551, 331);
			this->btnResolve->Name = L"btnResolve";
			this->btnResolve->Size = System::Drawing::Size(129, 31);
			this->btnResolve->TabIndex = 42;
			this->btnResolve->Text = L"Alterar";
			this->btnResolve->UseVisualStyleBackColor = true;
			this->btnResolve->Click += gcnew System::EventHandler(this, &DashboardGestor::btnResolve_Click);
			// 
			// txtNovaP
			// 
			this->txtNovaP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNovaP->Location = System::Drawing::Point(393, 333);
			this->txtNovaP->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtNovaP->Name = L"txtNovaP";
			this->txtNovaP->Size = System::Drawing::Size(134, 26);
			this->txtNovaP->TabIndex = 38;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(265, 336);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(120, 20);
			this->label18->TabIndex = 40;
			this->label18->Text = L"Nova Prioridade";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(249, 100);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(278, 24);
			this->label17->TabIndex = 26;
			this->label17->Text = L"Ordens de Serviço Aguardando";
			// 
			// dgvOrdem
			// 
			this->dgvOrdem->AllowUserToAddRows = false;
			this->dgvOrdem->AllowUserToDeleteRows = false;
			this->dgvOrdem->AllowUserToResizeColumns = false;
			this->dgvOrdem->AllowUserToResizeRows = false;
			this->dgvOrdem->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvOrdem->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Prioridade,
					this->data, this->clmStatusOS, this->dgvRua, this->dgvColNum, this->Posicao
			});
			this->dgvOrdem->Location = System::Drawing::Point(241, 136);
			this->dgvOrdem->MultiSelect = false;
			this->dgvOrdem->Name = L"dgvOrdem";
			this->dgvOrdem->ReadOnly = true;
			this->dgvOrdem->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvOrdem->ShowEditingIcon = false;
			this->dgvOrdem->Size = System::Drawing::Size(714, 175);
			this->dgvOrdem->TabIndex = 20;
			// 
			// Prioridade
			// 
			this->Prioridade->HeaderText = L"Prioridade";
			this->Prioridade->Name = L"Prioridade";
			this->Prioridade->ReadOnly = true;
			this->Prioridade->Width = 70;
			// 
			// data
			// 
			this->data->HeaderText = L"Data";
			this->data->Name = L"data";
			this->data->ReadOnly = true;
			this->data->Width = 70;
			// 
			// clmStatusOS
			// 
			this->clmStatusOS->HeaderText = L"Tamanho";
			this->clmStatusOS->Name = L"clmStatusOS";
			this->clmStatusOS->ReadOnly = true;
			this->clmStatusOS->Width = 70;
			// 
			// dgvRua
			// 
			this->dgvRua->HeaderText = L"Logradouro";
			this->dgvRua->Name = L"dgvRua";
			this->dgvRua->ReadOnly = true;
			this->dgvRua->Width = 300;
			// 
			// dgvColNum
			// 
			this->dgvColNum->HeaderText = L"Número";
			this->dgvColNum->Name = L"dgvColNum";
			this->dgvColNum->ReadOnly = true;
			this->dgvColNum->Width = 60;
			// 
			// Posicao
			// 
			this->Posicao->HeaderText = L"Posição";
			this->Posicao->Name = L"Posicao";
			this->Posicao->ReadOnly = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(30, 30);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(224, 31);
			this->label10->TabIndex = 15;
			this->label10->Text = L"Alterar Prioridade";
			this->label10->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// picprior
			// 
			this->picprior->Location = System::Drawing::Point(30, 100);
			this->picprior->Name = L"picprior";
			this->picprior->Size = System::Drawing::Size(192, 192);
			this->picprior->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picprior->TabIndex = 14;
			this->picprior->TabStop = false;
			// 
			// tp1
			// 
			this->tp1->Controls->Add(this->lblnumb);
			this->tp1->Controls->Add(this->lblreg);
			this->tp1->Controls->Add(this->label2);
			this->tp1->Controls->Add(this->label3);
			this->tp1->Controls->Add(this->picPerfil);
			this->tp1->Controls->Add(this->lblNome);
			this->tp1->Controls->Add(this->label1);
			this->tp1->Location = System::Drawing::Point(4, 79);
			this->tp1->Name = L"tp1";
			this->tp1->Padding = System::Windows::Forms::Padding(3);
			this->tp1->Size = System::Drawing::Size(1011, 499);
			this->tp1->TabIndex = 0;
			this->tp1->Text = L"DASHBOARD";
			this->tp1->UseVisualStyleBackColor = true;
			// 
			// lblnumb
			// 
			this->lblnumb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblnumb->Location = System::Drawing::Point(408, 184);
			this->lblnumb->Name = L"lblnumb";
			this->lblnumb->Size = System::Drawing::Size(52, 31);
			this->lblnumb->TabIndex = 15;
			this->lblnumb->Text = L"XX";
			this->lblnumb->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblreg
			// 
			this->lblreg->AutoSize = true;
			this->lblreg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblreg->Location = System::Drawing::Point(418, 119);
			this->lblreg->Name = L"lblreg";
			this->lblreg->Size = System::Drawing::Size(52, 31);
			this->lblreg->TabIndex = 14;
			this->lblreg->Text = L"XX";
			this->lblreg->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(294, 184);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(573, 31);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Existem           buracos abertos na sua regional";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(283, 119);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(129, 31);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Regional:";
			// 
			// picPerfil
			// 
			this->picPerfil->Location = System::Drawing::Point(30, 100);
			this->picPerfil->Name = L"picPerfil";
			this->picPerfil->Size = System::Drawing::Size(192, 192);
			this->picPerfil->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picPerfil->TabIndex = 2;
			this->picPerfil->TabStop = false;
			// 
			// lblNome
			// 
			this->lblNome->AutoSize = true;
			this->lblNome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNome->Location = System::Drawing::Point(180, 30);
			this->lblNome->Name = L"lblNome";
			this->lblNome->Size = System::Drawing::Size(232, 31);
			this->lblNome->TabIndex = 1;
			this->lblNome->Text = L"insert_name_here";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(30, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(156, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Bem vindo, ";
			// 
			// tabcontrol
			// 
			this->tabcontrol->Controls->Add(this->tp1);
			this->tabcontrol->Controls->Add(this->tpNot);
			this->tabcontrol->Controls->Add(this->tpCidadao);
			this->tabcontrol->HotTrack = true;
			this->tabcontrol->ItemSize = System::Drawing::Size(120, 75);
			this->tabcontrol->Location = System::Drawing::Point(0, 0);
			this->tabcontrol->Multiline = true;
			this->tabcontrol->Name = L"tabcontrol";
			this->tabcontrol->SelectedIndex = 0;
			this->tabcontrol->Size = System::Drawing::Size(1019, 582);
			this->tabcontrol->SizeMode = System::Windows::Forms::TabSizeMode::Fixed;
			this->tabcontrol->TabIndex = 2;
			// 
			// DashboardGestor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1003, 543);
			this->Controls->Add(this->tabcontrol);
			this->Name = L"DashboardGestor";
			this->Text = L"DashboardGestor";
			this->Load += gcnew System::EventHandler(this, &DashboardGestor::DashboardGestor_Load);
			this->tpCidadao->ResumeLayout(false);
			this->tpCidadao->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picRel))->EndInit();
			this->tpNot->ResumeLayout(false);
			this->tpNot->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvOrdem))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picprior))->EndInit();
			this->tp1->ResumeLayout(false);
			this->tp1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picPerfil))->EndInit();
			this->tabcontrol->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox11_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox12_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox14_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}

private: System::Void dataGridView1_CellContentClick_1(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void dataGridView1_CellContentClick_2(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void DashboardGestor_Load(System::Object^  sender, System::EventArgs^  e) {
	string login = msclr::interop::marshal_as<std::string>(lblNome->Text);
	Usuario* u = UsuarioDAO::buscarUsuario(login);
	lblreg->Text = gcnew String(u->getregional().c_str());
	lblnumb->Text = Ordem_De_ServicoDAO::contarporregional(u->getregional()).ToString();
	
	os = Ordem_De_ServicoDAO::SelecionarAbertas();
	dgvOrdem->Rows->Clear();
	int i = 0;
	while (os[i] != NULL)
	{
		Buraco * b = os[i]->getburaco();
		dgvOrdem->Rows->Add(os[i]->getprioridade().ToString(), gcnew String(os[i]->getdata().c_str()), b->gettamanho().ToString(),
			gcnew String(b->getnomerua().c_str()), b->getnumero().ToString(), gcnew String(b->getposrel().c_str()));
		i++;
	}
	picPerfil->Image = gcnew Bitmap("images\\gestor.jpg");
	picprior->Image = gcnew Bitmap("images\\prioridade.jpg");
	picRel->Image = gcnew Bitmap("images\\relatorio.jpg");
	
	dgvOrdem->ClearSelection();
}
private: System::Void dataGridView1_CellContentClick_3(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void btnResolve_Click(System::Object^  sender, System::EventArgs^  e) {
	if (dgvOrdem->SelectedRows->Count == 0) return;
	int p = Convert::ToInt32(txtNovaP->Text->ToString());
	if (p < 0 || p> 10) return;
	Ordem_De_ServicoDAO::editarOrdemDeServico(os[dgvOrdem->SelectedRows[0]->Index]->getidordem(), p, "ABERTA");
	MessageBox::Show("Prioridade Atualizada com sucesso.", "Mensagem", MessageBoxButtons::OK, MessageBoxIcon::Information);
	DashboardGestor_Load(sender, e);
}
};
}
