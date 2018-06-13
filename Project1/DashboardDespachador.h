#pragma once
#include "GerenciarEquipes.h"
#include "GerenciarEquipamentos.h"
#include "GerenciarMateriais.h"
#include "VerEquipe.h"
#include "Saida.h"
#include "Adicionar_Ordem.h"
#include "Conv.h"
#include "Ordem_de_Servico.h"
#include <msclr\marshal_cppstd.h>
namespace InfoBuraco {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DashboardDespachador
	/// </summary>
	public ref class DashboardDespachador : public System::Windows::Forms::Form
	{
	public:
		DashboardDespachador(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Label^  label20;
	public:
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::ListBox^  ltbDetalhes;
	private: System::Windows::Forms::Button^  btnMatDel;
	private: System::Windows::Forms::Button^  btnMatEdit;
	private: System::Windows::Forms::Button^  btnMatNovo;
	private: System::Windows::Forms::Button^  btnEqNovo;
	private: System::Windows::Forms::Button^  btnEqDel;
	private: System::Windows::Forms::Button^  btnEqEdit;
	private: System::Windows::Forms::Button^  btnEqpNovo;
	private: System::Windows::Forms::Button^  btnEqpDel;


	private: System::Windows::Forms::Button^  btnEqpEdit;


	private: Equipe * equipe;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DashboardDespachador()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabcontrol;
	protected:

	private: System::Windows::Forms::TabPage^  tp1;
	private: System::Windows::Forms::TabPage^  tpSaida;
	private: System::Windows::Forms::TabPage^  tpEquipes;
	private: System::Windows::Forms::TabPage^  tpEquips;
	private: System::Windows::Forms::TabPage^  tpMateriais;
	private: System::Windows::Forms::TabPage^  tpCM;
	private: System::Windows::Forms::DateTimePicker^  dtDia;





	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  lblNome;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::DataGridView^  dgvEquipe;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox2;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colNome;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colEncarregado;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colNumProf;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colCusto;


	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::DataGridView^  dgvEquipamento;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::PictureBox^  pictureBox3;


	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::DataGridView^  dgvMaterial;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  txtCusto;
	private: System::Windows::Forms::Button^  btnAlteraMob;

	private: System::Windows::Forms::Button^  btnConfirmaMob;

	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::ComboBox^  cmbEquipe;

	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label17;


	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::DataGridView^  dgvCSEquip;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^  clmEquip;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  clmNome;
	private: System::Windows::Forms::ListBox^  ltbOrdem;
	private: System::Windows::Forms::Button^  btnDown;

	private: System::Windows::Forms::Button^  btnUp;
	private: System::Windows::Forms::Button^  button7;
private: System::Windows::Forms::Button^  button8;
private: System::Windows::Forms::Button^  btnSaida;


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
			this->tabcontrol = (gcnew System::Windows::Forms::TabControl());
			this->tp1 = (gcnew System::Windows::Forms::TabPage());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->lblNome = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tpSaida = (gcnew System::Windows::Forms::TabPage());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->ltbDetalhes = (gcnew System::Windows::Forms::ListBox());
			this->btnSaida = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->btnDown = (gcnew System::Windows::Forms::Button());
			this->btnUp = (gcnew System::Windows::Forms::Button());
			this->ltbOrdem = (gcnew System::Windows::Forms::ListBox());
			this->dgvCSEquip = (gcnew System::Windows::Forms::DataGridView());
			this->clmEquip = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->clmNome = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->cmbEquipe = (gcnew System::Windows::Forms::ComboBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->dtDia = (gcnew System::Windows::Forms::DateTimePicker());
			this->tpEquipes = (gcnew System::Windows::Forms::TabPage());
			this->btnEqpNovo = (gcnew System::Windows::Forms::Button());
			this->btnEqpDel = (gcnew System::Windows::Forms::Button());
			this->btnEqpEdit = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dgvEquipe = (gcnew System::Windows::Forms::DataGridView());
			this->colNome = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colEncarregado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colNumProf = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colCusto = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->tpEquips = (gcnew System::Windows::Forms::TabPage());
			this->btnEqNovo = (gcnew System::Windows::Forms::Button());
			this->btnEqDel = (gcnew System::Windows::Forms::Button());
			this->btnEqEdit = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dgvEquipamento = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->tpMateriais = (gcnew System::Windows::Forms::TabPage());
			this->btnMatNovo = (gcnew System::Windows::Forms::Button());
			this->btnMatDel = (gcnew System::Windows::Forms::Button());
			this->btnMatEdit = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->dgvMaterial = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->tpCM = (gcnew System::Windows::Forms::TabPage());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtCusto = (gcnew System::Windows::Forms::TextBox());
			this->btnAlteraMob = (gcnew System::Windows::Forms::Button());
			this->btnConfirmaMob = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->tabcontrol->SuspendLayout();
			this->tp1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tpSaida->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCSEquip))->BeginInit();
			this->tpEquipes->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvEquipe))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->tpEquips->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvEquipamento))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->tpMateriais->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMaterial))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->tpCM->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// tabcontrol
			// 
			this->tabcontrol->Controls->Add(this->tp1);
			this->tabcontrol->Controls->Add(this->tpSaida);
			this->tabcontrol->Controls->Add(this->tpEquipes);
			this->tabcontrol->Controls->Add(this->tpEquips);
			this->tabcontrol->Controls->Add(this->tpMateriais);
			this->tabcontrol->Controls->Add(this->tpCM);
			this->tabcontrol->HotTrack = true;
			this->tabcontrol->ItemSize = System::Drawing::Size(120, 75);
			this->tabcontrol->Location = System::Drawing::Point(1, 1);
			this->tabcontrol->Multiline = true;
			this->tabcontrol->Name = L"tabcontrol";
			this->tabcontrol->SelectedIndex = 0;
			this->tabcontrol->Size = System::Drawing::Size(990, 503);
			this->tabcontrol->SizeMode = System::Windows::Forms::TabSizeMode::Fixed;
			this->tabcontrol->TabIndex = 0;
			// 
			// tp1
			// 
			this->tp1->Controls->Add(this->textBox3);
			this->tp1->Controls->Add(this->label5);
			this->tp1->Controls->Add(this->textBox2);
			this->tp1->Controls->Add(this->textBox1);
			this->tp1->Controls->Add(this->label4);
			this->tp1->Controls->Add(this->label3);
			this->tp1->Controls->Add(this->pictureBox1);
			this->tp1->Controls->Add(this->lblNome);
			this->tp1->Controls->Add(this->label1);
			this->tp1->Location = System::Drawing::Point(4, 79);
			this->tp1->Name = L"tp1";
			this->tp1->Padding = System::Windows::Forms::Padding(3);
			this->tp1->Size = System::Drawing::Size(982, 420);
			this->tp1->TabIndex = 0;
			this->tp1->Text = L"DASHBOARD";
			this->tp1->UseVisualStyleBackColor = true;
			this->tp1->Click += gcnew System::EventHandler(this, &DashboardDespachador::tp1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(423, 233);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(53, 38);
			this->textBox3->TabIndex = 9;
			this->textBox3->Text = L"0";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(290, 236);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(341, 31);
			this->label5->TabIndex = 8;
			this->label5->Text = L"das quais           agendadas";
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(423, 172);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(53, 38);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"0";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(423, 104);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(53, 38);
			this->textBox1->TabIndex = 5;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &DashboardDespachador::textBox1_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(311, 175);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(586, 31);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Existem          ordens de serviço não cumpridas,";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(311, 107);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(375, 31);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Existem          buracos abertos";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(61, 117);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(141, 150);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// lblNome
			// 
			this->lblNome->AutoSize = true;
			this->lblNome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNome->Location = System::Drawing::Point(190, 24);
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
			this->label1->Location = System::Drawing::Point(28, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(156, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Bem vindo, ";
			// 
			// tpSaida
			// 
			this->tpSaida->Controls->Add(this->label20);
			this->tpSaida->Controls->Add(this->label19);
			this->tpSaida->Controls->Add(this->ltbDetalhes);
			this->tpSaida->Controls->Add(this->btnSaida);
			this->tpSaida->Controls->Add(this->button8);
			this->tpSaida->Controls->Add(this->button7);
			this->tpSaida->Controls->Add(this->btnDown);
			this->tpSaida->Controls->Add(this->btnUp);
			this->tpSaida->Controls->Add(this->ltbOrdem);
			this->tpSaida->Controls->Add(this->dgvCSEquip);
			this->tpSaida->Controls->Add(this->label18);
			this->tpSaida->Controls->Add(this->label17);
			this->tpSaida->Controls->Add(this->linkLabel1);
			this->tpSaida->Controls->Add(this->cmbEquipe);
			this->tpSaida->Controls->Add(this->label16);
			this->tpSaida->Controls->Add(this->label15);
			this->tpSaida->Controls->Add(this->label14);
			this->tpSaida->Controls->Add(this->dtDia);
			this->tpSaida->Location = System::Drawing::Point(4, 79);
			this->tpSaida->Name = L"tpSaida";
			this->tpSaida->Padding = System::Windows::Forms::Padding(3);
			this->tpSaida->Size = System::Drawing::Size(982, 420);
			this->tpSaida->TabIndex = 1;
			this->tpSaida->Text = L"COMPOR SAÍDA";
			this->tpSaida->UseVisualStyleBackColor = true;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(619, 137);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(73, 20);
			this->label20->TabIndex = 21;
			this->label20->Text = L"Detalhes";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(562, 137);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(23, 20);
			this->label19->TabIndex = 20;
			this->label19->Text = L"Id";
			// 
			// ltbDetalhes
			// 
			this->ltbDetalhes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ltbDetalhes->FormattingEnabled = true;
			this->ltbDetalhes->ItemHeight = 20;
			this->ltbDetalhes->Location = System::Drawing::Point(623, 169);
			this->ltbDetalhes->Name = L"ltbDetalhes";
			this->ltbDetalhes->Size = System::Drawing::Size(244, 164);
			this->ltbDetalhes->TabIndex = 19;
			this->ltbDetalhes->SelectedIndexChanged += gcnew System::EventHandler(this, &DashboardDespachador::ltbDetalhes_SelectedIndexChanged);
			// 
			// btnSaida
			// 
			this->btnSaida->Location = System::Drawing::Point(11, 377);
			this->btnSaida->Name = L"btnSaida";
			this->btnSaida->Size = System::Drawing::Size(152, 34);
			this->btnSaida->TabIndex = 18;
			this->btnSaida->Text = L"Fechar o Rolê";
			this->btnSaida->UseVisualStyleBackColor = true;
			this->btnSaida->Click += gcnew System::EventHandler(this, &DashboardDespachador::button9_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(873, 221);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(29, 29);
			this->button8->TabIndex = 17;
			this->button8->Text = L"-";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &DashboardDespachador::button8_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(873, 178);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(29, 29);
			this->button7->TabIndex = 16;
			this->button7->Text = L"+";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &DashboardDespachador::button7_Click_1);
			// 
			// btnDown
			// 
			this->btnDown->Location = System::Drawing::Point(873, 313);
			this->btnDown->Name = L"btnDown";
			this->btnDown->Size = System::Drawing::Size(29, 29);
			this->btnDown->TabIndex = 15;
			this->btnDown->Text = L"\\/";
			this->btnDown->UseVisualStyleBackColor = true;
			this->btnDown->Click += gcnew System::EventHandler(this, &DashboardDespachador::btnDown_Click);
			// 
			// btnUp
			// 
			this->btnUp->Location = System::Drawing::Point(873, 268);
			this->btnUp->Name = L"btnUp";
			this->btnUp->Size = System::Drawing::Size(29, 29);
			this->btnUp->TabIndex = 14;
			this->btnUp->Text = L"/\\";
			this->btnUp->UseVisualStyleBackColor = true;
			this->btnUp->Click += gcnew System::EventHandler(this, &DashboardDespachador::btnUp_Click);
			// 
			// ltbOrdem
			// 
			this->ltbOrdem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ltbOrdem->FormattingEnabled = true;
			this->ltbOrdem->ItemHeight = 20;
			this->ltbOrdem->Location = System::Drawing::Point(561, 169);
			this->ltbOrdem->Name = L"ltbOrdem";
			this->ltbOrdem->Size = System::Drawing::Size(56, 164);
			this->ltbOrdem->TabIndex = 13;
			this->ltbOrdem->SelectedIndexChanged += gcnew System::EventHandler(this, &DashboardDespachador::ltbOrdem_SelectedIndexChanged);
			// 
			// dgvCSEquip
			// 
			this->dgvCSEquip->AllowUserToAddRows = false;
			this->dgvCSEquip->AllowUserToDeleteRows = false;
			this->dgvCSEquip->AllowUserToResizeColumns = false;
			this->dgvCSEquip->AllowUserToResizeRows = false;
			this->dgvCSEquip->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvCSEquip->ColumnHeadersVisible = false;
			this->dgvCSEquip->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->clmEquip,
					this->clmNome
			});
			this->dgvCSEquip->Location = System::Drawing::Point(217, 189);
			this->dgvCSEquip->Name = L"dgvCSEquip";
			this->dgvCSEquip->RowHeadersVisible = false;
			this->dgvCSEquip->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvCSEquip->Size = System::Drawing::Size(285, 167);
			this->dgvCSEquip->TabIndex = 12;
			this->dgvCSEquip->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &DashboardDespachador::dataGridView1_CellContentClick_1);
			// 
			// clmEquip
			// 
			this->clmEquip->Frozen = true;
			this->clmEquip->HeaderText = L"";
			this->clmEquip->Name = L"clmEquip";
			this->clmEquip->Width = 30;
			// 
			// clmNome
			// 
			this->clmNome->HeaderText = L"";
			this->clmNome->Name = L"clmNome";
			this->clmNome->ReadOnly = true;
			this->clmNome->Width = 252;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(557, 100);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(218, 20);
			this->label18->TabIndex = 10;
			this->label18->Text = L"Selecionar Ordens de Serviço";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(7, 189);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(191, 20);
			this->label17->TabIndex = 9;
			this->label17->Text = L"Selecionar Equipamentos";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(224, 163);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(65, 13);
			this->linkLabel1->TabIndex = 8;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"ver detalhes";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &DashboardDespachador::linkLabel1_LinkClicked);
			// 
			// cmbEquipe
			// 
			this->cmbEquipe->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbEquipe->FormattingEnabled = true;
			this->cmbEquipe->Location = System::Drawing::Point(217, 139);
			this->cmbEquipe->Name = L"cmbEquipe";
			this->cmbEquipe->Size = System::Drawing::Size(285, 21);
			this->cmbEquipe->TabIndex = 7;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(7, 137);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(138, 20);
			this->label16->TabIndex = 6;
			this->label16->Text = L"Selecionar Equipe";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(7, 101);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(109, 20);
			this->label15->TabIndex = 5;
			this->label15->Text = L"Selecionar dia";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(27, 31);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(278, 31);
			this->label14->TabIndex = 3;
			this->label14->Text = L"Composição de Saída";
			// 
			// dtDia
			// 
			this->dtDia->Location = System::Drawing::Point(217, 100);
			this->dtDia->Name = L"dtDia";
			this->dtDia->Size = System::Drawing::Size(214, 20);
			this->dtDia->TabIndex = 0;
			// 
			// tpEquipes
			// 
			this->tpEquipes->Controls->Add(this->btnEqpNovo);
			this->tpEquipes->Controls->Add(this->btnEqpDel);
			this->tpEquipes->Controls->Add(this->btnEqpEdit);
			this->tpEquipes->Controls->Add(this->label6);
			this->tpEquipes->Controls->Add(this->dgvEquipe);
			this->tpEquipes->Controls->Add(this->label2);
			this->tpEquipes->Controls->Add(this->pictureBox2);
			this->tpEquipes->Location = System::Drawing::Point(4, 79);
			this->tpEquipes->Name = L"tpEquipes";
			this->tpEquipes->Size = System::Drawing::Size(982, 420);
			this->tpEquipes->TabIndex = 2;
			this->tpEquipes->Text = L"EQUIPES";
			this->tpEquipes->UseVisualStyleBackColor = true;
			this->tpEquipes->Click += gcnew System::EventHandler(this, &DashboardDespachador::tpEquipes_Click);
			// 
			// btnEqpNovo
			// 
			this->btnEqpNovo->Location = System::Drawing::Point(257, 343);
			this->btnEqpNovo->Name = L"btnEqpNovo";
			this->btnEqpNovo->Size = System::Drawing::Size(105, 38);
			this->btnEqpNovo->TabIndex = 27;
			this->btnEqpNovo->Text = L"Novo";
			this->btnEqpNovo->UseVisualStyleBackColor = true;
			this->btnEqpNovo->Click += gcnew System::EventHandler(this, &DashboardDespachador::btnEqpNovo_Click);
			// 
			// btnEqpDel
			// 
			this->btnEqpDel->Location = System::Drawing::Point(479, 343);
			this->btnEqpDel->Name = L"btnEqpDel";
			this->btnEqpDel->Size = System::Drawing::Size(105, 38);
			this->btnEqpDel->TabIndex = 26;
			this->btnEqpDel->Text = L"Deletar";
			this->btnEqpDel->UseVisualStyleBackColor = true;
			// 
			// btnEqpEdit
			// 
			this->btnEqpEdit->Location = System::Drawing::Point(368, 343);
			this->btnEqpEdit->Name = L"btnEqpEdit";
			this->btnEqpEdit->Size = System::Drawing::Size(105, 38);
			this->btnEqpEdit->TabIndex = 25;
			this->btnEqpEdit->Text = L"Editar";
			this->btnEqpEdit->UseVisualStyleBackColor = true;
			this->btnEqpEdit->Click += gcnew System::EventHandler(this, &DashboardDespachador::btnEqpEdit_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(253, 89);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(72, 20);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Consulta";
			// 
			// dgvEquipe
			// 
			this->dgvEquipe->AllowUserToAddRows = false;
			this->dgvEquipe->AllowUserToDeleteRows = false;
			this->dgvEquipe->AllowUserToResizeColumns = false;
			this->dgvEquipe->AllowUserToResizeRows = false;
			this->dgvEquipe->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvEquipe->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->colNome, this->colEncarregado,
					this->colNumProf, this->colCusto
			});
			this->dgvEquipe->Location = System::Drawing::Point(243, 112);
			this->dgvEquipe->MultiSelect = false;
			this->dgvEquipe->Name = L"dgvEquipe";
			this->dgvEquipe->ReadOnly = true;
			this->dgvEquipe->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvEquipe->ShowEditingIcon = false;
			this->dgvEquipe->Size = System::Drawing::Size(713, 225);
			this->dgvEquipe->TabIndex = 3;
			this->dgvEquipe->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &DashboardDespachador::dataGridView1_CellContentClick);
			// 
			// colNome
			// 
			this->colNome->HeaderText = L"Nome da Equipe";
			this->colNome->Name = L"colNome";
			this->colNome->ReadOnly = true;
			this->colNome->Width = 250;
			// 
			// colEncarregado
			// 
			this->colEncarregado->HeaderText = L"Encarregado";
			this->colEncarregado->Name = L"colEncarregado";
			this->colEncarregado->ReadOnly = true;
			this->colEncarregado->Width = 200;
			// 
			// colNumProf
			// 
			this->colNumProf->HeaderText = L"Tamanho";
			this->colNumProf->Name = L"colNumProf";
			this->colNumProf->ReadOnly = true;
			// 
			// colCusto
			// 
			this->colCusto->HeaderText = L"Custo (R$/hora)";
			this->colCusto->Name = L"colCusto";
			this->colCusto->ReadOnly = true;
			this->colCusto->Width = 120;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(16, 34);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(305, 31);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Gerenciador de Equipes";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(34, 89);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(177, 169);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// tpEquips
			// 
			this->tpEquips->Controls->Add(this->btnEqNovo);
			this->tpEquips->Controls->Add(this->btnEqDel);
			this->tpEquips->Controls->Add(this->btnEqEdit);
			this->tpEquips->Controls->Add(this->label7);
			this->tpEquips->Controls->Add(this->dgvEquipamento);
			this->tpEquips->Controls->Add(this->label8);
			this->tpEquips->Controls->Add(this->pictureBox3);
			this->tpEquips->Location = System::Drawing::Point(4, 79);
			this->tpEquips->Name = L"tpEquips";
			this->tpEquips->Size = System::Drawing::Size(982, 420);
			this->tpEquips->TabIndex = 3;
			this->tpEquips->Text = L"EQUIPAMENTOS";
			this->tpEquips->UseVisualStyleBackColor = true;
			// 
			// btnEqNovo
			// 
			this->btnEqNovo->Location = System::Drawing::Point(275, 340);
			this->btnEqNovo->Name = L"btnEqNovo";
			this->btnEqNovo->Size = System::Drawing::Size(105, 38);
			this->btnEqNovo->TabIndex = 24;
			this->btnEqNovo->Text = L"Novo";
			this->btnEqNovo->UseVisualStyleBackColor = true;
			this->btnEqNovo->Click += gcnew System::EventHandler(this, &DashboardDespachador::btnEqNovo_Click);
			// 
			// btnEqDel
			// 
			this->btnEqDel->Location = System::Drawing::Point(497, 340);
			this->btnEqDel->Name = L"btnEqDel";
			this->btnEqDel->Size = System::Drawing::Size(105, 38);
			this->btnEqDel->TabIndex = 23;
			this->btnEqDel->Text = L"Deletar";
			this->btnEqDel->UseVisualStyleBackColor = true;
			// 
			// btnEqEdit
			// 
			this->btnEqEdit->Location = System::Drawing::Point(386, 340);
			this->btnEqEdit->Name = L"btnEqEdit";
			this->btnEqEdit->Size = System::Drawing::Size(105, 38);
			this->btnEqEdit->TabIndex = 22;
			this->btnEqEdit->Text = L"Editar";
			this->btnEqEdit->UseVisualStyleBackColor = true;
			this->btnEqEdit->Click += gcnew System::EventHandler(this, &DashboardDespachador::btnEqEdit_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(258, 86);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(72, 20);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Consulta";
			// 
			// dgvEquipamento
			// 
			this->dgvEquipamento->AllowUserToAddRows = false;
			this->dgvEquipamento->AllowUserToDeleteRows = false;
			this->dgvEquipamento->AllowUserToResizeColumns = false;
			this->dgvEquipamento->AllowUserToResizeRows = false;
			this->dgvEquipamento->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvEquipamento->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn4
			});
			this->dgvEquipamento->Location = System::Drawing::Point(248, 109);
			this->dgvEquipamento->MultiSelect = false;
			this->dgvEquipamento->Name = L"dgvEquipamento";
			this->dgvEquipamento->ReadOnly = true;
			this->dgvEquipamento->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvEquipamento->ShowEditingIcon = false;
			this->dgvEquipamento->Size = System::Drawing::Size(644, 225);
			this->dgvEquipamento->TabIndex = 10;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Número de Identificação";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 200;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Descrição";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Width = 280;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Custo (R$/hora)";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			this->dataGridViewTextBoxColumn4->Width = 120;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(21, 31);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(380, 31);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Gerenciador de Equipamentos";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(39, 86);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(177, 169);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 8;
			this->pictureBox3->TabStop = false;
			// 
			// tpMateriais
			// 
			this->tpMateriais->Controls->Add(this->btnMatNovo);
			this->tpMateriais->Controls->Add(this->btnMatDel);
			this->tpMateriais->Controls->Add(this->btnMatEdit);
			this->tpMateriais->Controls->Add(this->label9);
			this->tpMateriais->Controls->Add(this->dgvMaterial);
			this->tpMateriais->Controls->Add(this->label10);
			this->tpMateriais->Controls->Add(this->pictureBox4);
			this->tpMateriais->Location = System::Drawing::Point(4, 79);
			this->tpMateriais->Name = L"tpMateriais";
			this->tpMateriais->Size = System::Drawing::Size(982, 420);
			this->tpMateriais->TabIndex = 4;
			this->tpMateriais->Text = L"MATERIAIS";
			this->tpMateriais->UseVisualStyleBackColor = true;
			// 
			// btnMatNovo
			// 
			this->btnMatNovo->Location = System::Drawing::Point(274, 340);
			this->btnMatNovo->Name = L"btnMatNovo";
			this->btnMatNovo->Size = System::Drawing::Size(105, 38);
			this->btnMatNovo->TabIndex = 21;
			this->btnMatNovo->Text = L"Novo";
			this->btnMatNovo->UseVisualStyleBackColor = true;
			this->btnMatNovo->Click += gcnew System::EventHandler(this, &DashboardDespachador::btnMatNovo_Click);
			// 
			// btnMatDel
			// 
			this->btnMatDel->Location = System::Drawing::Point(496, 340);
			this->btnMatDel->Name = L"btnMatDel";
			this->btnMatDel->Size = System::Drawing::Size(105, 38);
			this->btnMatDel->TabIndex = 20;
			this->btnMatDel->Text = L"Deletar";
			this->btnMatDel->UseVisualStyleBackColor = true;
			// 
			// btnMatEdit
			// 
			this->btnMatEdit->Location = System::Drawing::Point(385, 340);
			this->btnMatEdit->Name = L"btnMatEdit";
			this->btnMatEdit->Size = System::Drawing::Size(105, 38);
			this->btnMatEdit->TabIndex = 19;
			this->btnMatEdit->Text = L"Editar";
			this->btnMatEdit->UseVisualStyleBackColor = true;
			this->btnMatEdit->Click += gcnew System::EventHandler(this, &DashboardDespachador::btnMatEdit_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(270, 86);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(72, 20);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Consulta";
			// 
			// dgvMaterial
			// 
			this->dgvMaterial->AllowUserToAddRows = false;
			this->dgvMaterial->AllowUserToDeleteRows = false;
			this->dgvMaterial->AllowUserToResizeColumns = false;
			this->dgvMaterial->AllowUserToResizeRows = false;
			this->dgvMaterial->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvMaterial->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn3,
					this->dataGridViewTextBoxColumn5, this->dataGridViewTextBoxColumn6
			});
			this->dgvMaterial->Location = System::Drawing::Point(264, 109);
			this->dgvMaterial->MultiSelect = false;
			this->dgvMaterial->Name = L"dgvMaterial";
			this->dgvMaterial->ReadOnly = true;
			this->dgvMaterial->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvMaterial->ShowEditingIcon = false;
			this->dgvMaterial->Size = System::Drawing::Size(544, 225);
			this->dgvMaterial->TabIndex = 16;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Nome";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			this->dataGridViewTextBoxColumn3->Width = 200;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Unidade de Medida";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			this->dataGridViewTextBoxColumn5->Width = 150;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"Custo (R$/u.m.)";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			this->dataGridViewTextBoxColumn6->Width = 150;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(33, 31);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(317, 31);
			this->label10->TabIndex = 15;
			this->label10->Text = L"Gerenciador de Materiais";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(51, 86);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(177, 169);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 14;
			this->pictureBox4->TabStop = false;
			// 
			// tpCM
			// 
			this->tpCM->Controls->Add(this->label13);
			this->tpCM->Controls->Add(this->txtCusto);
			this->tpCM->Controls->Add(this->btnAlteraMob);
			this->tpCM->Controls->Add(this->btnConfirmaMob);
			this->tpCM->Controls->Add(this->label11);
			this->tpCM->Controls->Add(this->label12);
			this->tpCM->Controls->Add(this->pictureBox5);
			this->tpCM->Location = System::Drawing::Point(4, 79);
			this->tpCM->Name = L"tpCM";
			this->tpCM->Size = System::Drawing::Size(982, 420);
			this->tpCM->TabIndex = 5;
			this->tpCM->Text = L"MOBILIZAÇÃO";
			this->tpCM->UseVisualStyleBackColor = true;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(489, 133);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(55, 20);
			this->label13->TabIndex = 27;
			this->label13->Text = L"R$/km";
			// 
			// txtCusto
			// 
			this->txtCusto->Enabled = false;
			this->txtCusto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCusto->Location = System::Drawing::Point(383, 130);
			this->txtCusto->Name = L"txtCusto";
			this->txtCusto->Size = System::Drawing::Size(100, 26);
			this->txtCusto->TabIndex = 26;
			this->txtCusto->Text = L"75,00";
			// 
			// btnAlteraMob
			// 
			this->btnAlteraMob->Location = System::Drawing::Point(438, 217);
			this->btnAlteraMob->Name = L"btnAlteraMob";
			this->btnAlteraMob->Size = System::Drawing::Size(105, 38);
			this->btnAlteraMob->TabIndex = 25;
			this->btnAlteraMob->Text = L"Alterar";
			this->btnAlteraMob->UseVisualStyleBackColor = true;
			this->btnAlteraMob->Click += gcnew System::EventHandler(this, &DashboardDespachador::button7_Click);
			// 
			// btnConfirmaMob
			// 
			this->btnConfirmaMob->Enabled = false;
			this->btnConfirmaMob->Location = System::Drawing::Point(304, 217);
			this->btnConfirmaMob->Name = L"btnConfirmaMob";
			this->btnConfirmaMob->Size = System::Drawing::Size(105, 38);
			this->btnConfirmaMob->TabIndex = 24;
			this->btnConfirmaMob->Text = L"Confirmar";
			this->btnConfirmaMob->UseVisualStyleBackColor = true;
			this->btnConfirmaMob->Click += gcnew System::EventHandler(this, &DashboardDespachador::btnConfirmaMob_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(343, 86);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(199, 20);
			this->label11->TabIndex = 23;
			this->label11->Text = L"Custo de mobilização atual";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(35, 31);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(273, 31);
			this->label12->TabIndex = 21;
			this->label12->Text = L"Custo de Mobilização";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(41, 86);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(177, 169);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 20;
			this->pictureBox5->TabStop = false;
			// 
			// DashboardDespachador
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(986, 503);
			this->Controls->Add(this->tabcontrol);
			this->Name = L"DashboardDespachador";
			this->Text = L"DashboardDespachador";
			this->Load += gcnew System::EventHandler(this, &DashboardDespachador::DashboardDespachador_Load);
			this->Resize += gcnew System::EventHandler(this, &DashboardDespachador::DashboardDespachador_Resize);
			this->tabcontrol->ResumeLayout(false);
			this->tp1->ResumeLayout(false);
			this->tp1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tpSaida->ResumeLayout(false);
			this->tpSaida->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCSEquip))->EndInit();
			this->tpEquipes->ResumeLayout(false);
			this->tpEquipes->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvEquipe))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->tpEquips->ResumeLayout(false);
			this->tpEquips->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvEquipamento))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->tpMateriais->ResumeLayout(false);
			this->tpMateriais->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMaterial))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->tpCM->ResumeLayout(false);
			this->tpCM->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void DashboardDespachador_Load(System::Object^  sender, System::EventArgs^  e) {
		this->dgvEquipe->Rows->Add("Alpha", "Joãozinho", "5", "75.00");
		this->dgvEquipe->Rows->Add("Bravo", "Batatinha", "7", "125.00");
		this->dgvEquipamento->Rows->Add("26562", "BC bobcat", "25.00");

		this->dgvCSEquip->Rows->Add(false, "BC bobcat");
		this->dgvCSEquip->Rows->Add(false, "Equipamento 1");
		this->dgvCSEquip->Rows->Add(false, "Equipamento 2");
		this->dgvCSEquip->Rows->Add(false, "Equipamento 3");
		this->cmbEquipe->Items->Add("Equipe 1");
		this->cmbEquipe->Items->Add("Equipe 2");
		this->cmbEquipe->Items->Add("Equipe 3");
		this->cmbEquipe->Items->Add("Equipe 4");

		this->dgvMaterial->Rows->Add("Cimento", "Kg", "10.00");
		this->dgvMaterial->Rows->Add("Água", "Litro", "3.00");
		this->dgvMaterial->Rows->Add("Areia", "Metro Cúbico", "4.50");

		if (this->cmbEquipe->Items->Count > 0)
			cmbEquipe->SelectedIndex = 0;

	}

	private: System::Void DashboardDespachador_Resize(System::Object^  sender, System::EventArgs^  e)
	{
		tabcontrol->Size = this->Size;
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void tp1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
	private: System::Void tpEquipes_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	
	}

	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		txtCusto->Enabled = true;
		btnConfirmaMob->Enabled = true;
		btnAlteraMob->Enabled = false;
	}
	private: System::Void btnConfirmaMob_Click(System::Object^  sender, System::EventArgs^  e) {
		txtCusto->Enabled = false;
		btnConfirmaMob->Enabled = false;
		btnAlteraMob->Enabled = true;
	}
	private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		Equipe * equipe = new Equipe();
		equipe->setcusto(45);
		equipe->setnomeequipe("Jorger");
		equipe->settamanho(50);
		equipe->setencarregado("João");
		VerEquipe^ ver = gcnew VerEquipe(equipe);
		ver->ShowDialog();
		ver->Close();

	}
	private: System::Void pnlEquipamentos_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
	private: System::Void dataGridView1_CellContentClick_1(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
	private: System::Void btnUp_Click(System::Object^  sender, System::EventArgs^  e) {
		if (ltbOrdem->SelectedIndex != 0 && ltbOrdem->Items->Count >= 2)
		{
			System::Object^ obj = ltbOrdem->SelectedItem;
			int i = ltbOrdem->SelectedIndex;
			ltbOrdem->Items[i] = ltbOrdem->Items[i - 1];
			ltbOrdem->Items[i - 1] = obj;
			ltbOrdem->SelectedIndex = i - 1;
			obj = ltbDetalhes->Items[i];
			ltbDetalhes->Items[i] = ltbDetalhes->Items[i - 1];
			ltbDetalhes->Items[i - 1] = obj;
			ltbDetalhes->SelectedIndex = i - 1;

		}
	}
	private: System::Void btnDown_Click(System::Object^  sender, System::EventArgs^  e) {
		if (ltbOrdem->SelectedIndex != ltbOrdem->Items->Count - 1 && ltbOrdem->Items->Count >= 2)
		{
			System::Object^ obj = ltbOrdem->SelectedItem;
			int i = ltbOrdem->SelectedIndex;
			ltbOrdem->Items[i] = ltbOrdem->Items[i + 1];
			ltbOrdem->Items[i + 1] = obj;
			ltbOrdem->SelectedIndex = i + 1;

			obj = ltbDetalhes->Items[i];
			ltbDetalhes->Items[i] = ltbDetalhes->Items[i + 1];
			ltbDetalhes->Items[i + 1] = obj;
			ltbDetalhes->SelectedIndex = i + 1;
		}
	}
	private: System::Void button7_Click_1(System::Object^  sender, System::EventArgs^  e) {
		Project1::Adicionar_Ordem^ add = gcnew Project1::Adicionar_Ordem();
		add->ShowDialog();
		ltbOrdem->Items->Add(add->id());
		ltbDetalhes->Items->Add(add->detalhes());
		add->Close();
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		if (ltbOrdem->SelectedIndex >= 0)
		{
			int i = ltbOrdem->SelectedIndex;
			ltbOrdem->Items->RemoveAt(i);
			ltbDetalhes->Items->RemoveAt(i);
		}
	}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	
	/*SaidaDAO->criarSaida() ;
	for each(System::String^ item in ltbOrdem->Items)
	{
		SaidaOS_DAO->criarSaidaOS(saida->getid(),int::Parse(item)); 
		Ordem_de_Servico * os = OrdemDAO->buscarOrdem(int::Parse(item));
		OrdemDAO->editarOrdem( alterar status p agendado) ;	
	}
	foreach(
	
	*/
	for each  (DataGridViewRow^ row in dgvCSEquip->Rows)
	{
		int i = 1;
		if ((bool)row->Cells[0]->Value)
			 // EquipeOS_DAO->Criar(nomeequipe,id_ordem, i)
			i++;
	}
	
}
private: System::Void ltbDetalhes_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	ltbOrdem->SelectedIndex = ltbDetalhes->SelectedIndex;
}
private: System::Void ltbOrdem_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	ltbDetalhes->SelectedIndex = ltbOrdem->SelectedIndex;
}

private: System::Void btnMatEdit_Click(System::Object^  sender, System::EventArgs^  e) {
	if (dgvMaterial->SelectedRows->Count == 1)
	{
		Material * m = new Material();
		m->setcusto(Convert::ToDouble(dgvMaterial->SelectedRows[0]->Cells[2]->Value->ToString()));
		//m->setcusto(4);
		m->setnomematerial(msclr::interop::marshal_as<std::string>(dgvMaterial->SelectedRows[0]->Cells[0]->Value->ToString()));
		m->setunidademedida(msclr::interop::marshal_as<std::string>(dgvMaterial->SelectedRows[0]->Cells[1]->Value->ToString()));
		GerenciarMateriais^ ger = gcnew GerenciarMateriais(m);
		ger->ShowDialog();


		m = ger->retorno();
		ger->Close();
		if (m != NULL)
		{
			String^ str = gcnew String(m->getnomematerial().c_str());
			dgvMaterial->SelectedRows[0]->Cells[0]->Value = str;
			str = gcnew String(m->getunidademedida().c_str());
			dgvMaterial->SelectedRows[0]->Cells[1]->Value = str;
			dgvMaterial->SelectedRows[0]->Cells[2]->Value = m->getcusto().ToString();
		}
	}
}
private: System::Void btnMatNovo_Click(System::Object^  sender, System::EventArgs^  e) {
	Material * m;
	GerenciarMateriais^ ger = gcnew GerenciarMateriais();
	ger->ShowDialog();
	m = ger->retorno();
	ger->Close();
	if (m != NULL)
	{

		String^ str1 = gcnew String(m->getnomematerial().c_str());
		String^ str2 = gcnew String(m->getunidademedida().c_str());
		dgvMaterial->Rows->Add(str1, str2, m->getcusto().ToString());
	}
}
private: System::Void btnEqNovo_Click(System::Object^  sender, System::EventArgs^  e) {
	Equipamento * eq = new Equipamento();
	GerenciarEquipamentos^ ger = gcnew GerenciarEquipamentos();
	ger->ShowDialog();
	eq = ger->retorno();
	ger->Close();
	if (eq != NULL)
	{

		String^ str1 = gcnew String(eq->getid().c_str());
		String^ str2 = gcnew String(eq->getnome().c_str());
		dgvEquipamento->Rows->Add(str1, str2, eq->getcusto().ToString());
		//dgvEquipamento->SelectedRows[0]->Cells[0]->Value = str;
		//str = gcnew String(eq->getnome().c_str());
		//dgvEquipamento->SelectedRows[0]->Cells[1]->Value = str;
		//dgvEquipamento->SelectedRows[0]->Cells[2]->Value = eq->getcusto().ToString();{
	}
}

private: System::Void btnEqEdit_Click(System::Object^  sender, System::EventArgs^  e) {
	if (dgvEquipamento->SelectedRows->Count == 1) {
		Equipamento * eq = new Equipamento();
		eq->setcusto(Convert::ToDouble(dgvEquipamento->SelectedRows[0]->Cells[2]->Value->ToString()));
		//m->setcusto(4);
		eq->setid(msclr::interop::marshal_as<std::string>(dgvEquipamento->SelectedRows[0]->Cells[0]->Value->ToString()));
		eq->setnome(msclr::interop::marshal_as<std::string>(dgvEquipamento->SelectedRows[0]->Cells[1]->Value->ToString()));
		GerenciarEquipamentos^ ger = gcnew GerenciarEquipamentos(eq);
		ger->ShowDialog();
		eq = ger->retorno();
		ger->Close();
		if (eq != NULL)
		{
			String^ str = gcnew String(eq->getid().c_str());
			dgvEquipamento->SelectedRows[0]->Cells[0]->Value = str;
			str = gcnew String(eq->getnome().c_str());
			dgvEquipamento->SelectedRows[0]->Cells[1]->Value = str;
			dgvEquipamento->SelectedRows[0]->Cells[2]->Value = eq->getcusto().ToString();
		}
	}
}
private: System::Void btnEqpEdit_Click(System::Object^  sender, System::EventArgs^  e) {

	if (dgvEquipe->SelectedRows->Count == 1) {
		Equipe * eq = new Equipe();
		eq->setcusto(Convert::ToDouble(dgvEquipe->SelectedRows[0]->Cells[3]->Value->ToString()));
		//m->setcusto(4);
		eq->setnomeequipe(msclr::interop::marshal_as<std::string>(dgvEquipe->SelectedRows[0]->Cells[0]->Value->ToString()));
		eq->setencarregado(msclr::interop::marshal_as<std::string>(dgvEquipe->SelectedRows[0]->Cells[1]->Value->ToString()));
		eq->settamanho(Convert::ToInt32(dgvEquipe->SelectedRows[0]->Cells[2]->Value->ToString()));
		GerenciarEquipes^ ger = gcnew GerenciarEquipes(eq);
		ger->ShowDialog();
		eq = ger->retorno();
		ger->Close();
		if (eq != NULL)
		{
			String^ str = gcnew String(eq->getnomeequipe().c_str());
			dgvEquipe->SelectedRows[0]->Cells[0]->Value = str;
			str = gcnew String(eq->getencarregado().c_str());
			dgvEquipe->SelectedRows[0]->Cells[1]->Value = str;
			dgvEquipe->SelectedRows[0]->Cells[2]->Value = eq->gettamanho().ToString();

			dgvEquipe->SelectedRows[0]->Cells[3]->Value = eq->getcusto().ToString();
		}
	}
}
private: System::Void btnEqpNovo_Click(System::Object^  sender, System::EventArgs^  e) {

	Equipe * eq = new Equipe();
	GerenciarEquipes^ ger = gcnew GerenciarEquipes();
	ger->ShowDialog();
	eq = ger->retorno();
	ger->Close();
	if (eq != NULL)
	{

		String^ str1 = gcnew String(eq->getnomeequipe().c_str());
		String^ str2 = gcnew String(eq->getencarregado().c_str());
		dgvEquipe->Rows->Add(str1, str2, eq->gettamanho().ToString(), eq->getcusto().ToString());
		//dgvEquipamento->SelectedRows[0]->Cells[0]->Value = str;
		//str = gcnew String(eq->getnome().c_str());
		//dgvEquipamento->SelectedRows[0]->Cells[1]->Value = str;
		//dgvEquipamento->SelectedRows[0]->Cells[2]->Value = eq->getcusto().ToString();{
	}
}
};
}
