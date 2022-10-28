#pragma once
#include<string.h>
#include<stdlib.h>
#include<iostream>
#include<fstream>
#include<cstdlib>
namespace MathUGT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Resumen de resultados
	/// </summary>
	public ref class resultados : public System::Windows::Forms::Form
	{
	public:
		resultados(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~resultados()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^ listView1;
	protected:
	private: System::Windows::Forms::ColumnHeader^ Nombre;
	private: System::Windows::Forms::ColumnHeader^ Grado;
	private: System::Windows::Forms::ColumnHeader^ Sección;

	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;



	protected:


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::ListViewItem^ listViewItem8 = (gcnew System::Windows::Forms::ListViewItem(L""));
			System::Windows::Forms::ListViewItem^ listViewItem9 = (gcnew System::Windows::Forms::ListViewItem(L""));
			System::Windows::Forms::ListViewItem^ listViewItem10 = (gcnew System::Windows::Forms::ListViewItem(L""));
			System::Windows::Forms::ListViewItem^ listViewItem11 = (gcnew System::Windows::Forms::ListViewItem(L""));
			System::Windows::Forms::ListViewItem^ listViewItem12 = (gcnew System::Windows::Forms::ListViewItem(L""));
			System::Windows::Forms::ListViewItem^ listViewItem13 = (gcnew System::Windows::Forms::ListViewItem(L""));
			System::Windows::Forms::ListViewItem^ listViewItem14 = (gcnew System::Windows::Forms::ListViewItem(L""));
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->Nombre = (gcnew System::Windows::Forms::ColumnHeader());
			this->Grado = (gcnew System::Windows::Forms::ColumnHeader());
			this->Sección = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
				this->Nombre, this->Grado,
					this->Sección, this->columnHeader1, this->columnHeader2, this->columnHeader3, this->columnHeader4
			});
			this->listView1->HideSelection = false;
			this->listView1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(7) {
				listViewItem8, listViewItem9,
					listViewItem10, listViewItem11, listViewItem12, listViewItem13, listViewItem14
			});
			this->listView1->Location = System::Drawing::Point(12, 29);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(1000, 501);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &resultados::listView1_SelectedIndexChanged);
			// 
			// Nombre
			// 
			this->Nombre->Text = L"Nombres";
			this->Nombre->Width = 177;
			// 
			// Grado
			// 
			this->Grado->Text = L"Apellido";
			this->Grado->Width = 154;
			// 
			// Sección
			// 
			this->Sección->Text = L"sección";
			this->Sección->Width = 105;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Clave";
			this->columnHeader1->Width = 84;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Puntaje evaluación";
			this->columnHeader2->Width = 160;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Grado";
			this->columnHeader3->Width = 199;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"";
			this->columnHeader4->Width = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(381, 550);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(177, 82);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Mostrar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &resultados::button1_Click);
			// 
			// resultados
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(1048, 660);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"resultados";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Resultados";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		char mystring[50];
		FILE *fe;
		fe = fopen("info.txt","r");
		char cadena[50],*dato1,*dato2,*dato3,*dato4,*dato5,*dato6;
		rewind(fe);
		listView1->Items->Clear();
		bool found = false;
		do{

			fgets(mystring,100, fe);
			dato1 = strtok(mystring, ";");
			dato2 = strtok(NULL, ";");	
			dato3 = strtok(NULL, ";");
			dato4 = strtok(NULL, ";");
			dato5 = strtok(NULL, ";");
			dato6 = strtok(NULL, ";");
			String^ srtNew1 = gcnew String(dato1);
			String^ srtNew2 = gcnew String(dato2);
			String^ srtNew3 = gcnew String(dato3);
			String^ srtNew4 = gcnew String(dato4);
			String^ srtNew5 = gcnew String(dato5);
			String^ srtNew6 = gcnew String(dato6);
			ListViewItem^ listView1 = gcnew Windows::Forms::ListViewItem(srtNew1);
			listView1->SubItems->Add(srtNew2);
			listView1->SubItems->Add(srtNew3);
			listView1->SubItems->Add(srtNew4);
			listView1->SubItems->Add(srtNew5);
			listView1->SubItems->Add(srtNew6);
			this->listView1->Items->Add(listView1);
	

		} while (feof(fe) == 0);

		


	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
