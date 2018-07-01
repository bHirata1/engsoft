#pragma once

namespace Project1 {

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
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  lblNome;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabPage^  tpSaida;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label14;

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
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->lblNome = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tpSaida = (gcnew System::Windows::Forms::TabPage());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabcontrol->SuspendLayout();
			this->tp1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tpSaida->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabcontrol
			// 
			this->tabcontrol->Controls->Add(this->tp1);
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
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(305, 171);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(50, 38);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"0";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(443, 109);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(50, 38);
			this->textBox1->TabIndex = 5;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(276, 174);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(582, 31);
			this->label4->TabIndex = 4;
			this->label4->Text = L"e         saídas agendadas para os próximos dias";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(276, 112);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(445, 31);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Você possui          saídas pendentes";
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
			// tpSaida
			// 
			this->tpSaida->Controls->Add(this->label2);
			this->tpSaida->Controls->Add(this->label14);
			this->tpSaida->Location = System::Drawing::Point(4, 79);
			this->tpSaida->Name = L"tpSaida";
			this->tpSaida->Padding = System::Windows::Forms::Padding(3);
			this->tpSaida->Size = System::Drawing::Size(982, 420);
			this->tpSaida->TabIndex = 1;
			this->tpSaida->Text = L"FECHAR SAIDA";
			this->tpSaida->UseVisualStyleBackColor = true;
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
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(103, 109);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(349, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"listar OS da saida, perguntar coisas tipo horas de trabalho, material gasto";
			// 
			// DashboardEncarregado
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(988, 502);
			this->Controls->Add(this->tabcontrol);
			this->Name = L"DashboardEncarregado";
			this->Text = L"DashboardEncarregado";
			this->tabcontrol->ResumeLayout(false);
			this->tp1->ResumeLayout(false);
			this->tp1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tpSaida->ResumeLayout(false);
			this->tpSaida->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
