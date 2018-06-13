#pragma once
//#include "MaterialDAO.h"
//#include "MySQLDAO.h"
#include "Material.h"

#include <msclr\marshal_cppstd.h>

namespace InfoBuraco {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GerenciarMateriais
	/// </summary>
	public ref class GerenciarMateriais : public System::Windows::Forms::Form
	{
	public:
		GerenciarMateriais(void)
		{
			InitializeComponent();
		
			novo = true;
		}

		GerenciarMateriais(Material* material)
		{
			InitializeComponent();
			String ^teste = gcnew String(material->getnomematerial().c_str()); 
			txtNome->Enabled = false; // https: //msdn.microsoft.com/en-us/library/ms235631.aspx
			txtNome->Text = teste;
			teste = gcnew String(material->getunidademedida().c_str());
			txtUM->Text = teste;
			numCusto->Value = (System::Decimal)material->getcusto();
			novo = false;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GerenciarMateriais()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button4;
	protected:
	private: bool novo;
	public: Material * retorno()
	{
		return mat;
	}
	private: Material * mat = NULL;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::NumericUpDown^  numCusto;
	private: System::Windows::Forms::TextBox^  txtUM;

	private: System::Windows::Forms::TextBox^  txtNome;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;

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
			this->txtUM = (gcnew System::Windows::Forms::TextBox());
			this->txtNome = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCusto))->BeginInit();
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(372, 209);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(106, 35);
			this->button4->TabIndex = 25;
			this->button4->Text = L"Cancelar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &GerenciarMateriais::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(154, 209);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(96, 35);
			this->button3->TabIndex = 24;
			this->button3->Text = L"Limpar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &GerenciarMateriais::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(28, 209);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(95, 35);
			this->button2->TabIndex = 23;
			this->button2->Text = L"Confirmar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &GerenciarMateriais::button2_Click);
			// 
			// numCusto
			// 
			this->numCusto->DecimalPlaces = 2;
			this->numCusto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numCusto->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 65536 });
			this->numCusto->Location = System::Drawing::Point(170, 141);
			this->numCusto->Name = L"numCusto";
			this->numCusto->Size = System::Drawing::Size(150, 26);
			this->numCusto->TabIndex = 22;
			// 
			// txtUM
			// 
			this->txtUM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtUM->Location = System::Drawing::Point(170, 104);
			this->txtUM->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtUM->Name = L"txtUM";
			this->txtUM->Size = System::Drawing::Size(150, 26);
			this->txtUM->TabIndex = 19;
			// 
			// txtNome
			// 
			this->txtNome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNome->Location = System::Drawing::Point(170, 68);
			this->txtNome->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtNome->Name = L"txtNome";
			this->txtNome->Size = System::Drawing::Size(308, 26);
			this->txtNome->TabIndex = 18;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(15, 143);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(120, 20);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Custo (R$/u.m.)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(15, 107);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(147, 20);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Unidade de medida";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(15, 71);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 20);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Nome";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 9);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(237, 31);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Cadastrar Material";
			// 
			// GerenciarMateriais
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(530, 284);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->numCusto);
			this->Controls->Add(this->txtUM);
			this->Controls->Add(this->txtNome);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"GerenciarMateriais";
			this->Text = L"GerenciarMateriais";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCusto))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		if (txtNome->Enabled)
			txtNome->Text = "";
		txtUM->Text = "";
		numCusto->Value = 0;
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		
		mat = new Material();
		mat->setnomematerial(msclr::interop::marshal_as<std::string>(this->txtNome->Text));
		mat->setunidademedida(msclr::interop::marshal_as<std::string>(this->txtUM->Text));
		mat->setcusto(Convert::ToDouble(numCusto->Value));
		this->Hide();

		/*

		MaterialDAO * matDAO = new MaterialDAO();
		if (novo)
		{
			// ** INSERT **
			std::string nome = msclr::interop::marshal_as<std::string>(this->txtNome->Text);
			std::string um = msclr::interop::marshal_as<std::string>(this->txtUM->Text);
			int valor = (int)numCusto->Value;
			batata->criarMaterial(nome, um, valor);
		}
		else
		{
			// **UPDATE** 
		}
		*/

	}
};
}
