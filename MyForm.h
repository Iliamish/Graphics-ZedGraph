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



	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;

	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label8;





	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ X;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ F_1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ F_2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ H_Col;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Local_Mistake;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Global_Mistake;


































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
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->X = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F_1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F_2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->H_Col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Local_Mistake = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Global_Mistake = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(38, 30);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(4);
			this->zedGraphControl1->Name = L"zedGraphControl1";
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
			this->button1->Location = System::Drawing::Point(736, 381);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(353, 88);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->X, this->F_1,
					this->F_2, this->H_Col, this->Local_Mistake, this->Global_Mistake
			});
			this->dataGridView1->Location = System::Drawing::Point(619, 30);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(470, 327);
			this->dataGridView1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(44, 397);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(28, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"xmin";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(78, 394);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(48, 20);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(153, 396);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"xmax";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(190, 393);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(49, 20);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(265, 397);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"h";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(284, 393);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(61, 20);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"0,1";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(190, 433);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(49, 20);
			this->textBox4->TabIndex = 13;
			this->textBox4->Text = L"0,0";
			this->textBox4->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(171, 435);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"b";
			this->label4->Visible = false;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(78, 434);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(48, 20);
			this->textBox5->TabIndex = 11;
			this->textBox5->Text = L"1,0";
			this->textBox5->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(59, 436);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(13, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"a";
			this->label5->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(373, 397);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(18, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"y0";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(392, 394);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(49, 20);
			this->textBox6->TabIndex = 6;
			this->textBox6->Text = L"5";
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(591, 391);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(86, 20);
			this->textBox7->TabIndex = 15;
			this->textBox7->Text = L"0,00001";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(561, 395);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(24, 13);
			this->label7->TabIndex = 14;
			this->label7->Text = L"eps";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::SystemColors::Control;
			this->checkBox1->Location = System::Drawing::Point(480, 395);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(59, 17);
			this->checkBox1->TabIndex = 16;
			this->checkBox1->Text = L"Control";
			this->checkBox1->UseVisualStyleBackColor = false;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(38, 7);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(111, 17);
			this->radioButton1->TabIndex = 17;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Тестовая задача";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(155, 7);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(70, 17);
			this->radioButton2->TabIndex = 17;
			this->radioButton2->Text = L"Задача 1";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(246, 7);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(70, 17);
			this->radioButton3->TabIndex = 17;
			this->radioButton3->Text = L"Задача 2";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(591, 430);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(86, 20);
			this->textBox8->TabIndex = 19;
			this->textBox8->Text = L"100";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(553, 433);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 13);
			this->label8->TabIndex = 18;
			this->label8->Text = L"NMax";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(392, 433);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(49, 20);
			this->textBox9->TabIndex = 21;
			this->textBox9->Text = L"1,0";
			this->textBox9->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(373, 436);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(18, 13);
			this->label9->TabIndex = 20;
			this->label9->Text = L"z0";
			this->label9->Visible = false;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->BackColor = System::Drawing::SystemColors::Control;
			this->checkBox2->Location = System::Drawing::Point(480, 434);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(48, 17);
			this->checkBox2->TabIndex = 22;
			this->checkBox2->Text = L"Y\'(Y)";
			this->checkBox2->UseVisualStyleBackColor = false;
			this->checkBox2->Visible = false;
			// 
			// X
			// 
			this->X->HeaderText = L"X";
			this->X->MinimumWidth = 6;
			this->X->Name = L"X";
			this->X->ReadOnly = true;
			this->X->Width = 50;
			// 
			// F_1
			// 
			this->F_1->HeaderText = L"V";
			this->F_1->MinimumWidth = 6;
			this->F_1->Name = L"F_1";
			this->F_1->ReadOnly = true;
			// 
			// F_2
			// 
			this->F_2->HeaderText = L"F_2";
			this->F_2->MinimumWidth = 6;
			this->F_2->Name = L"F_2";
			this->F_2->ReadOnly = true;
			// 
			// H_Col
			// 
			this->H_Col->HeaderText = L"H";
			this->H_Col->Name = L"H_Col";
			this->H_Col->ReadOnly = true;
			this->H_Col->Visible = false;
			this->H_Col->Width = 70;
			// 
			// Local_Mistake
			// 
			this->Local_Mistake->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->Local_Mistake->HeaderText = L"Оценка локальной погрешности";
			this->Local_Mistake->MinimumWidth = 50;
			this->Local_Mistake->Name = L"Local_Mistake";
			this->Local_Mistake->ReadOnly = true;
			this->Local_Mistake->Visible = false;
			this->Local_Mistake->Width = 196;
			// 
			// Global_Mistake
			// 
			this->Global_Mistake->HeaderText = L"Глобальная погрешность";
			this->Global_Mistake->Name = L"Global_Mistake";
			this->Global_Mistake->ReadOnly = true;
			this->Global_Mistake->ToolTipText = L"|U-V|";
			this->Global_Mistake->Visible = false;
			this->Global_Mistake->Width = 125;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1118, 481);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->zedGraphControl1);
			this->Name = L"MyForm";
			this->Text = L"Лабораторная работа 1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 

		//double f1(double x){
		//	return -4.5*x;
		//}

		//double f2(double x) {
		//	return sin(2 * x);
		//}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		GraphPane^ panel = zedGraphControl1->GraphPane;
		panel->CurveList->Clear();
		PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		panel->Title->Text = "";
		//Только для тестовой задачи
		PointPairList^ f2_list = gcnew ZedGraph::PointPairList();

		//Только для 2 задачи
		PointPairList^ f3_list = gcnew ZedGraph::PointPairList();

		// Интервал, где есть данные
		double xmin = Convert::ToDouble(textBox1->Text);
		double xmax = Convert::ToDouble(textBox2->Text);

		double h = Convert::ToDouble(textBox3->Text);
		bool control = checkBox1->Checked;
		double eps = Convert::ToDouble(textBox7->Text);

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
		
		this->Local_Mistake->Visible = control;
		this->H_Col->Visible = control;

		if (radioButton1->Checked) {
			this->F_2->Visible = true;
			this->F_2->HeaderText = "U";
			auto Res = RungeKutta4(f_test, xmin, xmax, y0, h, control, eps,NMax);
			auto& ans = Res.res_vec;
			double Max_Local_mis;
			if (control) {
				Max_Local_mis = abs(Res.local_mistake_vec[0]);
				for (size_t j = 0; j < Res.local_mistake_vec.size(); ++j) {
					dataGridView1->Rows->Add(); dataGridView1->Rows[j]->Cells[4]->Value = Res.local_mistake_vec[j];
					dataGridView1->Rows[j]->Cells[3]->Value = Res.h_vec[j];
					if (abs(Res.local_mistake_vec[j]) > Max_Local_mis) Max_Local_mis = abs(Res.local_mistake_vec[j]);
				}
			}
			this->Global_Mistake->Visible = true;
			double MaxGlobalMistake = ans[0].second - test_sol(ans[0].first, y0);
			for (; i < ans.size();)
			{

				//Добавление на график
				f1_list->Add(ans[i].first, ans[i].second);
				f2_list->Add(ans[i].first, test_sol(ans[i].first, y0));

				//Печать в таблицу
				dataGridView1->Rows->Add();
				dataGridView1->Rows[i]->Cells[0]->Value = ans[i].first;
				dataGridView1->Rows[i]->Cells[1]->Value = floor(ans[i].second * 1000) / 1000;
				dataGridView1->Rows[i]->Cells[2]->Value = floor(test_sol(ans[i].first, y0) * 1000) / 1000;

				double mtmp = ans[i].second - test_sol(ans[i].first, y0);
				dataGridView1->Rows[i]->Cells[5]->Value = mtmp ;
				MaxGlobalMistake = (MaxGlobalMistake < abs(mtmp)) ? mtmp: MaxGlobalMistake;
				
				i++;
			}
			LineItem Curve1 = panel->AddCurve("V(x)", f1_list, Color::Red, SymbolType::None);
			LineItem Curve2 = panel->AddCurve("U(x)", f2_list, Color::Green, SymbolType::Plus);

			auto tmp = "Максимальная по модулю глобальная погрешность = "+(MaxGlobalMistake)+ "\n";
				
			if (control) {
				tmp += "Максимальная по модулю локальная погрешность = " + Max_Local_mis+"\n Всего удвоений шага: "+Res.ND+"\nВсего делений шага: "+ Res.NH;
			}
			MessageBox::Show(tmp);
		}
		else if (radioButton2->Checked) {
			double Max_Local_mis;
			this->F_2->Visible = false;
			this->Global_Mistake->Visible = false;
			auto Res = RungeKutta4(f1, xmin, xmax, y0, h, control, eps,NMax);
			auto& ans = Res.res_vec;
			if (control) {
				Max_Local_mis = abs(Res.local_mistake_vec[0]);
				for (size_t j = 0; j < Res.local_mistake_vec.size(); ++j) { 
					dataGridView1->Rows->Add(); dataGridView1->Rows[j]->Cells[4]->Value = Res.local_mistake_vec[j]; 
					dataGridView1->Rows[j]->Cells[3]->Value = Res.h_vec[j];
					if (abs(Res.local_mistake_vec[j]) > Max_Local_mis) Max_Local_mis = abs(Res.local_mistake_vec[j]);
				}
			}
			for (; i < ans.size();)
			{

				//Добавление на график
				f1_list->Add(ans[i].first, ans[i].second);

				//Печать в таблицу
				dataGridView1->Rows->Add();
				dataGridView1->Rows[i]->Cells[0]->Value = ans[i].first;
				dataGridView1->Rows[i]->Cells[1]->Value = floor(ans[i].second * 1000) / 1000;

				i++;
			}
			LineItem Curve1 = panel->AddCurve("V(x)", f1_list, Color::Red, SymbolType::None);

			if (control) { 
				auto tmp = "Максимальная по модулю локальная погрешность =" + (Max_Local_mis)+"\nВсего удвоений шага: " + Res.ND + "\nВсего делений шага: " + Res.NH;;
				MessageBox::Show(tmp);
			}
		}
		else if (radioButton3->Checked) {
			double z0 = Convert::ToDouble(textBox9->Text);
			double a = Convert::ToDouble(textBox5->Text);
			double b = Convert::ToDouble(textBox4->Text);
			auto Res=RungeKutta4SS(f2, xmin, xmax, y0, z0, h,a,b, control, eps, NMax);
			auto& ans = Res.res_vec;
			this->Global_Mistake->Visible = false;
			this->F_2->Visible = true;
			this->F_2->HeaderText = "Y'";
			double Max_Local_mis;
			if (control) {
				Max_Local_mis = abs(Res.local_mistake_vec[0]);
				for (size_t j = 0; j < Res.local_mistake_vec.size(); ++j) {
					dataGridView1->Rows->Add(); dataGridView1->Rows[j]->Cells[4]->Value = Res.local_mistake_vec[j];
					dataGridView1->Rows[j]->Cells[3]->Value = Res.h_vec[j];
					if (abs(Res.local_mistake_vec[j]) > Max_Local_mis) Max_Local_mis = abs(Res.local_mistake_vec[j]);
				}
			}
			double ymin = ans[0].y, ymax = ans[0].y;
			for (; i < ans.size();)
			{

				//Добавление на график
				f1_list->Add(ans[i].x, ans[i].y);
				f2_list->Add(ans[i].x, ans[i].z);
				f3_list->Add(ans[i].y, ans[i].z);

				if (ans[i].y > ymax) ymax = ans[i].y;
				else if(ans[i].y < ymin) ymin = ans[i].y;


				//Печать в таблицу
				dataGridView1->Rows->Add();
				dataGridView1->Rows[i]->Cells[0]->Value = ans[i].x;
				dataGridView1->Rows[i]->Cells[1]->Value = floor(ans[i].y * 1000) / 1000;
				dataGridView1->Rows[i]->Cells[2]->Value = floor(ans[i].z * 1000) / 1000;
				i++;
			}
			if (checkBox2->Checked) {
				LineItem Curve1 = panel->AddCurve("V'(V)", f3_list, Color::Red, SymbolType::None); 
				panel->XAxis->Scale->Min = ymin-0.1;
				panel->XAxis->Scale->Max =ymax+0.1;
				panel->XAxis->Title->Text = "V";
				panel->YAxis->Title->Text = "V'";
			}
			else LineItem Curve1 = panel->AddCurve("V(x)", f1_list, Color::Red, SymbolType::None);
			//LineItem Curve2 = panel->AddCurve("Y'(x)", f2_list, Color::Green, SymbolType::Plus);


			if (control) {
				auto tmp = "Максимальная по модулю локальная погрешность =" + (Max_Local_mis)+"\nВсего удвоений шага: " + Res.ND + "\nВсего делений шага: " + Res.NH;;
				MessageBox::Show(tmp);
			}
		}

		

		// Устанавливаем интересующий нас интервал по оси X
		if (!checkBox2->Checked || !radioButton3->Checked) {
			panel->XAxis->Scale->Min = xmin_limit;
			panel->XAxis->Scale->Max = xmax_limit;
			panel->XAxis->Title->Text = "X Axis";
			panel->YAxis->Title->Text = "V Axis";
		}
/*
		// Устанавливаем интересующий нас интервал по оси Y
		panel->YAxis->Scale->Min = ymin_limit;
		panel->YAxis->Scale->Max = ymax_limit;
*/
		// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
		// В противном случае на рисунке будет показана только часть графика, 
		// которая умещается в интервалы по осям, установленные по умолчанию
		zedGraphControl1->AxisChange();
		// Обновляем график
		zedGraphControl1->Invalidate();

	}
	private: System::Void zedGraphControl1_Load(System::Object^  sender, System::EventArgs^  e) {
	}


private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->label4->Visible = radioButton3->Checked;
	this->label5->Visible = radioButton3->Checked;
	this->label9->Visible = radioButton3->Checked;
	this->textBox4->Visible = radioButton3->Checked;
	this->textBox5->Visible = radioButton3->Checked;
	this->textBox9->Visible = radioButton3->Checked;
	this->checkBox2->Visible = radioButton3->Checked;
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
