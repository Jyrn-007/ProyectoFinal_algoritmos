#pragma once
#include"suma.h"
#include "evG.h"
//#include"resultados.h"
#include"Programadoresh.h"
#include"Login.h"

namespace MathUGT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;


	/// <summary>
	/// Resumen de menú
	/// </summary>
	public ref class menú : public System::Windows::Forms::Form
	{
	public:


		SoundPlayer^ rei = gcnew SoundPlayer("C:\\ProyFin_Algoritmo\\Audio\\click2.wav");
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	public:

		SoundPlayer^ fin = gcnew SoundPlayer("C:\\ProyFin_Algoritmo\\Audio\\fin1.wav");
		menú(void)
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
		~menú()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;













	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;

	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button3;



	private: System::Windows::Forms::Button^ button4;

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(menú::typeid));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(103, 113);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(180, 170);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &menú::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Black;
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(470, 113);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(180, 170);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &menú::pictureBox3_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button6->Location = System::Drawing::Point(120, 299);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(149, 69);
			this->button6->TabIndex = 17;
			this->button6->Text = L"Información";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &menú::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button7->Location = System::Drawing::Point(120, 387);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(149, 69);
			this->button7->TabIndex = 18;
			this->button7->Text = L"ejercicios";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &menú::button7_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button9->Location = System::Drawing::Point(306, 419);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(149, 63);
			this->button9->TabIndex = 22;
			this->button9->Text = L"evaluación";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &menú::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button10->Location = System::Drawing::Point(489, 387);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(149, 69);
			this->button10->TabIndex = 21;
			this->button10->Text = L"ejercicios";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &menú::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button11->Location = System::Drawing::Point(489, 299);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(149, 69);
			this->button11->TabIndex = 20;
			this->button11->Text = L"Información";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &menú::button11_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button3->Location = System::Drawing::Point(721, 216);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(208, 85);
			this->button3->TabIndex = 23;
			this->button3->Text = L"Mostrar resultados";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &menú::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button4->Location = System::Drawing::Point(712, 409);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(208, 82);
			this->button4->TabIndex = 26;
			this->button4->Text = L"Información de los programadores";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &menú::button4_Click);
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(77, 18);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(354, 64);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Bienvenido a ";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(609, 5);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 85);
			this->label1->TabIndex = 27;
			this->label1->Text = L">";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(461, 27);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(248, 59);
			this->label2->TabIndex = 28;
			this->label2->Text = L"Math_UGT ";
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(403, 10);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(101, 76);
			this->label3->TabIndex = 29;
			this->label3->Text = L"</";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// menú
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(941, 506);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label4);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximizeBox = false;
			this->Name = L"menú";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Menú";
			this->Load += gcnew System::EventHandler(this, &menú::menú_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {

		
		button6->Visible = true;
		button7->Visible = true;


		button10->Visible = false;
		button11->Visible = false;


	}
	private: System::Void menú_Load(System::Object^ sender, System::EventArgs^ e) {


		button6->Visible = false;
		button7->Visible = false;

		button10->Visible = false;
		button11->Visible = false;

	}
	
		
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {



	button10->Visible = true;
	button11->Visible = true;

	button6->Visible = false;
	button7->Visible = false;
	
}

private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
 suma^ F2 = gcnew suma();
 this->Visible = false;
 F2->ShowDialog();
 this->Visible = true;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	
	System::Diagnostics::Process::Start("C:\\ProyectoFinal_algoritmos\\ejersuma\\x64\\Debug\\ejersuma.exe");
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	Login^ F3 = gcnew Login();
	this->Visible = false;
	F3->ShowDialog();
	this->Visible = true;
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {


	evG^ F5 = gcnew evG();
	this->Visible = false;
	F5->ShowDialog();
	this->Visible = true;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Programadoresh^ F5 = gcnew Programadoresh();
	this->Visible = false;
	F5->ShowDialog();
	this->Visible = true;
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {


	System::Diagnostics::Process::Start("C:\\ProyectoFinal_algoritmos\\inforesta\\x64\\Debug\\iresta.exe");

}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	
	System::Diagnostics::Process::Start("C:\\ProyectoFinal_algoritmos\\ejerciciosresta\\x64\\Debug\\ejerciciosresta.exe");
	
}
};
}
