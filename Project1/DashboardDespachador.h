#pragma once
#include "GerenciarEquipes.h"

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
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;




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
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colNome;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colEncarregado;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colNumProf;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colCusto;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::DataGridView^  dgvEquipamento;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(DashboardDespachador::typeid));
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
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->tpEquipes = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dgvEquipe = (gcnew System::Windows::Forms::DataGridView());
			this->colNome = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colEncarregado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colNumProf = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colCusto = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->tpEquips = (gcnew System::Windows::Forms::TabPage());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dgvEquipamento = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->tpMateriais = (gcnew System::Windows::Forms::TabPage());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
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
			this->tpEquipes->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvEquipe))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->tpEquips->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvEquipamento))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->tpMateriais->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
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
			this->tabcontrol->Size = System::Drawing::Size(990, 491);
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
			this->tp1->Size = System::Drawing::Size(982, 408);
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
			//this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
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
			this->tpSaida->Controls->Add(this->dateTimePicker1);
			this->tpSaida->Location = System::Drawing::Point(4, 79);
			this->tpSaida->Name = L"tpSaida";
			this->tpSaida->Padding = System::Windows::Forms::Padding(3);
			this->tpSaida->Size = System::Drawing::Size(982, 408);
			this->tpSaida->TabIndex = 1;
			this->tpSaida->Text = L"COMPOR SAÍDA";
			this->tpSaida->UseVisualStyleBackColor = true;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(329, 102);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 0;
			// 
			// tpEquipes
			// 
			this->tpEquipes->Controls->Add(this->button1);
			this->tpEquipes->Controls->Add(this->button2);
			this->tpEquipes->Controls->Add(this->label6);
			this->tpEquipes->Controls->Add(this->dgvEquipe);
			this->tpEquipes->Controls->Add(this->label2);
			this->tpEquipes->Controls->Add(this->pictureBox2);
			this->tpEquipes->Location = System::Drawing::Point(4, 79);
			this->tpEquipes->Name = L"tpEquipes";
			this->tpEquipes->Size = System::Drawing::Size(982, 408);
			this->tpEquipes->TabIndex = 2;
			this->tpEquipes->Text = L"EQUIPES";
			this->tpEquipes->UseVisualStyleBackColor = true;
			this->tpEquipes->Click += gcnew System::EventHandler(this, &DashboardDespachador::tpEquipes_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(381, 343);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 38);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Visualizar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DashboardDespachador::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(257, 343);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 38);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Novo";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &DashboardDespachador::button2_Click);
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
			//this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(34, 89);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(177, 169);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// tpEquips
			// 
			this->tpEquips->Controls->Add(this->button3);
			this->tpEquips->Controls->Add(this->button4);
			this->tpEquips->Controls->Add(this->label7);
			this->tpEquips->Controls->Add(this->dgvEquipamento);
			this->tpEquips->Controls->Add(this->label8);
			this->tpEquips->Controls->Add(this->pictureBox3);
			this->tpEquips->Location = System::Drawing::Point(4, 79);
			this->tpEquips->Name = L"tpEquips";
			this->tpEquips->Size = System::Drawing::Size(982, 408);
			this->tpEquips->TabIndex = 3;
			this->tpEquips->Text = L"EQUIPAMENTOS";
			this->tpEquips->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(386, 340);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(105, 38);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Visualizar";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(262, 340);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(105, 38);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Novo";
			this->button4->UseVisualStyleBackColor = true;
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
			//this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(39, 86);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(177, 169);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 8;
			this->pictureBox3->TabStop = false;
			// 
			// tpMateriais
			// 
			this->tpMateriais->Controls->Add(this->button5);
			this->tpMateriais->Controls->Add(this->button6);
			this->tpMateriais->Controls->Add(this->label9);
			this->tpMateriais->Controls->Add(this->dataGridView2);
			this->tpMateriais->Controls->Add(this->label10);
			this->tpMateriais->Controls->Add(this->pictureBox4);
			this->tpMateriais->Location = System::Drawing::Point(4, 79);
			this->tpMateriais->Name = L"tpMateriais";
			this->tpMateriais->Size = System::Drawing::Size(982, 408);
			this->tpMateriais->TabIndex = 4;
			this->tpMateriais->Text = L"MATERIAIS";
			this->tpMateriais->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(398, 340);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(105, 38);
			this->button5->TabIndex = 19;
			this->button5->Text = L"Visualizar";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(274, 340);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(105, 38);
			this->button6->TabIndex = 18;
			this->button6->Text = L"Novo";
			this->button6->UseVisualStyleBackColor = true;
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
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->AllowUserToResizeColumns = false;
			this->dataGridView2->AllowUserToResizeRows = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn3,
					this->dataGridViewTextBoxColumn5, this->dataGridViewTextBoxColumn6
			});
			this->dataGridView2->Location = System::Drawing::Point(260, 109);
			this->dataGridView2->MultiSelect = false;
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView2->ShowEditingIcon = false;
			this->dataGridView2->Size = System::Drawing::Size(544, 225);
			this->dataGridView2->TabIndex = 16;
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
			//this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
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
			this->tpCM->Size = System::Drawing::Size(982, 408);
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
			//this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
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
			this->ClientSize = System::Drawing::Size(986, 487);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->tpCM->ResumeLayout(false);
			this->tpCM->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void DashboardDespachador_Load(System::Object^  sender, System::EventArgs^  e) {
		this->dgvEquipe->Rows->Add("Alpha", "Joãozinho", "5", "75,00");
		this->dgvEquipe->Rows->Add("Bravo", "Batatinha", "7", "125,00");
		this->dgvEquipamento->Rows->Add("26562", "BC bobcat", "25,00");
		

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

	GerenciarEquipes^ cadastrar = gcnew GerenciarEquipes();
	cadastrar->ShowDialog();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	GerenciarEquipes^ edit = gcnew GerenciarEquipes(2);
	edit->ShowDialog();
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
};
}
