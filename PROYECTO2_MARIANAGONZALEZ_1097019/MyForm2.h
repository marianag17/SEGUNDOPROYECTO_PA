#pragma once
#include<windows.h>
#include <iostream>;
#include <string>;
#include <msclr\marshal_cppstd.h>;
#include <Servprov.h> 
#include <fstream> 
#include "Actividad.h"
#include "Alarma.h"
#include "General.h"
#include "Recordatorio.h"
#include <utility>
#include <map>
#include <iomanip>
#include <iostream>
#include <list>
#include <iterator> 
#include <vector> 
#include "dia.h"
#include "ElUsuario.h"
#include "ElEvento.h"
#include "Lista.h"

namespace PROYECTO2MARIANAGONZALEZ1097019 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	static dia diaActual;
	extern ElUsuario datosUsuario;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^  radioButton1;
	protected:
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::Button^  button1;


	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;


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
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->SuspendLayout();
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(47, 54);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(86, 21);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Actividad";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(266, 54);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(73, 21);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Alarma";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(476, 54);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(111, 21);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Recordatorio";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(266, 97);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Aceptar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(467, 139);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(153, 77);
			this->textBox3->TabIndex = 6;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(467, 240);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(153, 77);
			this->textBox4->TabIndex = 7;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(467, 334);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(153, 77);
			this->textBox5->TabIndex = 8;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Poco importante", L"Importante", L"Muy importante" });
			this->comboBox1->Location = System::Drawing::Point(144, 306);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 9;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(144, 365);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(77, 22);
			this->textBox6->TabIndex = 10;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(224, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(235, 17);
			this->label1->TabIndex = 11;
			this->label1->Text = L"SELECCIONE EL TIPO DE EVENTO";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(44, 158);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 17);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Hora inicio";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(64, 199);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 17);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Hora fin";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(368, 172);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 17);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Descripción";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(368, 275);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(68, 17);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Personas";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(368, 365);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(68, 17);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Recursos";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(64, 309);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(65, 17);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Prioridad";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(94, 370);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(25, 17);
			this->label8->TabIndex = 18;
			this->label8->Text = L"I.D";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(255, 423);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(103, 55);
			this->button2->TabIndex = 19;
			this->button2->Text = L"INGRESAR EVENTO";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(64, 245);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(45, 17);
			this->label9->TabIndex = 21;
			this->label9->Text = L"Lugar";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(144, 240);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(121, 22);
			this->textBox7->TabIndex = 20;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(139, 158);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(126, 22);
			this->dateTimePicker1->TabIndex = 22;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker2->Location = System::Drawing::Point(139, 194);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(126, 22);
			this->dateTimePicker2->TabIndex = 23;
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(658, 511);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: Lista* listaev = new Lista();
		public: int cant = 0;
		bool alarma = false;
		bool recordatorio = false;
		bool actividad = false;
		String^ fecha;
		String^ usuario;
		public: MyForm2(String^ fec, String^ us)
		{
			InitializeComponent();
			fecha = fec;
			usuario = us;
			InitializeComponent();
			dia diaEstadoActual;
			diaActual = diaEstadoActual;
		}

	private: System::Void MyForm2_Load(System::Object^  sender, System::EventArgs^  e) {
		dateTimePicker1->CustomFormat = "HH:mm";
		dateTimePicker2->CustomFormat = "HH:mm";
		dateTimePicker1->Enabled = false;
		dateTimePicker2->Enabled = false;
		textBox3->Enabled = false;
		textBox4->Enabled = false;
		textBox5->Enabled = false;
		textBox6->Enabled = false;
		textBox7->Enabled = false;
		comboBox1->Enabled = false;
		label2->Enabled = false;
		label3->Enabled = false;
		label4->Enabled = false;
		label5->Enabled = false;
		label6->Enabled = false;
		label7->Enabled = false;
		label8->Enabled = false;
		label9->Enabled = false;
		button2->Enabled = false;
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (radioButton1->Checked == true)
	{
		dateTimePicker1->Enabled = true;
		dateTimePicker2->Enabled = true;
		textBox3->Enabled = true;
		textBox4->Enabled = true;
		textBox5->Enabled = true;
		textBox6->Enabled = true;
		textBox7->Enabled = true;
		comboBox1->Enabled = true;
		label2->Enabled = true;
		label3->Enabled = true;
		label4->Enabled = true;
		label5->Enabled = true;
		label6->Enabled = true;
		label7->Enabled = true;
		label8->Enabled = true;
		label9->Enabled = true;
		button2->Enabled = true;
		actividad = true;
	}
	if (radioButton2->Checked == true)
	{
		dateTimePicker2->Enabled = true;
		textBox3->Enabled = true;
		textBox6->Enabled = true;
		comboBox1->Enabled = true;
		button2->Enabled = true;
		label3->Enabled = true;
		label7->Enabled = true;
		label8->Enabled = true;
		label4->Enabled = true;
		alarma = true;
	}
	if (radioButton3->Checked == true)
	{
		dateTimePicker2->Enabled = true;
		textBox3->Enabled = true;
		textBox6->Enabled = true;
		comboBox1->Enabled = true;
		button2->Enabled = true;
		label3->Enabled = true;
		label7->Enabled = true;
		label8->Enabled = true;
		label4->Enabled = true;
		recordatorio = true;
	}
	if (radioButton3->Checked == false && radioButton2->Checked == false&& radioButton1->Checked == false)
	{
		System::Windows::Forms::MessageBox::Show("Debe seleccionar un tipo de evento", "Aviso");
	}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	msclr::interop::marshal_context context;
	std::string textousuario = context.marshal_as<std::string>(usuario);
	if (actividad)
	{
		Actividad newActividad;
		std::string ID = context.marshal_as<std::string>(textBox6->Text->ToString());
		newActividad.identificador = ID;
		std::string Description = context.marshal_as<std::string>(textBox3->Text->ToString());
		newActividad.descripcion = Description;
		newActividad.horainicio = context.marshal_as<std::string>(Convert::ToDateTime(dateTimePicker1->Value.ToShortTimeString()).ToString("h:mm tt"));
		newActividad.horafin = context.marshal_as<std::string>(Convert::ToDateTime(dateTimePicker1->Value.ToShortTimeString()).ToString("h:mm tt"));
		std::string Lugar = context.marshal_as<std::string>(textBox7->Text->ToString());
		newActividad.lugar = Lugar;
		std::string Materiales = context.marshal_as<std::string>(textBox5->Text->ToString());
		newActividad.materiales = Materiales;
		if (comboBox1->SelectedItem== "Muy importante")
		{
			newActividad.prioridad = 10;
		}
		if (comboBox1->SelectedItem == "Importante")
		{
			newActividad.prioridad = 6;
		}
		if (comboBox1->SelectedItem == "Poco importante")
		{
			newActividad.prioridad = 3;
		}
		cant++;
		ElEvento eventos(newActividad);
		diaActual.eventos.insert(pair<string, ElEvento>("Actividad", eventos));

	}
	if (alarma)
	{
		Alarma newAlarma;
		std::string ID = context.marshal_as<std::string>(textBox6->Text->ToString());
		newAlarma.identificador = ID;
		std::string Description = context.marshal_as<std::string>(textBox3->Text->ToString());
		newAlarma.descripcion = Description;
		newAlarma.horafin = context.marshal_as<std::string>(Convert::ToDateTime(dateTimePicker1->Value.ToShortTimeString()).ToString("h:mm tt"));
		if (comboBox1->SelectedItem == "Muy importante")
		{
			newAlarma.prioridad = 10;
		}
		if (comboBox1->SelectedItem == "Importante")
		{
			newAlarma.prioridad = 6;
		}
		if (comboBox1->SelectedItem == "Poco importante")
		{
			newAlarma.prioridad = 3;
		}
		cant++;
		ElEvento eventos(newAlarma);
		diaActual.eventos.insert(pair<string, ElEvento>("Alarma", eventos));
	}
	if (recordatorio)
	{
		Recordatorio newRecordatorio;
		std::string ID = context.marshal_as<std::string>(textBox6->Text->ToString());
		newRecordatorio.identificador = ID;
		std::string Description = context.marshal_as<std::string>(textBox3->Text->ToString());
		newRecordatorio.descripcion = Description;
		newRecordatorio.horafin = context.marshal_as<std::string>(Convert::ToDateTime(dateTimePicker1->Value.ToShortTimeString()).ToString("h:mm tt"));
		if (comboBox1->SelectedItem == "Muy importante")
		{
			newRecordatorio.prioridad = 10;
		}
		if (comboBox1->SelectedItem == "Importante")
		{
			newRecordatorio.prioridad = 6;
		}
		if (comboBox1->SelectedItem == "Poco importante")
		{
			newRecordatorio.prioridad = 3;
		}
		cant++;
		ElEvento eventos(newRecordatorio);
		diaActual.eventos.insert(pair<string, ElEvento>("Recordatorio", eventos));
	}
	MyForm2::Visible = false;

}

};
}
