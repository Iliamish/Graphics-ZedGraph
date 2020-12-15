#pragma once
#include <math.h>
#include "numerical_methods.h"

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
	
	TResultsSS Res;

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
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Step;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ X;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ F_1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ F_2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ H_Col;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ V1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ V1_2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ V2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ V2_2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ E;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;

	private: PointPairList^ f1_list = gcnew ZedGraph::PointPairList();

	private: PointPairList^ f2_list = gcnew ZedGraph::PointPairList();

	private: PointPairList^ f3_list = gcnew ZedGraph::PointPairList();


	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Local_Error;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Global_Error;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label14;

	protected:
	private: System::ComponentModel::IContainer^  components;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Step = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->X = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->V1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->V1_2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->V2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->V2_2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->E = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->H_Col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Local_Error = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Global_Error = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(38, 30);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(4);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->GraphPane->Title->Text = L"График зависимости Изгиба от Точки консоли";
			this->zedGraphControl1->GraphPane->XAxis->Title->Text = "Точка консоли, м";
			this->zedGraphControl1->GraphPane->YAxis->Title->Text = "Изгиб, м";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(501, 327);
			this->zedGraphControl1->TabIndex = 0;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(636, 363);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(403, 102);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->Step, this->X,
					this->V1, this->V1_2, this->V2, this->V2_2, this->E, this->H_Col, this->Local_Error, this->Global_Error
			});
			this->dataGridView1->Location = System::Drawing::Point(636, 30);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(656, 327);
			this->dataGridView1->TabIndex = 2;
			// 
			// Step
			// 
			this->Step->HeaderText = L"№";
			this->Step->MinimumWidth = 6;
			this->Step->Name = L"Step";
			this->Step->ReadOnly = true;
			this->Step->Width = 40;
			// 
			// X
			// 
			this->X->HeaderText = L"X, точка консоли";
			this->X->MinimumWidth = 6;
			this->X->Name = L"X";
			this->X->ReadOnly = true;
			this->X->Width = 125;
			// 
			// V1
			// 
			this->V1->HeaderText = L"V\', Кривизна";
			this->V1->MinimumWidth = 6;
			this->V1->Name = L"V1";
			this->V1->ReadOnly = true;
			this->V1->Width = 125;
			// 
			// V1_2
			// 
			this->V1_2->HeaderText = L"V\' через 1/2 шаг";
			this->V1_2->MinimumWidth = 6;
			this->V1_2->Name = L"V1_2";
			this->V1_2->ReadOnly = true;
			this->V1_2->Visible = false;
			this->V1_2->Width = 125;
			// 
			// V2
			// 
			this->V2->HeaderText = L"V, Изгиб";
			this->V2->MinimumWidth = 6;
			this->V2->Name = L"V2";
			this->V2->ReadOnly = true;
			this->V2->Width = 125;
			// 
			// V2_2
			// 
			this->V2_2->HeaderText = L"V через 1/2 шаг";
			this->V2_2->MinimumWidth = 6;
			this->V2_2->Name = L"V2_2";
			this->V2_2->ReadOnly = true;
			this->V2_2->Visible = false;
			this->V2_2->Width = 125;
			// 
			// E
			// 
			this->E->HeaderText = L"V - V->1/2";
			this->E->MinimumWidth = 6;
			this->E->Name = L"E";
			this->E->ReadOnly = true;
			this->E->Visible = false;
			this->E->Width = 125;
			// 
			// H_Col
			// 
			this->H_Col->HeaderText = L"H, Шаг";
			this->H_Col->Name = L"H_Col";
			this->H_Col->ReadOnly = true;
			this->H_Col->Visible = false;
			// 
			// Local_Error
			// 
			this->Local_Error->HeaderText = L"Оценка локальной погрешности";
			this->Local_Error->Name = L"Local_Error";
			this->Local_Error->ReadOnly = true;
			this->Local_Error->Visible = false;
			this->Local_Error->Width = 200;
			// 
			// Global_Error
			// 
			this->Global_Error->HeaderText = L"Global_Error";
			this->Global_Error->Name = L"Global_Error";
			this->Global_Error->ReadOnly = true;
			this->Global_Error->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(35, 399);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Начальный шаг";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(38, 421);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(176, 20);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"0,01";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(202, 536);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(21, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"u\'0";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(227, 533);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(74, 20);
			this->textBox6->TabIndex = 6;
			this->textBox6->Text = L"0";
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(250, 421);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(190, 20);
			this->textBox7->TabIndex = 15;
			this->textBox7->Text = L"1,0E-18";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(247, 398);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(127, 13);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Параметр контроля ЛП";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::SystemColors::Control;
			this->checkBox1->Location = System::Drawing::Point(127, 398);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(74, 17);
			this->checkBox1->TabIndex = 16;
			this->checkBox1->Text = L"Контроль";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(38, 471);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(176, 20);
			this->textBox8->TabIndex = 19;
			this->textBox8->Text = L"10000";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(35, 448);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(179, 13);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Максимальное количество шагов";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(227, 559);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(74, 20);
			this->textBox9->TabIndex = 21;
			this->textBox9->Text = L"0";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(202, 562);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(19, 13);
			this->label9->TabIndex = 20;
			this->label9->Text = L"u0";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->BackColor = System::Drawing::SystemColors::Control;
			this->checkBox2->Checked = true;
			this->checkBox2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox2->Location = System::Drawing::Point(565, 30);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(46, 17);
			this->checkBox2->TabIndex = 22;
			this->checkBox2->Text = L"V(X)";
			this->checkBox2->UseVisualStyleBackColor = false;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->BackColor = System::Drawing::SystemColors::Control;
			this->checkBox3->Location = System::Drawing::Point(565, 71);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(48, 17);
			this->checkBox3->TabIndex = 23;
			this->checkBox3->Text = L"V\'(X)";
			this->checkBox3->UseVisualStyleBackColor = false;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox3_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->BackColor = System::Drawing::SystemColors::Control;
			this->checkBox4->Location = System::Drawing::Point(565, 110);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(48, 17);
			this->checkBox4->TabIndex = 24;
			this->checkBox4->Text = L"V(V\')";
			this->checkBox4->UseVisualStyleBackColor = false;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox4_CheckedChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(636, 471);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(656, 170);
			this->pictureBox1->TabIndex = 26;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1054, 363);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(238, 62);
			this->pictureBox2->TabIndex = 27;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(1054, 424);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(114, 23);
			this->pictureBox3->TabIndex = 28;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(1054, 444);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(80, 21);
			this->pictureBox4->TabIndex = 29;
			this->pictureBox4->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(35, 376);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(126, 13);
			this->label1->TabIndex = 30;
			this->label1->Text = L"Параметры метода:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(35, 505);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(124, 13);
			this->label2->TabIndex = 31;
			this->label2->Text = L"Параметры задачи:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(84, 532);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(51, 20);
			this->textBox1->TabIndex = 32;
			this->textBox1->Text = L"2";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(36, 535);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 13);
			this->label4->TabIndex = 33;
			this->label4->Text = L"PL^2/EI";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(37, 562);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(13, 13);
			this->label5->TabIndex = 34;
			this->label5->Text = L"L";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(56, 559);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(79, 20);
			this->textBox2->TabIndex = 35;
			this->textBox2->Text = L"1";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(403, 505);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(127, 13);
			this->label10->TabIndex = 36;
			this->label10->Text = L"Параметры вывода:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(443, 532);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(87, 20);
			this->textBox4->TabIndex = 37;
			this->textBox4->Text = L"0";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(443, 559);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(87, 20);
			this->textBox5->TabIndex = 38;
			this->textBox5->Text = L"1";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(403, 535);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(34, 13);
			this->label11->TabIndex = 39;
			this->label11->Text = L"x_min";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(403, 562);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(37, 13);
			this->label12->TabIndex = 40;
			this->label12->Text = L"x_max";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(247, 448);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(193, 13);
			this->label13->TabIndex = 41;
			this->label13->Text = L"Параметр контроля правой границы";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(250, 471);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(190, 20);
			this->textBox10->TabIndex = 42;
			this->textBox10->Text = L"0,1";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(406, 363);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(133, 23);
			this->button2->TabIndex = 43;
			this->button2->Text = L"Очистить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(202, 505);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(159, 13);
			this->label14->TabIndex = 44;
			this->label14->Text = L"Параметры задачи Коши:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1323, 642);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->zedGraphControl1);
			this->Name = L"MyForm";
			this->Text = L"Задача 11. Выполнил Мишин Илья. Команда 7. Метод РК 4 порядка.";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 

	private: Void resetSelection(int type) {
		switch (type) {
		case 1:
			this->checkBox2->Checked = true;
			this->checkBox3->Checked = false;
			this->checkBox4->Checked = false;
			break;
		case 2:
			this->checkBox3->Checked = true;
			this->checkBox2->Checked = false;
			this->checkBox4->Checked = false;
			break;
		case 3:
			this->checkBox3->Checked = false;
			this->checkBox2->Checked = false;
			break;
		default:
			break;
		}
	}

	private: vec3 find_min(std::vector<vec3> vec) {
		vec3 min = vec[0];
		for (size_t i = 1; i < vec.size(); i++) {
			if (min.y > vec[i].y) {
				min.y = vec[i].y;
			}
			if (min.x > vec[i].x) {
				min.x = vec[i].x;
			}
			if (min.v2 > vec[i].v2) {
				min.v2 = vec[i].v2;
			}
		}
		return min;
	}

	private: vec3 find_max(std::vector<vec3> vec) {
		vec3 max = vec[0];
		for (size_t i = 1; i < vec.size(); i++) {
			if (max.y < vec[i].y) {
				max.y = vec[i].y;
			}
			if (max.x < vec[i].x) {
				max.x = vec[i].x;
			}
			if (max.v2 < vec[i].v2) {
				max.v2 = vec[i].v2;
			}
		}
		return max;
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		GraphPane^ panel = zedGraphControl1->GraphPane;
		PointPairList^ f1_list_local = gcnew ZedGraph::PointPairList();

		PointPairList^ f2_list_local = gcnew ZedGraph::PointPairList();

		PointPairList^ f3_list_local = gcnew ZedGraph::PointPairList();
		
		// Интервал, где есть данные
		double xmin = Convert::ToDouble(textBox4->Text);
		double xmax = Convert::ToDouble(textBox5->Text);
		double P = Convert::ToDouble(textBox1->Text);
		double L = Convert::ToDouble(textBox2->Text);

		double h = Convert::ToDouble(textBox3->Text);
		bool control = checkBox1->Checked;
		double eps = Convert::ToDouble(textBox7->Text);
		double right_border = Convert::ToDouble(textBox10->Text);

		uint64_t NMax = Convert::ToUInt64(textBox8->Text);

		double xmin_limit = xmin - 0.1;
		double xmax_limit = xmax + 0.1;
/*
		double ymin_limit = -1.0;
		double ymax_limit = 100.0;
*/
		double y0 = Convert::ToDouble(textBox6->Text);
		// Список точек
		int i = 0;
		dataGridView1->Rows->Clear();
		
		this->Local_Error->Visible = control;
		this->H_Col->Visible = control;
		this->V2_2->Visible = control;
		this->V1_2->Visible = control;
		this->E->Visible = control;
		double u0 = Convert::ToDouble(textBox9->Text);
		Res = RungeKutta4SS(xmin, xmax, y0, u0, h, P, L, control, eps, NMax, right_border);
		auto& ans = Res.res_vec;
		auto& double_step = Res.res_vec_double_step;
		this->Global_Error->Visible = false;;
		double Max_Local_mis = 0;
		double ymin = ans[0].v2, ymax = ans[0].v2;
		for (; i < ans.size();) {
			f1_list_local->Add(ans[i].x, ans[i].v2);
			f2_list_local->Add(ans[i].x, ans[i].y);
			f3_list_local->Add(ans[i].y, ans[i].v2);

			if (ans[i].y > ymax) ymax = ans[i].y;
			else if (ans[i].y < ymin) ymin = ans[i].y;

			dataGridView1->Rows->Add();

			if (control) {
				if (i < Res.local_mistake_vec.size()) {
					dataGridView1->Rows->Add(); dataGridView1->Rows[i]->Cells[8]->Value = Res.local_mistake_vec[i];
					if (abs(Res.local_mistake_vec[i]) > Max_Local_mis) Max_Local_mis = abs(Res.local_mistake_vec[i]);
				}
			}
			
			dataGridView1->Rows[i]->Cells[0]->Value = i;
			dataGridView1->Rows[i]->Cells[1]->Value = ans[i].x;
			dataGridView1->Rows[i]->Cells[2]->Value = ans[i].y;
			if(control)dataGridView1->Rows[i]->Cells[3]->Value = double_step[i].y;
			dataGridView1->Rows[i]->Cells[4]->Value = ans[i].v2;
			if (control)dataGridView1->Rows[i]->Cells[5]->Value = double_step[i].v2;
			if (control)dataGridView1->Rows[i]->Cells[6]->Value = abs(ans[i].v2 - double_step[i].v2);
			if (control)dataGridView1->Rows[i]->Cells[7]->Value = Res.h_vec[i];
			i++;
		}
		if (checkBox2->Checked) {
			LineItem^ Curve1 = panel->AddCurve("V(x)", f1_list_local, Color::Red, SymbolType::None);
			/*panel->V1Axis->Scale->Min = std::min(ans[0].v2, ans[ans.size() - 1].v2) - 0.1;
			panel->YAxis->Scale->Max = std::max(ans[0].v2, ans[ans.size() - 1].v2) + abs(std::max(ans[0].v2, ans[ans.size() - 1].v2));*/
			panel->XAxis->Title->Text = "Точка консоли, м";
			panel->YAxis->Title->Text = "Изгиб, м";
		} else if (checkBox3->Checked) {
			LineItem^ Curve1 = panel->AddCurve("V'(x)", f2_list_local, Color::Blue, SymbolType::None);
			panel->XAxis->Title->Text = "Точка консоли, м";
			panel->YAxis->Title->Text = "Кривизна, м";
		} else { 
			LineItem^ Curve1 = panel->AddCurve("V(v')", f3_list_local, Color::Green, SymbolType::None);
			panel->XAxis->Title->Text = "Кривизна, м";
			panel->YAxis->Title->Text = "Изгиб, м";
		}

		if (control) {
			auto tmp = "Max local mistake =" + (Max_Local_mis)+"\nIncrease h: " + Res.ND + "\nDividing h: " + Res.NH;;
			MessageBox::Show(tmp);
		}

		// Устанавливаем интересующий нас интервал по оси X
		if (!checkBox4->Checked) {
			panel->XAxis->Scale->Min = xmin_limit;
			panel->XAxis->Scale->Max = xmax_limit;
		} else {
			panel->XAxis->Scale->Min = this->find_min(ans).y;
			panel->XAxis->Scale->Max = this->find_max(ans).y;
		}
/*
		// Устанавливаем интересующий нас интервал по оси Y
		panel->YAxis->Scale->Min = ymin_limit;
		panel->YAxis->Scale->Max = ymax_limit;
*/
		// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
		// В противном случае на рисунке будет показана только часть графика, 
		// которая умещается в интервалы по осям, установленные по умолчанию
		f1_list->Clear();
		f2_list->Clear();
		f3_list->Clear();
		f1_list->AddRange(f1_list_local);
		f2_list->AddRange(f2_list_local);
		f3_list->AddRange(f3_list_local);
		zedGraphControl1->AxisChange();
		//// Обновляем график
		zedGraphControl1->Invalidate();
		zedGraphControl1->Refresh();

	}
	private: System::Void zedGraphControl1_Load(System::Object^  sender, System::EventArgs^  e) {
	}


private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	CheckBox^ btn = static_cast<CheckBox^>(sender);
	if (btn->Checked == true) {
		this->resetSelection(1);
		if (f1_list->Count != 0) {
			GraphPane^ panel = zedGraphControl1->GraphPane;
			panel->CurveList->Clear();
			LineItem^ Curve1 = panel->AddCurve("V(x)", f1_list, Color::Red, SymbolType::None);
			panel->XAxis->Scale->Min = this->find_min(Res.res_vec).x;
			panel->XAxis->Scale->Max = this->find_max(Res.res_vec).x;
			panel->CalcScaleFactor();
			panel->Title->Text = L"График зависимости Изгиба от Точки консоли";
			panel->XAxis->Title->Text = "Точка консоли, м";
			panel->YAxis->Title->Text = "Изгиб, м";
			zedGraphControl1->AxisChange();
			zedGraphControl1->Invalidate();
		}
	}
}
private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	CheckBox^ btn = static_cast<CheckBox^>(sender);
	if (btn->Checked == true) {
		this->resetSelection(2);
		if (f2_list->Count != 0) {
			GraphPane^ panel = zedGraphControl1->GraphPane;
			panel->CurveList->Clear();
			panel->AddCurve("V'(x)", f2_list, Color::Blue, SymbolType::None);
			panel->XAxis->Scale->Min = this->find_min(Res.res_vec).x;
			panel->XAxis->Scale->Max = this->find_max(Res.res_vec).x;
			panel->CalcScaleFactor();
			panel->Title->Text = L"График зависимости Кривизны от Точки консоли";
			panel->XAxis->Title->Text = "Точка консоли, м";
			panel->YAxis->Title->Text = "Кривизна, м";
			zedGraphControl1->AxisChange();
			zedGraphControl1->Invalidate();
		}
	}
}
private: System::Void checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	CheckBox^ btn = static_cast<CheckBox^>(sender);
	if (btn->Checked == true) {
		this->resetSelection(3);
		if (f3_list->Count != 0) {
			GraphPane^ panel = zedGraphControl1->GraphPane;
			panel->CurveList->Clear();
			panel->AddCurve("V(v')", f3_list, Color::Green, SymbolType::None);
			panel->XAxis->Scale->Min = this->find_min(Res.res_vec).y;
			panel->XAxis->Scale->Max = this->find_max(Res.res_vec).y;
			panel->CalcScaleFactor();
			panel->Title->Text = L"График зависимости Изгиба от Кривизны консоли";
			panel->XAxis->Title->Text = "Кривизна, м";
			panel->YAxis->Title->Text = "Изгиб, м";
			zedGraphControl1->AxisChange();
			zedGraphControl1->Invalidate();
		}
	}
}

private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	GraphPane^ panel = zedGraphControl1->GraphPane;
	panel->CurveList->Clear();
	zedGraphControl1->AxisChange();
	zedGraphControl1->Invalidate();
}

};
}
