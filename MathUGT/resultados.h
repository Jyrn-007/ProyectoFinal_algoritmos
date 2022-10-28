#pragma once

namespace MathUGT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::ColumnHeader^ Puntaje_Evaluaci�m;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;


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
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->Nombre = (gcnew System::Windows::Forms::ColumnHeader());
			this->Grado = (gcnew System::Windows::Forms::ColumnHeader());
			this->Secci�n = (gcnew System::Windows::Forms::ColumnHeader());
			this->Puntaje_Evaluaci�m = (gcnew System::Windows::Forms::ColumnHeader());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->Nombre, this->Grado,
					this->Secci�n, this->Puntaje_Evaluaci�m
			});
			this->listView1->HideSelection = false;
			this->listView1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(4) {
				listViewItem1, listViewItem2,
					listViewItem3, listViewItem4
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
			this->Nombre->Width = 260;
			// 
			// Grado
			// 
			this->Grado->Text = L"Grado";
			this->Grado->Width = 154;
			// 
			// Secci�n
			// 
			this->Secci�n->Text = L"secci�n";
			this->Secci�n->Width = 105;
			// 
			// Puntaje_Evaluaci�m
			// 
			this->Puntaje_Evaluaci�m->Text = L"Puntaje_Evaluaci�n";
			this->Puntaje_Evaluaci�m->Width = 169;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(685, 566);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(177, 82);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Mostrar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(109, 547);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(173, 71);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Regresar al Men�";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// resultados
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1048, 660);
			this->Controls->Add(this->button2);
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
	};
}
