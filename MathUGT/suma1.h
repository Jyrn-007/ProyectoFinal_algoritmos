#pragma once
#include"eje1suma.h"
#include"suma1.h"


namespace MathUGT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de suma1
	/// </summary>
	public ref class suma1 : public System::Windows::Forms::Form
	{
		
		static int sec = 0;

	public:
		suma1(void)
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
		~suma1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button2;


	private: System::ComponentModel::IContainer^ components;
	protected:

	protected:


	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(555, 357);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(119, 43);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Siguiente";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &suma1::button2_Click);
			// 
			// suma1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(682, 411);
			this->Controls->Add(this->button2);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"suma1";
			this->Text = L"suma1";
			this->ResumeLayout(false);

		}
#pragma endregion
     //regresar al men�
	

	
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	 
		//Boton ejercicio 1 suma
		MathUGT::eje1suma^ suma = gcnew MathUGT::eje1suma();
		this->Visible = false;
		suma->ShowDialog();
		this->Visible = true;
	}
	


};
}
