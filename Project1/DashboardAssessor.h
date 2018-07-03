#pragma once

#include "NotificacaoDAO.h"
#include "BuracoDAO.h"
#include "CidadaoDAO.h"
#include <msclr\marshal_cppstd.h>

namespace InfoBuraco {

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
		DashboardAssessor(string login)
		{
			InitializeComponent();
			System::String^ str = gcnew String(login.c_str());
			lblNome->Text = str; 
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


















	private: Notificacao * * n;


	private: System::Windows::Forms::TabPage^  tp1;
	private: System::Windows::Forms::PictureBox^  picPerfil;







	private: System::Windows::Forms::Label^  lblNome;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabControl^  tabcontrol;
	private: System::Windows::Forms::TabPage^  tpCidadao;
	private: System::Windows::Forms::TabPage^  tpBuraco;

	private: System::Windows::Forms::Button^  btnCad;
	private: System::Windows::Forms::Panel^  pnlCidadao;

	private: System::Windows::Forms::Label^  label8;


	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  txtNomeCid;





	private: System::Windows::Forms::Button^  btnEditar;
	private: System::Windows::Forms::Button^  btnBusc;


	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::ComboBox^  cmbCanal;
	private: System::Windows::Forms::TextBox^  txtContato;


	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::PictureBox^  picNot;

	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::PictureBox^  picCidadao;

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




private: System::Windows::Forms::DataGridView^  dgvOrdem;




private: System::Windows::Forms::MaskedTextBox^  txtCPFCidadao;


private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Button^  btnCancelarCid;
private: System::Windows::Forms::Button^  btnAcc;
private: System::Windows::Forms::MaskedTextBox^  txtCpf;
private: System::Windows::Forms::MaskedTextBox^  txtCpfBusca;
private: System::Windows::Forms::Button^  btnLimpar;
private: System::Windows::Forms::PictureBox^  picBuraco;





private: System::Windows::Forms::Label^  label17;






private: System::Windows::Forms::Button^  btnResolve;
private: System::Windows::Forms::TextBox^  txtNotCanal;

private: System::Windows::Forms::MaskedTextBox^  txtNotCPF;
private: System::Windows::Forms::TextBox^  txtNotContato;


private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::TextBox^  txtNotCid;

private: System::Windows::Forms::Button^  btnRefresh;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dgvColId;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  cidadao;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  clmStatusOS;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dgvRua;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dgvColNum;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  data;








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
			this->btnRefresh = (gcnew System::Windows::Forms::Button());
			this->btnResolve = (gcnew System::Windows::Forms::Button());
			this->txtNotCanal = (gcnew System::Windows::Forms::TextBox());
			this->txtNotCPF = (gcnew System::Windows::Forms::MaskedTextBox());
			this->txtNotContato = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->txtNotCid = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->dgvOrdem = (gcnew System::Windows::Forms::DataGridView());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->picNot = (gcnew System::Windows::Forms::PictureBox());
			this->tp1 = (gcnew System::Windows::Forms::TabPage());
			this->picPerfil = (gcnew System::Windows::Forms::PictureBox());
			this->lblNome = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabcontrol = (gcnew System::Windows::Forms::TabControl());
			this->tpBuraco = (gcnew System::Windows::Forms::TabPage());
			this->picBuraco = (gcnew System::Windows::Forms::PictureBox());
			this->btnLimpar = (gcnew System::Windows::Forms::Button());
			this->txtCPFCidadao = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
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
			this->txtCpfBusca = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->btnCad = (gcnew System::Windows::Forms::Button());
			this->picCidadao = (gcnew System::Windows::Forms::PictureBox());
			this->pnlCidadao = (gcnew System::Windows::Forms::Panel());
			this->txtCpf = (gcnew System::Windows::Forms::MaskedTextBox());
			this->btnCancelarCid = (gcnew System::Windows::Forms::Button());
			this->btnAcc = (gcnew System::Windows::Forms::Button());
			this->cmbCanal = (gcnew System::Windows::Forms::ComboBox());
			this->txtContato = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtNomeCid = (gcnew System::Windows::Forms::TextBox());
			this->btnEditar = (gcnew System::Windows::Forms::Button());
			this->btnBusc = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->dgvColId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cidadao = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->clmStatusOS = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvRua = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvColNum = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->data = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tpNot->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvOrdem))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picNot))->BeginInit();
			this->tp1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picPerfil))->BeginInit();
			this->tabcontrol->SuspendLayout();
			this->tpBuraco->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBuraco))->BeginInit();
			this->tpCidadao->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picCidadao))->BeginInit();
			this->pnlCidadao->SuspendLayout();
			this->SuspendLayout();
			// 
			// tpNot
			// 
			this->tpNot->Controls->Add(this->btnRefresh);
			this->tpNot->Controls->Add(this->btnResolve);
			this->tpNot->Controls->Add(this->txtNotCanal);
			this->tpNot->Controls->Add(this->txtNotCPF);
			this->tpNot->Controls->Add(this->txtNotContato);
			this->tpNot->Controls->Add(this->label18);
			this->tpNot->Controls->Add(this->label19);
			this->tpNot->Controls->Add(this->label20);
			this->tpNot->Controls->Add(this->label21);
			this->tpNot->Controls->Add(this->txtNotCid);
			this->tpNot->Controls->Add(this->label17);
			this->tpNot->Controls->Add(this->dgvOrdem);
			this->tpNot->Controls->Add(this->label10);
			this->tpNot->Controls->Add(this->picNot);
			this->tpNot->Location = System::Drawing::Point(4, 79);
			this->tpNot->Name = L"tpNot";
			this->tpNot->Size = System::Drawing::Size(1011, 499);
			this->tpNot->TabIndex = 4;
			this->tpNot->Text = L"NOTIFICAÇÃO";
			this->tpNot->UseVisualStyleBackColor = true;
			// 
			// btnRefresh
			// 
			this->btnRefresh->Location = System::Drawing::Point(254, 95);
			this->btnRefresh->Name = L"btnRefresh";
			this->btnRefresh->Size = System::Drawing::Size(35, 35);
			this->btnRefresh->TabIndex = 43;
			this->btnRefresh->UseVisualStyleBackColor = true;
			this->btnRefresh->Click += gcnew System::EventHandler(this, &DashboardAssessor::btnRefresh_Click);
			// 
			// btnResolve
			// 
			this->btnResolve->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnResolve->Location = System::Drawing::Point(765, 436);
			this->btnResolve->Name = L"btnResolve";
			this->btnResolve->Size = System::Drawing::Size(129, 31);
			this->btnResolve->TabIndex = 42;
			this->btnResolve->Text = L"Resolver";
			this->btnResolve->UseVisualStyleBackColor = true;
			this->btnResolve->Click += gcnew System::EventHandler(this, &DashboardAssessor::btnResolve_Click);
			// 
			// txtNotCanal
			// 
			this->txtNotCanal->Enabled = false;
			this->txtNotCanal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNotCanal->Location = System::Drawing::Point(391, 392);
			this->txtNotCanal->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtNotCanal->Name = L"txtNotCanal";
			this->txtNotCanal->Size = System::Drawing::Size(222, 26);
			this->txtNotCanal->TabIndex = 41;
			// 
			// txtNotCPF
			// 
			this->txtNotCPF->Enabled = false;
			this->txtNotCPF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNotCPF->Location = System::Drawing::Point(756, 348);
			this->txtNotCPF->Mask = L"999.999.999-99";
			this->txtNotCPF->Name = L"txtNotCPF";
			this->txtNotCPF->Size = System::Drawing::Size(138, 26);
			this->txtNotCPF->TabIndex = 36;
			this->txtNotCPF->TextMaskFormat = System::Windows::Forms::MaskFormat::ExcludePromptAndLiterals;
			this->txtNotCPF->ValidatingType = System::DateTime::typeid;
			// 
			// txtNotContato
			// 
			this->txtNotContato->Enabled = false;
			this->txtNotContato->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNotContato->Location = System::Drawing::Point(696, 392);
			this->txtNotContato->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtNotContato->Name = L"txtNotContato";
			this->txtNotContato->Size = System::Drawing::Size(198, 26);
			this->txtNotContato->TabIndex = 38;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(622, 395);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(66, 20);
			this->label18->TabIndex = 40;
			this->label18->Text = L"Contato";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(237, 385);
			this->label19->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(106, 40);
			this->label19->TabIndex = 39;
			this->label19->Text = L"Canal de \r\nComunicação";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(237, 351);
			this->label20->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(136, 20);
			this->label20->TabIndex = 33;
			this->label20->Text = L"Nome do Cidadão";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(702, 351);
			this->label21->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(40, 20);
			this->label21->TabIndex = 34;
			this->label21->Text = L"CPF";
			// 
			// txtNotCid
			// 
			this->txtNotCid->Enabled = false;
			this->txtNotCid->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNotCid->Location = System::Drawing::Point(391, 348);
			this->txtNotCid->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtNotCid->Name = L"txtNotCid";
			this->txtNotCid->Size = System::Drawing::Size(297, 26);
			this->txtNotCid->TabIndex = 35;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(308, 100);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(305, 24);
			this->label17->TabIndex = 26;
			this->label17->Text = L"Notificações Aguardando Resposta";
			// 
			// dgvOrdem
			// 
			this->dgvOrdem->AllowUserToAddRows = false;
			this->dgvOrdem->AllowUserToDeleteRows = false;
			this->dgvOrdem->AllowUserToResizeColumns = false;
			this->dgvOrdem->AllowUserToResizeRows = false;
			this->dgvOrdem->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvOrdem->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->dgvColId, this->cidadao,
					this->clmStatusOS, this->dgvRua, this->dgvColNum, this->data
			});
			this->dgvOrdem->Location = System::Drawing::Point(241, 136);
			this->dgvOrdem->Name = L"dgvOrdem";
			this->dgvOrdem->ReadOnly = true;
			this->dgvOrdem->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvOrdem->ShowEditingIcon = false;
			this->dgvOrdem->Size = System::Drawing::Size(724, 175);
			this->dgvOrdem->TabIndex = 20;
			this->dgvOrdem->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &DashboardAssessor::dgvOrdem_CellContentClick);
			this->dgvOrdem->SelectionChanged += gcnew System::EventHandler(this, &DashboardAssessor::dgvOrdem_SelectionChanged);
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
			// picNot
			// 
			this->picNot->Location = System::Drawing::Point(30, 100);
			this->picNot->Name = L"picNot";
			this->picNot->Size = System::Drawing::Size(192, 192);
			this->picNot->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picNot->TabIndex = 14;
			this->picNot->TabStop = false;
			// 
			// tp1
			// 
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
			this->tabcontrol->Controls->Add(this->tpBuraco);
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
			this->tabcontrol->TabIndex = 1;
			// 
			// tpBuraco
			// 
			this->tpBuraco->Controls->Add(this->picBuraco);
			this->tpBuraco->Controls->Add(this->btnLimpar);
			this->tpBuraco->Controls->Add(this->txtCPFCidadao);
			this->tpBuraco->Controls->Add(this->label16);
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
			this->tpBuraco->Size = System::Drawing::Size(1011, 499);
			this->tpBuraco->TabIndex = 6;
			this->tpBuraco->Text = L"BURACO";
			this->tpBuraco->UseVisualStyleBackColor = true;
			// 
			// picBuraco
			// 
			this->picBuraco->Location = System::Drawing::Point(30, 100);
			this->picBuraco->Name = L"picBuraco";
			this->picBuraco->Size = System::Drawing::Size(192, 192);
			this->picBuraco->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBuraco->TabIndex = 34;
			this->picBuraco->TabStop = false;
			// 
			// btnLimpar
			// 
			this->btnLimpar->Location = System::Drawing::Point(711, 300);
			this->btnLimpar->Name = L"btnLimpar";
			this->btnLimpar->Size = System::Drawing::Size(100, 36);
			this->btnLimpar->TabIndex = 33;
			this->btnLimpar->Text = L"Limpar";
			this->btnLimpar->UseVisualStyleBackColor = true;
			this->btnLimpar->Click += gcnew System::EventHandler(this, &DashboardAssessor::btnLimpar_Click);
			// 
			// txtCPFCidadao
			// 
			this->txtCPFCidadao->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCPFCidadao->Location = System::Drawing::Point(431, 237);
			this->txtCPFCidadao->Mask = L"999.999.999-99";
			this->txtCPFCidadao->Name = L"txtCPFCidadao";
			this->txtCPFCidadao->Size = System::Drawing::Size(138, 26);
			this->txtCPFCidadao->TabIndex = 30;
			this->txtCPFCidadao->TextMaskFormat = System::Windows::Forms::MaskFormat::ExcludePromptAndLiterals;
			this->txtCPFCidadao->ValidatingType = System::DateTime::typeid;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(259, 243);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(126, 20);
			this->label16->TabIndex = 31;
			this->label16->Text = L"CPF do cidadão:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(301, 300);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 36);
			this->button1->TabIndex = 31;
			this->button1->Text = L"Cadastrar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DashboardAssessor::button1_Click);
			// 
			// textRegional
			// 
			this->textRegional->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textRegional->Location = System::Drawing::Point(431, 189);
			this->textRegional->Name = L"textRegional";
			this->textRegional->Size = System::Drawing::Size(316, 26);
			this->textRegional->TabIndex = 29;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(259, 192);
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
			this->label15->Location = System::Drawing::Point(755, 152);
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
			this->label14->Location = System::Drawing::Point(259, 152);
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
			this->comboTamanho->Location = System::Drawing::Point(856, 149);
			this->comboTamanho->Name = L"comboTamanho";
			this->comboTamanho->Size = System::Drawing::Size(46, 28);
			this->comboTamanho->TabIndex = 25;
			// 
			// comboPosRel
			// 
			this->comboPosRel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboPosRel->FormattingEnabled = true;
			this->comboPosRel->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Meio da rua", L"Junto à guia", L"Em uma das pistas" });
			this->comboPosRel->Location = System::Drawing::Point(430, 149);
			this->comboPosRel->Name = L"comboPosRel";
			this->comboPosRel->Size = System::Drawing::Size(317, 28);
			this->comboPosRel->TabIndex = 24;
			this->comboPosRel->SelectedIndexChanged += gcnew System::EventHandler(this, &DashboardAssessor::comboBox2_SelectedIndexChanged);
			// 
			// textNumero
			// 
			this->textNumero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textNumero->Location = System::Drawing::Point(856, 109);
			this->textNumero->Name = L"textNumero";
			this->textNumero->Size = System::Drawing::Size(46, 26);
			this->textNumero->TabIndex = 23;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(766, 112);
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
			this->label4->Location = System::Drawing::Point(260, 112);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(95, 20);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Logradouro:";
			// 
			// textLogradouro
			// 
			this->textLogradouro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textLogradouro->Location = System::Drawing::Point(430, 109);
			this->textLogradouro->Name = L"textLogradouro";
			this->textLogradouro->Size = System::Drawing::Size(317, 26);
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
			this->tpCidadao->Controls->Add(this->txtCpfBusca);
			this->tpCidadao->Controls->Add(this->label12);
			this->tpCidadao->Controls->Add(this->btnCad);
			this->tpCidadao->Controls->Add(this->picCidadao);
			this->tpCidadao->Controls->Add(this->pnlCidadao);
			this->tpCidadao->Controls->Add(this->btnEditar);
			this->tpCidadao->Controls->Add(this->btnBusc);
			this->tpCidadao->Controls->Add(this->label11);
			this->tpCidadao->Location = System::Drawing::Point(4, 79);
			this->tpCidadao->Name = L"tpCidadao";
			this->tpCidadao->Padding = System::Windows::Forms::Padding(3);
			this->tpCidadao->Size = System::Drawing::Size(1011, 499);
			this->tpCidadao->TabIndex = 5;
			this->tpCidadao->Text = L"CIDADÃO";
			this->tpCidadao->UseVisualStyleBackColor = true;
			// 
			// txtCpfBusca
			// 
			this->txtCpfBusca->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCpfBusca->Location = System::Drawing::Point(441, 91);
			this->txtCpfBusca->Mask = L"999.999.999-99";
			this->txtCpfBusca->Name = L"txtCpfBusca";
			this->txtCpfBusca->Size = System::Drawing::Size(138, 26);
			this->txtCpfBusca->TabIndex = 37;
			this->txtCpfBusca->TextMaskFormat = System::Windows::Forms::MaskFormat::ExcludePromptAndLiterals;
			this->txtCpfBusca->ValidatingType = System::DateTime::typeid;
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
			this->btnCad->TabIndex = 40;
			this->btnCad->Text = L"Cadastrar";
			this->btnCad->UseVisualStyleBackColor = true;
			this->btnCad->Click += gcnew System::EventHandler(this, &DashboardAssessor::btnCad_Click);
			// 
			// picCidadao
			// 
			this->picCidadao->Location = System::Drawing::Point(30, 100);
			this->picCidadao->Name = L"picCidadao";
			this->picCidadao->Size = System::Drawing::Size(192, 192);
			this->picCidadao->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picCidadao->TabIndex = 16;
			this->picCidadao->TabStop = false;
			// 
			// pnlCidadao
			// 
			this->pnlCidadao->Controls->Add(this->txtCpf);
			this->pnlCidadao->Controls->Add(this->btnCancelarCid);
			this->pnlCidadao->Controls->Add(this->btnAcc);
			this->pnlCidadao->Controls->Add(this->cmbCanal);
			this->pnlCidadao->Controls->Add(this->txtContato);
			this->pnlCidadao->Controls->Add(this->label6);
			this->pnlCidadao->Controls->Add(this->label2);
			this->pnlCidadao->Controls->Add(this->label8);
			this->pnlCidadao->Controls->Add(this->label7);
			this->pnlCidadao->Controls->Add(this->txtNomeCid);
			this->pnlCidadao->Enabled = false;
			this->pnlCidadao->Location = System::Drawing::Point(275, 132);
			this->pnlCidadao->Name = L"pnlCidadao";
			this->pnlCidadao->Size = System::Drawing::Size(606, 251);
			this->pnlCidadao->TabIndex = 30;
			// 
			// txtCpf
			// 
			this->txtCpf->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCpf->Location = System::Drawing::Point(166, 72);
			this->txtCpf->Mask = L"999.999.999-99";
			this->txtCpf->Name = L"txtCpf";
			this->txtCpf->Size = System::Drawing::Size(138, 26);
			this->txtCpf->TabIndex = 21;
			this->txtCpf->TextMaskFormat = System::Windows::Forms::MaskFormat::ExcludePromptAndLiterals;
			this->txtCpf->ValidatingType = System::DateTime::typeid;
			// 
			// btnCancelarCid
			// 
			this->btnCancelarCid->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancelarCid->Location = System::Drawing::Point(129, 218);
			this->btnCancelarCid->Name = L"btnCancelarCid";
			this->btnCancelarCid->Size = System::Drawing::Size(92, 30);
			this->btnCancelarCid->TabIndex = 25;
			this->btnCancelarCid->Text = L"Cancelar";
			this->btnCancelarCid->UseVisualStyleBackColor = true;
			this->btnCancelarCid->Click += gcnew System::EventHandler(this, &DashboardAssessor::btnCancelarCid_Click);
			// 
			// btnAcc
			// 
			this->btnAcc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAcc->Location = System::Drawing::Point(18, 218);
			this->btnAcc->Name = L"btnAcc";
			this->btnAcc->Size = System::Drawing::Size(92, 30);
			this->btnAcc->TabIndex = 24;
			this->btnAcc->Text = L"Salvar";
			this->btnAcc->UseVisualStyleBackColor = true;
			this->btnAcc->Click += gcnew System::EventHandler(this, &DashboardAssessor::btnAcc_Click);
			// 
			// cmbCanal
			// 
			this->cmbCanal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbCanal->FormattingEnabled = true;
			this->cmbCanal->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Whatsapp", L"E-mail", L"Facebook" });
			this->cmbCanal->Location = System::Drawing::Point(166, 117);
			this->cmbCanal->Name = L"cmbCanal";
			this->cmbCanal->Size = System::Drawing::Size(307, 28);
			this->cmbCanal->TabIndex = 22;
			// 
			// txtContato
			// 
			this->txtContato->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtContato->Location = System::Drawing::Point(166, 169);
			this->txtContato->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtContato->Name = L"txtContato";
			this->txtContato->Size = System::Drawing::Size(307, 26);
			this->txtContato->TabIndex = 23;
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
			// txtNomeCid
			// 
			this->txtNomeCid->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNomeCid->Location = System::Drawing::Point(166, 26);
			this->txtNomeCid->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtNomeCid->Name = L"txtNomeCid";
			this->txtNomeCid->Size = System::Drawing::Size(408, 26);
			this->txtNomeCid->TabIndex = 20;
			// 
			// btnEditar
			// 
			this->btnEditar->Enabled = false;
			this->btnEditar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEditar->Location = System::Drawing::Point(691, 89);
			this->btnEditar->Name = L"btnEditar";
			this->btnEditar->Size = System::Drawing::Size(92, 30);
			this->btnEditar->TabIndex = 39;
			this->btnEditar->Text = L"Editar";
			this->btnEditar->UseVisualStyleBackColor = true;
			this->btnEditar->Click += gcnew System::EventHandler(this, &DashboardAssessor::btnEditar_Click);
			// 
			// btnBusc
			// 
			this->btnBusc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBusc->Location = System::Drawing::Point(593, 89);
			this->btnBusc->Name = L"btnBusc";
			this->btnBusc->Size = System::Drawing::Size(92, 30);
			this->btnBusc->TabIndex = 38;
			this->btnBusc->Text = L"Buscar";
			this->btnBusc->UseVisualStyleBackColor = true;
			this->btnBusc->Click += gcnew System::EventHandler(this, &DashboardAssessor::btnBusc_Click);
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
			// dgvColId
			// 
			this->dgvColId->FillWeight = 60;
			this->dgvColId->HeaderText = L"Id Ordem";
			this->dgvColId->Name = L"dgvColId";
			this->dgvColId->ReadOnly = true;
			this->dgvColId->Visible = false;
			this->dgvColId->Width = 80;
			// 
			// cidadao
			// 
			this->cidadao->HeaderText = L"CPF Cidadão";
			this->cidadao->Name = L"cidadao";
			this->cidadao->ReadOnly = true;
			// 
			// clmStatusOS
			// 
			this->clmStatusOS->HeaderText = L"Status OS";
			this->clmStatusOS->Name = L"clmStatusOS";
			this->clmStatusOS->ReadOnly = true;
			// 
			// dgvRua
			// 
			this->dgvRua->HeaderText = L"Logradouro";
			this->dgvRua->Name = L"dgvRua";
			this->dgvRua->ReadOnly = true;
			this->dgvRua->Width = 350;
			// 
			// dgvColNum
			// 
			this->dgvColNum->HeaderText = L"Número";
			this->dgvColNum->Name = L"dgvColNum";
			this->dgvColNum->ReadOnly = true;
			this->dgvColNum->Width = 60;
			// 
			// data
			// 
			this->data->HeaderText = L"Data";
			this->data->Name = L"data";
			this->data->ReadOnly = true;
			this->data->Width = 70;
			// 
			// DashboardAssessor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1017, 577);
			this->Controls->Add(this->tabcontrol);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"DashboardAssessor";
			this->Text = L"DashboardAssessor";
			this->Load += gcnew System::EventHandler(this, &DashboardAssessor::DashboardAssessor_Load);
			this->tpNot->ResumeLayout(false);
			this->tpNot->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvOrdem))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picNot))->EndInit();
			this->tp1->ResumeLayout(false);
			this->tp1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picPerfil))->EndInit();
			this->tabcontrol->ResumeLayout(false);
			this->tpBuraco->ResumeLayout(false);
			this->tpBuraco->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBuraco))->EndInit();
			this->tpCidadao->ResumeLayout(false);
			this->tpCidadao->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picCidadao))->EndInit();
			this->pnlCidadao->ResumeLayout(false);
			this->pnlCidadao->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void DashboardAssessor_Load(System::Object^  sender, System::EventArgs^  e) {
		this->picPerfil->Image = gcnew Bitmap("images\\assessor.jpg");
		this->picCidadao->Image = gcnew Bitmap("images\\cidadao.jpg");
		this->picBuraco->Image = gcnew Bitmap("images\\buraco.jpg");
		this->picNot->Image = gcnew Bitmap("images\\notificacao.jpg");
		this->btnRefresh->Image = gcnew Bitmap("images\\refresh.png");
		btnRefresh_Click(sender, e);
	}

	private: System::Void btnBusc_Click(System::Object^  sender, System::EventArgs^  e) {
		Cidadao *c = CidadaoDAO::buscarCidadao(msclr::interop::marshal_as<std::string>(txtCpfBusca->Text->ToString()));
		if (c != NULL) // cidadao encontrado, habilita edição 
		{
			btnEditar->Enabled = true;
			btnCad->Enabled = false;
			txtNomeCid->Text = gcnew String(c->getnome().c_str());
			txtCpf->Text = txtCpfBusca->Text;
			txtContato->Text = gcnew String(c->getcontato().c_str());
			cmbCanal->Text = gcnew String(c->getcanal().c_str());
		}
		else
		{
			txtCpfBusca->Clear();
			MessageBox::Show("CPF não encontrado! Favor realizar o cadastro","Alerta",MessageBoxButtons::OK,MessageBoxIcon::Warning);

		}
		//cidadao nao encontrado ; nao faz nada
			
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
	if (MessageBox::Show("Deseja incluir esses dados?", "Confirma Inclusão", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::No)
		return;
	Cidadao *c = CidadaoDAO::buscarCidadao(msclr::interop::marshal_as<std::string>(txtCPFCidadao->Text->ToString()));
	if (c == NULL) // cidadao encontrado, habilita edição 
	{
		MessageBox::Show("Cidadão não cadastrado! Favor realizar o cadastro prévio na aba CIDADAO.", "Erro - Cidadão inexisteste", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	Buraco* buraco = new Buraco();
	buraco->setnomerua(msclr::interop::marshal_as<std::string>(this->textLogradouro->Text->ToString()));
	buraco->setnumero(Convert::ToInt32(this->textNumero->Text->ToString()));
	buraco->setposrel(msclr::interop::marshal_as<std::string>(this->comboPosRel->SelectedItem->ToString()));
	buraco->settamanho(Convert::ToInt32(this->comboTamanho->SelectedItem->ToString()));
	buraco->setregional(msclr::interop::marshal_as<std::string>(this->textRegional->Text->ToString()));
	string cpf = msclr::interop::marshal_as<std::string>(txtCPFCidadao->Text->ToString());
	BuracoDAO::criarBuraco(buraco->getnomerua(), buraco->getnumero(), buraco->getposrel(), buraco->getregional(), buraco->gettamanho(), cpf);

	MessageBox::Show("Dados Salvos com Sucesso!", "Salvar Dados", MessageBoxButtons::OK, MessageBoxIcon::Information);
	btnLimpar_Click(sender, e);
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void btnEditar_Click(System::Object^  sender, System::EventArgs^  e) {
	pnlCidadao->Enabled = true;
	txtCpfBusca->Enabled = false;
	btnBusc->Enabled = false;
	txtCpf->Enabled = false;

}
private: System::Void btnCancelarCid_Click(System::Object^  sender, System::EventArgs^  e) {
	txtCpf->Clear();
	txtCpfBusca->Clear();
	cmbCanal->Text = "";
	txtNomeCid->Clear();
	txtContato->Clear();
	pnlCidadao->Enabled = false;
	btnBusc->Enabled = true;
	txtCpfBusca->Enabled = true;
	btnEditar->Enabled = false;
	btnCad->Enabled = true;

}
private: System::Void btnCad_Click(System::Object^  sender, System::EventArgs^  e) {
	txtCpfBusca->Enabled = false;
	pnlCidadao->Enabled = true;
	btnEditar->Enabled = false;
	btnBusc->Enabled = false;
	txtCpf->Enabled = true;


}
private: System::Void btnAcc_Click(System::Object^  sender, System::EventArgs^  e) {
	if (MessageBox::Show("Deseja incluir esses dados?", "Confirma Inclusão", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::No)
		return;
	Cidadao *c = new Cidadao();
	c->setcanal(msclr::interop::marshal_as<std::string>(cmbCanal->Text));
	c->setcontato(msclr::interop::marshal_as<std::string>(txtContato->Text));
	c->setcpf(msclr::interop::marshal_as<std::string>(txtCpf->Text));
	c->setnome(msclr::interop::marshal_as<std::string>(txtNomeCid->Text));
	if (txtCpf->Enabled)
		CidadaoDAO::criarCidadao(c->getnome(), c->getcanal(), c->getcontato(), c->getcpf());
	else
		CidadaoDAO::editarCidadao(c->getcpf(), c->getnome(), c->getcanal(), c->getcontato());
	MessageBox::Show("Dados Salvos com Sucesso!", "Salvar Dados", MessageBoxButtons::OK, MessageBoxIcon::Information);
	btnCancelarCid_Click(sender, e);
}
private: System::Void btnLimpar_Click(System::Object^  sender, System::EventArgs^  e) {

	textLogradouro->Clear();
	textNumero->Clear();
	comboPosRel->Text = "";
	txtCPFCidadao->Clear();
	textRegional->Clear();
	comboTamanho->SelectedIndex = -1;
}
private: System::Void btnRefresh_Click(System::Object^  sender, System::EventArgs^  e) {
	dgvOrdem->Rows->Clear();
	n = NotificacaoDAO::SelecionarEmEspera();
	int i = 0;
	while (n[i] != NULL)
	{

		String ^id, ^cpf, ^status, ^log, ^num, ^data;
		id = n[i]->getidordem()->getidordem().ToString();
		cpf = gcnew String(n[i]->getcpf()->getcpf().c_str());
		status = gcnew String(n[i]->getidordem()->getstatus().c_str());
		log = gcnew String(n[i]->getidordem()->getburaco()->getnomerua().c_str());
		num = n[i]->getidordem()->getburaco()->getnumero().ToString();
		data = gcnew String(n[i]->getdata().c_str());
		dgvOrdem->Rows->Add(id, cpf, status, log, num);
	
		i++;
	}
	dgvOrdem->ClearSelection();
}
private: System::Void dgvOrdem_SelectionChanged(System::Object^  sender, System::EventArgs^  e) {
	if (dgvOrdem->SelectedRows->Count != 1)
	{
		txtNotCid->Clear();
		txtNotCanal->Clear();
		txtNotContato->Clear();
		txtNotCPF->Clear();
		return;
	}
	Cidadao * c = n[dgvOrdem->SelectedRows[0]->Index]->getcpf();
	txtNotCid->Text = gcnew String(c->getnome().c_str());
	txtNotCanal->Text = gcnew String(c->getcanal().c_str());
	txtNotContato->Text = gcnew String(c->getcontato().c_str());
	txtNotCPF->Text = gcnew String(c->getcpf().c_str());
}
private: System::Void btnResolve_Click(System::Object^  sender, System::EventArgs^  e) {
	int index = dgvOrdem->SelectedRows[0]->Index;
	if (n[index]->getidordem()->getstatus() != "FINALIZADA")
	{
		MessageBox::Show("Impossível fechar notificação de OS aberta! Aguarde a finalização da OS primeiro.", "Erro ao fechar", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		return;
	}
	if (MessageBox::Show("Deseja finalizar a notificação selecionada?", "Confirma Fechamento", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::No)
		return;
	NotificacaoDAO::editarNotificacao(n[index]->getidordem()->getidordem(), n[index]->getcpf()->getcpf(),
		n[index]->getdata(), n[index]->gethora(), "FINALIZADA");
	MessageBox::Show("Dados Salvos com Sucesso!", "Salvar Dados", MessageBoxButtons::OK, MessageBoxIcon::Information);
	btnRefresh_Click(sender, e);
}
private: System::Void dgvOrdem_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
};
}
