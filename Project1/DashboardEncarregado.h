#pragma once
#include <iostream>
#include <msclr\marshal_cppstd.h>
#include "SaidaDAO.h"
#include "MaterialDAO.h"
#include "VerEquipe.h"
#include "EquipamentoDAO.h"
#include "EquipeDAO.h"

namespace InfoBuraco {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DashboardEncarregado
	/// </summary>
	public ref class DashboardEncarregado : public System::Windows::Forms::Form
	{
	public:
		DashboardEncarregado(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}


		DashboardEncarregado(string login)
		{
			InitializeComponent();
			System::String^ str1 = gcnew String(login.c_str());
			lblNome->Text = str1;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DashboardEncarregado()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabcontrol;
	protected:
	private: System::Windows::Forms::TabPage^  tp1;


	private: Saida * * s;
	private: Ordem_de_Servico * * os;
	private: Material * * m;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  picUser;

	private: System::Windows::Forms::Label^  lblNome;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabPage^  tpSaida;

	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Panel^  pnlMat;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  btnInclude;
	private: System::Windows::Forms::ComboBox^  cmbNome;



	private: System::Windows::Forms::TextBox^  txtVol;

	private: System::Windows::Forms::Label^  lblUM;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::ListBox^  ltbDetalhes;

	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  lblNum;
	private: System::Windows::Forms::Button^  btnIncompleta;
	private: System::Windows::Forms::Button^  btnAddMat;
	private: System::Windows::Forms::Button^  btnFim;
	private: System::Windows::Forms::Button^  btnSel;





	private: System::Windows::Forms::ComboBox^  cmbSaid;

	private: System::Windows::Forms::Button^  btnFimOS;
	private: System::Windows::Forms::Button^  btnCancelar;
	private: System::Windows::Forms::ListBox^  ltbVol;
	private: System::Windows::Forms::ListBox^  ltbNomeMat;
	private: System::Windows::Forms::Button^  btnCancelarOS;
	private: System::Windows::Forms::TextBox^  txtHoras;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::PictureBox^  picSaida;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::ListBox^  ltbServico;
	private: System::Windows::Forms::ListBox^  ltbEqp;
	private: System::Windows::Forms::ComboBox^  cmbVS;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  btnEquipe;
	private: System::Windows::Forms::Button^  btnEstimar;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  txtDist;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ToolTip^  toolTip1;

	private: System::ComponentModel::IContainer^  components;








	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->tabcontrol = (gcnew System::Windows::Forms::TabControl());
			this->tp1 = (gcnew System::Windows::Forms::TabPage());
			this->lblNum = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->picUser = (gcnew System::Windows::Forms::PictureBox());
			this->lblNome = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->btnEquipe = (gcnew System::Windows::Forms::Button());
			this->btnEstimar = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->ltbServico = (gcnew System::Windows::Forms::ListBox());
			this->ltbEqp = (gcnew System::Windows::Forms::ListBox());
			this->cmbVS = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->picSaida = (gcnew System::Windows::Forms::PictureBox());
			this->tpSaida = (gcnew System::Windows::Forms::TabPage());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtDist = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			this->btnIncompleta = (gcnew System::Windows::Forms::Button());
			this->btnAddMat = (gcnew System::Windows::Forms::Button());
			this->btnFim = (gcnew System::Windows::Forms::Button());
			this->btnSel = (gcnew System::Windows::Forms::Button());
			this->cmbSaid = (gcnew System::Windows::Forms::ComboBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->ltbDetalhes = (gcnew System::Windows::Forms::ListBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->pnlMat = (gcnew System::Windows::Forms::Panel());
			this->txtHoras = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btnCancelarOS = (gcnew System::Windows::Forms::Button());
			this->ltbVol = (gcnew System::Windows::Forms::ListBox());
			this->ltbNomeMat = (gcnew System::Windows::Forms::ListBox());
			this->btnFimOS = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnInclude = (gcnew System::Windows::Forms::Button());
			this->cmbNome = (gcnew System::Windows::Forms::ComboBox());
			this->txtVol = (gcnew System::Windows::Forms::TextBox());
			this->lblUM = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->tabcontrol->SuspendLayout();
			this->tp1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picUser))->BeginInit();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picSaida))->BeginInit();
			this->tpSaida->SuspendLayout();
			this->pnlMat->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabcontrol
			// 
			this->tabcontrol->Controls->Add(this->tp1);
			this->tabcontrol->Controls->Add(this->tabPage1);
			this->tabcontrol->Controls->Add(this->tpSaida);
			this->tabcontrol->HotTrack = true;
			this->tabcontrol->ItemSize = System::Drawing::Size(120, 75);
			this->tabcontrol->Location = System::Drawing::Point(1, 1);
			this->tabcontrol->Multiline = true;
			this->tabcontrol->Name = L"tabcontrol";
			this->tabcontrol->SelectedIndex = 0;
			this->tabcontrol->Size = System::Drawing::Size(990, 503);
			this->tabcontrol->SizeMode = System::Windows::Forms::TabSizeMode::Fixed;
			this->tabcontrol->TabIndex = 1;
			// 
			// tp1
			// 
			this->tp1->Controls->Add(this->lblNum);
			this->tp1->Controls->Add(this->label3);
			this->tp1->Controls->Add(this->picUser);
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
			// lblNum
			// 
			this->lblNum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNum->Location = System::Drawing::Point(439, 124);
			this->lblNum->Name = L"lblNum";
			this->lblNum->Size = System::Drawing::Size(52, 31);
			this->lblNum->TabIndex = 10;
			this->lblNum->Text = L"XX";
			this->lblNum->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(274, 124);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(452, 62);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Você possui          saídas agendadas\r\n para próximos dias";
			// 
			// picUser
			// 
			this->picUser->Location = System::Drawing::Point(30, 100);
			this->picUser->Name = L"picUser";
			this->picUser->Size = System::Drawing::Size(192, 192);
			this->picUser->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picUser->TabIndex = 2;
			this->picUser->TabStop = false;
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
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->btnEquipe);
			this->tabPage1->Controls->Add(this->btnEstimar);
			this->tabPage1->Controls->Add(this->label12);
			this->tabPage1->Controls->Add(this->label11);
			this->tabPage1->Controls->Add(this->ltbServico);
			this->tabPage1->Controls->Add(this->ltbEqp);
			this->tabPage1->Controls->Add(this->cmbVS);
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->picSaida);
			this->tabPage1->Location = System::Drawing::Point(4, 79);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(982, 420);
			this->tabPage1->TabIndex = 2;
			this->tabPage1->Text = L"VISUALIZAR";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// btnEquipe
			// 
			this->btnEquipe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEquipe->Location = System::Drawing::Point(284, 340);
			this->btnEquipe->Name = L"btnEquipe";
			this->btnEquipe->Size = System::Drawing::Size(294, 41);
			this->btnEquipe->TabIndex = 35;
			this->btnEquipe->Text = L"Ver Dados da Equipe Escalada";
			this->btnEquipe->UseVisualStyleBackColor = true;
			this->btnEquipe->Click += gcnew System::EventHandler(this, &DashboardEncarregado::btnEquipe_Click);
			// 
			// btnEstimar
			// 
			this->btnEstimar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEstimar->Location = System::Drawing::Point(628, 340);
			this->btnEstimar->Name = L"btnEstimar";
			this->btnEstimar->Size = System::Drawing::Size(294, 41);
			this->btnEstimar->TabIndex = 34;
			this->btnEstimar->Text = L"Ver Estimativa de Material Necessário";
			this->btnEstimar->UseVisualStyleBackColor = true;
			this->btnEstimar->Click += gcnew System::EventHandler(this, &DashboardEncarregado::btnEstimar_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(268, 152);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(191, 20);
			this->label12->TabIndex = 33;
			this->label12->Text = L"Equipamentos para Levar";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(624, 151);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(215, 20);
			this->label11->TabIndex = 32;
			this->label11->Text = L"Ordens de Serviço p/ Cumprir";
			// 
			// ltbServico
			// 
			this->ltbServico->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ltbServico->FormattingEnabled = true;
			this->ltbServico->ItemHeight = 20;
			this->ltbServico->Location = System::Drawing::Point(628, 175);
			this->ltbServico->Name = L"ltbServico";
			this->ltbServico->Size = System::Drawing::Size(312, 144);
			this->ltbServico->TabIndex = 31;
			// 
			// ltbEqp
			// 
			this->ltbEqp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ltbEqp->FormattingEnabled = true;
			this->ltbEqp->ItemHeight = 20;
			this->ltbEqp->Location = System::Drawing::Point(273, 175);
			this->ltbEqp->Name = L"ltbEqp";
			this->ltbEqp->Size = System::Drawing::Size(321, 144);
			this->ltbEqp->TabIndex = 30;
			// 
			// cmbVS
			// 
			this->cmbVS->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbVS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbVS->FormattingEnabled = true;
			this->cmbVS->Location = System::Drawing::Point(272, 100);
			this->cmbVS->Name = L"cmbVS";
			this->cmbVS->Size = System::Drawing::Size(320, 28);
			this->cmbVS->TabIndex = 29;
			this->cmbVS->SelectedIndexChanged += gcnew System::EventHandler(this, &DashboardEncarregado::cmbVS_SelectedIndexChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(269, 77);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(190, 20);
			this->label10->TabIndex = 28;
			this->label10->Text = L"Selecionar Data de Saída";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(30, 30);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(366, 31);
			this->label9->TabIndex = 4;
			this->label9->Text = L"Visualizar Saídas Agendadas";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// picSaida
			// 
			this->picSaida->Location = System::Drawing::Point(30, 100);
			this->picSaida->Name = L"picSaida";
			this->picSaida->Size = System::Drawing::Size(192, 192);
			this->picSaida->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picSaida->TabIndex = 3;
			this->picSaida->TabStop = false;
			// 
			// tpSaida
			// 
			this->tpSaida->Controls->Add(this->label7);
			this->tpSaida->Controls->Add(this->txtDist);
			this->tpSaida->Controls->Add(this->label4);
			this->tpSaida->Controls->Add(this->btnCancelar);
			this->tpSaida->Controls->Add(this->btnIncompleta);
			this->tpSaida->Controls->Add(this->btnAddMat);
			this->tpSaida->Controls->Add(this->btnFim);
			this->tpSaida->Controls->Add(this->btnSel);
			this->tpSaida->Controls->Add(this->cmbSaid);
			this->tpSaida->Controls->Add(this->label19);
			this->tpSaida->Controls->Add(this->ltbDetalhes);
			this->tpSaida->Controls->Add(this->label18);
			this->tpSaida->Controls->Add(this->pnlMat);
			this->tpSaida->Controls->Add(this->label14);
			this->tpSaida->Location = System::Drawing::Point(4, 79);
			this->tpSaida->Name = L"tpSaida";
			this->tpSaida->Padding = System::Windows::Forms::Padding(3);
			this->tpSaida->Size = System::Drawing::Size(982, 420);
			this->tpSaida->TabIndex = 1;
			this->tpSaida->Text = L"FECHAR SAIDA";
			this->tpSaida->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(312, 295);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(32, 20);
			this->label7->TabIndex = 38;
			this->label7->Text = L"Km";
			// 
			// txtDist
			// 
			this->txtDist->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDist->Location = System::Drawing::Point(215, 292);
			this->txtDist->Name = L"txtDist";
			this->txtDist->Size = System::Drawing::Size(91, 26);
			this->txtDist->TabIndex = 37;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(58, 295);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(151, 20);
			this->label4->TabIndex = 36;
			this->label4->Text = L"Distância Percorrida";
			// 
			// btnCancelar
			// 
			this->btnCancelar->Enabled = false;
			this->btnCancelar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancelar->Location = System::Drawing::Point(426, 356);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(100, 29);
			this->btnCancelar->TabIndex = 35;
			this->btnCancelar->Text = L"Cancelar";
			this->btnCancelar->UseVisualStyleBackColor = true;
			this->btnCancelar->Click += gcnew System::EventHandler(this, &DashboardEncarregado::button1_Click);
			// 
			// btnIncompleta
			// 
			this->btnIncompleta->Enabled = false;
			this->btnIncompleta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnIncompleta->Location = System::Drawing::Point(426, 219);
			this->btnIncompleta->Name = L"btnIncompleta";
			this->btnIncompleta->Size = System::Drawing::Size(100, 50);
			this->btnIncompleta->TabIndex = 34;
			this->btnIncompleta->Text = L"     OS     \r\nIncompleta";
			this->btnIncompleta->UseVisualStyleBackColor = true;
			this->btnIncompleta->Click += gcnew System::EventHandler(this, &DashboardEncarregado::btnIncompleta_Click);
			// 
			// btnAddMat
			// 
			this->btnAddMat->Enabled = false;
			this->btnAddMat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddMat->Location = System::Drawing::Point(426, 171);
			this->btnAddMat->Name = L"btnAddMat";
			this->btnAddMat->Size = System::Drawing::Size(100, 42);
			this->btnAddMat->TabIndex = 33;
			this->btnAddMat->Text = L">>";
			this->btnAddMat->UseVisualStyleBackColor = true;
			this->btnAddMat->Click += gcnew System::EventHandler(this, &DashboardEncarregado::btnAddMat_Click);
			// 
			// btnFim
			// 
			this->btnFim->Enabled = false;
			this->btnFim->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFim->Location = System::Drawing::Point(62, 350);
			this->btnFim->Name = L"btnFim";
			this->btnFim->Size = System::Drawing::Size(171, 41);
			this->btnFim->TabIndex = 32;
			this->btnFim->Text = L"Finalizar Saída";
			this->btnFim->UseVisualStyleBackColor = true;
			this->btnFim->Click += gcnew System::EventHandler(this, &DashboardEncarregado::btnFim_Click);
			// 
			// btnSel
			// 
			this->btnSel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSel->Location = System::Drawing::Point(426, 110);
			this->btnSel->Name = L"btnSel";
			this->btnSel->Size = System::Drawing::Size(98, 29);
			this->btnSel->TabIndex = 31;
			this->btnSel->Text = L"Selecionar";
			this->btnSel->UseVisualStyleBackColor = true;
			this->btnSel->Click += gcnew System::EventHandler(this, &DashboardEncarregado::btnSel_Click);
			// 
			// cmbSaid
			// 
			this->cmbSaid->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbSaid->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbSaid->FormattingEnabled = true;
			this->cmbSaid->Location = System::Drawing::Point(57, 111);
			this->cmbSaid->Name = L"cmbSaid";
			this->cmbSaid->Size = System::Drawing::Size(347, 28);
			this->cmbSaid->TabIndex = 27;
			this->cmbSaid->SelectedIndexChanged += gcnew System::EventHandler(this, &DashboardEncarregado::cmbSaid_SelectedIndexChanged);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(58, 146);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(217, 20);
			this->label19->TabIndex = 25;
			this->label19->Text = L"Ordens de Serviço em Aberto";
			// 
			// ltbDetalhes
			// 
			this->ltbDetalhes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ltbDetalhes->FormattingEnabled = true;
			this->ltbDetalhes->ItemHeight = 20;
			this->ltbDetalhes->Location = System::Drawing::Point(62, 169);
			this->ltbDetalhes->Name = L"ltbDetalhes";
			this->ltbDetalhes->Size = System::Drawing::Size(358, 104);
			this->ltbDetalhes->TabIndex = 24;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(52, 84);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(224, 24);
			this->label18->TabIndex = 22;
			this->label18->Text = L"Selecionar data de  Saída";
			// 
			// pnlMat
			// 
			this->pnlMat->Controls->Add(this->txtHoras);
			this->pnlMat->Controls->Add(this->label8);
			this->pnlMat->Controls->Add(this->btnCancelarOS);
			this->pnlMat->Controls->Add(this->ltbVol);
			this->pnlMat->Controls->Add(this->ltbNomeMat);
			this->pnlMat->Controls->Add(this->btnFimOS);
			this->pnlMat->Controls->Add(this->label2);
			this->pnlMat->Controls->Add(this->btnInclude);
			this->pnlMat->Controls->Add(this->cmbNome);
			this->pnlMat->Controls->Add(this->txtVol);
			this->pnlMat->Controls->Add(this->lblUM);
			this->pnlMat->Controls->Add(this->label5);
			this->pnlMat->Controls->Add(this->label6);
			this->pnlMat->Location = System::Drawing::Point(546, 30);
			this->pnlMat->Name = L"pnlMat";
			this->pnlMat->Size = System::Drawing::Size(409, 369);
			this->pnlMat->TabIndex = 12;
			// 
			// txtHoras
			// 
			this->txtHoras->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtHoras->Location = System::Drawing::Point(304, 280);
			this->txtHoras->Name = L"txtHoras";
			this->txtHoras->Size = System::Drawing::Size(91, 26);
			this->txtHoras->TabIndex = 36;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(103, 283);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(176, 20);
			this->label8->TabIndex = 38;
			this->label8->Text = L"Incluir Horas de Serviço";
			// 
			// btnCancelarOS
			// 
			this->btnCancelarOS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancelarOS->Location = System::Drawing::Point(295, 326);
			this->btnCancelarOS->Name = L"btnCancelarOS";
			this->btnCancelarOS->Size = System::Drawing::Size(100, 29);
			this->btnCancelarOS->TabIndex = 36;
			this->btnCancelarOS->Text = L"Cancelar";
			this->btnCancelarOS->UseVisualStyleBackColor = true;
			this->btnCancelarOS->Click += gcnew System::EventHandler(this, &DashboardEncarregado::button1_Click_1);
			// 
			// ltbVol
			// 
			this->ltbVol->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ltbVol->FormattingEnabled = true;
			this->ltbVol->ItemHeight = 20;
			this->ltbVol->Location = System::Drawing::Point(305, 160);
			this->ltbVol->Name = L"ltbVol";
			this->ltbVol->Size = System::Drawing::Size(90, 104);
			this->ltbVol->TabIndex = 37;
			// 
			// ltbNomeMat
			// 
			this->ltbNomeMat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ltbNomeMat->FormattingEnabled = true;
			this->ltbNomeMat->ItemHeight = 20;
			this->ltbNomeMat->Location = System::Drawing::Point(27, 160);
			this->ltbNomeMat->Name = L"ltbNomeMat";
			this->ltbNomeMat->Size = System::Drawing::Size(272, 104);
			this->ltbNomeMat->TabIndex = 36;
			// 
			// btnFimOS
			// 
			this->btnFimOS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFimOS->Location = System::Drawing::Point(39, 326);
			this->btnFimOS->Name = L"btnFimOS";
			this->btnFimOS->Size = System::Drawing::Size(126, 28);
			this->btnFimOS->TabIndex = 33;
			this->btnFimOS->Text = L"Finalizar OS";
			this->btnFimOS->UseVisualStyleBackColor = true;
			this->btnFimOS->Click += gcnew System::EventHandler(this, &DashboardEncarregado::btnFimOS_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(15, 7);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(248, 48);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Incluir Material Utilizado \r\ne Horas de Serviço (por OS)";
			// 
			// btnInclude
			// 
			this->btnInclude->Location = System::Drawing::Point(301, 71);
			this->btnInclude->Name = L"btnInclude";
			this->btnInclude->Size = System::Drawing::Size(78, 63);
			this->btnInclude->TabIndex = 11;
			this->btnInclude->Text = L"Incluir";
			this->btnInclude->UseVisualStyleBackColor = true;
			this->btnInclude->Click += gcnew System::EventHandler(this, &DashboardEncarregado::btnInclude_Click);
			// 
			// cmbNome
			// 
			this->cmbNome->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbNome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbNome->FormattingEnabled = true;
			this->cmbNome->Location = System::Drawing::Point(107, 68);
			this->cmbNome->Name = L"cmbNome";
			this->cmbNome->Size = System::Drawing::Size(156, 28);
			this->cmbNome->TabIndex = 5;
			this->cmbNome->SelectedIndexChanged += gcnew System::EventHandler(this, &DashboardEncarregado::cmbNome_SelectedIndexChanged);
			// 
			// txtVol
			// 
			this->txtVol->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtVol->Location = System::Drawing::Point(107, 115);
			this->txtVol->Name = L"txtVol";
			this->txtVol->Size = System::Drawing::Size(100, 26);
			this->txtVol->TabIndex = 6;
			// 
			// lblUM
			// 
			this->lblUM->AutoSize = true;
			this->lblUM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUM->Location = System::Drawing::Point(213, 118);
			this->lblUM->Name = L"lblUM";
			this->lblUM->Size = System::Drawing::Size(39, 20);
			this->lblUM->TabIndex = 9;
			this->lblUM->Text = L"u.m.";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(23, 118);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 20);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Volume";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(35, 71);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(51, 20);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Nome";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(30, 30);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(190, 31);
			this->label14->TabIndex = 3;
			this->label14->Text = L"Concluir Saída";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// toolTip1
			// 
			this->toolTip1->IsBalloon = true;
			this->toolTip1->ToolTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			// 
			// DashboardEncarregado
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(988, 502);
			this->Controls->Add(this->tabcontrol);
			this->Name = L"DashboardEncarregado";
			this->Text = L"DashboardEncarregado";
			this->Load += gcnew System::EventHandler(this, &DashboardEncarregado::DashboardEncarregado_Load);
			this->tabcontrol->ResumeLayout(false);
			this->tp1->ResumeLayout(false);
			this->tp1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picUser))->EndInit();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picSaida))->EndInit();
			this->tpSaida->ResumeLayout(false);
			this->tpSaida->PerformLayout();
			this->pnlMat->ResumeLayout(false);
			this->pnlMat->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void DashboardEncarregado_Load(System::Object^  sender, System::EventArgs^  e) {
		this->picSaida->Image = gcnew Bitmap("images\\agenda.jpg");
		this->picUser->Image = gcnew Bitmap("images\\enc.jpg");
		toolTip1->SetToolTip(btnEstimar, "Depois de finalizar as Ordens de Serviço na lista acima, \ninsira o valor da distância percorrida para finalizar a Saída.");
		string login = msclr::interop::marshal_as<std::string>(lblNome->Text);
		ltbDetalhes->Items->Clear();
		cmbSaid->Items->Clear();
		cmbVS->Items->Clear();
		cmbNome->Items->Clear();
		lblNum->Text = SaidaDAO::contarSaidasAgendadas(login).ToString();
		m = MaterialDAO::SelecionarTudo();
		int i = 0;
		while (m[i] != NULL)
		{
			System::String^str = gcnew String(m[i]->getnomematerial().c_str());
			cmbNome->Items->Add(str);
			i++;
		}
		pnlMat->Enabled = false;
		s = SaidaDAO::SelecionarAgendadas(login);
		i = 0;
		while (s[i] != NULL)
		{
			System::String^ str = gcnew String(s[i]->getdata().c_str());
			cmbSaid->Items->Add(str);
			cmbVS->Items->Add(str);
			i++;
		}
	}
	private: System::Void btnSel_Click(System::Object^  sender, System::EventArgs^  e) {
		DateTimeConverter dtc;
		DateTime dt = (DateTime)dtc.ConvertFromString(cmbSaid->Text->ToString());

		if (dt > dt.Now)
		{
			MessageBox::Show("Não é possível finalizar uma saída antes dela ter sido realizada. Tente novamente mais tarde.", "Atenção", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		if (cmbSaid->SelectedIndex == -1) return;
		os = Ordem_De_ServicoDAO::buscarOrdemPorSaida(s[cmbSaid->SelectedIndex]->getidsaida());
		int i = 0;
		while (os[i] != NULL)
		{
			string texto = to_string(os[i]->getidordem()) + " - " + os[i]->getburaco()->getnomerua() + ", " + to_string(os[i]->getburaco()->getnumero());
			System::String ^ str = gcnew String(texto.c_str());
			ltbDetalhes->Items->Add(str);
			i++;
		}
		btnCancelar->Enabled = true;
		cmbSaid->Enabled = false;
		btnSel->Enabled = false;
		btnAddMat->Enabled = true;
		btnFim->Enabled = true;
		btnIncompleta->Enabled = true;
		ltbDetalhes->Enabled = true;

	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->DashboardEncarregado_Load(sender, e);
		btnCancelar->Enabled = false;
		btnSel->Enabled = true;
		cmbSaid->Enabled = true;
		txtDist->Clear();
	}
	private: System::Void btnAddMat_Click(System::Object^  sender, System::EventArgs^  e) {

		if (ltbDetalhes->SelectedIndex == -1) return;

		pnlMat->Enabled = true;
		ltbDetalhes->Enabled = false;
		btnAddMat->Enabled = false;
		btnIncompleta->Enabled = false;
		ltbVol->Items->Clear();
		ltbNomeMat->Items->Clear();


	}
	private: System::Void cmbNome_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		if (cmbNome->SelectedIndex == -1) lblUM->Text = "u.m.";
		else
		{
			System::String^ st = gcnew String(m[cmbNome->SelectedIndex]->getunidademedida().c_str());
			lblUM->Text = st;
		}
	}
	private: System::Void btnInclude_Click(System::Object^  sender, System::EventArgs^  e) {
		if (txtVol->Text == "") return;
		if (cmbNome->SelectedIndex == -1) return;
		ltbNomeMat->Items->Add(cmbNome->Text);
		ltbVol->Items->Add(txtVol->Text);
		txtVol->Text = "";
		cmbNome->SelectedIndex = -1;
	}
	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		txtVol->Text = "";
		cmbNome->SelectedIndex = -1;
		ltbVol->Items->Clear();
		ltbNomeMat->Items->Clear();
		pnlMat->Enabled = false;
		txtHoras->Clear();
		btnCancelar->Enabled = true;
		cmbSaid->Enabled = false;
		btnSel->Enabled = false;
		btnAddMat->Enabled = true;
		btnIncompleta->Enabled = true;
		ltbDetalhes->Enabled = true;
	}
	private: System::Void btnIncompleta_Click(System::Object^  sender, System::EventArgs^  e) {
		if (ltbDetalhes->SelectedIndex == -1) return;
		if (MessageBox::Show("Deseja marcar a Ordem de Serviço selecionada como incompleta?", "Confirma OS Incompleta", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::No)
			return;
		Ordem_De_ServicoDAO::editarOrdemDeServico(os[ltbDetalhes->SelectedIndex]->getidordem(), 10,"ADIADA");

		MessageBox::Show("Dados Salvos com Sucesso!", "Salvar Dados", MessageBoxButtons::OK, MessageBoxIcon::Information);
		ltbDetalhes->Items->Clear();
		btnSel_Click(sender, e);

	}
	private: System::Void btnFimOS_Click(System::Object^  sender, System::EventArgs^  e) {
		if (MessageBox::Show("Deseja incluir os dados?", "Confirma Inclusão", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::No)
			return;
		float * vol = new float[ltbVol->Items->Count];
		string *mat = new string[ltbVol->Items->Count];
		int i = 0;
		while (i < ltbVol->Items->Count)
		{
			vol[i] = Convert::ToDouble(ltbVol->Items[i]);
			mat[i] = msclr::interop::marshal_as<std::string>(ltbNomeMat->Items[i]->ToString());
			i++;
		}
		int horas = Convert::ToInt32(txtHoras->Text);
		Ordem_De_ServicoDAO::editarOrdemDeServico(os[ltbDetalhes->SelectedIndex]->getidordem(), "FINALIZADA", ltbVol->Items->Count, mat, vol, horas);

		MessageBox::Show("Dados Salvos com Sucesso!", "Salvar Dados", MessageBoxButtons::OK, MessageBoxIcon::Information);
		ltbDetalhes->Items->Clear();
		btnSel_Click(sender, e);
		button1_Click_1(sender, e);

	}
	private: System::Void btnEquipe_Click(System::Object^  sender, System::EventArgs^  e) {

		if (cmbVS->SelectedIndex == -1) return;
		VerEquipe^ ve = gcnew VerEquipe(EquipeDAO::buscarEquipe(s[cmbVS->SelectedIndex]->getnomeequipe()));
		ve->ShowDialog();
	}

	private: System::Void cmbVS_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		ltbServico->Items->Clear();
		ltbEqp->Items->Clear();
		if (cmbVS->SelectedIndex == -1) return;
		os = Ordem_De_ServicoDAO::buscarOrdemPorSaida(s[cmbVS->SelectedIndex]->getidsaida());
		int i = 0;
		while (os[i] != NULL)
		{
			string texto = to_string(os[i]->getidordem()) + " - " + os[i]->getburaco()->getnomerua() + ", " + to_string(os[i]->getburaco()->getnumero());
			System::String ^ str = gcnew String(texto.c_str());
			ltbServico->Items->Add(str);
			i++;
		}
		Equipamento** eqp = EquipamentoDAO::buscarEquipamento(s[cmbVS->SelectedIndex]->getidsaida());
		i = 0;
		while (eqp[i] != NULL)
		{
			string texto = eqp[i]->getnome() + " - " + to_string(eqp[i]->getcusto()) + "  R$/hora";
			ltbEqp->Items->Add(gcnew String(texto.c_str()));
			i++;
		}
		
	}
	private: System::Void cmbSaid_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void btnEstimar_Click(System::Object^  sender, System::EventArgs^  e) {
		cmbVS_SelectedIndexChanged(sender, e);
	}
private: System::Void btnFim_Click(System::Object^  sender, System::EventArgs^  e) {
	if (MessageBox::Show("Deseja incluir os dados?", "Confirma Inclusão", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::No)
		return;
	if (ltbDetalhes->Items->Count > 0)
	{
		MessageBox::Show("Não é possível finalizar a saída enquanto ainda há ordens de serviço pendentes! Finalize-as e tente novamente", "Impossível Prosseguir", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		return;
	}
	SaidaDAO::editarSaida(s[cmbSaid->SelectedIndex]->getidsaida(), "FINALIZADA", Convert::ToDouble(txtDist->Text));
	MessageBox::Show("Dados Salvos com Sucesso!", "Salvar Dados", MessageBoxButtons::OK, MessageBoxIcon::Information);
	btnFim->Enabled = false;
	txtHoras->Enabled = false;
	btnAddMat->Enabled = false;
	btnIncompleta->Enabled = false;
	button1_Click(sender, e);
}
};
}