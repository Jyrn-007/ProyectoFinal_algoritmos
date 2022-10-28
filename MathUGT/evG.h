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
	/// Resumen de evG
	/// </summary>
	public ref class evG : public System::Windows::Forms::Form
	{
	public:
		evG(void)
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
		~evG()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



	private: System::Windows::Forms::Button^ button37;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;



	private: System::Windows::Forms::Label^ label12;



	private: System::Windows::Forms::Label^ label11;



	private: System::Windows::Forms::Label^ label10;



	private: System::Windows::Forms::Label^ label9;



	private: System::Windows::Forms::Label^ label8;



	private: System::Windows::Forms::Label^ label7;



	private: System::Windows::Forms::Label^ label6;



	private: System::Windows::Forms::Label^ label5;



	private: System::Windows::Forms::Label^ label4;



	private: System::Windows::Forms::Label^ label3;



	private: System::Windows::Forms::Label^ label1;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button38;
	private: System::Windows::Forms::Label^ label21;




































private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::RadioButton^ radioButton1;
private: System::Windows::Forms::RadioButton^ radioButton2;
private: System::Windows::Forms::RadioButton^ radioButton3;
private: System::Windows::Forms::RadioButton^ radioButton4;
private: System::Windows::Forms::RadioButton^ radioButton5;
private: System::Windows::Forms::RadioButton^ radioButton6;
private: System::Windows::Forms::RadioButton^ radioButton7;
private: System::Windows::Forms::RadioButton^ radioButton8;
private: System::Windows::Forms::RadioButton^ radioButton9;
private: System::Windows::Forms::RadioButton^ radioButton10;
private: System::Windows::Forms::RadioButton^ radioButton11;
private: System::Windows::Forms::RadioButton^ radioButton12;
private: System::Windows::Forms::RadioButton^ radioButton13;
private: System::Windows::Forms::RadioButton^ radioButton14;
private: System::Windows::Forms::RadioButton^ radioButton15;
private: System::Windows::Forms::RadioButton^ radioButton16;
private: System::Windows::Forms::RadioButton^ radioButton17;
private: System::Windows::Forms::RadioButton^ radioButton18;
private: System::Windows::Forms::RadioButton^ radioButton19;
private: System::Windows::Forms::RadioButton^ radioButton20;
private: System::Windows::Forms::RadioButton^ radioButton21;
private: System::Windows::Forms::RadioButton^ radioButton22;
private: System::Windows::Forms::RadioButton^ radioButton23;
private: System::Windows::Forms::RadioButton^ radioButton24;
private: System::Windows::Forms::RadioButton^ radioButton25;
private: System::Windows::Forms::RadioButton^ radioButton26;
private: System::Windows::Forms::RadioButton^ radioButton27;
private: System::Windows::Forms::RadioButton^ radioButton28;
private: System::Windows::Forms::RadioButton^ radioButton29;
private: System::Windows::Forms::RadioButton^ radioButton30;
private: System::Windows::Forms::RadioButton^ radioButton31;
private: System::Windows::Forms::RadioButton^ radioButton32;
private: System::Windows::Forms::RadioButton^ radioButton33;
private: System::Windows::Forms::RadioButton^ radioButton34;
private: System::Windows::Forms::RadioButton^ radioButton35;
private: System::Windows::Forms::RadioButton^ radioButton36;
private: System::Windows::Forms::GroupBox^ groupBox1;
private: System::Windows::Forms::GroupBox^ groupBox2;
private: System::Windows::Forms::GroupBox^ groupBox3;
private: System::Windows::Forms::GroupBox^ groupBox4;
private: System::Windows::Forms::GroupBox^ groupBox5;
private: System::Windows::Forms::GroupBox^ groupBox6;
private: System::Windows::Forms::GroupBox^ groupBox7;
private: System::Windows::Forms::GroupBox^ groupBox8;
private: System::Windows::Forms::GroupBox^ groupBox9;
private: System::Windows::Forms::GroupBox^ groupBox10;
private: System::Windows::Forms::GroupBox^ groupBox11;
private: System::Windows::Forms::GroupBox^ groupBox12;

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
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton12 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton13 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton14 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton15 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton16 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton17 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton18 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton19 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton20 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton21 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton22 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton23 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton24 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton25 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton26 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton27 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton28 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton29 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton30 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton31 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton32 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton33 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton34 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton35 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton36 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox12 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->groupBox10->SuspendLayout();
			this->groupBox11->SuspendLayout();
			this->groupBox12->SuspendLayout();
			this->SuspendLayout();
			// 
			// button37
			// 
			this->button37->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button37->Location = System::Drawing::Point(598, 858);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(182, 62);
			this->button37->TabIndex = 126;
			this->button37->Text = L"Evaluar";
			this->button37->UseVisualStyleBackColor = false;
			this->button37->Click += gcnew System::EventHandler(this, &evG::button37_Click);
			// 
			// label20
			// 
			this->label20->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(107, 851);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(1261, 69);
			this->label20->TabIndex = 125;
			this->label20->Text = L"\r\n\r\n";
			// 
			// label19
			// 
			this->label19->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(1241, 206);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(35, 703);
			this->label19->TabIndex = 124;
			this->label19->Text = L"l\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl";
			// 
			// label18
			// 
			this->label18->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(940, 243);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(35, 666);
			this->label18->TabIndex = 123;
			this->label18->Text = L"l\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl";
			// 
			// label17
			// 
			this->label17->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(626, 243);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(35, 652);
			this->label17->TabIndex = 122;
			this->label17->Text = L"l\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl";
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(1021, 668);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(193, 125);
			this->label12->TabIndex = 114;
			this->label12->Text = L"       64 \r\n     - 45\r\n     ---------\r\n      \r\n";
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(720, 668);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(193, 125);
			this->label11->TabIndex = 110;
			this->label11->Text = L"       119 \r\n     + 90\r\n     ---------\r\n      \r\n";
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(411, 668);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(193, 125);
			this->label10->TabIndex = 106;
			this->label10->Text = L"        25 \r\n     -   5\r\n     ---------\r\n      \r\n";
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(117, 668);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(193, 125);
			this->label9->TabIndex = 102;
			this->label9->Text = L"        90 \r\n     + 55\r\n     ---------\r\n      \r\n";
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(1021, 470);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(193, 125);
			this->label8->TabIndex = 98;
			this->label8->Text = L"        999\r\n     -  900\r\n     ---------\r\n      \r\n";
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(720, 470);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(193, 125);
			this->label7->TabIndex = 94;
			this->label7->Text = L"        505 \r\n     - 400\r\n     ---------\r\n      \r\n";
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(411, 470);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(193, 125);
			this->label6->TabIndex = 90;
			this->label6->Text = L"       123 \r\n     +  95\r\n     ---------\r\n      \r\n";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(117, 470);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(193, 125);
			this->label5->TabIndex = 86;
			this->label5->Text = L"        10\r\n     + 70\r\n     ---------\r\n      \r\n";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(1021, 261);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(193, 125);
			this->label4->TabIndex = 82;
			this->label4->Text = L"        38 \r\n    -   15\r\n     ---------\r\n      \r\n";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(720, 260);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(193, 125);
			this->label3->TabIndex = 78;
			this->label3->Text = L"       81 \r\n     - 17\r\n     ---------\r\n      \r\n";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(411, 260);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(193, 125);
			this->label1->TabIndex = 74;
			this->label1->Text = L"        87 \r\n     + 65\r\n     ---------\r\n      \r\n";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(120, 260);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(193, 125);
			this->label2->TabIndex = 70;
			this->label2->Text = L"       387 \r\n     -   65\r\n     ---------\r\n      \r\n";
			// 
			// label16
			// 
			this->label16->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(337, 243);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(38, 652);
			this->label16->TabIndex = 121;
			this->label16->Text = L"l\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl\r\nl";
			// 
			// label13
			// 
			this->label13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(-12, 419);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(1288, 38);
			this->label13->TabIndex = 118;
			this->label13->Text = L"---------------------------------------------------------------------------------"
				L"----------------------------------------------------";
			// 
			// label14
			// 
			this->label14->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(-23, 616);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(1295, 69);
			this->label14->TabIndex = 119;
			this->label14->Text = L"---------------------------------------------------------------------------------"
				L"--------------------------------------------------------------------------------"
				L"----------------------------\r\n";
			// 
			// label15
			// 
			this->label15->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(-23, 823);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(1288, 69);
			this->label15->TabIndex = 120;
			this->label15->Text = L"---------------------------------------------------------------------------------"
				L"--------------------------------------------------------------------------------"
				L"----------------------------\r\n";
			// 
			// label25
			// 
			this->label25->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(254, -2);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(350, 47);
			this->label25->TabIndex = 131;
			this->label25->Text = L"Ingrese sus nombre\r\n";
			// 
			// label26
			// 
			this->label26->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(177, 76);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(367, 52);
			this->label26->TabIndex = 132;
			this->label26->Text = L"Ingrese sus apellido";
			// 
			// label27
			// 
			this->label27->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(1012, 19);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(118, 45);
			this->label27->TabIndex = 133;
			this->label27->Text = L"punteo\r\n";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(550, 9);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(350, 55);
			this->textBox1->TabIndex = 134;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(550, 76);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(350, 55);
			this->textBox2->TabIndex = 135;
			// 
			// label28
			// 
			this->label28->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(207, 160);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(373, 47);
			this->label28->TabIndex = 136;
			this->label28->Text = L"Tercero Primaria";
			// 
			// label29
			// 
			this->label29->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(739, 160);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(138, 47);
			this->label29->TabIndex = 137;
			this->label29->Text = L"Sección:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(885, 160);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(74, 54);
			this->textBox3->TabIndex = 138;
			// 
			// button38
			// 
			this->button38->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button38->Location = System::Drawing::Point(362, 858);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(182, 62);
			this->button38->TabIndex = 139;
			this->button38->Text = L"Guardar";
			this->button38->UseVisualStyleBackColor = false;
			this->button38->Click += gcnew System::EventHandler(this, &evG::button38_Click);
			// 
			// label21
			// 
			this->label21->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(1232, 9);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(121, 46);
			this->label21->TabIndex = 140;
			this->label21->Text = L"/12 pts";
			// 
			// label22
			// 
			this->label22->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(-8, 207);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(1284, 38);
			this->label22->TabIndex = 177;
			this->label22->Text = L"---------------------------------------------------------------------------------"
				L"----------------------------------------------------";
			// 
			// label23
			// 
			this->label23->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(86, 160);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(126, 47);
			this->label23->TabIndex = 178;
			this->label23->Text = L"Grado:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(1184, 153);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(74, 54);
			this->textBox4->TabIndex = 180;
			// 
			// label24
			// 
			this->label24->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(1040, 160);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(138, 47);
			this->label24->TabIndex = 179;
			this->label24->Text = L"Clave:";
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(1164, 13);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(62, 42);
			this->textBox5->TabIndex = 181;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(77, 25);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(61, 24);
			this->radioButton1->TabIndex = 182;
			this->radioButton1->Text = L"360";
			this->radioButton1->UseVisualStyleBackColor = false;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &evG::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::Color::Lime;
			this->radioButton2->Location = System::Drawing::Point(10, 25);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(61, 24);
			this->radioButton2->TabIndex = 183;
			this->radioButton2->Text = L"322";
			this->radioButton2->UseVisualStyleBackColor = false;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &evG::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(147, 25);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(61, 24);
			this->radioButton3->TabIndex = 184;
			this->radioButton3->Text = L"325";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(7, 19);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(61, 24);
			this->radioButton4->TabIndex = 185;
			this->radioButton4->Text = L"155";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->BackColor = System::Drawing::Color::Lime;
			this->radioButton5->Location = System::Drawing::Point(77, 19);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(61, 24);
			this->radioButton5->TabIndex = 186;
			this->radioButton5->Text = L"152";
			this->radioButton5->UseVisualStyleBackColor = false;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(155, 20);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(61, 24);
			this->radioButton6->TabIndex = 187;
			this->radioButton6->Text = L"140";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(6, 13);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(52, 24);
			this->radioButton7->TabIndex = 188;
			this->radioButton7->Text = L"30";
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->BackColor = System::Drawing::Color::Lime;
			this->radioButton8->Location = System::Drawing::Point(64, 13);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(52, 24);
			this->radioButton8->TabIndex = 189;
			this->radioButton8->Text = L"64";
			this->radioButton8->UseVisualStyleBackColor = false;
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Location = System::Drawing::Point(134, 13);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(52, 24);
			this->radioButton9->TabIndex = 190;
			this->radioButton9->Text = L"69";
			this->radioButton9->UseVisualStyleBackColor = true;
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->BackColor = System::Drawing::Color::Lime;
			this->radioButton10->Location = System::Drawing::Point(9, 25);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(52, 24);
			this->radioButton10->TabIndex = 191;
			this->radioButton10->Text = L"23";
			this->radioButton10->UseVisualStyleBackColor = false;
			// 
			// radioButton11
			// 
			this->radioButton11->AutoSize = true;
			this->radioButton11->Location = System::Drawing::Point(62, 25);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(52, 24);
			this->radioButton11->TabIndex = 192;
			this->radioButton11->Text = L"29";
			this->radioButton11->UseVisualStyleBackColor = true;
			// 
			// radioButton12
			// 
			this->radioButton12->AutoSize = true;
			this->radioButton12->Location = System::Drawing::Point(124, 25);
			this->radioButton12->Name = L"radioButton12";
			this->radioButton12->Size = System::Drawing::Size(52, 24);
			this->radioButton12->TabIndex = 193;
			this->radioButton12->Text = L"20";
			this->radioButton12->UseVisualStyleBackColor = true;
			// 
			// radioButton13
			// 
			this->radioButton13->AutoSize = true;
			this->radioButton13->Location = System::Drawing::Point(6, 12);
			this->radioButton13->Name = L"radioButton13";
			this->radioButton13->Size = System::Drawing::Size(52, 24);
			this->radioButton13->TabIndex = 194;
			this->radioButton13->Text = L"79";
			this->radioButton13->UseVisualStyleBackColor = true;
			// 
			// radioButton14
			// 
			this->radioButton14->AutoSize = true;
			this->radioButton14->BackColor = System::Drawing::Color::Lime;
			this->radioButton14->Location = System::Drawing::Point(76, 12);
			this->radioButton14->Name = L"radioButton14";
			this->radioButton14->Size = System::Drawing::Size(52, 24);
			this->radioButton14->TabIndex = 195;
			this->radioButton14->Text = L"80";
			this->radioButton14->UseVisualStyleBackColor = false;
			// 
			// radioButton15
			// 
			this->radioButton15->AutoSize = true;
			this->radioButton15->Location = System::Drawing::Point(142, 12);
			this->radioButton15->Name = L"radioButton15";
			this->radioButton15->Size = System::Drawing::Size(52, 24);
			this->radioButton15->TabIndex = 196;
			this->radioButton15->Text = L"84";
			this->radioButton15->UseVisualStyleBackColor = true;
			// 
			// radioButton16
			// 
			this->radioButton16->AutoSize = true;
			this->radioButton16->BackColor = System::Drawing::Color::Lime;
			this->radioButton16->Location = System::Drawing::Point(6, 14);
			this->radioButton16->Name = L"radioButton16";
			this->radioButton16->Size = System::Drawing::Size(61, 24);
			this->radioButton16->TabIndex = 197;
			this->radioButton16->Text = L"218";
			this->radioButton16->UseVisualStyleBackColor = false;
			this->radioButton16->CheckedChanged += gcnew System::EventHandler(this, &evG::radioButton16_CheckedChanged);
			// 
			// radioButton17
			// 
			this->radioButton17->AutoSize = true;
			this->radioButton17->Location = System::Drawing::Point(86, 14);
			this->radioButton17->Name = L"radioButton17";
			this->radioButton17->Size = System::Drawing::Size(61, 24);
			this->radioButton17->TabIndex = 198;
			this->radioButton17->Text = L"230";
			this->radioButton17->UseVisualStyleBackColor = true;
			// 
			// radioButton18
			// 
			this->radioButton18->AutoSize = true;
			this->radioButton18->Location = System::Drawing::Point(153, 14);
			this->radioButton18->Name = L"radioButton18";
			this->radioButton18->Size = System::Drawing::Size(61, 24);
			this->radioButton18->TabIndex = 199;
			this->radioButton18->Text = L"229";
			this->radioButton18->UseVisualStyleBackColor = true;
			// 
			// radioButton19
			// 
			this->radioButton19->AutoSize = true;
			this->radioButton19->BackColor = System::Drawing::Color::Lime;
			this->radioButton19->Location = System::Drawing::Point(14, 25);
			this->radioButton19->Name = L"radioButton19";
			this->radioButton19->Size = System::Drawing::Size(61, 24);
			this->radioButton19->TabIndex = 200;
			this->radioButton19->Text = L"105";
			this->radioButton19->UseVisualStyleBackColor = false;
			// 
			// radioButton20
			// 
			this->radioButton20->AutoSize = true;
			this->radioButton20->Location = System::Drawing::Point(80, 25);
			this->radioButton20->Name = L"radioButton20";
			this->radioButton20->Size = System::Drawing::Size(61, 24);
			this->radioButton20->TabIndex = 201;
			this->radioButton20->Text = L"109";
			this->radioButton20->UseVisualStyleBackColor = true;
			// 
			// radioButton21
			// 
			this->radioButton21->AutoSize = true;
			this->radioButton21->Location = System::Drawing::Point(152, 25);
			this->radioButton21->Name = L"radioButton21";
			this->radioButton21->Size = System::Drawing::Size(61, 24);
			this->radioButton21->TabIndex = 202;
			this->radioButton21->Text = L"100";
			this->radioButton21->UseVisualStyleBackColor = true;
			// 
			// radioButton22
			// 
			this->radioButton22->AutoSize = true;
			this->radioButton22->Location = System::Drawing::Point(6, 14);
			this->radioButton22->Name = L"radioButton22";
			this->radioButton22->Size = System::Drawing::Size(52, 24);
			this->radioButton22->TabIndex = 203;
			this->radioButton22->Text = L"90";
			this->radioButton22->UseVisualStyleBackColor = true;
			// 
			// radioButton23
			// 
			this->radioButton23->AutoSize = true;
			this->radioButton23->BackColor = System::Drawing::Color::Lime;
			this->radioButton23->Location = System::Drawing::Point(64, 14);
			this->radioButton23->Name = L"radioButton23";
			this->radioButton23->Size = System::Drawing::Size(52, 24);
			this->radioButton23->TabIndex = 204;
			this->radioButton23->Text = L"99";
			this->radioButton23->UseVisualStyleBackColor = false;
			// 
			// radioButton24
			// 
			this->radioButton24->AutoSize = true;
			this->radioButton24->Location = System::Drawing::Point(124, 14);
			this->radioButton24->Name = L"radioButton24";
			this->radioButton24->Size = System::Drawing::Size(52, 24);
			this->radioButton24->TabIndex = 205;
			this->radioButton24->Text = L"98";
			this->radioButton24->UseVisualStyleBackColor = true;
			// 
			// radioButton25
			// 
			this->radioButton25->AutoSize = true;
			this->radioButton25->Location = System::Drawing::Point(6, 14);
			this->radioButton25->Name = L"radioButton25";
			this->radioButton25->Size = System::Drawing::Size(61, 24);
			this->radioButton25->TabIndex = 206;
			this->radioButton25->Text = L"123";
			this->radioButton25->UseVisualStyleBackColor = true;
			// 
			// radioButton26
			// 
			this->radioButton26->AutoSize = true;
			this->radioButton26->BackColor = System::Drawing::Color::Lime;
			this->radioButton26->Location = System::Drawing::Point(89, 14);
			this->radioButton26->Name = L"radioButton26";
			this->radioButton26->Size = System::Drawing::Size(61, 24);
			this->radioButton26->TabIndex = 207;
			this->radioButton26->Text = L"145";
			this->radioButton26->UseVisualStyleBackColor = false;
			// 
			// radioButton27
			// 
			this->radioButton27->AutoSize = true;
			this->radioButton27->Location = System::Drawing::Point(173, 20);
			this->radioButton27->Name = L"radioButton27";
			this->radioButton27->Size = System::Drawing::Size(61, 24);
			this->radioButton27->TabIndex = 208;
			this->radioButton27->Text = L"150";
			this->radioButton27->UseVisualStyleBackColor = true;
			// 
			// radioButton28
			// 
			this->radioButton28->AutoSize = true;
			this->radioButton28->Location = System::Drawing::Point(6, 9);
			this->radioButton28->Name = L"radioButton28";
			this->radioButton28->Size = System::Drawing::Size(52, 24);
			this->radioButton28->TabIndex = 209;
			this->radioButton28->Text = L"19";
			this->radioButton28->UseVisualStyleBackColor = true;
			// 
			// radioButton29
			// 
			this->radioButton29->AutoSize = true;
			this->radioButton29->BackColor = System::Drawing::Color::Lime;
			this->radioButton29->Location = System::Drawing::Point(63, 9);
			this->radioButton29->Name = L"radioButton29";
			this->radioButton29->Size = System::Drawing::Size(52, 24);
			this->radioButton29->TabIndex = 210;
			this->radioButton29->Text = L"20";
			this->radioButton29->UseVisualStyleBackColor = false;
			// 
			// radioButton30
			// 
			this->radioButton30->AutoSize = true;
			this->radioButton30->Location = System::Drawing::Point(133, 9);
			this->radioButton30->Name = L"radioButton30";
			this->radioButton30->Size = System::Drawing::Size(52, 24);
			this->radioButton30->TabIndex = 211;
			this->radioButton30->Text = L"23";
			this->radioButton30->UseVisualStyleBackColor = true;
			// 
			// radioButton31
			// 
			this->radioButton31->AutoSize = true;
			this->radioButton31->BackColor = System::Drawing::Color::Lime;
			this->radioButton31->Location = System::Drawing::Point(8, 9);
			this->radioButton31->Name = L"radioButton31";
			this->radioButton31->Size = System::Drawing::Size(61, 24);
			this->radioButton31->TabIndex = 212;
			this->radioButton31->Text = L"209";
			this->radioButton31->UseVisualStyleBackColor = false;
			// 
			// radioButton32
			// 
			this->radioButton32->AutoSize = true;
			this->radioButton32->Location = System::Drawing::Point(75, 9);
			this->radioButton32->Name = L"radioButton32";
			this->radioButton32->Size = System::Drawing::Size(61, 24);
			this->radioButton32->TabIndex = 213;
			this->radioButton32->Text = L"220";
			this->radioButton32->UseVisualStyleBackColor = true;
			// 
			// radioButton33
			// 
			this->radioButton33->AutoSize = true;
			this->radioButton33->Location = System::Drawing::Point(146, 9);
			this->radioButton33->Name = L"radioButton33";
			this->radioButton33->Size = System::Drawing::Size(61, 24);
			this->radioButton33->TabIndex = 214;
			this->radioButton33->Text = L"200";
			this->radioButton33->UseVisualStyleBackColor = true;
			// 
			// radioButton34
			// 
			this->radioButton34->AutoSize = true;
			this->radioButton34->Location = System::Drawing::Point(6, 14);
			this->radioButton34->Name = L"radioButton34";
			this->radioButton34->Size = System::Drawing::Size(52, 24);
			this->radioButton34->TabIndex = 215;
			this->radioButton34->Text = L"23";
			this->radioButton34->UseVisualStyleBackColor = true;
			// 
			// radioButton35
			// 
			this->radioButton35->AutoSize = true;
			this->radioButton35->BackColor = System::Drawing::Color::Lime;
			this->radioButton35->Location = System::Drawing::Point(65, 14);
			this->radioButton35->Name = L"radioButton35";
			this->radioButton35->Size = System::Drawing::Size(52, 24);
			this->radioButton35->TabIndex = 216;
			this->radioButton35->Text = L"19";
			this->radioButton35->UseVisualStyleBackColor = false;
			// 
			// radioButton36
			// 
			this->radioButton36->AutoSize = true;
			this->radioButton36->Location = System::Drawing::Point(127, 14);
			this->radioButton36->Name = L"radioButton36";
			this->radioButton36->Size = System::Drawing::Size(52, 24);
			this->radioButton36->TabIndex = 217;
			this->radioButton36->Text = L"15";
			this->radioButton36->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Location = System::Drawing::Point(114, 371);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(217, 71);
			this->groupBox1->TabIndex = 218;
			this->groupBox1->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->Controls->Add(this->radioButton5);
			this->groupBox2->Controls->Add(this->radioButton6);
			this->groupBox2->Location = System::Drawing::Point(388, 388);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(223, 54);
			this->groupBox2->TabIndex = 219;
			this->groupBox2->TabStop = false;
			this->groupBox2->Enter += gcnew System::EventHandler(this, &evG::groupBox2_Enter);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->radioButton7);
			this->groupBox3->Controls->Add(this->radioButton8);
			this->groupBox3->Controls->Add(this->radioButton9);
			this->groupBox3->Location = System::Drawing::Point(727, 385);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(186, 46);
			this->groupBox3->TabIndex = 220;
			this->groupBox3->TabStop = false;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->radioButton10);
			this->groupBox4->Controls->Add(this->radioButton11);
			this->groupBox4->Controls->Add(this->radioButton12);
			this->groupBox4->Location = System::Drawing::Point(1038, 371);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(188, 52);
			this->groupBox4->TabIndex = 221;
			this->groupBox4->TabStop = false;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->radioButton13);
			this->groupBox5->Controls->Add(this->radioButton14);
			this->groupBox5->Controls->Add(this->radioButton15);
			this->groupBox5->Location = System::Drawing::Point(107, 577);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(203, 45);
			this->groupBox5->TabIndex = 222;
			this->groupBox5->TabStop = false;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->radioButton16);
			this->groupBox6->Controls->Add(this->radioButton17);
			this->groupBox6->Controls->Add(this->radioButton18);
			this->groupBox6->Location = System::Drawing::Point(375, 577);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(236, 45);
			this->groupBox6->TabIndex = 223;
			this->groupBox6->TabStop = false;
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->radioButton19);
			this->groupBox7->Controls->Add(this->radioButton20);
			this->groupBox7->Controls->Add(this->radioButton21);
			this->groupBox7->Location = System::Drawing::Point(695, 577);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(238, 57);
			this->groupBox7->TabIndex = 224;
			this->groupBox7->TabStop = false;
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->radioButton22);
			this->groupBox8->Controls->Add(this->radioButton23);
			this->groupBox8->Controls->Add(this->radioButton24);
			this->groupBox8->Location = System::Drawing::Point(1026, 578);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(200, 48);
			this->groupBox8->TabIndex = 225;
			this->groupBox8->TabStop = false;
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->radioButton25);
			this->groupBox9->Controls->Add(this->radioButton26);
			this->groupBox9->Controls->Add(this->radioButton27);
			this->groupBox9->Location = System::Drawing::Point(73, 778);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(240, 42);
			this->groupBox9->TabIndex = 226;
			this->groupBox9->TabStop = false;
			// 
			// groupBox10
			// 
			this->groupBox10->Controls->Add(this->radioButton28);
			this->groupBox10->Controls->Add(this->radioButton29);
			this->groupBox10->Controls->Add(this->radioButton30);
			this->groupBox10->Location = System::Drawing::Point(395, 778);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Size = System::Drawing::Size(200, 49);
			this->groupBox10->TabIndex = 227;
			this->groupBox10->TabStop = false;
			// 
			// groupBox11
			// 
			this->groupBox11->Controls->Add(this->radioButton31);
			this->groupBox11->Controls->Add(this->radioButton32);
			this->groupBox11->Controls->Add(this->radioButton33);
			this->groupBox11->Location = System::Drawing::Point(709, 787);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Size = System::Drawing::Size(220, 46);
			this->groupBox11->TabIndex = 228;
			this->groupBox11->TabStop = false;
			// 
			// groupBox12
			// 
			this->groupBox12->Controls->Add(this->radioButton34);
			this->groupBox12->Controls->Add(this->radioButton35);
			this->groupBox12->Controls->Add(this->radioButton36);
			this->groupBox12->Location = System::Drawing::Point(1038, 778);
			this->groupBox12->Name = L"groupBox12";
			this->groupBox12->Size = System::Drawing::Size(200, 51);
			this->groupBox12->TabIndex = 229;
			this->groupBox12->TabStop = false;
			// 
			// evG
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(1442, 946);
			this->Controls->Add(this->groupBox12);
			this->Controls->Add(this->groupBox11);
			this->Controls->Add(this->groupBox10);
			this->Controls->Add(this->groupBox9);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"evG";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"evG";
			this->Load += gcnew System::EventHandler(this, &evG::evG_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			this->groupBox10->ResumeLayout(false);
			this->groupBox10->PerformLayout();
			this->groupBox11->ResumeLayout(false);
			this->groupBox11->PerformLayout();
			this->groupBox12->ResumeLayout(false);
			this->groupBox12->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int p;
		private: System::Void evG_Load(System::Object^ sender, System::EventArgs^ e) {
		}

	private: System::Void button37_Click(System::Object^ sender, System::EventArgs^ e) {
		p = 0;
		if (radioButton2->Checked){
			radioButton2->Checked = true;
			p++;
		} if (radioButton5->Checked){
			radioButton5->Checked = true;
			p++;
		} if (radioButton8->Checked){
			radioButton8->Checked = true;
			p++;
		} if (radioButton10->Checked){
			radioButton10->Checked = true;
			p++;
		} if (radioButton14->Checked){
			radioButton14->Checked = true;
			p++;
		} if (radioButton16->Checked){
			radioButton16->Checked = true;
			p++;
		} if (radioButton19->Checked){
			radioButton19->Checked = true;
			p++;
		} if (radioButton23->Checked){
			radioButton23->Checked = true;
			p++;
		} if (radioButton26->Checked){
			radioButton26->Checked = true;
			p++;
		} if (radioButton29->Checked){
			radioButton29->Checked = true;
			p++;
		} if (radioButton31->Checked){
			radioButton31->Checked = true;
			p++;
		} if (radioButton35->Checked){
			radioButton35->Checked = true;
			p++;
		}
		
		this->textBox5->Text = this->textBox5->Text + p;
	}
private: System::Void button38_Click(System::Object^ sender, System::EventArgs^ e) {
	StreamWriter^datos = gcnew StreamWriter("info.txt", "a+");
	if (textBox1->Text == "") {
		MessageBox::Show("ingrese su nombre");
	}

	else if (textBox2->Text == "") {
		MessageBox::Show("ingrese su apelldio");
	}

	else if (textBox3->Text == "") {
		MessageBox::Show("ingrese la sección en donde esta");
	}

	else if (textBox4->Text == "") {
		MessageBox::Show("ingrese su clave");
	}
	else
	{
		datos->Write("\r\n");
		datos->Write(textBox1->Text); datos->Write(";");
		datos->Write(textBox2->Text); datos->Write(";");
		datos->Write(textBox3->Text); datos->Write(";");
		datos->Write(textBox4->Text); datos->Write(";");
		datos->Write(textBox5->Text); datos->Write(";");
		datos->Write(label28->Text); datos->Write(";");
		datos->Write("A");

		this->textBox1->Text = L"";this->textBox2->Text = L""; this->textBox3->Text = L"";this->textBox4->Text = L""; this->textBox5->Text = L"";
		MessageBox::Show("Los datos estan completos y guardado exitosamente");
	}

	datos->Close();
}

	   // pregunta 1
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
	   
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton16_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
