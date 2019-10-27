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
	private: ZedGraph::ZedGraphControl^ zedGraphControl1;
	private: ZedGraph::ZedGraphControl^ zedGraphControl2;
	private: ZedGraph::ZedGraphControl^ zedGraphControl3;
	private: ZedGraph::ZedGraphControl^ zedGraphControl4;
	private: ZedGraph::ZedGraphControl^ zedGraphControl5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
			 //столбцы первой таблицы
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ num;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ h;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ X;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ V;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ U;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ V2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ VV;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ S;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ E;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ER;
			 //столбцы второй таблицы
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ num1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ h1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ X1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Vn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ V21;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ VV1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ S1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ER1;
			 //столбцы третей таблицы
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ num2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ h2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ X2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ V12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ V22;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ V122;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ V222;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ S2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ER2;
			 //
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Vn;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::Label^ label22;
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
	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::GroupBox^ groupBox10;
	private: System::Windows::Forms::TextBox^ textBox35;
	private: System::Windows::Forms::TextBox^ textBox34;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::GroupBox^ groupBox9;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::TextBox^ textBox32;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::TextBox^ textBox33;
	private: System::Windows::Forms::GroupBox^ groupBox8;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::TextBox^ textBox27;
	private: System::Windows::Forms::TextBox^ textBox28;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::TextBox^ textBox29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::TextBox^ textBox30;
	private: System::Windows::Forms::TextBox^ textBox31;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ textBox24;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::TextBox^ textBox25;
	private: System::Windows::Forms::TextBox^ textBox26;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::RadioButton^ radioButton2;
private: System::Windows::Forms::RadioButton^ radioButton1;
private: System::Windows::Forms::RadioButton^ radioButton4;
private: System::Windows::Forms::RadioButton^ radioButton3;
private: System::Windows::Forms::RadioButton^ radioButton6;
private: System::Windows::Forms::RadioButton^ radioButton5;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::TextBox^ textBox36;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Button^ button7;









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
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->zedGraphControl2 = (gcnew ZedGraph::ZedGraphControl());
			this->zedGraphControl3 = (gcnew ZedGraph::ZedGraphControl());
			this->zedGraphControl4 = (gcnew ZedGraph::ZedGraphControl());
			this->zedGraphControl5 = (gcnew ZedGraph::ZedGraphControl());
			this->button1 = (gcnew System::Windows::Forms::Button());
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
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->num1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->h1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->X1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Vn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->V21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->VV1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->S1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ER1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->num2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->h2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->X2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->V12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->V22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->V122 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->V222 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->S2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ER2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
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
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->textBox36 = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->groupBox10->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(616, 231);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(4);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->GraphPane->Title->Text = "График";
			this->zedGraphControl1->GraphPane->XAxis->Title->Text = "X";
			this->zedGraphControl1->GraphPane->YAxis->Title->Text = "V";
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
			// zedGraphControl2
			// 
			this->zedGraphControl2->Location = System::Drawing::Point(604, 235);
			this->zedGraphControl2->Name = L"zedGraphControl2";
			this->zedGraphControl2->GraphPane->Title->Text = "График";
			this->zedGraphControl2->GraphPane->XAxis->Title->Text = "X";
			this->zedGraphControl2->GraphPane->YAxis->Title->Text = "V";
			this->zedGraphControl2->ScrollGrace = 0;
			this->zedGraphControl2->ScrollMaxX = 0;
			this->zedGraphControl2->ScrollMaxY = 0;
			this->zedGraphControl2->ScrollMaxY2 = 0;
			this->zedGraphControl2->ScrollMinX = 0;
			this->zedGraphControl2->ScrollMinY = 0;
			this->zedGraphControl2->ScrollMinY2 = 0;
			this->zedGraphControl2->Size = System::Drawing::Size(887, 557);
			this->zedGraphControl2->TabIndex = 1;
			this->zedGraphControl2->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl2_Load);
			// 
			// zedGraphControl3
			// 
			this->zedGraphControl3->Location = System::Drawing::Point(593, 15);
			this->zedGraphControl3->Name = L"zedGraphControl3";
			this->zedGraphControl3->GraphPane->Title->Text = "График";
			this->zedGraphControl3->GraphPane->XAxis->Title->Text = "X";
			this->zedGraphControl3->GraphPane->YAxis->Title->Text = "V1";
			this->zedGraphControl3->ScrollGrace = 0;
			this->zedGraphControl3->ScrollMaxX = 0;
			this->zedGraphControl3->ScrollMaxY = 0;
			this->zedGraphControl3->ScrollMaxY2 = 0;
			this->zedGraphControl3->ScrollMinX = 0;
			this->zedGraphControl3->ScrollMinY = 0;
			this->zedGraphControl3->ScrollMinY2 = 0;
			this->zedGraphControl3->Size = System::Drawing::Size(474, 331);
			this->zedGraphControl3->TabIndex = 1;
			this->zedGraphControl3->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl3_Load);
			// 
			// zedGraphControl4
			// 
			this->zedGraphControl4->Location = System::Drawing::Point(1073, 15);
			this->zedGraphControl4->Name = L"zedGraphControl4";
			this->zedGraphControl4->GraphPane->Title->Text = "График";
			this->zedGraphControl4->GraphPane->XAxis->Title->Text = "X";
			this->zedGraphControl4->GraphPane->YAxis->Title->Text = "V2";
			this->zedGraphControl4->ScrollGrace = 0;
			this->zedGraphControl4->ScrollMaxX = 0;
			this->zedGraphControl4->ScrollMaxY = 0;
			this->zedGraphControl4->ScrollMaxY2 = 0;
			this->zedGraphControl4->ScrollMinX = 0;
			this->zedGraphControl4->ScrollMinY = 0;
			this->zedGraphControl4->ScrollMinY2 = 0;
			this->zedGraphControl4->Size = System::Drawing::Size(426, 331);
			this->zedGraphControl4->TabIndex = 1;
			this->zedGraphControl4->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl4_Load);
			// 
			// zedGraphControl5
			// 
			this->zedGraphControl5->Location = System::Drawing::Point(593, 352);
			this->zedGraphControl5->Name = L"zedGraphControl5";
			this->zedGraphControl5->GraphPane->Title->Text = "График";
			this->zedGraphControl5->GraphPane->XAxis->Title->Text = "V1";
			this->zedGraphControl5->GraphPane->YAxis->Title->Text = "V2";
			this->zedGraphControl5->ScrollGrace = 0;
			this->zedGraphControl5->ScrollMaxX = 0;
			this->zedGraphControl5->ScrollMaxY = 0;
			this->zedGraphControl5->ScrollMaxY2 = 0;
			this->zedGraphControl5->ScrollMinX = 0;
			this->zedGraphControl5->ScrollMinY = 0;
			this->zedGraphControl5->ScrollMinY2 = 0;
			this->zedGraphControl5->Size = System::Drawing::Size(906, 443);
			this->zedGraphControl5->TabIndex = 1;
			this->zedGraphControl5->Load += gcnew System::EventHandler(this, &MyForm::ZedGraphControl5_Load);
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
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->num1, this->h1,
					this->X1, this->Vn1, this->V21, this->VV1, this->S1, this->ER1
			});
			this->dataGridView2->Location = System::Drawing::Point(5, 235);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->Size = System::Drawing::Size(592, 557);
			this->dataGridView2->TabIndex = 2;
			// 
			// num1
			// 
			this->num1->HeaderText = L"num1";
			this->num1->MinimumWidth = 6;
			this->num1->Name = L"num1";
			this->num1->ReadOnly = true;
			this->num1->Width = 125;
			// 
			// h1
			// 
			this->h1->HeaderText = L"h1";
			this->h1->MinimumWidth = 6;
			this->h1->Name = L"h1";
			this->h1->ReadOnly = true;
			this->h1->Width = 125;
			// 
			// X1
			// 
			this->X1->HeaderText = L"X1";
			this->X1->MinimumWidth = 6;
			this->X1->Name = L"X1";
			this->X1->ReadOnly = true;
			this->X1->Width = 50;
			// 
			// Vn1
			// 
			this->Vn1->HeaderText = L"Vn1";
			this->Vn1->MinimumWidth = 6;
			this->Vn1->Name = L"Vn1";
			this->Vn1->ReadOnly = true;
			this->Vn1->Width = 125;
			// 
			// V21
			// 
			this->V21->HeaderText = L"V21";
			this->V21->MinimumWidth = 6;
			this->V21->Name = L"V21";
			this->V21->ReadOnly = true;
			this->V21->Width = 125;
			// 
			// VV1
			// 
			this->VV1->HeaderText = L"VV1";
			this->VV1->MinimumWidth = 6;
			this->VV1->Name = L"VV1";
			this->VV1->ReadOnly = true;
			this->VV1->Width = 125;
			// 
			// S1
			// 
			this->S1->HeaderText = L"S1";
			this->S1->MinimumWidth = 6;
			this->S1->Name = L"S1";
			this->S1->ReadOnly = true;
			this->S1->Width = 125;
			// 
			// ER1
			// 
			this->ER1->HeaderText = L"ER1";
			this->ER1->MinimumWidth = 6;
			this->ER1->Name = L"ER1";
			this->ER1->ReadOnly = true;
			this->ER1->Width = 125;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->num2, this->h2,
					this->X2, this->V12, this->V22, this->V122, this->V222, this->S2, this->ER2
			});
			this->dataGridView3->Location = System::Drawing::Point(17, 284);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->Size = System::Drawing::Size(539, 511);
			this->dataGridView3->TabIndex = 15;
			// 
			// num2
			// 
			this->num2->HeaderText = L"num2";
			this->num2->MinimumWidth = 6;
			this->num2->Name = L"num2";
			this->num2->ReadOnly = true;
			this->num2->Width = 125;
			// 
			// h2
			// 
			this->h2->HeaderText = L"h2";
			this->h2->MinimumWidth = 6;
			this->h2->Name = L"h2";
			this->h2->ReadOnly = true;
			this->h2->Width = 125;
			// 
			// X2
			// 
			this->X2->HeaderText = L"X2";
			this->X2->MinimumWidth = 6;
			this->X2->Name = L"X2";
			this->X2->ReadOnly = true;
			this->X2->Width = 50;
			// 
			// V12
			// 
			this->V12->HeaderText = L"V12";
			this->V12->MinimumWidth = 6;
			this->V12->Name = L"V12";
			this->V12->ReadOnly = true;
			this->V12->Width = 125;
			// 
			// V22
			// 
			this->V22->HeaderText = L"V22";
			this->V22->MinimumWidth = 6;
			this->V22->Name = L"V22";
			this->V22->ReadOnly = true;
			this->V22->Width = 125;
			// 
			// V122
			// 
			this->V122->HeaderText = L"VV2";
			this->V122->MinimumWidth = 6;
			this->V122->Name = L"V122";
			this->V122->ReadOnly = true;
			this->V122->Width = 125;
			// 
			// V222
			// 
			this->V222->HeaderText = L"V222";
			this->V222->MinimumWidth = 6;
			this->V222->Name = L"V222";
			this->V222->ReadOnly = true;
			this->V222->Width = 125;
			// 
			// S2
			// 
			this->S2->HeaderText = L"S2";
			this->S2->MinimumWidth = 6;
			this->S2->Name = L"S2";
			this->S2->ReadOnly = true;
			this->S2->Width = 125;
			// 
			// ER2
			// 
			this->ER2->HeaderText = L"ER2";
			this->ER2->MinimumWidth = 6;
			this->ER2->Name = L"ER2";
			this->ER2->ReadOnly = true;
			this->ER2->Width = 125;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(5, 106);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(127, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Контроль погрешности:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(137, 25);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(49, 20);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"0,1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(5, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"X max:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(136, 50);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(50, 20);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(5, 24);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Начальный шаг:";
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
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(137, 106);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(49, 20);
			this->textBox4->TabIndex = 13;
			this->textBox4->Text = L"0,001";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(5, 78);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(110, 26);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Контроль выхода на\r\n           границу";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(136, 131);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(50, 20);
			this->textBox5->TabIndex = 11;
			this->textBox5->Text = L"100";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(5, 131);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"max шагов:";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(2, 2);
			this->tabControl1->Margin = System::Windows::Forms::Padding(2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1536, 829);
			this->tabControl1->TabIndex = 14;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::TabControl1_SelectedIndexChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button9);
			this->tabPage1->Controls->Add(this->radioButton2);
			this->tabPage1->Controls->Add(this->radioButton1);
			this->tabPage1->Controls->Add(this->groupBox3);
			this->tabPage1->Controls->Add(this->groupBox2);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Controls->Add(this->zedGraphControl1);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Margin = System::Windows::Forms::Padding(2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(2);
			this->tabPage1->Size = System::Drawing::Size(1528, 803);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Тестовая задача";
			this->tabPage1->UseVisualStyleBackColor = true;
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
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(428, 127);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(104, 17);
			this->radioButton2->TabIndex = 20;
			this->radioButton2->Text = L"Постояный шаг";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(428, 103);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(113, 17);
			this->radioButton1->TabIndex = 19;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Переменный шаг";
			this->radioButton1->UseVisualStyleBackColor = true;
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
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->textBox7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Location = System::Drawing::Point(424, 15);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2);
			this->groupBox2->Size = System::Drawing::Size(124, 76);
			this->groupBox2->TabIndex = 17;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Начальные условия";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(23, 54);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(21, 13);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Uo";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(47, 50);
			this->textBox7->Margin = System::Windows::Forms::Padding(2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(42, 20);
			this->textBox7->TabIndex = 17;
			this->textBox7->Text = L"1";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(24, 24);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(20, 13);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Xo";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(47, 21);
			this->textBox6->Margin = System::Windows::Forms::Padding(2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(42, 20);
			this->textBox6->TabIndex = 15;
			this->textBox6->Text = L"0";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Cursor = System::Windows::Forms::Cursors::Default;
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->groupBox1->Location = System::Drawing::Point(196, 15);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(200, 169);
			this->groupBox1->TabIndex = 16;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Параметры метода";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(136, 78);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(50, 20);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"0,1";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button8);
			this->tabPage2->Controls->Add(this->radioButton4);
			this->tabPage2->Controls->Add(this->radioButton3);
			this->tabPage2->Controls->Add(this->groupBox5);
			this->tabPage2->Controls->Add(this->groupBox4);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->groupBox7);
			this->tabPage2->Controls->Add(this->dataGridView2);
			this->tabPage2->Controls->Add(this->zedGraphControl2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Margin = System::Windows::Forms::Padding(2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(2);
			this->tabPage2->Size = System::Drawing::Size(1528, 803);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Основная задача №1";
			this->tabPage2->UseVisualStyleBackColor = true;
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
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(427, 144);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(104, 17);
			this->radioButton4->TabIndex = 24;
			this->radioButton4->Text = L"Постояный шаг";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Checked = true;
			this->radioButton3->Location = System::Drawing::Point(427, 114);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(113, 17);
			this->radioButton3->TabIndex = 23;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Переменный шаг";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// groupBox5
			// 
			this->groupBox5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox5->Controls->Add(this->label18);
			this->groupBox5->Controls->Add(this->textBox16);
			this->groupBox5->Controls->Add(this->textBox17);
			this->groupBox5->Controls->Add(this->label19);
			this->groupBox5->Controls->Add(this->label20);
			this->groupBox5->Controls->Add(this->textBox18);
			this->groupBox5->Controls->Add(this->label21);
			this->groupBox5->Controls->Add(this->textBox21);
			this->groupBox5->Controls->Add(this->textBox22);
			this->groupBox5->Controls->Add(this->label22);
			this->groupBox5->Cursor = System::Windows::Forms::Cursors::Default;
			this->groupBox5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->groupBox5->Location = System::Drawing::Point(196, 13);
			this->groupBox5->Margin = System::Windows::Forms::Padding(2);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Padding = System::Windows::Forms::Padding(2);
			this->groupBox5->Size = System::Drawing::Size(200, 169);
			this->groupBox5->TabIndex = 22;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Параметры метода";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(5, 24);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(89, 13);
			this->label18->TabIndex = 7;
			this->label18->Text = L"Начальный шаг:";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(137, 25);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(48, 20);
			this->textBox16->TabIndex = 4;
			this->textBox16->Text = L"0,1";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(137, 78);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(48, 20);
			this->textBox17->TabIndex = 8;
			this->textBox17->Text = L"0,1";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(5, 50);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(39, 13);
			this->label19->TabIndex = 5;
			this->label19->Text = L"X max:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(5, 131);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(63, 13);
			this->label20->TabIndex = 10;
			this->label20->Text = L"max шагов:";
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(136, 50);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(49, 20);
			this->textBox18->TabIndex = 6;
			this->textBox18->Text = L"1";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(5, 78);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(110, 26);
			this->label21->TabIndex = 12;
			this->label21->Text = L"Контроль выхода на\r\n           границу";
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(136, 131);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(48, 20);
			this->textBox21->TabIndex = 11;
			this->textBox21->Text = L"100";
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(137, 106);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(49, 20);
			this->textBox22->TabIndex = 13;
			this->textBox22->Text = L"0,001";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(5, 106);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(127, 13);
			this->label22->TabIndex = 3;
			this->label22->Text = L"Контроль погрешности:";
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
			// groupBox7
			// 
			this->groupBox7->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox7->Controls->Add(this->label12);
			this->groupBox7->Controls->Add(this->textBox19);
			this->groupBox7->Controls->Add(this->label13);
			this->groupBox7->Controls->Add(this->textBox20);
			this->groupBox7->Location = System::Drawing::Point(427, 13);
			this->groupBox7->Margin = System::Windows::Forms::Padding(2);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Padding = System::Windows::Forms::Padding(2);
			this->groupBox7->Size = System::Drawing::Size(124, 76);
			this->groupBox7->TabIndex = 18;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Начальные условия";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(23, 54);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(21, 13);
			this->label12->TabIndex = 18;
			this->label12->Text = L"Uo";
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(47, 50);
			this->textBox19->Margin = System::Windows::Forms::Padding(2);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(42, 20);
			this->textBox19->TabIndex = 17;
			this->textBox19->Text = L"1";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(24, 24);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(20, 13);
			this->label13->TabIndex = 16;
			this->label13->Text = L"Xo";
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(47, 21);
			this->textBox20->Margin = System::Windows::Forms::Padding(2);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(42, 20);
			this->textBox20->TabIndex = 15;
			this->textBox20->Text = L"0";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->button7);
			this->tabPage3->Controls->Add(this->radioButton6);
			this->tabPage3->Controls->Add(this->radioButton5);
			this->tabPage3->Controls->Add(this->groupBox10);
			this->tabPage3->Controls->Add(this->groupBox9);
			this->tabPage3->Controls->Add(this->groupBox8);
			this->tabPage3->Controls->Add(this->groupBox6);
			this->tabPage3->Controls->Add(this->button6);
			this->tabPage3->Controls->Add(this->button4);
			this->tabPage3->Controls->Add(this->dataGridView3);
			this->tabPage3->Controls->Add(this->zedGraphControl3);
			this->tabPage3->Controls->Add(this->zedGraphControl4);
			this->tabPage3->Controls->Add(this->zedGraphControl5);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Margin = System::Windows::Forms::Padding(2);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(2);
			this->tabPage3->Size = System::Drawing::Size(1528, 803);
			this->tabPage3->TabIndex = 1;
			this->tabPage3->Text = L"Основная задача №2";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(17, 53);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(142, 29);
			this->button7->TabIndex = 28;
			this->button7->Text = L"Очистить графики";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::Button7_Click);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(186, 221);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(104, 17);
			this->radioButton6->TabIndex = 27;
			this->radioButton6->Text = L"Постояный шаг";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Checked = true;
			this->radioButton5->Location = System::Drawing::Point(186, 197);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(113, 17);
			this->radioButton5->TabIndex = 26;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Переменный шаг";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// groupBox10
			// 
			this->groupBox10->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox10->Controls->Add(this->textBox35);
			this->groupBox10->Controls->Add(this->textBox34);
			this->groupBox10->Controls->Add(this->label35);
			this->groupBox10->Controls->Add(this->label34);
			this->groupBox10->Location = System::Drawing::Point(416, 133);
			this->groupBox10->Margin = System::Windows::Forms::Padding(2);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Padding = System::Windows::Forms::Padding(2);
			this->groupBox10->Size = System::Drawing::Size(140, 81);
			this->groupBox10->TabIndex = 25;
			this->groupBox10->TabStop = false;
			this->groupBox10->Text = L"Параметры системы";
			// 
			// textBox35
			// 
			this->textBox35->Location = System::Drawing::Point(47, 53);
			this->textBox35->Margin = System::Windows::Forms::Padding(2);
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(42, 20);
			this->textBox35->TabIndex = 26;
			this->textBox35->Text = L"1";
			// 
			// textBox34
			// 
			this->textBox34->Location = System::Drawing::Point(47, 26);
			this->textBox34->Margin = System::Windows::Forms::Padding(2);
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(42, 20);
			this->textBox34->TabIndex = 26;
			this->textBox34->Text = L"1";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(24, 54);
			this->label35->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(13, 13);
			this->label35->TabIndex = 26;
			this->label35->Text = L"b";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(24, 30);
			this->label34->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(13, 13);
			this->label34->TabIndex = 26;
			this->label34->Text = L"a";
			// 
			// groupBox9
			// 
			this->groupBox9->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox9->Controls->Add(this->label36);
			this->groupBox9->Controls->Add(this->textBox36);
			this->groupBox9->Controls->Add(this->label32);
			this->groupBox9->Controls->Add(this->textBox32);
			this->groupBox9->Controls->Add(this->label33);
			this->groupBox9->Controls->Add(this->textBox33);
			this->groupBox9->Location = System::Drawing::Point(416, 15);
			this->groupBox9->Margin = System::Windows::Forms::Padding(2);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Padding = System::Windows::Forms::Padding(2);
			this->groupBox9->Size = System::Drawing::Size(140, 107);
			this->groupBox9->TabIndex = 24;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"Начальные условия";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(24, 81);
			this->label36->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(21, 13);
			this->label36->TabIndex = 20;
			this->label36->Text = L"U2";
			// 
			// textBox36
			// 
			this->textBox36->Location = System::Drawing::Point(47, 78);
			this->textBox36->Margin = System::Windows::Forms::Padding(2);
			this->textBox36->Name = L"textBox36";
			this->textBox36->Size = System::Drawing::Size(42, 20);
			this->textBox36->TabIndex = 19;
			this->textBox36->Text = L"1";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(23, 54);
			this->label32->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(21, 13);
			this->label32->TabIndex = 18;
			this->label32->Text = L"U1";
			// 
			// textBox32
			// 
			this->textBox32->Location = System::Drawing::Point(47, 50);
			this->textBox32->Margin = System::Windows::Forms::Padding(2);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(42, 20);
			this->textBox32->TabIndex = 17;
			this->textBox32->Text = L"1";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(24, 24);
			this->label33->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(20, 13);
			this->label33->TabIndex = 16;
			this->label33->Text = L"Xo";
			// 
			// textBox33
			// 
			this->textBox33->Location = System::Drawing::Point(47, 21);
			this->textBox33->Margin = System::Windows::Forms::Padding(2);
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(42, 20);
			this->textBox33->TabIndex = 15;
			this->textBox33->Text = L"0";
			// 
			// groupBox8
			// 
			this->groupBox8->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox8->Controls->Add(this->label27);
			this->groupBox8->Controls->Add(this->textBox27);
			this->groupBox8->Controls->Add(this->textBox28);
			this->groupBox8->Controls->Add(this->label28);
			this->groupBox8->Controls->Add(this->label29);
			this->groupBox8->Controls->Add(this->textBox29);
			this->groupBox8->Controls->Add(this->label30);
			this->groupBox8->Controls->Add(this->textBox30);
			this->groupBox8->Controls->Add(this->textBox31);
			this->groupBox8->Controls->Add(this->label31);
			this->groupBox8->Cursor = System::Windows::Forms::Cursors::Default;
			this->groupBox8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->groupBox8->Location = System::Drawing::Point(186, 15);
			this->groupBox8->Margin = System::Windows::Forms::Padding(2);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Padding = System::Windows::Forms::Padding(2);
			this->groupBox8->Size = System::Drawing::Size(200, 174);
			this->groupBox8->TabIndex = 23;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Параметры метода";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(5, 24);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(89, 13);
			this->label27->TabIndex = 7;
			this->label27->Text = L"Начальный шаг:";
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(137, 25);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(49, 20);
			this->textBox27->TabIndex = 4;
			this->textBox27->Text = L"0,1";
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(136, 78);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(50, 20);
			this->textBox28->TabIndex = 8;
			this->textBox28->Text = L"0,1";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(5, 50);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(39, 13);
			this->label28->TabIndex = 5;
			this->label28->Text = L"X max:";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(5, 131);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(63, 13);
			this->label29->TabIndex = 10;
			this->label29->Text = L"max шагов:";
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(136, 50);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(50, 20);
			this->textBox29->TabIndex = 6;
			this->textBox29->Text = L"1";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(5, 78);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(110, 26);
			this->label30->TabIndex = 12;
			this->label30->Text = L"Контроль выхода на\r\n           границу";
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(136, 131);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(50, 20);
			this->textBox30->TabIndex = 11;
			this->textBox30->Text = L"100";
			// 
			// textBox31
			// 
			this->textBox31->Location = System::Drawing::Point(137, 106);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(49, 20);
			this->textBox31->TabIndex = 13;
			this->textBox31->Text = L"0,001";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(5, 106);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(127, 13);
			this->label31->TabIndex = 3;
			this->label31->Text = L"Контроль погрешности:";
			// 
			// groupBox6
			// 
			this->groupBox6->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox6->Controls->Add(this->textBox23);
			this->groupBox6->Controls->Add(this->label23);
			this->groupBox6->Controls->Add(this->textBox24);
			this->groupBox6->Controls->Add(this->label24);
			this->groupBox6->Controls->Add(this->label25);
			this->groupBox6->Controls->Add(this->label26);
			this->groupBox6->Controls->Add(this->textBox25);
			this->groupBox6->Controls->Add(this->textBox26);
			this->groupBox6->Location = System::Drawing::Point(17, 134);
			this->groupBox6->Margin = System::Windows::Forms::Padding(2);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Padding = System::Windows::Forms::Padding(2);
			this->groupBox6->Size = System::Drawing::Size(142, 81);
			this->groupBox6->TabIndex = 22;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Масштаб";
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(88, 54);
			this->textBox23->Margin = System::Windows::Forms::Padding(2);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(30, 20);
			this->textBox23->TabIndex = 7;
			this->textBox23->Text = L"1";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(66, 57);
			this->label23->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(19, 13);
			this->label23->TabIndex = 6;
			this->label23->Text = L"до";
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(38, 54);
			this->textBox24->Margin = System::Windows::Forms::Padding(2);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(24, 20);
			this->textBox24->TabIndex = 5;
			this->textBox24->Text = L"0";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(4, 57);
			this->label24->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(31, 13);
			this->label24->TabIndex = 4;
			this->label24->Text = L"Y: от";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(67, 32);
			this->label25->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(19, 13);
			this->label25->TabIndex = 3;
			this->label25->Text = L"до";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(4, 32);
			this->label26->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(31, 13);
			this->label26->TabIndex = 2;
			this->label26->Text = L"X: от";
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(89, 28);
			this->textBox25->Margin = System::Windows::Forms::Padding(2);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(29, 20);
			this->textBox25->TabIndex = 1;
			this->textBox25->Text = L"1";
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(38, 28);
			this->textBox26->Margin = System::Windows::Forms::Padding(2);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(24, 20);
			this->textBox26->TabIndex = 0;
			this->textBox26->Text = L"0";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(17, 93);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(142, 29);
			this->button6->TabIndex = 21;
			this->button6->Text = L"Масштабировать";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::Button6_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(17, 15);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(142, 29);
			this->button4->TabIndex = 20;
			this->button4->Text = L"Вычислить\r\n";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::Button4_Click);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->groupBox10->ResumeLayout(false);
			this->groupBox10->PerformLayout();
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		GraphPane^ panel = zedGraphControl1->GraphPane;

		PointPairList^ f1 = gcnew ZedGraph::PointPairList();
		PointPairList^ f2 = gcnew ZedGraph::PointPairList();
		
		double h = Convert::ToDouble(textBox1->Text);

		// Список точек
		std::vector<PPaint> graph;
		PPaint p0;
		double max = Convert::ToDouble(textBox2->Text);
		p0.xn = Convert::ToDouble(textBox6->Text);
		p0.vn = Convert::ToDouble(textBox7->Text);
		p0.h = h;
		double control = Convert::ToDouble(textBox4->Text);
		double range = Convert::ToDouble(textBox3->Text);
		int n = Convert::ToInt32(textBox5->Text);

		if (radioButton1->Checked)
			graph = StartMethodTest(n, p0, control, range, max);
		else
			graph = Test(n, p0, control, range, max);
		for (int j = 0; j < graph.size(); j++)
		{
			f1->Add(graph[j].xn, graph[j].vn);
			f2->Add(graph[j].xn, graph[j].u);
		}
		dataGridView1->Rows->Clear();
		for (int j = 0; j < graph.size(); j++)
		{
			//Печать в таблицу
			dataGridView1->Rows->Add();
			dataGridView1->Rows[j]->Cells[0]->Value = graph[j].num;
			dataGridView1->Rows[j]->Cells[1]->Value = graph[j].h;
			dataGridView1->Rows[j]->Cells[2]->Value = graph[j].xn;
			dataGridView1->Rows[j]->Cells[3]->Value = graph[j].vn;
			dataGridView1->Rows[j]->Cells[4]->Value = graph[j].u;
			dataGridView1->Rows[j]->Cells[5]->Value = graph[j].v2;
			dataGridView1->Rows[j]->Cells[6]->Value = graph[j].v2 - graph[j].vn;
			dataGridView1->Rows[j]->Cells[7]->Value = graph[j].S;
			dataGridView1->Rows[j]->Cells[8]->Value = graph[j].Gerror;
			dataGridView1->Rows[j]->Cells[9]->Value = graph[j].S*16;
		}
		if(radioButton1->Checked)
		     LineItem Curve1 = panel->AddCurve("Численное решение с переменным шагом", f1, Color::Green, SymbolType::Plus);
		else
		     LineItem Curve1 = panel->AddCurve("Численное решение с постоянным шагом", f1, Color::Black, SymbolType::Plus);
		LineItem Curve1 = panel->AddCurve("Точное решение", f2, Color::Red, SymbolType::Plus);
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


		double xmin = Convert::ToDouble(textBox8->Text);
		double xmax = Convert::ToDouble(textBox9->Text);
		double ymin = Convert::ToDouble(textBox10->Text);
		double ymax = Convert::ToDouble(textBox11->Text);

		panel->XAxis->Scale->Min = xmin;
		panel->XAxis->Scale->Max = xmax;

		// Устанавливаем интересующий нас интервал по оси Y
		panel->YAxis->Scale->Min = ymin;
		panel->YAxis->Scale->Max = ymax;


		// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
		// В противном случае на рисунке будет показана только часть графика, 
		// которая умещается в интервалы по осям, установленные по умолчанию
		zedGraphControl1->AxisChange();
		// Обновляем график
		zedGraphControl1->Invalidate();

		
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
	GraphPane^ panel = zedGraphControl2->GraphPane;
	GraphPane^ panel2 = zedGraphControl2->GraphPane;
	GraphPane^ panel3 = zedGraphControl2->GraphPane;
	double xmin = Convert::ToDouble(textBox26->Text);
	double xmax = Convert::ToDouble(textBox25->Text);
	double ymin = Convert::ToDouble(textBox24->Text);
	double ymax = Convert::ToDouble(textBox23->Text);

	// Устанавливаем интересующий нас интервал по оси X
	panel->XAxis->Scale->Min = xmin;
	panel->XAxis->Scale->Max = xmax;
	panel->YAxis->Scale->Min = ymin;
	panel->YAxis->Scale->Max = ymax;
	panel->XAxis->Scale->Min = xmin;
	panel->XAxis->Scale->Max = xmax;
	panel->YAxis->Scale->Min = ymin;
	panel->YAxis->Scale->Max = ymax;
	panel->XAxis->Scale->Min = xmin;
	panel->XAxis->Scale->Max = xmax;
	panel->YAxis->Scale->Min = ymin;
	panel->YAxis->Scale->Max = ymax;

	zedGraphControl3->AxisChange();
	zedGraphControl4->AxisChange();
	zedGraphControl5->AxisChange();

	zedGraphControl3->Invalidate();
	zedGraphControl4->Invalidate();
	zedGraphControl5->Invalidate();
}
private: System::Void Button5_Click(System::Object^ sender, System::EventArgs^ e) {
	GraphPane^ panel = zedGraphControl2->GraphPane;

	PointPairList^ f1 = gcnew ZedGraph::PointPairList();
	//PointPairList^ f2 = gcnew ZedGraph::PointPairList();

	double h = Convert::ToDouble(textBox16->Text);
	std::vector<PPaint> graph;
	PPaint p0;
	double max = Convert::ToDouble(textBox18->Text);
	p0.xn = Convert::ToDouble(textBox20->Text);
	p0.vn = Convert::ToDouble(textBox19->Text);
	p0.h = h;
	double control = Convert::ToDouble(textBox4->Text);
	double range = Convert::ToDouble(textBox3->Text);
	int n = Convert::ToInt32(textBox5->Text);

	if (radioButton3->Checked)
		graph = StartMethodBasic1(n, p0, control, range, max);
	else
		graph = Basic(n, p0, control, range, max);
	for (int j = 0; j < graph.size(); j++)
	{
		f1->Add(graph[j].xn, graph[j].vn);
		//f2->Add(graph[j].xn, graph[j].u);
	}
	dataGridView2->Rows->Clear();
	for (int j = 0; j < graph.size(); j++)
	{
		//Печать в таблицу
		dataGridView2->Rows->Add();
		dataGridView2->Rows[j]->Cells[0]->Value = graph[j].num;
		dataGridView2->Rows[j]->Cells[1]->Value = graph[j].h;
		dataGridView2->Rows[j]->Cells[2]->Value = graph[j].xn;
		dataGridView2->Rows[j]->Cells[3]->Value = graph[j].vn;
		dataGridView2->Rows[j]->Cells[4]->Value = graph[j].v2;
		dataGridView2->Rows[j]->Cells[5]->Value = graph[j].v2 - graph[j].vn;
		dataGridView2->Rows[j]->Cells[6]->Value = graph[j].S;
		dataGridView2->Rows[j]->Cells[7]->Value = graph[j].S * 16;
	}
	if (radioButton3->Checked)
		LineItem Curve1 = panel->AddCurve("Численное решение с переменным шагом", f1, Color::Green, SymbolType::Plus);
	else
		LineItem Curve1 = panel->AddCurve("Численное решение с постоянным шагом", f1, Color::Black, SymbolType::Plus);
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


	double xmin = Convert::ToDouble(textBox15->Text);
	double xmax = Convert::ToDouble(textBox14->Text);
	double ymin = Convert::ToDouble(textBox13->Text);
	double ymax = Convert::ToDouble(textBox12->Text);

	panel->XAxis->Scale->Min = xmin;
	panel->XAxis->Scale->Max = xmax;

	// Устанавливаем интересующий нас интервал по оси Y
	panel->YAxis->Scale->Min = ymin;
	panel->YAxis->Scale->Max = ymax;


	// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
	// В противном случае на рисунке будет показана только часть графика, 
	// которая умещается в интервалы по осям, установленные по умолчанию
	zedGraphControl2->AxisChange();
	// Обновляем график
	zedGraphControl2->Invalidate();
}
private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {
	GraphPane^ panel = zedGraphControl3->GraphPane;
	GraphPane^ panel1 = zedGraphControl4->GraphPane;
	GraphPane^ panel2 = zedGraphControl5->GraphPane;

	PointPairList^ f1 = gcnew ZedGraph::PointPairList();
	PointPairList^ f2 = gcnew ZedGraph::PointPairList();
	PointPairList^ f3 = gcnew ZedGraph::PointPairList();

	double h = Convert::ToDouble(textBox27->Text);
	
	std::vector<PPaint1> graph;
	
	PPaint1 p0;
	double max = Convert::ToDouble(textBox29->Text);
	p0.xn = Convert::ToDouble(textBox33->Text);
	p0.v1 = Convert::ToDouble(textBox32->Text);
	p0.v2 = Convert::ToDouble(textBox36->Text);
	p0.h = h;
	double control = Convert::ToDouble(textBox31->Text);
	double range = Convert::ToDouble(textBox28->Text);
	double a = Convert::ToDouble(textBox34->Text);
	double b = Convert::ToDouble(textBox35->Text);
	int n = Convert::ToInt32(textBox30->Text);

	if (radioButton5->Checked)
		graph = StartMethodBasic2(n, p0, control, range, max,a,b);
	else
		graph = Basic2(n, p0, control, range, max,a,b);
	for (int j = 0; j < graph.size(); j++)
	{
		f1->Add(graph[j].xn, graph[j].v1);
		f2->Add(graph[j].xn, graph[j].v2);
		f3->Add(graph[j].v2, graph[j].v1);
		//f2->Add(graph[j].xn, graph[j].u);
	}
	dataGridView3->Rows->Clear();
	for (int j = 0; j < graph.size(); j++)
	{
		//Печать в таблицу
		dataGridView3->Rows->Add();
		dataGridView3->Rows[j]->Cells[0]->Value = graph[j].num;
		dataGridView3->Rows[j]->Cells[1]->Value = graph[j].h;
		dataGridView3->Rows[j]->Cells[2]->Value = graph[j].xn;
		dataGridView3->Rows[j]->Cells[3]->Value = graph[j].v1;
		dataGridView3->Rows[j]->Cells[4]->Value = graph[j].v2;
		dataGridView3->Rows[j]->Cells[5]->Value = graph[j].v21;
		dataGridView3->Rows[j]->Cells[6]->Value = graph[j].v22;
		dataGridView3->Rows[j]->Cells[7]->Value = graph[j].S;
		dataGridView3->Rows[j]->Cells[8]->Value = graph[j].S * 16;
	}
	if (radioButton5->Checked)
	{
		LineItem Curve = panel->AddCurve("Численное решение с переменным шагом", f1, Color::Green, SymbolType::Plus);
		LineItem Curve1 = panel1->AddCurve("Численное решение с переменным шагом", f2, Color::Green, SymbolType::Plus);
		LineItem Curve2 = panel2->AddCurve("Численное решение с переменным шагом", f3, Color::Green, SymbolType::Plus);
	}
	else
	{
		LineItem Curve = panel->AddCurve("Численное решение с постоянным шагом", f1, Color::Black, SymbolType::Plus);
		LineItem Curve1 = panel1->AddCurve("Численное решение с постоянным шагом", f2, Color::Black, SymbolType::Plus);
		LineItem Curve2 = panel2->AddCurve("Численное решение с постоянным шагом", f3, Color::Black, SymbolType::Plus);
	}
		//// Заполнение справки
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


	double xmin = Convert::ToDouble(textBox15->Text);
	double xmax = Convert::ToDouble(textBox14->Text);
	double ymin = Convert::ToDouble(textBox13->Text);
	double ymax = Convert::ToDouble(textBox12->Text);

	panel->XAxis->Scale->Min = xmin;
	panel->XAxis->Scale->Max = xmax;
	panel1->XAxis->Scale->Min = xmin;
	panel1->XAxis->Scale->Max = xmax;
	panel2->XAxis->Scale->Min = xmin;
	panel2->XAxis->Scale->Max = xmax;

	// Устанавливаем интересующий нас интервал по оси Y
	panel->YAxis->Scale->Min = ymin;
	panel->YAxis->Scale->Max = ymax;
	panel1->YAxis->Scale->Min = ymin;
	panel1->YAxis->Scale->Max = ymax;
	panel2->YAxis->Scale->Min = ymin;
	panel2->YAxis->Scale->Max = ymax;


	// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
	// В противном случае на рисунке будет показана только часть графика, 
	// которая умещается в интервалы по осям, установленные по умолчанию
	zedGraphControl3->AxisChange();
	zedGraphControl4->AxisChange();
	zedGraphControl5->AxisChange();
	// Обновляем график
	zedGraphControl3->Invalidate();
	zedGraphControl4->Invalidate();
	zedGraphControl5->Invalidate();
}
private: System::Void Button7_Click(System::Object^ sender, System::EventArgs^ e) {
	
	zedGraphControl3->GraphPane->CurveList->Clear();
	zedGraphControl4->GraphPane->CurveList->Clear();
	zedGraphControl5->GraphPane->CurveList->Clear();
	zedGraphControl3->AxisChange();
	zedGraphControl4->AxisChange();
	zedGraphControl5->AxisChange();
	zedGraphControl3->Invalidate();
	zedGraphControl4->Invalidate();
	zedGraphControl5->Invalidate();
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
