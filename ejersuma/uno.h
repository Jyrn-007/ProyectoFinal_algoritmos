#pragma once
#include"dos.h"
namespace ejersuma {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de uno
	/// </summary>
	public ref class uno : public System::Windows::Forms::Form
	{
	public:
		uno(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c?digo de constructor aqu?
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est?n usando.
		/// </summary>
		~uno()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

	protected:










	private:
		/// <summary>
		/// Variable del dise?ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M?todo necesario para admitir el Dise?ador. No se puede modificar
		/// el contenido de este m?todo con el editor de c?digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(uno::typeid));
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(294, 210);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(150, 166);
			this->pictureBox4->TabIndex = 39;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(345, 224);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(99, 105);
			this->pictureBox2->TabIndex = 36;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(294, 14);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(190, 186);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 38;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(345, 224);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(99, 105);
			this->pictureBox3->TabIndex = 37;
			this->pictureBox3->TabStop = false;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(87, 547);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(579, 55);
			this->label3->TabIndex = 35;
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(592, 636);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(164, 52);
			this->button6->TabIndex = 34;
			this->button6->Text = L"Siguiente";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &uno::button6_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(252, 633);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(162, 55);
			this->button4->TabIndex = 33;
			this->button4->Text = L"Reintentar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &uno::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(567, 398);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(146, 77);
			this->button3->TabIndex = 32;
			this->button3->Text = L"24";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &uno::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(87, 398);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(146, 77);
			this->button2->TabIndex = 31;
			this->button2->Text = L"20";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &uno::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(298, 398);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(146, 77);
			this->button1->TabIndex = 30;
			this->button1->Text = L"27";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &uno::button1_Click_1);
			// 
			// uno
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(801, 688);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"uno";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"uno";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		pictureBox4->Visible = false;
		pictureBox3->Visible = false;
		pictureBox4->Visible = false;
		pictureBox2->Visible = true;
		button6->Enabled = false;
		button1->Enabled = true;
		button2->Enabled = true;
		button3->Enabled = true;
		button6->Enabled = true;
		button1->Enabled = false;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		label3->Text = "Respuesta correcta";
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox4->Visible = true;
	pictureBox3->Visible = true;
	pictureBox4->Visible = false;
	pictureBox2->Visible = false;
	button6->Enabled = false;
	button1->Enabled = false;
	button2->Enabled = false;
	button3->Enabled = false;
	label3->Text = "Respuesta incorrecta, vuelva a intentarlo";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox4->Visible = true;
	pictureBox3->Visible = true;
	pictureBox4->Visible = false;
	pictureBox2->Visible = false;
	button6->Enabled = false;
	button1->Enabled = false;
	button2->Enabled = false;
	button3->Enabled = false;


	label3->Text = "Respuesta incorrecta, vuelva a intentarlo";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	button6->Enabled = true;
	button1->Enabled = true;
	button2->Enabled = true;
	button3->Enabled = true;
	pictureBox4->Visible = true;
	pictureBox2->Visible = false;
	pictureBox3->Visible = false;
	label3->Text = " ";
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	dos^ F2 = gcnew dos();
	this->Visible = false;
	F2->ShowDialog();
	this->Visible = true;
}
};
}
