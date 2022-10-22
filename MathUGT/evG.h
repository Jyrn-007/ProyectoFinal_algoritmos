#pragma once

namespace MathUGT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;

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
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// button37
			// 
			this->button37->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button37->Location = System::Drawing::Point(570, 858);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(182, 62);
			this->button37->TabIndex = 126;
			this->button37->Text = L"Guardar ";
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
			this->label12->Text = L"       387 \r\n     + 65\r\n     ---------\r\n      \r\n";
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(720, 668);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(193, 125);
			this->label11->TabIndex = 110;
			this->label11->Text = L"       387 \r\n     + 65\r\n     ---------\r\n      \r\n";
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(411, 668);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(193, 125);
			this->label10->TabIndex = 106;
			this->label10->Text = L"       387 \r\n     + 65\r\n     ---------\r\n      \r\n";
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(117, 668);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(193, 125);
			this->label9->TabIndex = 102;
			this->label9->Text = L"       387 \r\n     + 65\r\n     ---------\r\n      \r\n";
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(1021, 470);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(193, 125);
			this->label8->TabIndex = 98;
			this->label8->Text = L"       387 \r\n     + 65\r\n     ---------\r\n      \r\n";
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(720, 470);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(193, 125);
			this->label7->TabIndex = 94;
			this->label7->Text = L"       387 \r\n     + 65\r\n     ---------\r\n      \r\n";
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(411, 470);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(193, 125);
			this->label6->TabIndex = 90;
			this->label6->Text = L"       387 \r\n     + 65\r\n     ---------\r\n      \r\n";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(117, 470);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(193, 125);
			this->label5->TabIndex = 86;
			this->label5->Text = L"       387 \r\n     + 65\r\n     ---------\r\n      \r\n";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(1021, 261);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(193, 125);
			this->label4->TabIndex = 82;
			this->label4->Text = L"       387 \r\n     + 65\r\n     ---------\r\n      \r\n";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(720, 260);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(193, 125);
			this->label3->TabIndex = 78;
			this->label3->Text = L"       387 \r\n     + 65\r\n     ---------\r\n      \r\n";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(411, 260);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(193, 125);
			this->label1->TabIndex = 74;
			this->label1->Text = L"       387 \r\n     + 65\r\n     ---------\r\n      \r\n";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(117, 261);
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
			this->label13->Location = System::Drawing::Point(4, 419);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(1241, 65);
			this->label13->TabIndex = 118;
			// 
			// label14
			// 
			this->label14->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(19, 609);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(1246, 69);
			this->label14->TabIndex = 119;
			this->label14->Text = L"_________________________________________________________________________________"
				L"_________________________________\r\n";
			// 
			// label15
			// 
			this->label15->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(4, 810);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(1261, 69);
			this->label15->TabIndex = 120;
			this->label15->Text = L"_________________________________________________________________________________"
				L"_________________________________\r\n";
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
			this->label26->Text = L"Ingrese sus apellidos";
			// 
			// label27
			// 
			this->label27->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(1061, 9);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(152, 56);
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
			this->label28->Text = L"Grado: Tercero Primaria";
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
			this->button38->Location = System::Drawing::Point(805, 858);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(182, 62);
			this->button38->TabIndex = 139;
			this->button38->Text = L"Salir";
			this->button38->UseVisualStyleBackColor = false;
			// 
			// label21
			// 
			this->label21->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(1247, 9);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(121, 46);
			this->label21->TabIndex = 140;
			this->label21->Text = L"12 pts";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(114, 392);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(62, 24);
			this->checkBox1->TabIndex = 141;
			this->checkBox1->Text = L"123";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(184, 392);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(62, 24);
			this->checkBox2->TabIndex = 142;
			this->checkBox2->Text = L"123";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(269, 392);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(62, 24);
			this->checkBox3->TabIndex = 143;
			this->checkBox3->Text = L"123";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// evG
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(1442, 946);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button37_Click(System::Object^ sender, System::EventArgs^ e) {

		
	}
};
}
