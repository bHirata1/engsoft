#pragma once

#include "Buraco.h" 
#include "BuracoDAO.h"
#include <msclr\marshal_cppstd.h>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DashboardAssessor
	/// </summary>
	public ref class DashboardAssessor : public System::Windows::Forms::Form
	{
	public:
		DashboardAssessor(void)
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
		~DashboardAssessor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabPage^  tpNot;
	protected:

	protected:





















	private: System::Windows::Forms::TabPage^  tp1;






	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  lblNome;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabControl^  tabcontrol;
	private: System::Windows::Forms::TabPage^  tpCidadao;
	private: System::Windows::Forms::TabPage^  tpBuraco;

	private: System::Windows::Forms::Button^  btnCad;
	private: System::Windows::Forms::Panel^  pnlCidadao;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox2;
	private: System::Windows::Forms::Label^  label7;


	private: System::Windows::Forms::TextBox^  txtNome;


	private: System::Windows::Forms::Button^  btnEditar;
	private: System::Windows::Forms::Button^  btnBusc;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox1;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label13;


	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::ComboBox^  comboTamanho;
	private: System::Windows::Forms::ComboBox^  comboPosRel;


	private: System::Windows::Forms::TextBox^  textNumero;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textLogradouro;


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textRegional;

	private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::Button^  btnFilt;
private: System::Windows::Forms::TextBox^  txtRua;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::DataGridView^  dgvOrdem;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dgvColId;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dgvColPrior;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dgvRua;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dgvColNum;



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
			this->tpNot = (gcnew System::Windows::Forms::TabPage());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->tp1 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->lblNome = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabcontrol = (gcnew System::Windows::Forms::TabControl());
			this->tpBuraco = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textRegional = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->comboTamanho = (gcnew System::Windows::Forms::ComboBox());
			this->comboPosRel = (gcnew System::Windows::Forms::ComboBox());
			this->textNumero = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textLogradouro = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->tpCidadao = (gcnew System::Windows::Forms::TabPage());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->btnCad = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pnlCidadao = (gcnew System::Windows::Forms::Panel());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtNome = (gcnew System::Windows::Forms::TextBox());
			this->btnEditar = (gcnew System::Windows::Forms::Button());
			this->btnBusc = (gcnew System::Windows::Forms::Button());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->btnFilt = (gcnew System::Windows::Forms::Button());
			this->txtRua = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->dgvOrdem = (gcnew System::Windows::Forms::DataGridView());
			this->dgvColId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvColPrior = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvRua = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvColNum = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tpNot->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->tp1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabcontrol->SuspendLayout();
			this->tpBuraco->SuspendLayout();
			this->tpCidadao->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->pnlCidadao->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvOrdem))->BeginInit();
			this->SuspendLayout();
			// 
			// tpNot
			// 
			this->tpNot->Controls->Add(this->button2);
			this->tpNot->Controls->Add(this->btnFilt);
			this->tpNot->Controls->Add(this->txtRua);
			this->tpNot->Controls->Add(this->label9);
			this->tpNot->Controls->Add(this->dgvOrdem);
			this->tpNot->Controls->Add(this->label10);
			this->tpNot->Controls->Add(this->pictureBox4);
			this->tpNot->Location = System::Drawing::Point(4, 79);
			this->tpNot->Name = L"tpNot";
			this->tpNot->Size = System::Drawing::Size(982, 420);
			this->tpNot->TabIndex = 4;
			this->tpNot->Text = L"NOTIFICAÇÃO";
			this->tpNot->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(30, 30);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(312, 31);
			this->label10->TabIndex = 15;
			this->label10->Text = L"Responder à Notificação";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(30, 100);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(192, 192);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 14;
			this->pictureBox4->TabStop = false;
			// 
			// tp1
			// 
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
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(30, 100);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(192, 192);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
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
			this->tabcontrol->Controls->Add(this->tpBuraco);
			this->tabcontrol->Controls->Add(this->tpNot);
			this->tabcontrol->Controls->Add(this->tpCidadao);
			this->tabcontrol->HotTrack = true;
			this->tabcontrol->ItemSize = System::Drawing::Size(120, 75);
			this->tabcontrol->Location = System::Drawing::Point(13, 1);
			this->tabcontrol->Multiline = true;
			this->tabcontrol->Name = L"tabcontrol";
			this->tabcontrol->SelectedIndex = 0;
			this->tabcontrol->Size = System::Drawing::Size(990, 503);
			this->tabcontrol->SizeMode = System::Windows::Forms::TabSizeMode::Fixed;
			this->tabcontrol->TabIndex = 1;
			// 
			// tpBuraco
			// 
			this->tpBuraco->Controls->Add(this->button1);
			this->tpBuraco->Controls->Add(this->textRegional);
			this->tpBuraco->Controls->Add(this->label3);
			this->tpBuraco->Controls->Add(this->label15);
			this->tpBuraco->Controls->Add(this->label14);
			this->tpBuraco->Controls->Add(this->comboTamanho);
			this->tpBuraco->Controls->Add(this->comboPosRel);
			this->tpBuraco->Controls->Add(this->textNumero);
			this->tpBuraco->Controls->Add(this->label5);
			this->tpBuraco->Controls->Add(this->label4);
			this->tpBuraco->Controls->Add(this->textLogradouro);
			this->tpBuraco->Controls->Add(this->label13);
			this->tpBuraco->Location = System::Drawing::Point(4, 79);
			this->tpBuraco->Name = L"tpBuraco";
			this->tpBuraco->Padding = System::Windows::Forms::Padding(3);
			this->tpBuraco->Size = System::Drawing::Size(982, 420);
			this->tpBuraco->TabIndex = 6;
			this->tpBuraco->Text = L"BURACO";
			this->tpBuraco->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(195, 223);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 36);
			this->button1->TabIndex = 30;
			this->button1->Text = L"CADASTRAR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DashboardAssessor::button1_Click);
			// 
			// textRegional
			// 
			this->textRegional->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textRegional->Location = System::Drawing::Point(195, 182);
			this->textRegional->Name = L"textRegional";
			this->textRegional->Size = System::Drawing::Size(350, 26);
			this->textRegional->TabIndex = 29;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(24, 185);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(165, 20);
			this->label3->TabIndex = 28;
			this->label3->Text = L"Regional responsável:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(340, 145);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(80, 20);
			this->label15->TabIndex = 27;
			this->label15->Text = L"Tamanho:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(66, 145);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(123, 20);
			this->label14->TabIndex = 26;
			this->label14->Text = L"Posição relativa:";
			// 
			// comboTamanho
			// 
			this->comboTamanho->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboTamanho->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboTamanho->FormattingEnabled = true;
			this->comboTamanho->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10"
			});
			this->comboTamanho->Location = System::Drawing::Point(426, 142);
			this->comboTamanho->Name = L"comboTamanho";
			this->comboTamanho->Size = System::Drawing::Size(40, 28);
			this->comboTamanho->TabIndex = 25;
			// 
			// comboPosRel
			// 
			this->comboPosRel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboPosRel->FormattingEnabled = true;
			this->comboPosRel->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Meio da rua", L"Junto à guia", L"Em uma das pistas" });
			this->comboPosRel->Location = System::Drawing::Point(195, 142);
			this->comboPosRel->Name = L"comboPosRel";
			this->comboPosRel->Size = System::Drawing::Size(116, 28);
			this->comboPosRel->TabIndex = 24;
			this->comboPosRel->SelectedIndexChanged += gcnew System::EventHandler(this, &DashboardAssessor::comboBox2_SelectedIndexChanged);
			// 
			// textNumero
			// 
			this->textNumero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textNumero->Location = System::Drawing::Point(646, 102);
			this->textNumero->Name = L"textNumero";
			this->textNumero->Size = System::Drawing::Size(40, 26);
			this->textNumero->TabIndex = 23;
			this->textNumero->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(571, 105);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(69, 20);
			this->label5->TabIndex = 22;
			this->label5->Text = L"Número:";
			this->label5->Click += gcnew System::EventHandler(this, &DashboardAssessor::label5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(94, 105);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(95, 20);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Logradouro:";
			// 
			// textLogradouro
			// 
			this->textLogradouro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textLogradouro->Location = System::Drawing::Point(195, 102);
			this->textLogradouro->Name = L"textLogradouro";
			this->textLogradouro->Size = System::Drawing::Size(350, 26);
			this->textLogradouro->TabIndex = 19;
			this->textLogradouro->TextChanged += gcnew System::EventHandler(this, &DashboardAssessor::textBox1_TextChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(30, 30);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(255, 31);
			this->label13->TabIndex = 18;
			this->label13->Text = L"Cadastro de Buraco";
			// 
			// tpCidadao
			// 
			this->tpCidadao->Controls->Add(this->label12);
			this->tpCidadao->Controls->Add(this->btnCad);
			this->tpCidadao->Controls->Add(this->pictureBox2);
			this->tpCidadao->Controls->Add(this->pnlCidadao);
			this->tpCidadao->Controls->Add(this->btnEditar);
			this->tpCidadao->Controls->Add(this->btnBusc);
			this->tpCidadao->Controls->Add(this->maskedTextBox1);
			this->tpCidadao->Controls->Add(this->label11);
			this->tpCidadao->Location = System::Drawing::Point(4, 79);
			this->tpCidadao->Name = L"tpCidadao";
			this->tpCidadao->Padding = System::Windows::Forms::Padding(3);
			this->tpCidadao->Size = System::Drawing::Size(982, 420);
			this->tpCidadao->TabIndex = 5;
			this->tpCidadao->Text = L"CIDADÃO";
			this->tpCidadao->UseVisualStyleBackColor = true;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(30, 30);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(275, 31);
			this->label12->TabIndex = 17;
			this->label12->Text = L"Registros de Cidadão";
			// 
			// btnCad
			// 
			this->btnCad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCad->Location = System::Drawing::Point(789, 89);
			this->btnCad->Name = L"btnCad";
			this->btnCad->Size = System::Drawing::Size(92, 30);
			this->btnCad->TabIndex = 31;
			this->btnCad->Text = L"Cadastrar";
			this->btnCad->UseVisualStyleBackColor = true;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(30, 100);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(192, 192);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 16;
			this->pictureBox2->TabStop = false;
			// 
			// pnlCidadao
			// 
			this->pnlCidadao->Controls->Add(this->comboBox1);
			this->pnlCidadao->Controls->Add(this->textBox5);
			this->pnlCidadao->Controls->Add(this->label6);
			this->pnlCidadao->Controls->Add(this->label2);
			this->pnlCidadao->Controls->Add(this->label8);
			this->pnlCidadao->Controls->Add(this->maskedTextBox2);
			this->pnlCidadao->Controls->Add(this->label7);
			this->pnlCidadao->Controls->Add(this->txtNome);
			this->pnlCidadao->Enabled = false;
			this->pnlCidadao->Location = System::Drawing::Point(275, 132);
			this->pnlCidadao->Name = L"pnlCidadao";
			this->pnlCidadao->Size = System::Drawing::Size(606, 221);
			this->pnlCidadao->TabIndex = 30;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Número de Whatsapp", L"Perfil do Facebook", L"Endereço de e-mail" });
			this->comboBox1->Location = System::Drawing::Point(166, 117);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(307, 28);
			this->comboBox1->TabIndex = 34;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(166, 169);
			this->textBox5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(307, 26);
			this->textBox5->TabIndex = 33;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(86, 172);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(66, 20);
			this->label6->TabIndex = 32;
			this->label6->Text = L"Contato";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(46, 105);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(106, 40);
			this->label2->TabIndex = 30;
			this->label2->Text = L"Canal de \r\nComunicação";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(16, 29);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(136, 20);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Nome do Cidadão";
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maskedTextBox2->Location = System::Drawing::Point(166, 72);
			this->maskedTextBox2->Mask = L"999.999.999-99";
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->Size = System::Drawing::Size(120, 26);
			this->maskedTextBox2->TabIndex = 29;
			this->maskedTextBox2->ValidatingType = System::DateTime::typeid;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(112, 75);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(40, 20);
			this->label7->TabIndex = 17;
			this->label7->Text = L"CPF";
			// 
			// txtNome
			// 
			this->txtNome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNome->Location = System::Drawing::Point(166, 26);
			this->txtNome->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtNome->Name = L"txtNome";
			this->txtNome->Size = System::Drawing::Size(408, 26);
			this->txtNome->TabIndex = 20;
			// 
			// btnEditar
			// 
			this->btnEditar->Enabled = false;
			this->btnEditar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEditar->Location = System::Drawing::Point(691, 89);
			this->btnEditar->Name = L"btnEditar";
			this->btnEditar->Size = System::Drawing::Size(92, 30);
			this->btnEditar->TabIndex = 28;
			this->btnEditar->Text = L"Editar";
			this->btnEditar->UseVisualStyleBackColor = true;
			// 
			// btnBusc
			// 
			this->btnBusc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBusc->Location = System::Drawing::Point(593, 89);
			this->btnBusc->Name = L"btnBusc";
			this->btnBusc->Size = System::Drawing::Size(92, 30);
			this->btnBusc->TabIndex = 27;
			this->btnBusc->Text = L"Buscar";
			this->btnBusc->UseVisualStyleBackColor = true;
			this->btnBusc->Click += gcnew System::EventHandler(this, &DashboardAssessor::btnBusc_Click);
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maskedTextBox1->Location = System::Drawing::Point(441, 91);
			this->maskedTextBox1->Mask = L"999.999.999-99";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(138, 26);
			this->maskedTextBox1->TabIndex = 26;
			this->maskedTextBox1->ValidatingType = System::DateTime::typeid;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(302, 94);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(125, 20);
			this->label11->TabIndex = 25;
			this->label11->Text = L"Buscar por CPF:\r\n";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(864, 82);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 30);
			this->button2->TabIndex = 24;
			this->button2->Text = L"Ver Todos";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// btnFilt
			// 
			this->btnFilt->Location = System::Drawing::Point(758, 82);
			this->btnFilt->Name = L"btnFilt";
			this->btnFilt->Size = System::Drawing::Size(100, 30);
			this->btnFilt->TabIndex = 23;
			this->btnFilt->Text = L"Filtrar";
			this->btnFilt->UseVisualStyleBackColor = true;
			// 
			// txtRua
			// 
			this->txtRua->Location = System::Drawing::Point(243, 84);
			this->txtRua->Name = L"txtRua";
			this->txtRua->Size = System::Drawing::Size(509, 20);
			this->txtRua->TabIndex = 22;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(130, 87);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(71, 13);
			this->label9->TabIndex = 21;
			this->label9->Text = L"Filtrar por rua:";
			// 
			// dgvOrdem
			// 
			this->dgvOrdem->AllowUserToAddRows = false;
			this->dgvOrdem->AllowUserToDeleteRows = false;
			this->dgvOrdem->AllowUserToResizeColumns = false;
			this->dgvOrdem->AllowUserToResizeRows = false;
			this->dgvOrdem->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvOrdem->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->dgvColId, this->dgvColPrior,
					this->dgvRua, this->dgvColNum
			});
			this->dgvOrdem->Location = System::Drawing::Point(120, 121);
			this->dgvOrdem->Name = L"dgvOrdem";
			this->dgvOrdem->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvOrdem->ShowEditingIcon = false;
			this->dgvOrdem->Size = System::Drawing::Size(844, 370);
			this->dgvOrdem->TabIndex = 20;
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
			// dgvRua
			// 
			this->dgvRua->HeaderText = L"Logradouro";
			this->dgvRua->Name = L"dgvRua";
			this->dgvRua->ReadOnly = true;
			this->dgvRua->Width = 500;
			// 
			// dgvColNum
			// 
			this->dgvColNum->HeaderText = L"Número";
			this->dgvColNum->Name = L"dgvColNum";
			this->dgvColNum->ReadOnly = true;
			// 
			// DashboardAssessor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1017, 504);
			this->Controls->Add(this->tabcontrol);
			this->Name = L"DashboardAssessor";
			this->Text = L"DashboardAssessor";
			this->Load += gcnew System::EventHandler(this, &DashboardAssessor::DashboardAssessor_Load);
			this->tpNot->ResumeLayout(false);
			this->tpNot->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->tp1->ResumeLayout(false);
			this->tp1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabcontrol->ResumeLayout(false);
			this->tpBuraco->ResumeLayout(false);
			this->tpBuraco->PerformLayout();
			this->tpCidadao->ResumeLayout(false);
			this->tpCidadao->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->pnlCidadao->ResumeLayout(false);
			this->pnlCidadao->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvOrdem))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void DashboardAssessor_Load(System::Object^  sender, System::EventArgs^  e) {
		tpBuraco->Text = "CADASTRAR\n  BURACO";
	}
	private: System::Void btnBusc_Click(System::Object^  sender, System::EventArgs^  e) {
		
		if (1) // cidadao encontrado, habilita edição 
		{
			btnEditar->Enabled = true;
			btnCad->Enabled = false;
			btnBusc->Enabled = false;

		}
		else //cidadao nao encontrado ; nao faz nada
			;
	}
private: System::Void label14_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				
	Buraco* buraco = new Buraco();
	buraco->setnomerua(msclr::interop::marshal_as<std::string>(this->textLogradouro->Text));
	buraco->setnumero(Convert::ToInt(this->textNumero->Text));
	buraco->setposrel(msclr::interop::marshal_as<std::string>(this->comboPosRel->SelectedItem));
	buraco->settamanho(Convert::ToInt(this->comboTamanho->SelectedItem));
	buraco->setregional(msclr::interop::marshal_as<std::string>(this->textRegional->Text));
	this->Close();

}
};
}
