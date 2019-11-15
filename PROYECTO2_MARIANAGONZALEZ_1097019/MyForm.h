#pragma once
#include <msclr\marshal_cppstd.h>
#include <iostream>
#include <list>
#include <iterator> 
#include <vector> 
#include <fstream> 
#include "Usuario.h"
#include <string>
#include "MyForm2.h"
#include "Lista.h"
namespace PROYECTO2MARIANAGONZALEZ1097019 {

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
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::MonthCalendar^  monthCalendar1;
	


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Button^  button1;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
	public: System::Windows::Forms::ListBox^  listBox1;
	public:void InitializeComponent(void)
		{
		this->label1 = (gcnew System::Windows::Forms::Label());
		this->label2 = (gcnew System::Windows::Forms::Label());
		this->label3 = (gcnew System::Windows::Forms::Label());
		this->textBox1 = (gcnew System::Windows::Forms::TextBox());
		this->textBox2 = (gcnew System::Windows::Forms::TextBox());
		this->button2 = (gcnew System::Windows::Forms::Button());
		this->button3 = (gcnew System::Windows::Forms::Button());
		this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
		this->listBox1 = (gcnew System::Windows::Forms::ListBox());
		this->button1 = (gcnew System::Windows::Forms::Button());
		this->SuspendLayout();
		// 
		// label1
		// 
		this->label1->AutoSize = true;
		this->label1->Location = System::Drawing::Point(99, 85);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(38, 17);
		this->label1->TabIndex = 0;
		this->label1->Text = L"AÑO";
		// 
		// label2
		// 
		this->label2->AutoSize = true;
		this->label2->Location = System::Drawing::Point(99, 113);
		this->label2->Name = L"label2";
		this->label2->Size = System::Drawing::Size(37, 17);
		this->label2->TabIndex = 1;
		this->label2->Text = L"MES";
		// 
		// label3
		// 
		this->label3->AutoSize = true;
		this->label3->Location = System::Drawing::Point(417, 27);
		this->label3->Name = L"label3";
		this->label3->Size = System::Drawing::Size(66, 17);
		this->label3->TabIndex = 2;
		this->label3->Text = L"AGENDA";
		// 
		// textBox1
		// 
		this->textBox1->Location = System::Drawing::Point(165, 82);
		this->textBox1->Name = L"textBox1";
		this->textBox1->Size = System::Drawing::Size(65, 22);
		this->textBox1->TabIndex = 3;
		// 
		// textBox2
		// 
		this->textBox2->Location = System::Drawing::Point(165, 113);
		this->textBox2->Name = L"textBox2";
		this->textBox2->Size = System::Drawing::Size(65, 22);
		this->textBox2->TabIndex = 4;
		// 
		// button2
		// 
		this->button2->Location = System::Drawing::Point(420, 210);
		this->button2->Name = L"button2";
		this->button2->Size = System::Drawing::Size(102, 49);
		this->button2->TabIndex = 7;
		this->button2->Text = L"AGREGAR TAREA";
		this->button2->UseVisualStyleBackColor = true;
		this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
		// 
		// button3
		// 
		this->button3->Location = System::Drawing::Point(264, 98);
		this->button3->Name = L"button3";
		this->button3->Size = System::Drawing::Size(97, 32);
		this->button3->TabIndex = 9;
		this->button3->Text = L"INGRESAR";
		this->button3->UseVisualStyleBackColor = true;
		this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
		// 
		// monthCalendar1
		// 
		this->monthCalendar1->Location = System::Drawing::Point(102, 184);
		this->monthCalendar1->MaxSelectionCount = 1;
		this->monthCalendar1->Name = L"monthCalendar1";
		this->monthCalendar1->ShowToday = false;
		this->monthCalendar1->ShowTodayCircle = false;
		this->monthCalendar1->TabIndex = 10;
		// 
		// listBox1
		// 
		this->listBox1->FormattingEnabled = true;
		this->listBox1->ItemHeight = 16;
		this->listBox1->Location = System::Drawing::Point(594, 82);
		this->listBox1->Name = L"listBox1";
		this->listBox1->Size = System::Drawing::Size(202, 308);
		this->listBox1->TabIndex = 11;
		// 
		// button1
		// 
		this->button1->Location = System::Drawing::Point(415, 290);
		this->button1->Name = L"button1";
		this->button1->Size = System::Drawing::Size(115, 49);
		this->button1->TabIndex = 12;
		this->button1->Text = L"VER TAREAS DEL DÍA";
		this->button1->UseVisualStyleBackColor = true;
		this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
		// 
		// MyForm
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->ClientSize = System::Drawing::Size(890, 443);
		this->Controls->Add(this->button1);
		this->Controls->Add(this->listBox1);
		this->Controls->Add(this->monthCalendar1);
		this->Controls->Add(this->button3);
		this->Controls->Add(this->button2);
		this->Controls->Add(this->textBox2);
		this->Controls->Add(this->textBox1);
		this->Controls->Add(this->label3);
		this->Controls->Add(this->label2);
		this->Controls->Add(this->label1);
		this->Name = L"MyForm";
		this->Text = L"MyForm";
		this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
		this->ResumeLayout(false);
		this->PerformLayout();

	}
#pragma endregion
		public:
			MyForm(String^ us)
			{
				InitializeComponent();
				us = usuario;
			}
			String^ usuario;
			
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	

	}
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	private:System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) //buscar anio y mes en el month calendar
	{
		MonthCalendar^ myCal = gcnew MonthCalendar();
		String^ mes =textBox2->Text; 
		String^ anio = textBox1->Text;
		DateTime fecha = System::Convert::ToDateTime(mes + "/01/"+ anio);
		monthCalendar1->SetDate(fecha);
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ fechadT = Convert::ToString(monthCalendar1->SelectionRange->Start);
		MyForm2 ^form = gcnew MyForm2(fechadT,usuario);
		form->Show();
		
	}
	
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	//MyForm2 ^form = gcnew MyForm2();
	//Lista* listaux;
	//Lista* main;
	//String^ fecha = Convert::ToString(monthCalendar1->SelectionRange->Start);
	//msclr::interop::marshal_context context;
	//std::string lafecha = context.marshal_as<std::string>(fecha);
	//int cont = 0;

	//while (form->listaev->Primero() != lafecha)
	//{
	//	listaux->Insertar(form->listaev->QuitarPrimero());
	//}
	//main->Insertar(form->listaev->QuitarPrimero());
	//listBox1->Items->Add(gcnew String(main->Imprimir() .c_str()));
	//for (int i = 0; i < form->cant - cont; i++)
	//{
	//	form->listaev->Insertar(listaux->QuitarPrimero());
	//}
}
};
}
