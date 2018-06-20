#pragma once
#include "Equipamento.h"
#include <msclr\marshal_cppstd.h>
namespace InfoBuraco {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GerenciarEquipamentos
	/// </summary>
	public ref class GerenciarEquipamentos : public System::Windows::Forms::Form
	{
	public:
		GerenciarEquipamentos(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		GerenciarEquipamentos(Equipamento * e)
		{
			InitializeComponent();
			String ^str = gcnew String(e->getnome().c_str());
			txtNome->Text = str;
			str = gcnew String(e->getid().c_str());
			txtId->Text = str;
			numCusto->Value = (System::Decimal)e->getcusto();
			txtId->Enabled = false;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GerenciarEquipamentos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button4;
	protected:
	public: Equipamento * retorno()
	{
		return eq;
	}
	private: Equipamento * eq = NULL;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::NumericUpDown^  numCusto;
	private: System::Windows::Forms::TextBox^  txtNome;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txtId;
	private: System::Windows::Forms::Label^  label3;

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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->numCusto = (gcnew System::Windows::Forms::NumericUpDown());
			this->txtNome = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCusto))->BeginInit();
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(530, 200);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(134, 40);
			this->button4->TabIndex = 25;
			this->button4->Text = L"Cancelar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &GerenciarEquipamentos::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(195, 200);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(134, 40);
			this->button3->TabIndex = 22;
			this->button3->Text = L"Limpar";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(53, 200);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(134, 40);
			this->button2->TabIndex = 21;
			this->button2->Text = L"Confirmar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &GerenciarEquipamentos::button2_Click);
			// 
			// numCusto
			// 
			this->numCusto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numCusto->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 65536 });
			this->numCusto->Location = System::Drawing::Point(554, 129);
			this->numCusto->Name = L"numCusto";
			this->numCusto->Size = System::Drawing::Size(120, 26);
			this->numCusto->TabIndex = 20;
			// 
			// txtNome
			// 
			this->txtNome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNome->Location = System::Drawing::Point(195, 84);
			this->txtNome->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtNome->Name = L"txtNome";
			this->txtNome->Size = System::Drawing::Size(479, 26);
			this->txtNome->TabIndex = 18;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(408, 131);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(122, 20);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Custo (R$/hora)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(15, 87);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(172, 20);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Nome do Equipamento";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 25);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(300, 31);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Cadastrar Equipamento";
			// 
			// txtId
			// 
			this->txtId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtId->Location = System::Drawing::Point(195, 128);
			this->txtId->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(176, 26);
			this->txtId->TabIndex = 19;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(65, 131);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(122, 20);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Id Equipamento";
			// 
			// GerenciarEquipamentos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(697, 283);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->numCusto);
			this->Controls->Add(this->txtNome);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"GerenciarEquipamentos";
			this->Text = L"GerenciarEquipamentos";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCusto))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		eq = new Equipamento();
		eq->setnome(msclr::interop::marshal_as<std::string>(this->txtNome->Text));
		eq->setid(msclr::interop::marshal_as<std::string>(this->txtId->Text));
		eq->setcusto(Convert::ToDouble(numCusto->Value));
		this->Close();
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
	}
};
}