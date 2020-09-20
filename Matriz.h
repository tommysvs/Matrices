#pragma once

#include <Windows.h>
#include "Operaciones.h"

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
		
		String^ archivoA_txt;
		String^ archivoB_txt;
		private: System::Windows::Forms::Label^ lbl_MatrizA;
		private: System::Windows::Forms::Label^ lbl_MatrizB;
		private: System::Windows::Forms::Label^ lbl_error;

		public:
			Matriz(void) {
				InitializeComponent();
			}

		protected:
			~Matriz() {
				if (components)
					delete components;
			}
		private: System::Windows::Forms::Label^ label_titulo;
		protected:

		private: System::Windows::Forms::Button^ btn_salir;
		private: System::Windows::Forms::Button^ btn_sumar;
		private: System::Windows::Forms::Button^ btn_restar;
		private: System::Windows::Forms::Button^ btn_mult;
		private: System::Windows::Forms::Button^ btn_det;

		private: System::Windows::Forms::Label^ lbl_desc;
		private: System::Windows::Forms::Panel^ ln_hor;
		private: System::Windows::Forms::Panel^ ln_ver;
		private: System::Windows::Forms::Label^ lbl_instruccion;
		private: System::Windows::Forms::PictureBox^ box_logo;
		private: System::Windows::Forms::TextBox^ txt_ArchivoA;
		private: System::Windows::Forms::Label^ lbl_txt_mA;
		private: System::Windows::Forms::Label^ lbl_txt_mB;
		private: System::Windows::Forms::TextBox^ txt_ArchivoB;
		private: System::Windows::Forms::Button^ btn_ArchivoA;
		private: System::Windows::Forms::Button^ btn_ArchivoB;
		private: System::Windows::Forms::Button^ btn_Close;
		private: System::Windows::Forms::Button^ btn_Open;
	private: System::Windows::Forms::Panel^ pnl_readArchivos;



		private: System::ComponentModel::IContainer^ components;

		protected:

		private:
			#pragma region Windows Form Designer generated code

			void InitializeComponent(void) {
				System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Matriz::typeid));
				this->label_titulo = (gcnew System::Windows::Forms::Label());
				this->btn_salir = (gcnew System::Windows::Forms::Button());
				this->btn_sumar = (gcnew System::Windows::Forms::Button());
				this->btn_restar = (gcnew System::Windows::Forms::Button());
				this->btn_mult = (gcnew System::Windows::Forms::Button());
				this->btn_det = (gcnew System::Windows::Forms::Button());
				this->lbl_desc = (gcnew System::Windows::Forms::Label());
				this->ln_hor = (gcnew System::Windows::Forms::Panel());
				this->ln_ver = (gcnew System::Windows::Forms::Panel());
				this->lbl_instruccion = (gcnew System::Windows::Forms::Label());
				this->box_logo = (gcnew System::Windows::Forms::PictureBox());
				this->txt_ArchivoA = (gcnew System::Windows::Forms::TextBox());
				this->lbl_txt_mA = (gcnew System::Windows::Forms::Label());
				this->lbl_txt_mB = (gcnew System::Windows::Forms::Label());
				this->txt_ArchivoB = (gcnew System::Windows::Forms::TextBox());
				this->btn_ArchivoA = (gcnew System::Windows::Forms::Button());
				this->btn_ArchivoB = (gcnew System::Windows::Forms::Button());
				this->btn_Close = (gcnew System::Windows::Forms::Button());
				this->btn_Open = (gcnew System::Windows::Forms::Button());
				this->pnl_readArchivos = (gcnew System::Windows::Forms::Panel());
				this->lbl_MatrizA = (gcnew System::Windows::Forms::Label());
				this->lbl_MatrizB = (gcnew System::Windows::Forms::Label());
				this->lbl_error = (gcnew System::Windows::Forms::Label());
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->box_logo))->BeginInit();
				this->pnl_readArchivos->SuspendLayout();
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
				this->btn_salir->Location = System::Drawing::Point(1070, 602);
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
				this->btn_sumar->Location = System::Drawing::Point(-500, -500);
				this->btn_sumar->Name = L"btn_sumar";
				this->btn_sumar->Size = System::Drawing::Size(150, 40);
				this->btn_sumar->TabIndex = 2;
				this->btn_sumar->Text = L"Sumar";
				this->btn_sumar->UseVisualStyleBackColor = false;
				// 
				// btn_restar
				// 
				this->btn_restar->BackColor = System::Drawing::Color::Salmon;
				this->btn_restar->Cursor = System::Windows::Forms::Cursors::Hand;
				this->btn_restar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->btn_restar->Font = (gcnew System::Drawing::Font(L"Montserrat Light", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_restar->ForeColor = System::Drawing::Color::White;
				this->btn_restar->Location = System::Drawing::Point(-500, -500);
				this->btn_restar->Name = L"btn_restar";
				this->btn_restar->Size = System::Drawing::Size(150, 40);
				this->btn_restar->TabIndex = 3;
				this->btn_restar->Text = L"Restar";
				this->btn_restar->UseVisualStyleBackColor = false;
				// 
				// btn_mult
				// 
				this->btn_mult->BackColor = System::Drawing::Color::Salmon;
				this->btn_mult->Cursor = System::Windows::Forms::Cursors::Hand;
				this->btn_mult->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->btn_mult->Font = (gcnew System::Drawing::Font(L"Montserrat Light", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_mult->ForeColor = System::Drawing::Color::White;
				this->btn_mult->Location = System::Drawing::Point(-500, -500);
				this->btn_mult->Name = L"btn_mult";
				this->btn_mult->Size = System::Drawing::Size(150, 40);
				this->btn_mult->TabIndex = 4;
				this->btn_mult->Text = L"Multiplicar";
				this->btn_mult->UseVisualStyleBackColor = false;
				// 
				// btn_det
				// 
				this->btn_det->BackColor = System::Drawing::Color::Salmon;
				this->btn_det->Cursor = System::Windows::Forms::Cursors::Hand;
				this->btn_det->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->btn_det->Font = (gcnew System::Drawing::Font(L"Montserrat Light", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_det->ForeColor = System::Drawing::Color::White;
				this->btn_det->Location = System::Drawing::Point(-500, -500);
				this->btn_det->Name = L"btn_det";
				this->btn_det->Size = System::Drawing::Size(150, 40);
				this->btn_det->TabIndex = 5;
				this->btn_det->Text = L"Determinante";
				this->btn_det->UseVisualStyleBackColor = false;
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
				this->ln_hor->Size = System::Drawing::Size(1130, 1);
				this->ln_hor->TabIndex = 9;
				// 
				// ln_ver
				// 
				this->ln_ver->BackColor = System::Drawing::Color::Tomato;
				this->ln_ver->Location = System::Drawing::Point(30, 106);
				this->ln_ver->Name = L"ln_ver";
				this->ln_ver->Size = System::Drawing::Size(1, 520);
				this->ln_ver->TabIndex = 10;
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
				this->box_logo->Location = System::Drawing::Point(1089, 13);
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
				// btn_Close
				// 
				this->btn_Close->BackColor = System::Drawing::Color::Salmon;
				this->btn_Close->Cursor = System::Windows::Forms::Cursors::Hand;
				this->btn_Close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->btn_Close->Font = (gcnew System::Drawing::Font(L"Montserrat Light", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_Close->ForeColor = System::Drawing::Color::White;
				this->btn_Close->Location = System::Drawing::Point(-500, -500);
				this->btn_Close->Name = L"btn_Close";
				this->btn_Close->Size = System::Drawing::Size(20, 100);
				this->btn_Close->TabIndex = 19;
				this->btn_Close->Text = L"<";
				this->btn_Close->UseVisualStyleBackColor = false;
				this->btn_Close->Click += gcnew System::EventHandler(this, &Matriz::btn_Close_Click);
				// 
				// btn_Open
				// 
				this->btn_Open->BackColor = System::Drawing::Color::Salmon;
				this->btn_Open->Cursor = System::Windows::Forms::Cursors::Hand;
				this->btn_Open->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->btn_Open->Font = (gcnew System::Drawing::Font(L"Montserrat Light", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn_Open->ForeColor = System::Drawing::Color::White;
				this->btn_Open->Location = System::Drawing::Point(59, 291);
				this->btn_Open->Name = L"btn_Open";
				this->btn_Open->Size = System::Drawing::Size(20, 100);
				this->btn_Open->TabIndex = 20;
				this->btn_Open->Text = L">";
				this->btn_Open->UseVisualStyleBackColor = false;
				this->btn_Open->Click += gcnew System::EventHandler(this, &Matriz::btn_Open_Click);
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
				this->pnl_readArchivos->Location = System::Drawing::Point(97, 106);
				this->pnl_readArchivos->Name = L"pnl_readArchivos";
				this->pnl_readArchivos->Size = System::Drawing::Size(416, 112);
				this->pnl_readArchivos->TabIndex = 21;
				// 
				// lbl_MatrizA
				// 
				this->lbl_MatrizA->AutoSize = true;
				this->lbl_MatrizA->Font = (gcnew System::Drawing::Font(L"Montserrat Light", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->lbl_MatrizA->Location = System::Drawing::Point(-500, -500);
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
				this->lbl_MatrizB->Location = System::Drawing::Point(-500, -500);
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
				// Matriz
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->BackColor = System::Drawing::Color::SeaShell;
				this->ClientSize = System::Drawing::Size(1172, 644);
				this->Controls->Add(this->lbl_error);
				this->Controls->Add(this->lbl_MatrizB);
				this->Controls->Add(this->lbl_MatrizA);
				this->Controls->Add(this->pnl_readArchivos);
				this->Controls->Add(this->btn_Open);
				this->Controls->Add(this->btn_Close);
				this->Controls->Add(this->box_logo);
				this->Controls->Add(this->ln_ver);
				this->Controls->Add(this->ln_hor);
				this->Controls->Add(this->lbl_desc);
				this->Controls->Add(this->btn_det);
				this->Controls->Add(this->btn_mult);
				this->Controls->Add(this->btn_restar);
				this->Controls->Add(this->btn_sumar);
				this->Controls->Add(this->btn_salir);
				this->Controls->Add(this->label_titulo);
				this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
				this->Name = L"Matriz";
				this->Text = L"Matrices";
				this->Load += gcnew System::EventHandler(this, &Matriz::Matriz_Load);
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->box_logo))->EndInit();
				this->pnl_readArchivos->ResumeLayout(false);
				this->pnl_readArchivos->PerformLayout();
				this->ResumeLayout(false);
				this->PerformLayout();

			}
		
		#pragma endregion
		private: System::Void Matriz_Load(System::Object^ sender, System::EventArgs^ e) {
			Console::WriteLine("M A T R I C E S");
			Console::WriteLine("Realización de operaciones de suma, resta, multiplicación y cálculo de determinante de dos matrices dadas.");
			Console::WriteLine("----------------------------------------------------------------------------------------------------------\n");
		}
	
		private: System::Void btn_salir_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
		}

		private: System::Void btn_ArchivoA_Click(System::Object^ sender, System::EventArgs^ e) {
			if (this->txt_ArchivoA->Text->Length == 0) {
				this->lbl_error->Location = System::Drawing::Point(517, 148);
			}
			else {
				String^ numerosA;

				archivoA_txt = this->txt_ArchivoA->Text + ".txt";
				
				if (File::Exists(archivoA_txt)) {
					this->lbl_error->Location = System::Drawing::Point(-500, -500);
					this->lbl_MatrizA->Location = System::Drawing::Point(584, 109);

					StreamReader^ input_ArchivoA = File::OpenText(archivoA_txt);
					
					Console::WriteLine("Nombre de archivo A: " + archivoA_txt);

					while ((numerosA = input_ArchivoA->ReadLine()) != nullptr) {
						this->lbl_instruccion->Text = numerosA;
						Console::WriteLine("[ " + numerosA + " ]");
					}

					if (input_ArchivoA)
						input_ArchivoA->Close();
				}
				else {
					this->lbl_MatrizA->Location = System::Drawing::Point(-500, -500);

					this->lbl_error->Location = System::Drawing::Point(517, 148);
					this->lbl_error->Text = L"El archivo no existe. Intentalo de nuevo.";
				}
			}
		}

		private: System::Void btn_ArchivoB_Click(System::Object^ sender, System::EventArgs^ e) {
			if (this->txt_ArchivoA->Text->Length == 0) {
				this->lbl_error->Location = System::Drawing::Point(517, 192);
			}
			else {
				String^ numerosB;

				archivoB_txt = this->txt_ArchivoB->Text + ".txt";

				if (File::Exists(archivoB_txt)) {
					this->lbl_error->Location = System::Drawing::Point(-500, -500);
					this->lbl_MatrizB->Location = System::Drawing::Point(860, 109);

					StreamReader^ input_ArchivoB = File::OpenText(archivoB_txt);

					Console::WriteLine("\nNombre de archivo B: " + archivoB_txt);

					while ((numerosB = input_ArchivoB->ReadLine()) != nullptr) {
						this->lbl_instruccion->Text = numerosB;
						Console::WriteLine("[ " + numerosB + " ]");
					}

					if (input_ArchivoB)
						input_ArchivoB->Close();
				}
				else {
					this->lbl_MatrizB->Location = System::Drawing::Point(-500, -500);

					this->lbl_error->Location = System::Drawing::Point(517, 192);
					this->lbl_error->Text = L"El archivo no existe. Intentalo de nuevo.";
				}
			}
		}

		private: System::Void btn_Close_Click(System::Object^ sender, System::EventArgs^ e) {
			this->btn_sumar->Location = System::Drawing::Point(-500, -500);
			this->btn_restar->Location = System::Drawing::Point(-500, -500);
			this->btn_mult->Location = System::Drawing::Point(-500, -500);
			this->btn_det->Location = System::Drawing::Point(-500, -500);
			this->ln_ver->Location = System::Drawing::Point(30, 106);
			this->btn_Close->Location = System::Drawing::Point(-500, -500);
			this->btn_Open->Location = System::Drawing::Point(60, 291);
			this->pnl_readArchivos->Location = System::Drawing::Point(97, 106);
		}
		private: System::Void btn_Open_Click(System::Object^ sender, System::EventArgs^ e) {
			this->btn_sumar->Location = System::Drawing::Point(19, 218);
			this->btn_restar->Location = System::Drawing::Point(19, 284);
			this->btn_mult->Location = System::Drawing::Point(19, 351);
			this->btn_det->Location = System::Drawing::Point(19, 418);
			this->ln_ver->Location = System::Drawing::Point(190, 106);
			this->btn_Open->Location = System::Drawing::Point(-500, -500);
			this->btn_Close->Location = System::Drawing::Point(211, 291);
			this->pnl_readArchivos->Location = System::Drawing::Point(260, 106);
		}
	};
}