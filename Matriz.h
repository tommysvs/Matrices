#pragma once

#include <Windows.h>
#include <fstream>
#include <string>
#include <atlstr.h>
#include "Operaciones.h"

using namespace std;

namespace Matrices {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	public ref class Matriz : public System::Windows::Forms::Form {
		Operaciones *objOperaciones = new Operaciones();

		int tipo_operacion;
		
		private: System::Windows::Forms::Button^ btn_ArchivoB;
		private: System::Windows::Forms::Button^ btn_salir;
		private: System::Windows::Forms::Button^ btn_sumar;
		private: System::Windows::Forms::Button^ btn_restar;
		private: System::Windows::Forms::Button^ btn_mult;
		private: System::Windows::Forms::Button^ btn_det;
		private: System::Windows::Forms::Label^ lbl_desc;
		private: System::Windows::Forms::Panel^ ln_hor;
		private: System::Windows::Forms::Label^ lbl_instruccion;
		private: System::Windows::Forms::PictureBox^ box_logo;
		private: System::Windows::Forms::TextBox^ txt_ArchivoA;
		private: System::Windows::Forms::Label^ lbl_txt_mA;
		private: System::Windows::Forms::Label^ lbl_txt_mB;
		private: System::Windows::Forms::TextBox^ txt_ArchivoB;
		private: System::Windows::Forms::Button^ btn_ArchivoA;
		private: System::Windows::Forms::Label^ label_titulo;
		private: System::Windows::Forms::Label^ lbl_MatrizA;
		private: System::Windows::Forms::Label^ lbl_MatrizB;
		private: System::Windows::Forms::Label^ lbl_error;
		private: System::Windows::Forms::DataGridView^ grid_MatrizA;
		private: System::Windows::Forms::Panel^ pnl_Operaciones;
		private: System::Windows::Forms::Panel^ ln_hor2;
		private: System::Windows::Forms::Panel^ ln_hor3;
		private: System::Windows::Forms::DataGridView^ grid_MatrizB;
		private: System::Windows::Forms::Panel^ pnl_Intro;
		private: System::Windows::Forms::Label^ lbl_Name;
		private: System::Windows::Forms::Panel^ pnl_LoadBg;
		private: System::Windows::Forms::Panel^ pnl_LoadBar;
		private: System::Windows::Forms::Timer^ timer_LoadScrn;
		private: System::Windows::Forms::Button^ btn_Entrar;
		private: System::Windows::Forms::Label^ lbl_IntroTitle;
		private: System::Windows::Forms::Panel^ pnl_ArchivoOperacion;
		private: System::Windows::Forms::TextBox^ txt_ArchivoOperacion;
		private: System::Windows::Forms::Label^ lbl_entFile;
		private: System::Windows::Forms::Button^ btn_CrearOperacion;
		private: System::Windows::Forms::Label^ lbl_Operaciones;
		private: System::Windows::Forms::Label^ lbl_Signo;
		private: System::Windows::Forms::Label^ lbl_SignoIgual;
		private: System::Windows::Forms::Label^ lbl_MatrizRes;
		private: System::Windows::Forms::DataGridView^ grid_MatrizRes;
		private: System::Windows::Forms::Panel^ pnl_readArchivos;

		public:
			Matriz(void) {
				InitializeComponent();
			}

		protected:
			~Matriz() {
				if (components)
					delete components;
			}
		protected:

		private: System::ComponentModel::IContainer^ components;

		protected:

		private:
			#pragma region Windows Form Designer generated code

			void InitializeComponent(void) {
				this->components = (gcnew System::ComponentModel::Container());
				System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Matriz::typeid));
				System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
				System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
				System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
				System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
				System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
				System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
				this->label_titulo = (gcnew System::Windows::Forms::Label());
				this->btn_salir = (gcnew System::Windows::Forms::Button());
				this->btn_sumar = (gcnew System::Windows::Forms::Button());
				this->btn_restar = (gcnew System::Windows::Forms::Button());
				this->btn_mult = (gcnew System::Windows::Forms::Button());
				this->btn_det = (gcnew System::Windows::Forms::Button());
				this->lbl_desc = (gcnew System::Windows::Forms::Label());
				this->ln_hor = (gcnew System::Windows::Forms::Panel());
				this->lbl_instruccion = (gcnew System::Windows::Forms::Label());
				this->box_logo = (gcnew System::Windows::Forms::PictureBox());
				this->txt_ArchivoA = (gcnew System::Windows::Forms::TextBox());
				this->lbl_txt_mA = (gcnew System::Windows::Forms::Label());
				this->lbl_txt_mB = (gcnew System::Windows::Forms::Label());
				this->txt_ArchivoB = (gcnew System::Windows::Forms::TextBox());
				this->btn_ArchivoA = (gcnew System::Windows::Forms::Button());
				this->btn_ArchivoB = (gcnew System::Windows::Forms::Button());
				this->pnl_readArchivos = (gcnew System::Windows::Forms::Panel());
				this->lbl_MatrizA = (gcnew System::Windows::Forms::Label());
				this->lbl_MatrizB = (gcnew System::Windows::Forms::Label());
				this->lbl_error = (gcnew System::Windows::Forms::Label());
				this->grid_MatrizA = (gcnew System::Windows::Forms::DataGridView());
				this->pnl_Operaciones = (gcnew System::Windows::Forms::Panel());
				this->lbl_Operaciones = (gcnew System::Windows::Forms::Label());
				this->pnl_Intro = (gcnew System::Windows::Forms::Panel());
				this->btn_Entrar = (gcnew System::Windows::Forms::Button());
				this->pnl_LoadBar = (gcnew System::Windows::Forms::Panel());
				this->pnl_LoadBg = (gcnew System::Windows::Forms::Panel());
				this->lbl_Name = (gcnew System::Windows::Forms::Label());
				this->lbl_IntroTitle = (gcnew System::Windows::Forms::Label());
				this->ln_hor2 = (gcnew System::Windows::Forms::Panel());
				this->ln_hor3 = (gcnew System::Windows::Forms::Panel());
				this->grid_MatrizB = (gcnew System::Windows::Forms::DataGridView());
				this->timer_LoadScrn = (gcnew System::Windows::Forms::Timer(this->components));
				this->pnl_ArchivoOperacion = (gcnew System::Windows::Forms::Panel());
				this->btn_CrearOperacion = (gcnew System::Windows::Forms::Button());
				this->txt_ArchivoOperacion = (gcnew System::Windows::Forms::TextBox());
				this->lbl_entFile = (gcnew System::Windows::Forms::Label());
				this->lbl_Signo = (gcnew System::Windows::Forms::Label());
				this->lbl_SignoIgual = (gcnew System::Windows::Forms::Label());
				this->lbl_MatrizRes = (gcnew System::Windows::Forms::Label());
				this->grid_MatrizRes = (gcnew System::Windows::Forms::DataGridView());
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->box_logo))->BeginInit();
				this->pnl_readArchivos->SuspendLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grid_MatrizA))->BeginInit();
				this->pnl_Operaciones->SuspendLayout();
				this->pnl_Intro->SuspendLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grid_MatrizB))->BeginInit();
				this->pnl_ArchivoOperacion->SuspendLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grid_MatrizRes))->BeginInit();
				this->SuspendLayout();
				// 
				// label_titulo
				// 
				this->label_titulo->AutoSize = true;
				this->label_titulo->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label_titulo->ForeColor = System::Drawing::Color::Coral;
				this->label_titulo->Location = System::Drawing::Point(12, 9);
				this->label_titulo->Name = L"label_titulo";
				this->label_titulo->Size = System::Drawing::Size(140, 38);
				this->label_titulo->TabIndex = 0;
				this->label_titulo->Text = L"Matrices";
				// 
				// btn_salir
				// 
				this->btn_salir->BackColor = System::Drawing::Color::Salmon;
				this->btn_salir->Cursor = System::Windows::Forms::Cursors::Hand;
				this->btn_salir->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->btn_salir->Font = (gcnew System::Drawing::Font(L"Montserrat Light", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_salir->ForeColor = System::Drawing::Color::White;
				this->btn_salir->Location = System::Drawing::Point(1064, 602);
				this->btn_salir->Name = L"btn_salir";
				this->btn_salir->Size = System::Drawing::Size(90, 30);
				this->btn_salir->TabIndex = 1;
				this->btn_salir->Text = L"Salir";
				this->btn_salir->UseVisualStyleBackColor = false;
				this->btn_salir->Click += gcnew System::EventHandler(this, &Matriz::btn_salir_Click);
				// 
				// btn_sumar
				// 
				this->btn_sumar->BackColor = System::Drawing::Color::Salmon;
				this->btn_sumar->Cursor = System::Windows::Forms::Cursors::Hand;
				this->btn_sumar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->btn_sumar->Font = (gcnew System::Drawing::Font(L"Montserrat Light", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_sumar->ForeColor = System::Drawing::Color::White;
				this->btn_sumar->Location = System::Drawing::Point(6, 30);
				this->btn_sumar->Name = L"btn_sumar";
				this->btn_sumar->Size = System::Drawing::Size(150, 40);
				this->btn_sumar->TabIndex = 2;
				this->btn_sumar->Text = L"Sumar";
				this->btn_sumar->UseVisualStyleBackColor = false;
				this->btn_sumar->Click += gcnew System::EventHandler(this, &Matriz::btn_sumar_Click);
				// 
				// btn_restar
				// 
				this->btn_restar->BackColor = System::Drawing::Color::Salmon;
				this->btn_restar->Cursor = System::Windows::Forms::Cursors::Hand;
				this->btn_restar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->btn_restar->Font = (gcnew System::Drawing::Font(L"Montserrat Light", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_restar->ForeColor = System::Drawing::Color::White;
				this->btn_restar->Location = System::Drawing::Point(162, 31);
				this->btn_restar->Name = L"btn_restar";
				this->btn_restar->Size = System::Drawing::Size(150, 40);
				this->btn_restar->TabIndex = 3;
				this->btn_restar->Text = L"Restar";
				this->btn_restar->UseVisualStyleBackColor = false;
				this->btn_restar->Click += gcnew System::EventHandler(this, &Matriz::btn_restar_Click);
				// 
				// btn_mult
				// 
				this->btn_mult->BackColor = System::Drawing::Color::Salmon;
				this->btn_mult->Cursor = System::Windows::Forms::Cursors::Hand;
				this->btn_mult->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->btn_mult->Font = (gcnew System::Drawing::Font(L"Montserrat Light", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_mult->ForeColor = System::Drawing::Color::White;
				this->btn_mult->Location = System::Drawing::Point(6, 79);
				this->btn_mult->Name = L"btn_mult";
				this->btn_mult->Size = System::Drawing::Size(150, 40);
				this->btn_mult->TabIndex = 4;
				this->btn_mult->Text = L"Multiplicar";
				this->btn_mult->UseVisualStyleBackColor = false;
				this->btn_mult->Click += gcnew System::EventHandler(this, &Matriz::btn_mult_Click);
				// 
				// btn_det
				// 
				this->btn_det->BackColor = System::Drawing::Color::Salmon;
				this->btn_det->Cursor = System::Windows::Forms::Cursors::Hand;
				this->btn_det->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->btn_det->Font = (gcnew System::Drawing::Font(L"Montserrat Light", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_det->ForeColor = System::Drawing::Color::White;
				this->btn_det->Location = System::Drawing::Point(162, 77);
				this->btn_det->Name = L"btn_det";
				this->btn_det->Size = System::Drawing::Size(150, 40);
				this->btn_det->TabIndex = 5;
				this->btn_det->Text = L"Determinante";
				this->btn_det->UseVisualStyleBackColor = false;
				this->btn_det->Click += gcnew System::EventHandler(this, &Matriz::btn_det_Click);
				// 
				// lbl_desc
				// 
				this->lbl_desc->AutoSize = true;
				this->lbl_desc->Font = (gcnew System::Drawing::Font(L"Montserrat Light", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->lbl_desc->Location = System::Drawing::Point(16, 52);
				this->lbl_desc->Name = L"lbl_desc";
				this->lbl_desc->Size = System::Drawing::Size(717, 17);
				this->lbl_desc->TabIndex = 8;
				this->lbl_desc->Text = L"Realización de operaciones de suma, resta, multiplicación y cálculo de determinan"
					L"te de dos matrices dadas.";
				// 
				// ln_hor
				// 
				this->ln_hor->BackColor = System::Drawing::Color::Tomato;
				this->ln_hor->Location = System::Drawing::Point(19, 87);
				this->ln_hor->Name = L"ln_hor";
				this->ln_hor->Size = System::Drawing::Size(1135, 1);
				this->ln_hor->TabIndex = 9;
				// 
				// lbl_instruccion
				// 
				this->lbl_instruccion->AutoSize = true;
				this->lbl_instruccion->Font = (gcnew System::Drawing::Font(L"Montserrat Light", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->lbl_instruccion->Location = System::Drawing::Point(3, 3);
				this->lbl_instruccion->Name = L"lbl_instruccion";
				this->lbl_instruccion->Size = System::Drawing::Size(378, 17);
				this->lbl_instruccion->TabIndex = 11;
				this->lbl_instruccion->Text = L"Por favor, escribe los nombres de los archivos a utilizarse.";
				// 
				// box_logo
				// 
				this->box_logo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"box_logo.Image")));
				this->box_logo->Location = System::Drawing::Point(1094, 12);
				this->box_logo->Name = L"box_logo";
				this->box_logo->Size = System::Drawing::Size(60, 60);
				this->box_logo->TabIndex = 12;
				this->box_logo->TabStop = false;
				// 
				// txt_ArchivoA
				// 
				this->txt_ArchivoA->BackColor = System::Drawing::SystemColors::Window;
				this->txt_ArchivoA->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->txt_ArchivoA->Location = System::Drawing::Point(158, 39);
				this->txt_ArchivoA->Name = L"txt_ArchivoA";
				this->txt_ArchivoA->Size = System::Drawing::Size(150, 25);
				this->txt_ArchivoA->TabIndex = 13;
				this->txt_ArchivoA->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
				// 
				// lbl_txt_mA
				// 
				this->lbl_txt_mA->AutoSize = true;
				this->lbl_txt_mA->Font = (gcnew System::Drawing::Font(L"Montserrat Light", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->lbl_txt_mA->Location = System::Drawing::Point(3, 42);
				this->lbl_txt_mA->Name = L"lbl_txt_mA";
				this->lbl_txt_mA->Size = System::Drawing::Size(149, 17);
				this->lbl_txt_mA->TabIndex = 14;
				this->lbl_txt_mA->Text = L"Nombre de archivo A:";
				// 
				// lbl_txt_mB
				// 
				this->lbl_txt_mB->AutoSize = true;
				this->lbl_txt_mB->Font = (gcnew System::Drawing::Font(L"Montserrat Light", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->lbl_txt_mB->Location = System::Drawing::Point(3, 85);
				this->lbl_txt_mB->Name = L"lbl_txt_mB";
				this->lbl_txt_mB->Size = System::Drawing::Size(149, 17);
				this->lbl_txt_mB->TabIndex = 15;
				this->lbl_txt_mB->Text = L"Nombre de archivo B:";
				// 
				// txt_ArchivoB
				// 
				this->txt_ArchivoB->BackColor = System::Drawing::SystemColors::Window;
				this->txt_ArchivoB->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->txt_ArchivoB->Location = System::Drawing::Point(158, 81);
				this->txt_ArchivoB->Name = L"txt_ArchivoB";
				this->txt_ArchivoB->Size = System::Drawing::Size(150, 25);
				this->txt_ArchivoB->TabIndex = 16;
				this->txt_ArchivoB->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
				// 
				// btn_ArchivoA
				// 
				this->btn_ArchivoA->BackColor = System::Drawing::Color::Salmon;
				this->btn_ArchivoA->Cursor = System::Windows::Forms::Cursors::Hand;
				this->btn_ArchivoA->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->btn_ArchivoA->Font = (gcnew System::Drawing::Font(L"Montserrat Light", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_ArchivoA->ForeColor = System::Drawing::Color::White;
				this->btn_ArchivoA->Location = System::Drawing::Point(324, 36);
				this->btn_ArchivoA->Name = L"btn_ArchivoA";
				this->btn_ArchivoA->Size = System::Drawing::Size(90, 30);
				this->btn_ArchivoA->TabIndex = 17;
				this->btn_ArchivoA->Text = L"Insertar";
				this->btn_ArchivoA->UseVisualStyleBackColor = false;
				this->btn_ArchivoA->Click += gcnew System::EventHandler(this, &Matriz::btn_ArchivoA_Click);
				// 
				// btn_ArchivoB
				// 
				this->btn_ArchivoB->BackColor = System::Drawing::Color::Salmon;
				this->btn_ArchivoB->Cursor = System::Windows::Forms::Cursors::Hand;
				this->btn_ArchivoB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->btn_ArchivoB->Font = (gcnew System::Drawing::Font(L"Montserrat Light", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_ArchivoB->ForeColor = System::Drawing::Color::White;
				this->btn_ArchivoB->Location = System::Drawing::Point(324, 79);
				this->btn_ArchivoB->Name = L"btn_ArchivoB";
				this->btn_ArchivoB->Size = System::Drawing::Size(90, 30);
				this->btn_ArchivoB->TabIndex = 18;
				this->btn_ArchivoB->Text = L"Insertar";
				this->btn_ArchivoB->UseVisualStyleBackColor = false;
				this->btn_ArchivoB->Click += gcnew System::EventHandler(this, &Matriz::btn_ArchivoB_Click);
				// 
				// pnl_readArchivos
				// 
				this->pnl_readArchivos->Controls->Add(this->btn_ArchivoB);
				this->pnl_readArchivos->Controls->Add(this->lbl_instruccion);
				this->pnl_readArchivos->Controls->Add(this->txt_ArchivoA);
				this->pnl_readArchivos->Controls->Add(this->lbl_txt_mA);
				this->pnl_readArchivos->Controls->Add(this->btn_ArchivoA);
				this->pnl_readArchivos->Controls->Add(this->lbl_txt_mB);
				this->pnl_readArchivos->Controls->Add(this->txt_ArchivoB);
				this->pnl_readArchivos->Location = System::Drawing::Point(19, 109);
				this->pnl_readArchivos->Name = L"pnl_readArchivos";
				this->pnl_readArchivos->Size = System::Drawing::Size(416, 112);
				this->pnl_readArchivos->TabIndex = 21;
				// 
				// lbl_MatrizA
				// 
				this->lbl_MatrizA->AutoSize = true;
				this->lbl_MatrizA->Font = (gcnew System::Drawing::Font(L"Montserrat Light", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->lbl_MatrizA->Location = System::Drawing::Point(36, 316);
				this->lbl_MatrizA->Name = L"lbl_MatrizA";
				this->lbl_MatrizA->Size = System::Drawing::Size(61, 17);
				this->lbl_MatrizA->TabIndex = 19;
				this->lbl_MatrizA->Text = L"Matriz A";
				// 
				// lbl_MatrizB
				// 
				this->lbl_MatrizB->AutoSize = true;
				this->lbl_MatrizB->Font = (gcnew System::Drawing::Font(L"Montserrat Light", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->lbl_MatrizB->Location = System::Drawing::Point(396, 316);
				this->lbl_MatrizB->Name = L"lbl_MatrizB";
				this->lbl_MatrizB->Size = System::Drawing::Size(61, 17);
				this->lbl_MatrizB->TabIndex = 22;
				this->lbl_MatrizB->Text = L"Matriz B";
				// 
				// lbl_error
				// 
				this->lbl_error->AutoSize = true;
				this->lbl_error->Font = (gcnew System::Drawing::Font(L"Montserrat Light", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->lbl_error->ForeColor = System::Drawing::Color::Red;
				this->lbl_error->Location = System::Drawing::Point(-500, -500);
				this->lbl_error->Name = L"lbl_error";
				this->lbl_error->Size = System::Drawing::Size(266, 17);
				this->lbl_error->TabIndex = 19;
				this->lbl_error->Text = L"Por favor, ingresa el nombre de archivo.";
				// 
				// grid_MatrizA
				// 
				this->grid_MatrizA->AllowUserToAddRows = false;
				this->grid_MatrizA->AllowUserToDeleteRows = false;
				this->grid_MatrizA->AllowUserToResizeColumns = false;
				this->grid_MatrizA->AllowUserToResizeRows = false;
				this->grid_MatrizA->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
					| System::Windows::Forms::AnchorStyles::Left)
					| System::Windows::Forms::AnchorStyles::Right));
				this->grid_MatrizA->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
				this->grid_MatrizA->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
				this->grid_MatrizA->BackgroundColor = System::Drawing::Color::White;
				this->grid_MatrizA->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
				this->grid_MatrizA->ColumnHeadersVisible = false;
				dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
				dataGridViewCellStyle1->BackColor = System::Drawing::Color::White;
				dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Montserrat Light", 9.749999F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
				dataGridViewCellStyle1->Padding = System::Windows::Forms::Padding(15, 5, 15, 5);
				dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::Salmon;
				dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::White;
				dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
				this->grid_MatrizA->DefaultCellStyle = dataGridViewCellStyle1;
				this->grid_MatrizA->GridColor = System::Drawing::Color::SeaShell;
				this->grid_MatrizA->Location = System::Drawing::Point(39, 349);
				this->grid_MatrizA->Name = L"grid_MatrizA";
				this->grid_MatrizA->ReadOnly = true;
				dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
				dataGridViewCellStyle2->BackColor = System::Drawing::Color::White;
				dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Montserrat Light", 9.749999F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::InfoText;
				dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::Salmon;
				dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
				dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
				this->grid_MatrizA->RowHeadersDefaultCellStyle = dataGridViewCellStyle2;
				this->grid_MatrizA->RowHeadersVisible = false;
				this->grid_MatrizA->Size = System::Drawing::Size(240, 150);
				this->grid_MatrizA->TabIndex = 23;
				// 
				// pnl_Operaciones
				// 
				this->pnl_Operaciones->Controls->Add(this->lbl_Operaciones);
				this->pnl_Operaciones->Controls->Add(this->btn_sumar);
				this->pnl_Operaciones->Controls->Add(this->btn_restar);
				this->pnl_Operaciones->Controls->Add(this->btn_mult);
				this->pnl_Operaciones->Controls->Add(this->btn_det);
				this->pnl_Operaciones->Location = System::Drawing::Point(842, 103);
				this->pnl_Operaciones->Name = L"pnl_Operaciones";
				this->pnl_Operaciones->Size = System::Drawing::Size(316, 130);
				this->pnl_Operaciones->TabIndex = 25;
				// 
				// lbl_Operaciones
				// 
				this->lbl_Operaciones->AutoSize = true;
				this->lbl_Operaciones->Font = (gcnew System::Drawing::Font(L"Montserrat Light", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->lbl_Operaciones->Location = System::Drawing::Point(3, 3);
				this->lbl_Operaciones->Name = L"lbl_Operaciones";
				this->lbl_Operaciones->Size = System::Drawing::Size(93, 17);
				this->lbl_Operaciones->TabIndex = 19;
				this->lbl_Operaciones->Text = L"Operaciones:";
				// 
				// pnl_Intro
				// 
				this->pnl_Intro->Controls->Add(this->btn_Entrar);
				this->pnl_Intro->Controls->Add(this->pnl_LoadBar);
				this->pnl_Intro->Controls->Add(this->pnl_LoadBg);
				this->pnl_Intro->Controls->Add(this->lbl_Name);
				this->pnl_Intro->Controls->Add(this->lbl_IntroTitle);
				this->pnl_Intro->Location = System::Drawing::Point(0, 0);
				this->pnl_Intro->Name = L"pnl_Intro";
				this->pnl_Intro->Size = System::Drawing::Size(1170, 644);
				this->pnl_Intro->TabIndex = 27;
				// 
				// btn_Entrar
				// 
				this->btn_Entrar->BackColor = System::Drawing::Color::Salmon;
				this->btn_Entrar->Cursor = System::Windows::Forms::Cursors::Hand;
				this->btn_Entrar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->btn_Entrar->Font = (gcnew System::Drawing::Font(L"Montserrat Light", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_Entrar->ForeColor = System::Drawing::Color::White;
				this->btn_Entrar->Location = System::Drawing::Point(511, 450);
				this->btn_Entrar->Name = L"btn_Entrar";
				this->btn_Entrar->Size = System::Drawing::Size(150, 40);
				this->btn_Entrar->TabIndex = 4;
				this->btn_Entrar->Text = L"Entrar";
				this->btn_Entrar->UseVisualStyleBackColor = false;
				this->btn_Entrar->Click += gcnew System::EventHandler(this, &Matriz::btn_Entrar_Click);
				// 
				// pnl_LoadBar
				// 
				this->pnl_LoadBar->BackColor = System::Drawing::Color::Salmon;
				this->pnl_LoadBar->Location = System::Drawing::Point(0, 629);
				this->pnl_LoadBar->Name = L"pnl_LoadBar";
				this->pnl_LoadBar->Size = System::Drawing::Size(0, 15);
				this->pnl_LoadBar->TabIndex = 3;
				// 
				// pnl_LoadBg
				// 
				this->pnl_LoadBg->BackColor = System::Drawing::Color::Bisque;
				this->pnl_LoadBg->Dock = System::Windows::Forms::DockStyle::Bottom;
				this->pnl_LoadBg->Location = System::Drawing::Point(0, 629);
				this->pnl_LoadBg->Name = L"pnl_LoadBg";
				this->pnl_LoadBg->Size = System::Drawing::Size(1170, 15);
				this->pnl_LoadBg->TabIndex = 2;
				// 
				// lbl_Name
				// 
				this->lbl_Name->AutoSize = true;
				this->lbl_Name->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->lbl_Name->ForeColor = System::Drawing::Color::Salmon;
				this->lbl_Name->Location = System::Drawing::Point(479, 594);
				this->lbl_Name->Name = L"lbl_Name";
				this->lbl_Name->Size = System::Drawing::Size(212, 17);
				this->lbl_Name->TabIndex = 1;
				this->lbl_Name->Text = L"Programación III - Tommy Vega";
				// 
				// lbl_IntroTitle
				// 
				this->lbl_IntroTitle->AutoSize = true;
				this->lbl_IntroTitle->BackColor = System::Drawing::Color::SeaShell;
				this->lbl_IntroTitle->Font = (gcnew System::Drawing::Font(L"Montserrat SemiBold", 71.99999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->lbl_IntroTitle->ForeColor = System::Drawing::Color::Tomato;
				this->lbl_IntroTitle->Location = System::Drawing::Point(353, 250);
				this->lbl_IntroTitle->Name = L"lbl_IntroTitle";
				this->lbl_IntroTitle->Size = System::Drawing::Size(466, 127);
				this->lbl_IntroTitle->TabIndex = 0;
				this->lbl_IntroTitle->Text = L"Matrices";
				this->lbl_IntroTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				// 
				// ln_hor2
				// 
				this->ln_hor2->BackColor = System::Drawing::Color::Tomato;
				this->ln_hor2->Location = System::Drawing::Point(19, 245);
				this->ln_hor2->Name = L"ln_hor2";
				this->ln_hor2->Size = System::Drawing::Size(1135, 1);
				this->ln_hor2->TabIndex = 10;
				// 
				// ln_hor3
				// 
				this->ln_hor3->BackColor = System::Drawing::Color::Tomato;
				this->ln_hor3->Location = System::Drawing::Point(19, 584);
				this->ln_hor3->Name = L"ln_hor3";
				this->ln_hor3->Size = System::Drawing::Size(1135, 1);
				this->ln_hor3->TabIndex = 11;
				// 
				// grid_MatrizB
				// 
				this->grid_MatrizB->AllowUserToAddRows = false;
				this->grid_MatrizB->AllowUserToDeleteRows = false;
				this->grid_MatrizB->AllowUserToResizeColumns = false;
				this->grid_MatrizB->AllowUserToResizeRows = false;
				this->grid_MatrizB->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
					| System::Windows::Forms::AnchorStyles::Left)
					| System::Windows::Forms::AnchorStyles::Right));
				this->grid_MatrizB->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
				this->grid_MatrizB->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
				this->grid_MatrizB->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
				this->grid_MatrizB->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
				this->grid_MatrizB->ColumnHeadersVisible = false;
				dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
				dataGridViewCellStyle3->BackColor = System::Drawing::Color::White;
				dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Montserrat Light", 9.749999F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
				dataGridViewCellStyle3->Padding = System::Windows::Forms::Padding(15, 5, 15, 5);
				dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::Salmon;
				dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::White;
				dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
				this->grid_MatrizB->DefaultCellStyle = dataGridViewCellStyle3;
				this->grid_MatrizB->GridColor = System::Drawing::Color::SeaShell;
				this->grid_MatrizB->Location = System::Drawing::Point(399, 349);
				this->grid_MatrizB->Name = L"grid_MatrizB";
				this->grid_MatrizB->ReadOnly = true;
				dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
				dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Control;
				dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
				dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::Salmon;
				dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
				dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
				this->grid_MatrizB->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
				this->grid_MatrizB->RowHeadersVisible = false;
				this->grid_MatrizB->Size = System::Drawing::Size(240, 150);
				this->grid_MatrizB->TabIndex = 26;
				// 
				// timer_LoadScrn
				// 
				this->timer_LoadScrn->Enabled = true;
				this->timer_LoadScrn->Interval = 15;
				this->timer_LoadScrn->Tick += gcnew System::EventHandler(this, &Matriz::timer_LoadScrn_Tick);
				// 
				// pnl_ArchivoOperacion
				// 
				this->pnl_ArchivoOperacion->BackColor = System::Drawing::Color::LightSalmon;
				this->pnl_ArchivoOperacion->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				this->pnl_ArchivoOperacion->Controls->Add(this->btn_CrearOperacion);
				this->pnl_ArchivoOperacion->Controls->Add(this->txt_ArchivoOperacion);
				this->pnl_ArchivoOperacion->Controls->Add(this->lbl_entFile);
				this->pnl_ArchivoOperacion->Location = System::Drawing::Point(468, 257);
				this->pnl_ArchivoOperacion->Name = L"pnl_ArchivoOperacion";
				this->pnl_ArchivoOperacion->Size = System::Drawing::Size(233, 129);
				this->pnl_ArchivoOperacion->TabIndex = 28;
				// 
				// btn_CrearOperacion
				// 
				this->btn_CrearOperacion->BackColor = System::Drawing::Color::Tomato;
				this->btn_CrearOperacion->Cursor = System::Windows::Forms::Cursors::Hand;
				this->btn_CrearOperacion->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->btn_CrearOperacion->Font = (gcnew System::Drawing::Font(L"Montserrat Light", 9.749999F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				this->btn_CrearOperacion->ForeColor = System::Drawing::Color::White;
				this->btn_CrearOperacion->Location = System::Drawing::Point(79, 83);
				this->btn_CrearOperacion->Name = L"btn_CrearOperacion";
				this->btn_CrearOperacion->Size = System::Drawing::Size(75, 28);
				this->btn_CrearOperacion->TabIndex = 2;
				this->btn_CrearOperacion->Text = L"Crear";
				this->btn_CrearOperacion->UseVisualStyleBackColor = false;
				this->btn_CrearOperacion->Click += gcnew System::EventHandler(this, &Matriz::btn_CrearOperacion_Click);
				// 
				// txt_ArchivoOperacion
				// 
				this->txt_ArchivoOperacion->Font = (gcnew System::Drawing::Font(L"Montserrat Light", 9.749999F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				this->txt_ArchivoOperacion->Location = System::Drawing::Point(35, 47);
				this->txt_ArchivoOperacion->Name = L"txt_ArchivoOperacion";
				this->txt_ArchivoOperacion->Size = System::Drawing::Size(160, 25);
				this->txt_ArchivoOperacion->TabIndex = 1;
				this->txt_ArchivoOperacion->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
				// 
				// lbl_entFile
				// 
				this->lbl_entFile->AutoSize = true;
				this->lbl_entFile->Font = (gcnew System::Drawing::Font(L"Montserrat Light", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->lbl_entFile->ForeColor = System::Drawing::Color::White;
				this->lbl_entFile->Location = System::Drawing::Point(13, 20);
				this->lbl_entFile->Name = L"lbl_entFile";
				this->lbl_entFile->Size = System::Drawing::Size(207, 17);
				this->lbl_entFile->TabIndex = 0;
				this->lbl_entFile->Text = L"Ingresa el nombre del archivo:";
				// 
				// lbl_Signo
				// 
				this->lbl_Signo->AutoSize = true;
				this->lbl_Signo->Font = (gcnew System::Drawing::Font(L"Montserrat Light", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->lbl_Signo->Location = System::Drawing::Point(322, 403);
				this->lbl_Signo->Name = L"lbl_Signo";
				this->lbl_Signo->Size = System::Drawing::Size(30, 46);
				this->lbl_Signo->TabIndex = 29;
				this->lbl_Signo->Text = L" ";
				// 
				// lbl_SignoIgual
				// 
				this->lbl_SignoIgual->AutoSize = true;
				this->lbl_SignoIgual->Font = (gcnew System::Drawing::Font(L"Montserrat Light", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->lbl_SignoIgual->Location = System::Drawing::Point(686, 403);
				this->lbl_SignoIgual->Name = L"lbl_SignoIgual";
				this->lbl_SignoIgual->Size = System::Drawing::Size(37, 46);
				this->lbl_SignoIgual->TabIndex = 30;
				this->lbl_SignoIgual->Text = L"=";
				// 
				// lbl_MatrizRes
				// 
				this->lbl_MatrizRes->AutoSize = true;
				this->lbl_MatrizRes->Font = (gcnew System::Drawing::Font(L"Montserrat Light", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->lbl_MatrizRes->Location = System::Drawing::Point(766, 316);
				this->lbl_MatrizRes->Name = L"lbl_MatrizRes";
				this->lbl_MatrizRes->Size = System::Drawing::Size(73, 17);
				this->lbl_MatrizRes->TabIndex = 31;
				this->lbl_MatrizRes->Text = L"Resultado";
				// 
				// grid_MatrizRes
				// 
				this->grid_MatrizRes->AllowUserToAddRows = false;
				this->grid_MatrizRes->AllowUserToDeleteRows = false;
				this->grid_MatrizRes->AllowUserToResizeColumns = false;
				this->grid_MatrizRes->AllowUserToResizeRows = false;
				this->grid_MatrizRes->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
					| System::Windows::Forms::AnchorStyles::Left)
					| System::Windows::Forms::AnchorStyles::Right));
				this->grid_MatrizRes->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
				this->grid_MatrizRes->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
				this->grid_MatrizRes->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
				this->grid_MatrizRes->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
				this->grid_MatrizRes->ColumnHeadersVisible = false;
				dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
				dataGridViewCellStyle5->BackColor = System::Drawing::Color::White;
				dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Montserrat Light", 9.749999F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::ControlText;
				dataGridViewCellStyle5->Padding = System::Windows::Forms::Padding(15, 5, 15, 5);
				dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::Salmon;
				dataGridViewCellStyle5->SelectionForeColor = System::Drawing::Color::White;
				dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
				this->grid_MatrizRes->DefaultCellStyle = dataGridViewCellStyle5;
				this->grid_MatrizRes->GridColor = System::Drawing::Color::SeaShell;
				this->grid_MatrizRes->Location = System::Drawing::Point(769, 349);
				this->grid_MatrizRes->Name = L"grid_MatrizRes";
				this->grid_MatrizRes->ReadOnly = true;
				dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
				dataGridViewCellStyle6->BackColor = System::Drawing::SystemColors::Control;
				dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::WindowText;
				dataGridViewCellStyle6->SelectionBackColor = System::Drawing::Color::Salmon;
				dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
				dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
				this->grid_MatrizRes->RowHeadersDefaultCellStyle = dataGridViewCellStyle6;
				this->grid_MatrizRes->RowHeadersVisible = false;
				this->grid_MatrizRes->Size = System::Drawing::Size(240, 150);
				this->grid_MatrizRes->TabIndex = 32;
				// 
				// Matriz
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->BackColor = System::Drawing::Color::SeaShell;
				this->ClientSize = System::Drawing::Size(1170, 644);
				this->Controls->Add(this->pnl_Intro);
				this->Controls->Add(this->grid_MatrizRes);
				this->Controls->Add(this->lbl_MatrizRes);
				this->Controls->Add(this->lbl_SignoIgual);
				this->Controls->Add(this->lbl_Signo);
				this->Controls->Add(this->pnl_ArchivoOperacion);
				this->Controls->Add(this->grid_MatrizB);
				this->Controls->Add(this->ln_hor3);
				this->Controls->Add(this->ln_hor2);
				this->Controls->Add(this->pnl_Operaciones);
				this->Controls->Add(this->grid_MatrizA);
				this->Controls->Add(this->lbl_error);
				this->Controls->Add(this->lbl_MatrizB);
				this->Controls->Add(this->lbl_MatrizA);
				this->Controls->Add(this->pnl_readArchivos);
				this->Controls->Add(this->box_logo);
				this->Controls->Add(this->ln_hor);
				this->Controls->Add(this->lbl_desc);
				this->Controls->Add(this->btn_salir);
				this->Controls->Add(this->label_titulo);
				this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
				this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
				this->Name = L"Matriz";
				this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
				this->Text = L"Matrices";
				this->Load += gcnew System::EventHandler(this, &Matriz::Matriz_Load);
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->box_logo))->EndInit();
				this->pnl_readArchivos->ResumeLayout(false);
				this->pnl_readArchivos->PerformLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grid_MatrizA))->EndInit();
				this->pnl_Operaciones->ResumeLayout(false);
				this->pnl_Operaciones->PerformLayout();
				this->pnl_Intro->ResumeLayout(false);
				this->pnl_Intro->PerformLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grid_MatrizB))->EndInit();
				this->pnl_ArchivoOperacion->ResumeLayout(false);
				this->pnl_ArchivoOperacion->PerformLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grid_MatrizRes))->EndInit();
				this->ResumeLayout(false);
				this->PerformLayout();

			}
		
		#pragma endregion
		private: System::Void Matriz_Load(System::Object^ sender, System::EventArgs^ e) {
			this->btn_Entrar->Hide();

			Console::WriteLine("M A T R I C E S\n");
			Console::WriteLine("----------------------------------------------------------------------------------------------------------\n");

			this->btn_ArchivoB->Enabled = false;

			//operaciones
			this->pnl_Operaciones->Hide();
			this->pnl_ArchivoOperacion->Hide();
			this->lbl_SignoIgual->Hide();

			//matrices
			this->lbl_MatrizA->Hide();
			this->grid_MatrizA->Hide();
			this->lbl_MatrizB->Hide();
			this->grid_MatrizB->Hide();
			this->lbl_MatrizRes->Hide();
			this->grid_MatrizRes->Hide();
		}

		private: System::Void timer_LoadScrn_Tick(System::Object^ sender, System::EventArgs^ e) {
			this->pnl_LoadBar->Width += 10;

			if (this->pnl_LoadBar->Width >= 1170) {
				this->timer_LoadScrn->Stop();
				this->btn_Entrar->Show();
			}
		}

		private: System::Void btn_Entrar_Click(System::Object^ sender, System::EventArgs^ e) {
			this->pnl_Intro->Hide();
		}
	
		private: System::Void btn_ArchivoA_Click(System::Object^ sender, System::EventArgs^ e) {
			if (this->txt_ArchivoA->Text->Length == 0) {
				this->lbl_error->Location = System::Drawing::Point(441, 150);
			}
			else {
				String^ archivoA_txt;
				archivoA_txt = this->txt_ArchivoA->Text + ".dat";
				
				if (File::Exists(archivoA_txt)) {
					this->lbl_error->Location = System::Drawing::Point(-500, -500);
					this->lbl_MatrizA->Show();
					this->grid_MatrizA->Show();

					char* linea_C, *numeroA_char;
					string linea_S;
					int numeroA_int, len, addCounter_A;

					Console::WriteLine("Nombre de archivo A: " + archivoA_txt);

					ifstream matrizIn(CString(archivoA_txt), ios::in);

					addCounter_A = 1;
					while (!matrizIn.eof()) {
						getline(matrizIn, linea_S);
						len = strlen(linea_S.c_str());
						linea_C = new char[len];
						strcpy_s(linea_C, len + 1, linea_S.c_str());
						numeroA_char = strtok(linea_C, " ");
						
						while (numeroA_char != NULL) {
							numeroA_int = atoi(numeroA_char);

							this->grid_MatrizA->Columns->Add(numeroA_int.ToString(), numeroA_int.ToString());
							this->grid_MatrizA->Rows->Add(numeroA_int.ToString());

							objOperaciones->agregar_MatrizA(numeroA_int);

							numeroA_char = strtok(NULL, " ");
							addCounter_A++;
						}
					}

					objOperaciones->imprimir();

					matrizIn.close();
					this->btn_ArchivoA->Enabled = false;
					this->btn_ArchivoB->Enabled = true;
				}
				else {
					this->lbl_MatrizA->Hide();

					this->lbl_error->Location = System::Drawing::Point(441, 150);
					this->lbl_error->Text = L"El archivo no existe. Intentalo de nuevo.";
				}
			}
		}

		private: System::Void btn_ArchivoB_Click(System::Object^ sender, System::EventArgs^ e) {
			if (this->txt_ArchivoA->Text->Length == 0) {
				this->lbl_error->Location = System::Drawing::Point(441, 192);
			}
			else {
				String^ archivoB_txt;
				archivoB_txt = this->txt_ArchivoB->Text + ".dat";

				if (File::Exists(archivoB_txt)) {
					this->lbl_error->Location = System::Drawing::Point(-500, -500);
					this->lbl_MatrizB->Show();
					this->grid_MatrizB->Show();

					char* linea_C, * numeroB_char;
					string linea_S;
					int numeroB_int, len, addCounter_B;

					Console::WriteLine("\nNombre de archivo B: " + archivoB_txt);

					ifstream matrizIn(CString(archivoB_txt), ios::in);

					while (!matrizIn.eof()) {
						getline(matrizIn, linea_S);
						len = strlen(linea_S.c_str());
						linea_C = new char[len];
						strcpy_s(linea_C, len + 1, linea_S.c_str());
						numeroB_char = strtok(linea_C, " ");

						while (numeroB_char != NULL) {
							numeroB_int = atoi(numeroB_char);

							this->grid_MatrizB->Columns->Add(addCounter_B.ToString(), addCounter_B.ToString());
							this->grid_MatrizB->Rows->Add(numeroB_int.ToString());

							objOperaciones->agregar_MatrizB(numeroB_int);

							numeroB_char = strtok(NULL, " ");
							addCounter_B++;
						}
					}

					objOperaciones->imprimir();

					matrizIn.close();
					this->btn_ArchivoB->Enabled = false;
					this->pnl_Operaciones->Show();
				}
				else {
					this->lbl_MatrizB->Hide();;

					this->lbl_error->Location = System::Drawing::Point(441, 194);
					this->lbl_error->Text = L"El archivo no existe. Intentalo de nuevo.";
				}
			}
		}

		private: System::Void btn_sumar_Click(System::Object^ sender, System::EventArgs^ e) {
			tipo_operacion = 1;
			this->pnl_ArchivoOperacion->Show();
		}

		private: System::Void btn_restar_Click(System::Object^ sender, System::EventArgs^ e) {
			tipo_operacion = 2;
			this->pnl_ArchivoOperacion->Show();
		}

		private: System::Void btn_mult_Click(System::Object^ sender, System::EventArgs^ e) {
			tipo_operacion = 3;
			this->pnl_ArchivoOperacion->Show();
		}

		private: System::Void btn_det_Click(System::Object^ sender, System::EventArgs^ e) {
			tipo_operacion = 4;
			this->pnl_ArchivoOperacion->Show();
		}

		private: System::Void btn_CrearOperacion_Click(System::Object^ sender, System::EventArgs^ e) {
			String^ archivo_operacion;
			archivo_operacion = this->txt_ArchivoOperacion->Text + ".txt";

			switch (tipo_operacion) {
			case 1:
				this->lbl_Signo->Text = L"+";
				objOperaciones->sumarMatriz(this->txt_ArchivoOperacion->Text);
				break;
			case 2:
				this->lbl_Signo->Text = L"-";
				objOperaciones->restarMatriz(this->txt_ArchivoOperacion->Text);
				break;
			case 3:
				this->lbl_Signo->Text = L"*";
				objOperaciones->multMatriz(this->txt_ArchivoOperacion->Text);
				break;
			case 4:
				this->lbl_Signo->Text = L"det";
				objOperaciones->detMatriz(this->txt_ArchivoOperacion->Text);
				break;
			}

			this->lbl_MatrizRes->Show();
			this->grid_MatrizRes->Show();

			this->lbl_SignoIgual->Show();
			this->txt_ArchivoOperacion->Clear();
			this->pnl_ArchivoOperacion->Hide();
		}

		private: System::Void btn_salir_Click(System::Object^ sender, System::EventArgs^ e) {
			system("exit");
			this->Close();
		}
	};
}