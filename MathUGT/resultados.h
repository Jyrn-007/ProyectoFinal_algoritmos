#pragma once
#include<string.h>
#include<stdlib.h>
#include<iostream>
#include<fstream>
#include<cstdlib>
#include <locale.h> 


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
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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
	private: System::Windows::Forms::ColumnHeader^ Secci�n;

	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;



	protected:


	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::ListViewItem^ listViewItem1 = (gcnew System::Windows::Forms::ListViewItem(L""));
			System::Windows::Forms::ListViewItem^ listViewItem2 = (gcnew System::Windows::Forms::ListViewItem(L""));
			System::Windows::Forms::ListViewItem^ listViewItem3 = (gcnew System::Windows::Forms::ListViewItem(L""));
			System::Windows::Forms::ListViewItem^ listViewItem4 = (gcnew System::Windows::Forms::ListViewItem(L""));
			System::Windows::Forms::ListViewItem^ listViewItem5 = (gcnew System::Windows::Forms::ListViewItem(L""));
			System::Windows::Forms::ListViewItem^ listViewItem6 = (gcnew System::Windows::Forms::ListViewItem(L""));
			System::Windows::Forms::ListViewItem^ listViewItem7 = (gcnew System::Windows::Forms::ListViewItem(L""));
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(resultados::typeid));
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->Nombre = (gcnew System::Windows::Forms::ColumnHeader());
			this->Grado = (gcnew System::Windows::Forms::ColumnHeader());
			this->Secci�n = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->BackgroundImageTiled = true;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
				this->Nombre, this->Grado,
					this->Secci�n, this->columnHeader1, this->columnHeader2, this->columnHeader3, this->columnHeader4
			});
			this->listView1->HideSelection = false;
			this->listView1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(7) {
				listViewItem1, listViewItem2,
					listViewItem3, listViewItem4, listViewItem5, listViewItem6, listViewItem7
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
			this->Nombre->Text = L"Nombre";
			this->Nombre->Width = 177;
			// 
			// Grado
			// 
			this->Grado->Text = L"Apellido";
			this->Grado->Width = 154;
			// 
			// Secci�n
			// 
			this->Secci�n->Text = L"secci�n";
			this->Secci�n->Width = 105;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Clave";
			this->columnHeader1->Width = 84;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Puntaje evaluaci�n";
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
			this->button1->AutoSize = true;
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
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1048, 660);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"resultados";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Resultados";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		char mystring[100];
		FILE *fe;
		
		fe = fopen("info.txt","r");
		char cadena[50],*dato1,*dato2,*dato3,*dato4,*dato5,*dato6,*dato7;
		rewind(fe);
		listView1->Items->Clear();
		bool found = false;
		do{
	

				fgets(mystring, 100, fe);
				dato1 = strtok(mystring, ";");
				dato2 = strtok(NULL, ";");
				dato3 = strtok(NULL, ";");
				dato4 = strtok(NULL, ";");
				dato5 = strtok(NULL, ";");
				dato6 = strtok(NULL, ";");
				dato7 = strtok(NULL, ";");
				String^ srtNew1 = gcnew String(dato1);
				String^ srtNew2 = gcnew String(dato2);
				String^ srtNew3 = gcnew String(dato3);
				String^ srtNew4 = gcnew String(dato4);
				String^ srtNew5 = gcnew String(dato5);
				String^ srtNew6 = gcnew String(dato6);
				String^ srtNew7 = gcnew String(dato7);
				ListViewItem^ listView1 = gcnew Windows::Forms::ListViewItem(srtNew1);
				 listView1->SubItems->Add(srtNew2);
				listView1->SubItems->Add(srtNew3);
				listView1->SubItems->Add(srtNew4);
				listView1->SubItems->Add(srtNew5);
				listView1->SubItems->Add(srtNew6);
				listView1->SubItems->Add(srtNew7);
				this->listView1->Items->Add(listView1);

		
	

		} while (feof(fe) == 0);

		


	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
