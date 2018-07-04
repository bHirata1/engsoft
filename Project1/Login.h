#pragma once
#include <iostream>
#include "DashboardDespachador.h"
#include "DashboardEncarregado.h"
#include "UsuarioDAO.h"
#include "DashboardAssessor.h"
#include "DashboardGestor.h"

/*
Referência: http://www.visualcplusdotnet.com/visualcplusdotnet21.html
*/
namespace InfoBuraco {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:







	private: System::Windows::Forms::TextBox^  tb_login;
	private: System::Windows::Forms::Label^  lb_login;
	private: System::Windows::Forms::Label^  lb_senha;
	private: System::Windows::Forms::TextBox^  tb_senha;
	private: System::Windows::Forms::Button^  bt_validar;
	private: System::Windows::Forms::Button^  bt_limpar;
	private: System::Windows::Forms::PictureBox^  pictureBox1;










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
			this->tb_login = (gcnew System::Windows::Forms::TextBox());
			this->lb_login = (gcnew System::Windows::Forms::Label());
			this->lb_senha = (gcnew System::Windows::Forms::Label());
			this->tb_senha = (gcnew System::Windows::Forms::TextBox());
			this->bt_validar = (gcnew System::Windows::Forms::Button());
			this->bt_limpar = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// tb_login
			// 
			this->tb_login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_login->Location = System::Drawing::Point(158, 407);
			this->tb_login->Name = L"tb_login";
			this->tb_login->Size = System::Drawing::Size(143, 26);
			this->tb_login->TabIndex = 4;
			this->tb_login->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::tb_login_KeyPress);
			// 
			// lb_login
			// 
			this->lb_login->AutoSize = true;
			this->lb_login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_login->Location = System::Drawing::Point(77, 410);
			this->lb_login->Name = L"lb_login";
			this->lb_login->Size = System::Drawing::Size(48, 20);
			this->lb_login->TabIndex = 5;
			this->lb_login->Text = L"Login";
			// 
			// lb_senha
			// 
			this->lb_senha->AutoSize = true;
			this->lb_senha->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_senha->Location = System::Drawing::Point(81, 450);
			this->lb_senha->Name = L"lb_senha";
			this->lb_senha->Size = System::Drawing::Size(53, 24);
			this->lb_senha->TabIndex = 6;
			this->lb_senha->Text = L"Senha";
			this->lb_senha->UseCompatibleTextRendering = true;
			// 
			// tb_senha
			// 
			this->tb_senha->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_senha->Location = System::Drawing::Point(158, 447);
			this->tb_senha->Name = L"tb_senha";
			this->tb_senha->PasswordChar = '*';
			this->tb_senha->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->tb_senha->Size = System::Drawing::Size(143, 26);
			this->tb_senha->TabIndex = 7;
			this->tb_senha->UseSystemPasswordChar = true;
			this->tb_senha->TextChanged += gcnew System::EventHandler(this, &MyForm::tb_senha_TextChanged);
			this->tb_senha->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::tb_senha_KeyPress);
			// 
			// bt_validar
			// 
			this->bt_validar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt_validar->Location = System::Drawing::Point(102, 500);
			this->bt_validar->Name = L"bt_validar";
			this->bt_validar->Size = System::Drawing::Size(83, 31);
			this->bt_validar->TabIndex = 8;
			this->bt_validar->Text = L"Validar";
			this->bt_validar->UseVisualStyleBackColor = true;
			this->bt_validar->Click += gcnew System::EventHandler(this, &MyForm::bt_validar_Click);
			// 
			// bt_limpar
			// 
			this->bt_limpar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt_limpar->Location = System::Drawing::Point(218, 500);
			this->bt_limpar->Name = L"bt_limpar";
			this->bt_limpar->Size = System::Drawing::Size(83, 31);
			this->bt_limpar->TabIndex = 9;
			this->bt_limpar->Text = L"Limpar";
			this->bt_limpar->UseVisualStyleBackColor = true;
			this->bt_limpar->Click += gcnew System::EventHandler(this, &MyForm::bt_limpar_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(23, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(368, 382);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(420, 555);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->bt_limpar);
			this->Controls->Add(this->bt_validar);
			this->Controls->Add(this->tb_senha);
			this->Controls->Add(this->lb_senha);
			this->Controls->Add(this->lb_login);
			this->Controls->Add(this->tb_login);
			this->Name = L"MyForm";
			this->Text = L"InfoBuraco2018";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void bt_limpar_Click(System::Object^  sender, System::EventArgs^  e) {
	this->tb_login->Text = L"";
	this->tb_senha->Text = L"";
	tb_login->BackColor = System::Drawing::Color::White;
	tb_senha->BackColor = System::Drawing::Color::White;

}
private: System::Void bt_validar_Click(System::Object^  sender, System::EventArgs^  e) {
	
	Usuario* user = UsuarioDAO::buscarUsuario(msclr::interop::marshal_as<std::string>(tb_login->Text));
	DashboardDespachador ^ j1;
	DashboardEncarregado ^ j2;
	DashboardAssessor ^ j3;
	DashboardGestor ^j4;
	if (user == NULL)
	{
		MessageBox::Show("Login de Usuário não encontrado!", "Erro ao fazer login", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		return;
	}
	if (gcnew String(user->getsenha().c_str()) != tb_senha->Text->ToString())
	{
		MessageBox::Show("Senha de usuário incorreta!", "Erro ao fazer login", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		return;
	}
	this->Hide();
	switch (user->gettipo())
	{
		case 1: j1 = gcnew DashboardDespachador(user->getlogin());
				j1->ShowDialog();
				break;
		case 2: j2 = gcnew DashboardEncarregado(user->getlogin());
				j2->ShowDialog();
				break;
		case 3: j3 = gcnew DashboardAssessor(user->getlogin());
			j3->ShowDialog();
			break;
		case 4: j4 = gcnew DashboardGestor(user->getlogin());
			j4->ShowDialog();
			break;
	}
	Application::Exit();

}
private: System::Void bt_janela2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void bt_janela3_Click(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void sairToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void bt_janela4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void exCaixaDeDialogoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	

}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	this->pictureBox1->Image = gcnew Bitmap("images\\login.jpg");
}
private: System::Void tb_senha_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void tb_senha_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (e->KeyChar == (wchar_t)Keys::Enter)
		bt_validar_Click(sender, (EventArgs^)e);
}
private: System::Void tb_login_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (e->KeyChar == (wchar_t)Keys::Enter)
		bt_validar_Click(sender, (EventArgs^)e);
}
};
}
