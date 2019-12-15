#pragma once
#include <math.h>
#include "CH.cpp"

namespace Graph {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

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









		//столбцы первой таблицы



	private: System::Windows::Forms::DataGridViewTextBoxColumn^ V;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: ZedGraph::ZedGraphControl^ zedGraphControl2;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ num1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ X1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Vn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: ZedGraph::ZedGraphControl^ zedGraphControl1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ num;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ h;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ X;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Vn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ U;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ V2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ VV;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ S;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ E;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ER;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label7;







































































			 //столбцы второй таблицы








			 //столбцы третей таблицы









			 //















































































































	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->zedGraphControl2 = (gcnew ZedGraph::ZedGraphControl());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->num1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->X1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Vn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->num = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->h = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->X = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Vn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->U = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->V2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->VV = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->S = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->E = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ER = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tabPage2->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->label18);
			this->tabPage2->Controls->Add(this->button8);
			this->tabPage2->Controls->Add(this->textBox16);
			this->tabPage2->Controls->Add(this->zedGraphControl2);
			this->tabPage2->Controls->Add(this->groupBox4);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->dataGridView2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Margin = System::Windows::Forms::Padding(2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(2);
			this->tabPage2->Size = System::Drawing::Size(1528, 803);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Основная задача №1";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(544, 33);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 13);
			this->label6->TabIndex = 27;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(440, 33);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(95, 13);
			this->label5->TabIndex = 26;
			this->label5->Text = L"max погрешность";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(175, 29);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(98, 13);
			this->label18->TabIndex = 7;
			this->label18->Text = L"Количество узлов";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(15, 54);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(142, 29);
			this->button8->TabIndex = 25;
			this->button8->Text = L"Очистить график\r\n";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::Button8_Click);
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(279, 26);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(48, 20);
			this->textBox16->TabIndex = 4;
			this->textBox16->Text = L"10";
			// 
			// zedGraphControl2
			// 
			this->zedGraphControl2->Location = System::Drawing::Point(477, 201);
			this->zedGraphControl2->Name = L"zedGraphControl2";
			this->zedGraphControl2->ScrollGrace = 0;
			this->zedGraphControl2->ScrollMaxX = 0;
			this->zedGraphControl2->ScrollMaxY = 0;
			this->zedGraphControl2->ScrollMaxY2 = 0;
			this->zedGraphControl2->ScrollMinX = 0;
			this->zedGraphControl2->ScrollMinY = 0;
			this->zedGraphControl2->ScrollMinY2 = 0;
			this->zedGraphControl2->Size = System::Drawing::Size(1014, 591);
			this->zedGraphControl2->TabIndex = 1;
			this->zedGraphControl2->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl2_Load);
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox4->Controls->Add(this->textBox12);
			this->groupBox4->Controls->Add(this->label14);
			this->groupBox4->Controls->Add(this->textBox13);
			this->groupBox4->Controls->Add(this->label15);
			this->groupBox4->Controls->Add(this->label16);
			this->groupBox4->Controls->Add(this->label17);
			this->groupBox4->Controls->Add(this->textBox14);
			this->groupBox4->Controls->Add(this->textBox15);
			this->groupBox4->Location = System::Drawing::Point(15, 144);
			this->groupBox4->Margin = System::Windows::Forms::Padding(2);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(2);
			this->groupBox4->Size = System::Drawing::Size(142, 81);
			this->groupBox4->TabIndex = 21;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Масштаб";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(88, 54);
			this->textBox12->Margin = System::Windows::Forms::Padding(2);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(30, 20);
			this->textBox12->TabIndex = 7;
			this->textBox12->Text = L"1";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(66, 57);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(19, 13);
			this->label14->TabIndex = 6;
			this->label14->Text = L"до";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(38, 54);
			this->textBox13->Margin = System::Windows::Forms::Padding(2);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(24, 20);
			this->textBox13->TabIndex = 5;
			this->textBox13->Text = L"0";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(4, 57);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(31, 13);
			this->label15->TabIndex = 4;
			this->label15->Text = L"Y: от";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(67, 32);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(19, 13);
			this->label16->TabIndex = 3;
			this->label16->Text = L"до";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(4, 32);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(31, 13);
			this->label17->TabIndex = 2;
			this->label17->Text = L"X: от";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(89, 28);
			this->textBox14->Margin = System::Windows::Forms::Padding(2);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(29, 20);
			this->textBox14->TabIndex = 1;
			this->textBox14->Text = L"1";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(38, 28);
			this->textBox15->Margin = System::Windows::Forms::Padding(2);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(24, 20);
			this->textBox15->TabIndex = 0;
			this->textBox15->Text = L"0";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(15, 102);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(142, 29);
			this->button3->TabIndex = 20;
			this->button3->Text = L"Масштабировать";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Button3_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(15, 13);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(142, 29);
			this->button5->TabIndex = 19;
			this->button5->Text = L"Вычислить";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::Button5_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->num1, this->X1,
					this->Vn1, this->Column1
			});
			this->dataGridView2->Location = System::Drawing::Point(5, 235);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->Size = System::Drawing::Size(454, 557);
			this->dataGridView2->TabIndex = 2;
			// 
			// num1
			// 
			this->num1->HeaderText = L"номер узла";
			this->num1->MinimumWidth = 6;
			this->num1->Name = L"num1";
			this->num1->ReadOnly = true;
			this->num1->Width = 125;
			// 
			// X1
			// 
			this->X1->HeaderText = L"X";
			this->X1->MinimumWidth = 6;
			this->X1->Name = L"X1";
			this->X1->ReadOnly = true;
			this->X1->Width = 50;
			// 
			// Vn1
			// 
			this->Vn1->HeaderText = L"V";
			this->Vn1->MinimumWidth = 6;
			this->Vn1->Name = L"Vn1";
			this->Vn1->ReadOnly = true;
			this->Vn1->Width = 125;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"e";
			this->Column1->Name = L"Column1";
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->button9);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->zedGraphControl1);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Controls->Add(this->groupBox3);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Margin = System::Windows::Forms::Padding(2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(2);
			this->tabPage1->Size = System::Drawing::Size(1528, 803);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Тестовая задача";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(643, 31);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(89, 13);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Начальный шаг:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(548, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 13);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Начальный шаг:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(453, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 13);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Начальный шаг:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(199, 31);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Начальный шаг:";
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(16, 57);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(142, 29);
			this->button9->TabIndex = 21;
			this->button9->Text = L"Очистить графики\r\n";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::Button9_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(294, 24);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(49, 20);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"0,1";
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(616, 231);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(4);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(881, 551);
			this->zedGraphControl1->TabIndex = 0;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeight = 29;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->num, this->h,
					this->X, this->Vn, this->U, this->V2, this->VV, this->S, this->E, this->ER
			});
			this->dataGridView1->Location = System::Drawing::Point(16, 231);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(594, 565);
			this->dataGridView1->TabIndex = 14;
			// 
			// num
			// 
			this->num->HeaderText = L"num";
			this->num->MinimumWidth = 6;
			this->num->Name = L"num";
			this->num->ReadOnly = true;
			this->num->Width = 125;
			// 
			// h
			// 
			this->h->HeaderText = L"h";
			this->h->MinimumWidth = 6;
			this->h->Name = L"h";
			this->h->ReadOnly = true;
			this->h->Width = 125;
			// 
			// X
			// 
			this->X->HeaderText = L"X";
			this->X->MinimumWidth = 6;
			this->X->Name = L"X";
			this->X->ReadOnly = true;
			this->X->Width = 50;
			// 
			// Vn
			// 
			this->Vn->HeaderText = L"Vn";
			this->Vn->MinimumWidth = 6;
			this->Vn->Name = L"Vn";
			this->Vn->ReadOnly = true;
			this->Vn->Width = 125;
			// 
			// U
			// 
			this->U->HeaderText = L"U";
			this->U->MinimumWidth = 6;
			this->U->Name = L"U";
			this->U->ReadOnly = true;
			this->U->Width = 125;
			// 
			// V2
			// 
			this->V2->HeaderText = L"V2";
			this->V2->MinimumWidth = 6;
			this->V2->Name = L"V2";
			this->V2->ReadOnly = true;
			this->V2->Width = 125;
			// 
			// VV
			// 
			this->VV->HeaderText = L"VV";
			this->VV->MinimumWidth = 6;
			this->VV->Name = L"VV";
			this->VV->ReadOnly = true;
			this->VV->Width = 125;
			// 
			// S
			// 
			this->S->HeaderText = L"S";
			this->S->MinimumWidth = 6;
			this->S->Name = L"S";
			this->S->ReadOnly = true;
			this->S->Width = 125;
			// 
			// E
			// 
			this->E->HeaderText = L"E";
			this->E->MinimumWidth = 6;
			this->E->Name = L"E";
			this->E->ReadOnly = true;
			this->E->Width = 125;
			// 
			// ER
			// 
			this->ER->HeaderText = L"ER";
			this->ER->MinimumWidth = 6;
			this->ER->Name = L"ER";
			this->ER->ReadOnly = true;
			this->ER->Width = 125;
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox3->Controls->Add(this->textBox11);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->textBox10);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->textBox9);
			this->groupBox3->Controls->Add(this->textBox8);
			this->groupBox3->Location = System::Drawing::Point(16, 146);
			this->groupBox3->Margin = System::Windows::Forms::Padding(2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(2);
			this->groupBox3->Size = System::Drawing::Size(142, 81);
			this->groupBox3->TabIndex = 18;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Масштаб";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(88, 54);
			this->textBox11->Margin = System::Windows::Forms::Padding(2);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(30, 20);
			this->textBox11->TabIndex = 7;
			this->textBox11->Text = L"1";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(66, 57);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(19, 13);
			this->label11->TabIndex = 6;
			this->label11->Text = L"до";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(38, 54);
			this->textBox10->Margin = System::Windows::Forms::Padding(2);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(24, 20);
			this->textBox10->TabIndex = 5;
			this->textBox10->Text = L"0";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(4, 57);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(31, 13);
			this->label10->TabIndex = 4;
			this->label10->Text = L"Y: от";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(67, 32);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(19, 13);
			this->label9->TabIndex = 3;
			this->label9->Text = L"до";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(4, 32);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(31, 13);
			this->label8->TabIndex = 2;
			this->label8->Text = L"X: от";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(89, 28);
			this->textBox9->Margin = System::Windows::Forms::Padding(2);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(29, 20);
			this->textBox9->TabIndex = 1;
			this->textBox9->Text = L"1";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(38, 28);
			this->textBox8->Margin = System::Windows::Forms::Padding(2);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(24, 20);
			this->textBox8->TabIndex = 0;
			this->textBox8->Text = L"0";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(16, 97);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(142, 29);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Масштабировать";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(16, 15);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(142, 29);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(2, 2);
			this->tabControl1->Margin = System::Windows::Forms::Padding(2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1536, 829);
			this->tabControl1->TabIndex = 14;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::TabControl1_SelectedIndexChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(541, 33);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(7, 13);
			this->label7->TabIndex = 28;
			this->label7->Text = L"\r\n";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1538, 831);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"Задача Коши";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		GraphPane^ panel = zedGraphControl1->GraphPane;

		PointPairList^ f1 = gcnew ZedGraph::PointPairList();
		PointPairList^ f2 = gcnew ZedGraph::PointPairList();

		double h = Convert::ToDouble(textBox1->Text);

		// Список точек
		//std::vector<PPaint> graph;
		//PPaint p0;
		//double max = Convert::ToDouble(textBox2->Text);
		//p0.xn = Convert::ToDouble(textBox6->Text);
		//p0.vn = Convert::ToDouble(textBox7->Text);
		//p0.h = h;
		//double control = Convert::ToDouble(textBox4->Text);
		//double range = Convert::ToDouble(textBox3->Text);
		//int n = Convert::ToInt32(textBox5->Text);

		//if (radioButton1->Checked)
		//	graph = StartMethodTest(n, p0, control, range, max);
		//else
		//	graph = Test(n, p0, control, range, max);
		//for (int j = 0; j < graph.size(); j++)
		//{
		//	f1->Add(graph[j].xn, graph[j].vn);
		//	f2->Add(graph[j].xn, graph[j].u);
		//}
		//dataGridView1->Rows->Clear();
		//for (int j = 0; j < graph.size(); j++)
		//{
		//	//Печать в таблицу
		//	dataGridView1->Rows->Add();
		//	dataGridView1->Rows[j]->Cells[0]->Value = graph[j].num;
		//	dataGridView1->Rows[j]->Cells[1]->Value = graph[j].h;
		//	dataGridView1->Rows[j]->Cells[2]->Value = graph[j].xn;
		//	dataGridView1->Rows[j]->Cells[3]->Value = graph[j].vn;
		//	dataGridView1->Rows[j]->Cells[4]->Value = graph[j].u;
		//	dataGridView1->Rows[j]->Cells[5]->Value = graph[j].v2;
		//	dataGridView1->Rows[j]->Cells[6]->Value = graph[j].v2 - graph[j].vn;
		//	dataGridView1->Rows[j]->Cells[7]->Value = graph[j].S;
		//	dataGridView1->Rows[j]->Cells[8]->Value = graph[j].Gerror;
		//	dataGridView1->Rows[j]->Cells[9]->Value = graph[j].S*16;
		//}
		//if(radioButton1->Checked)
		//     LineItem Curve1 = panel->AddCurve("Численное решение с переменным шагом", f1, Color::Green, SymbolType::Plus);
		//else
		//     LineItem Curve1 = panel->AddCurve("Численное решение с постоянным шагом", f1, Color::Black, SymbolType::Plus);
		//LineItem Curve1 = panel->AddCurve("Точное решение", f2, Color::Red, SymbolType::Plus);
		////// Заполнение справки
		////int sub = 0;
		////int mov = 0;
		////double maxh = 0;
		////double minh = 0;

		////maxh = graph[0].h;
		////minh = graph[0].h;

		////for (auto& point : graph)
		////{
		////	if (point.sub == 2)
		////		sub++;
		////	if (point.sub == -2)
		////		mov++;
		////	if (maxh < point.h)
		////		maxh = point.h;
		////	if (minh > point.h)
		////		minh = point.h;
		////}

		////this->label10->Text = Convert::ToString(maxh);
		////this->label12->Text = Convert::ToString(minh);
		////this->label14->Text = Convert::ToString(mov);
		////this->label16->Text = Convert::ToString(sub);


		//double xmin = Convert::ToDouble(textBox8->Text);
		//double xmax = Convert::ToDouble(textBox9->Text);
		//double ymin = Convert::ToDouble(textBox10->Text);
		//double ymax = Convert::ToDouble(textBox11->Text);

		//panel->XAxis->Scale->Min = xmin;
		//panel->XAxis->Scale->Max = xmax;

		//// Устанавливаем интересующий нас интервал по оси Y
		//panel->YAxis->Scale->Min = ymin;
		//panel->YAxis->Scale->Max = ymax;


		//// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
		//// В противном случае на рисунке будет показана только часть графика, 
		//// которая умещается в интервалы по осям, установленные по умолчанию
		//zedGraphControl1->AxisChange();
		//// Обновляем график
		//zedGraphControl1->Invalidate();


	}
	private: System::Void zedGraphControl1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void zedGraphControl2_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void zedGraphControl3_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void zedGraphControl4_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		GraphPane^ panel = zedGraphControl1->GraphPane;
		double xmin = Convert::ToDouble(textBox8->Text);
		double xmax = Convert::ToDouble(textBox9->Text);
		double ymin = Convert::ToDouble(textBox10->Text);
		double ymax = Convert::ToDouble(textBox11->Text);

		// Устанавливаем интересующий нас интервал по оси X
		panel->XAxis->Scale->Min = xmin;
		panel->XAxis->Scale->Max = xmax;
		panel->YAxis->Scale->Min = ymin;
		panel->YAxis->Scale->Max = ymax;

		zedGraphControl1->AxisChange();

		zedGraphControl1->Invalidate();

	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void TabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
		GraphPane^ panel = zedGraphControl2->GraphPane;
		double xmin = Convert::ToDouble(textBox15->Text);
		double xmax = Convert::ToDouble(textBox14->Text);
		double ymin = Convert::ToDouble(textBox13->Text);
		double ymax = Convert::ToDouble(textBox12->Text);

		// Устанавливаем интересующий нас интервал по оси X
		panel->XAxis->Scale->Min = xmin;
		panel->XAxis->Scale->Max = xmax;
		panel->YAxis->Scale->Min = ymin;
		panel->YAxis->Scale->Max = ymax;

		zedGraphControl2->AxisChange();

		zedGraphControl2->Invalidate();
	}
	private: System::Void Button6_Click(System::Object^ sender, System::EventArgs^ e) {
		//GraphPane^ panel = zedGraphControl2->GraphPane;
		//GraphPane^ panel2 = zedGraphControl2->GraphPane;
		//GraphPane^ panel3 = zedGraphControl2->GraphPane;
		//double xmin = Convert::ToDouble(textBox26->Text);
		//double xmax = Convert::ToDouble(textBox25->Text);
		//double ymin = Convert::ToDouble(textBox24->Text);
		//double ymax = Convert::ToDouble(textBox23->Text);

		//// Устанавливаем интересующий нас интервал по оси X
		//panel->XAxis->Scale->Min = xmin;
		//panel->XAxis->Scale->Max = xmax;
		//panel->YAxis->Scale->Min = ymin;
		//panel->YAxis->Scale->Max = ymax;
		//panel->XAxis->Scale->Min = xmin;
		//panel->XAxis->Scale->Max = xmax;
		//panel->YAxis->Scale->Min = ymin;
		//panel->YAxis->Scale->Max = ymax;
		//panel->XAxis->Scale->Min = xmin;
		//panel->XAxis->Scale->Max = xmax;
		//panel->YAxis->Scale->Min = ymin;
		//panel->YAxis->Scale->Max = ymax;

		//zedGraphControl3->AxisChange();
		//zedGraphControl4->AxisChange();
		//zedGraphControl5->AxisChange();

		//zedGraphControl3->Invalidate();
		//zedGraphControl4->Invalidate();
		//zedGraphControl5->Invalidate();
	}
	private: System::Void Button5_Click(System::Object^ sender, System::EventArgs^ e) {
		GraphPane^ panel = zedGraphControl2->GraphPane;
		std::vector<std::vector<double>> coef;
		std::vector<std::vector<double>> coef2;
		std::vector<double> V;
		std::vector<double> V1;
		double max = 0;
		PointPairList^ f1 = gcnew ZedGraph::PointPairList();
		double h = Convert::ToDouble(textBox16->Text);
		coef = StartMethodBasic(h, 0.25);
		coef2 = StartMethodBasic(2 * h, 0.25);

		//coef = StartMethodTest(h, 2);
		//coef2 = StartMethodTest(2 * h, 2);

		V = progonka(coef);
		V1 = progonka(coef2);
		for (int i = 0; i < V.size(); i++)
			f1->Add(coef[3][i], V[i]);

		dataGridView2->Rows->Clear();
		for (int j = 0; j < V.size(); j++)
		{
			//Печать в таблицу
			dataGridView2->Rows->Add();
			dataGridView2->Rows[j]->Cells[0]->Value = j;
			dataGridView2->Rows[j]->Cells[1]->Value = coef[3][j];
			dataGridView2->Rows[j]->Cells[2]->Value = V[j];

			dataGridView2->Rows[j]->Cells[3]->Value = abs(V[j] - V1[2 * j]);
			if (max < abs(V[j] - V1[2 * j]))
				max = abs(V[j] - V1[2 * j]);
			label7->Text = Convert::ToString(max);
		}
		LineItem Curve1 = panel->AddCurve("Численное решение", f1, Color::Black, SymbolType::Plus);
		//// Заполнение справки
		//int sub = 0;
		//int mov = 0;
		//double maxh = 0;
		//double minh = 0;

		//maxh = graph[0].h;
		//minh = graph[0].h;

		//for (auto& point : graph)
		//{
		//	if (point.sub == 2)
		//		sub++;
		//	if (point.sub == -2)
		//		mov++;
		//	if (maxh < point.h)
		//		maxh = point.h;
		//	if (minh > point.h)
		//		minh = point.h;
		//}

		//this->label10->Text = Convert::ToString(maxh);
		//this->label12->Text = Convert::ToString(minh);
		//this->label14->Text = Convert::ToString(mov);
		//this->label16->Text = Convert::ToString(sub);


		/*double xmin = Convert::ToDouble(textBox15->Text);
		double xmax = Convert::ToDouble(textBox14->Text);
		double ymin = Convert::ToDouble(textBox13->Text);
		double ymax = Convert::ToDouble(textBox12->Text);
	*/
	/*panel->XAxis->Scale->Min = xmin;
	panel->XAxis->Scale->Max = xmax;*/

	// Устанавливаем интересующий нас интервал по оси Y
	//panel->YAxis->Scale->Min = ymin;
	//panel->YAxis->Scale->Max = ymax;


	// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
	// В противном случае на рисунке будет показана только часть графика, 
	// которая умещается в интервалы по осям, установленные по умолчанию
		zedGraphControl2->AxisChange();
		// Обновляем график
		zedGraphControl2->Invalidate();
	}
	private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {
		//GraphPane^ panel = zedGraphControl3->GraphPane;
		//GraphPane^ panel1 = zedGraphControl4->GraphPane;
		//GraphPane^ panel2 = zedGraphControl5->GraphPane;

		//PointPairList^ f1 = gcnew ZedGraph::PointPairList();
		//PointPairList^ f2 = gcnew ZedGraph::PointPairList();
		//PointPairList^ f3 = gcnew ZedGraph::PointPairList();

		//double h = Convert::ToDouble(textBox27->Text);
		//
		//std::vector<PPaint1> graph;
		//
		//PPaint1 p0;
		//double max = Convert::ToDouble(textBox29->Text);
		//p0.xn = Convert::ToDouble(textBox33->Text);
		//p0.v1 = Convert::ToDouble(textBox32->Text);
		//p0.v2 = Convert::ToDouble(textBox36->Text);
		//p0.h = h;
		//double control = Convert::ToDouble(textBox31->Text);
		//double range = Convert::ToDouble(textBox28->Text);
		//double a = Convert::ToDouble(textBox34->Text);
		//double b = Convert::ToDouble(textBox35->Text);
		//int n = Convert::ToInt32(textBox30->Text);

		//if (radioButton5->Checked)
		//	graph = StartMethodBasic2(n, p0, control, range, max,a,b);
		//else
		//	graph = Basic2(n, p0, control, range, max,a,b);
		//for (int j = 0; j < graph.size(); j++)
		//{
		//	f1->Add(graph[j].xn, graph[j].v1);
		//	f2->Add(graph[j].xn, graph[j].v2);
		//	f3->Add(graph[j].v2, graph[j].v1);
		//	//f2->Add(graph[j].xn, graph[j].u);
		//}
		//dataGridView3->Rows->Clear();
		//for (int j = 0; j < graph.size(); j++)
		//{
		//	//Печать в таблицу
		//	dataGridView3->Rows->Add();
		//	dataGridView3->Rows[j]->Cells[0]->Value = graph[j].num;
		//	dataGridView3->Rows[j]->Cells[1]->Value = graph[j].h;
		//	dataGridView3->Rows[j]->Cells[2]->Value = graph[j].xn;
		//	dataGridView3->Rows[j]->Cells[3]->Value = graph[j].v1;
		//	dataGridView3->Rows[j]->Cells[4]->Value = graph[j].v2;
		//	dataGridView3->Rows[j]->Cells[5]->Value = graph[j].v21;
		//	dataGridView3->Rows[j]->Cells[6]->Value = graph[j].v22;
		//	dataGridView3->Rows[j]->Cells[7]->Value = graph[j].S;
		//	dataGridView3->Rows[j]->Cells[8]->Value = graph[j].S * 16;
		//}
		//if (radioButton5->Checked)
		//{
		//	LineItem Curve = panel->AddCurve("Численное решение с переменным шагом", f1, Color::Green, SymbolType::Plus);
		//	LineItem Curve1 = panel1->AddCurve("Численное решение с переменным шагом", f2, Color::Green, SymbolType::Plus);
		//	LineItem Curve2 = panel2->AddCurve("Численное решение с переменным шагом", f3, Color::Green, SymbolType::Plus);
		//}
		//else
		//{
		//	LineItem Curve = panel->AddCurve("Численное решение с постоянным шагом", f1, Color::Black, SymbolType::Plus);
		//	LineItem Curve1 = panel1->AddCurve("Численное решение с постоянным шагом", f2, Color::Black, SymbolType::Plus);
		//	LineItem Curve2 = panel2->AddCurve("Численное решение с постоянным шагом", f3, Color::Black, SymbolType::Plus);
		//}
		//	//// Заполнение справки
		////// Заполнение справки
		////int sub = 0;
		////int mov = 0;
		////double maxh = 0;
		////double minh = 0;

		////maxh = graph[0].h;
		////minh = graph[0].h;

		////for (auto& point : graph)
		////{
		////	if (point.sub == 2)
		////		sub++;
		////	if (point.sub == -2)
		////		mov++;
		////	if (maxh < point.h)
		////		maxh = point.h;
		////	if (minh > point.h)
		////		minh = point.h;
		////}

		////this->label10->Text = Convert::ToString(maxh);
		////this->label12->Text = Convert::ToString(minh);
		////this->label14->Text = Convert::ToString(mov);
		////this->label16->Text = Convert::ToString(sub);


		//double xmin = Convert::ToDouble(textBox15->Text);
		//double xmax = Convert::ToDouble(textBox14->Text);
		//double ymin = Convert::ToDouble(textBox13->Text);
		//double ymax = Convert::ToDouble(textBox12->Text);

		//panel->XAxis->Scale->Min = xmin;
		//panel->XAxis->Scale->Max = xmax;
		//panel1->XAxis->Scale->Min = xmin;
		//panel1->XAxis->Scale->Max = xmax;
		//panel2->XAxis->Scale->Min = xmin;
		//panel2->XAxis->Scale->Max = xmax;

		//// Устанавливаем интересующий нас интервал по оси Y
		//panel->YAxis->Scale->Min = ymin;
		//panel->YAxis->Scale->Max = ymax;
		//panel1->YAxis->Scale->Min = ymin;
		//panel1->YAxis->Scale->Max = ymax;
		//panel2->YAxis->Scale->Min = ymin;
		//panel2->YAxis->Scale->Max = ymax;


		//// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
		//// В противном случае на рисунке будет показана только часть графика, 
		//// которая умещается в интервалы по осям, установленные по умолчанию
		//zedGraphControl3->AxisChange();
		//zedGraphControl4->AxisChange();
		//zedGraphControl5->AxisChange();
		//// Обновляем график
		//zedGraphControl3->Invalidate();
		//zedGraphControl4->Invalidate();
		//zedGraphControl5->Invalidate();
	}
	private: System::Void Button7_Click(System::Object^ sender, System::EventArgs^ e) {

		//zedGraphControl3->GraphPane->CurveList->Clear();
		//zedGraphControl4->GraphPane->CurveList->Clear();
		//zedGraphControl5->GraphPane->CurveList->Clear();
		//zedGraphControl3->AxisChange();
		//zedGraphControl4->AxisChange();
		//zedGraphControl5->AxisChange();
		//zedGraphControl3->Invalidate();
		//zedGraphControl4->Invalidate();
		//zedGraphControl5->Invalidate();
	}
	private: System::Void Button8_Click(System::Object^ sender, System::EventArgs^ e) {
		zedGraphControl2->GraphPane->CurveList->Clear();
		zedGraphControl2->AxisChange();
		zedGraphControl2->Invalidate();
	}
	private: System::Void Button9_Click(System::Object^ sender, System::EventArgs^ e) {
		zedGraphControl1->GraphPane->CurveList->Clear();
		zedGraphControl1->AxisChange();
		zedGraphControl1->Invalidate();
	}

	private: System::Void ZedGraphControl5_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
