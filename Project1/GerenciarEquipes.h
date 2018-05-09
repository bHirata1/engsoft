#pragma once

namespace InfoBuraco {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GerenciarEquipes
	/// </summary>
	public ref class GerenciarEquipes : public System::Windows::Forms::Form
	{
	public:
		GerenciarEquipes(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		GerenciarEquipes(int a)
		{
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GerenciarEquipes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  txtNome;
	private: System::Windows::Forms::TextBox^  txtEncarregado;


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::NumericUpDown^  numTamanho;
	private: System::Windows::Forms::NumericUpDown^  numCusto;


	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtNome = (gcnew System::Windows::Forms::TextBox());
			this->txtEncarregado = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->numTamanho = (gcnew System::Windows::Forms::NumericUpDown());
			this->numCusto = (gcnew System::Windows::Forms::NumericUpDown());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numTamanho))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCusto))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(24, 25);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(225, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Cadastrar Equipe";
			this->label1->Click += gcnew System::EventHandler(this, &GerenciarEquipes::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(26, 87);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nome da Equipe";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(52, 123);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(101, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Encarregado";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(73, 156);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Tamanho ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(309, 156);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(122, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Custo (R$/hora)";
			// 
			// txtNome
			// 
			this->txtNome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNome->Location = System::Drawing::Point(167, 84);
			this->txtNome->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtNome->Name = L"txtNome";
			this->txtNome->Size = System::Drawing::Size(518, 26);
			this->txtNome->TabIndex = 5;
			// 
			// txtEncarregado
			// 
			this->txtEncarregado->Enabled = false;
			this->txtEncarregado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEncarregado->Location = System::Drawing::Point(167, 120);
			this->txtEncarregado->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtEncarregado->Name = L"txtEncarregado";
			this->txtEncarregado->Size = System::Drawing::Size(408, 26);
			this->txtEncarregado->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(583, 120);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 26);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Selecionar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// numTamanho
			// 
			this->numTamanho->Location = System::Drawing::Point(167, 154);
			this->numTamanho->Name = L"numTamanho";
			this->numTamanho->Size = System::Drawing::Size(120, 26);
			this->numTamanho->TabIndex = 8;
			// 
			// numCusto
			// 
			this->numCusto->Location = System::Drawing::Point(455, 154);
			this->numCusto->Name = L"numCusto";
			this->numCusto->Size = System::Drawing::Size(120, 26);
			this->numCusto->TabIndex = 9;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(83, 210);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(134, 40);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Confirmar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &GerenciarEquipes::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(243, 210);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(134, 40);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Limpar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &GerenciarEquipes::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(551, 210);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(134, 40);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Cancelar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &GerenciarEquipes::button4_Click);
			// 
			// GerenciarEquipes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(714, 283);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->numCusto);
			this->Controls->Add(this->numTamanho);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtEncarregado);
			this->Controls->Add(this->txtNome);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"GerenciarEquipes";
			this->Text = L"GerenciarEquipes";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numTamanho))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCusto))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	txtEncarregado->Text = "";
	txtNome->Text = "";
	numCusto->Text = "0";
	numTamanho->Text = "0";
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
};
}
