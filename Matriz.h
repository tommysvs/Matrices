#pragma once

#include "Operaciones.h"

namespace Matrices {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Matriz : public System::Windows::Forms::Form {
		Operaciones *objOperaciones = new Operaciones();

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
	private: System::Windows::Forms::Button^ btnFile1;
	private: System::Windows::Forms::Button^ btnFile2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panelLine1;
	private: System::Windows::Forms::Panel^ panelLine2;
	private: System::Windows::Forms::Label^ lbl_instruccion;
	private: System::Windows::Forms::PictureBox^ pictureBox1;



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
				this->btnFile1 = (gcnew System::Windows::Forms::Button());
				this->btnFile2 = (gcnew System::Windows::Forms::Button());
				this->label1 = (gcnew System::Windows::Forms::Label());
				this->panelLine1 = (gcnew System::Windows::Forms::Panel());
				this->panelLine2 = (gcnew System::Windows::Forms::Panel());
				this->lbl_instruccion = (gcnew System::Windows::Forms::Label());
				this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
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
				this->btn_sumar->Location = System::Drawing::Point(19, 218);
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
				this->btn_restar->Location = System::Drawing::Point(19, 284);
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
				this->btn_mult->Location = System::Drawing::Point(19, 351);
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
				this->btn_det->Location = System::Drawing::Point(19, 418);
				this->btn_det->Name = L"btn_det";
				this->btn_det->Size = System::Drawing::Size(150, 40);
				this->btn_det->TabIndex = 5;
				this->btn_det->Text = L"Determinante";
				this->btn_det->UseVisualStyleBackColor = false;
				// 
				// btnFile1
				// 
				this->btnFile1->BackColor = System::Drawing::Color::Salmon;
				this->btnFile1->Cursor = System::Windows::Forms::Cursors::Hand;
				this->btnFile1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->btnFile1->Font = (gcnew System::Drawing::Font(L"Montserrat Light", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btnFile1->ForeColor = System::Drawing::Color::White;
				this->btnFile1->Location = System::Drawing::Point(216, 146);
				this->btnFile1->Name = L"btnFile1";
				this->btnFile1->Size = System::Drawing::Size(170, 40);
				this->btnFile1->TabIndex = 6;
				this->btnFile1->Text = L"Seleccionar archivo...";
				this->btnFile1->UseVisualStyleBackColor = false;
				// 
				// btnFile2
				// 
				this->btnFile2->BackColor = System::Drawing::Color::Salmon;
				this->btnFile2->Cursor = System::Windows::Forms::Cursors::Hand;
				this->btnFile2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->btnFile2->Font = (gcnew System::Drawing::Font(L"Montserrat Light", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btnFile2->ForeColor = System::Drawing::Color::White;
				this->btnFile2->Location = System::Drawing::Point(414, 146);
				this->btnFile2->Name = L"btnFile2";
				this->btnFile2->Size = System::Drawing::Size(170, 40);
				this->btnFile2->TabIndex = 7;
				this->btnFile2->Text = L"Seleccionar archivo...";
				this->btnFile2->UseVisualStyleBackColor = false;
				// 
				// label1
				// 
				this->label1->AutoSize = true;
				this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat Light", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label1->Location = System::Drawing::Point(16, 52);
				this->label1->Name = L"label1";
				this->label1->Size = System::Drawing::Size(717, 17);
				this->label1->TabIndex = 8;
				this->label1->Text = L"Realización de operaciones de suma, resta, multiplicación y cálculo de determinan"
					L"te de dos matrices dadas.";
				// 
				// panelLine1
				// 
				this->panelLine1->BackColor = System::Drawing::Color::Tomato;
				this->panelLine1->Location = System::Drawing::Point(19, 87);
				this->panelLine1->Name = L"panelLine1";
				this->panelLine1->Size = System::Drawing::Size(1130, 1);
				this->panelLine1->TabIndex = 9;
				// 
				// panelLine2
				// 
				this->panelLine2->BackColor = System::Drawing::Color::Tomato;
				this->panelLine2->Location = System::Drawing::Point(190, 106);
				this->panelLine2->Name = L"panelLine2";
				this->panelLine2->Size = System::Drawing::Size(1, 520);
				this->panelLine2->TabIndex = 10;
				// 
				// lbl_instruccion
				// 
				this->lbl_instruccion->AutoSize = true;
				this->lbl_instruccion->Font = (gcnew System::Drawing::Font(L"Montserrat Light", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->lbl_instruccion->Location = System::Drawing::Point(213, 106);
				this->lbl_instruccion->Name = L"lbl_instruccion";
				this->lbl_instruccion->Size = System::Drawing::Size(498, 17);
				this->lbl_instruccion->TabIndex = 11;
				this->lbl_instruccion->Text = L"Por favor, selecciona los dos archivos con los que realizarás las operaciones.";
				// 
				// pictureBox1
				// 
				this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
				this->pictureBox1->Location = System::Drawing::Point(1089, 13);
				this->pictureBox1->Name = L"pictureBox1";
				this->pictureBox1->Size = System::Drawing::Size(60, 60);
				this->pictureBox1->TabIndex = 12;
				this->pictureBox1->TabStop = false;
				// 
				// Matriz
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->BackColor = System::Drawing::Color::SeaShell;
				this->ClientSize = System::Drawing::Size(1172, 644);
				this->Controls->Add(this->pictureBox1);
				this->Controls->Add(this->lbl_instruccion);
				this->Controls->Add(this->panelLine2);
				this->Controls->Add(this->panelLine1);
				this->Controls->Add(this->label1);
				this->Controls->Add(this->btnFile2);
				this->Controls->Add(this->btnFile1);
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
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
				this->ResumeLayout(false);
				this->PerformLayout();

			}
		
		#pragma endregion
		private: System::Void Matriz_Load(System::Object^ sender, System::EventArgs^ e) {
	
		}
	
		private: System::Void btn_salir_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
		}
	};
}