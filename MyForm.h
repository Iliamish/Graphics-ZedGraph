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
	private: System::Windows::Forms::Button^  button2;
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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ X;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ F_1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ F_2;
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
			this->X = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F_1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F_2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Local_Mistake = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Global_Mistake = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
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
			this->button1->Location = System::Drawing::Point(710, 386);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(142, 29);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Draw";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->X, this->F_1,
					this->F_2, this->Local_Mistake, this->Global_Mistake
			});
			this->dataGridView1->Location = System::Drawing::Point(636, 30);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(274, 327);
			this->dataGridView1->TabIndex = 2;
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
			this->F_1->HeaderText = L"F_1";
			this->F_1->MinimumWidth = 6;
			this->F_1->Name = L"F_1";
			this->F_1->ReadOnly = true;
			this->F_1->Width = 125;
			// 
			// F_2
			// 
			this->F_2->HeaderText = L"F_2";
			this->F_2->MinimumWidth = 6;
			this->F_2->Name = L"F_2";
			this->F_2->ReadOnly = true;
			this->F_2->Width = 125;
			// 
			// Local_Mistake
			// 
			this->Local_Mistake->HeaderText = L"Local_Mistake";
			this->Local_Mistake->Name = L"Local_Mistake";
			this->Local_Mistake->ReadOnly = true;
			this->Local_Mistake->Visible = false;
			// 
			// Global_Mistake
			// 
			this->Global_Mistake->HeaderText = L"Global_Mistake";
			this->Global_Mistake->Name = L"Global_Mistake";
			this->Global_Mistake->ReadOnly = true;
			this->Global_Mistake->Visible = false;
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
			// button2
			// 
			this->button2->Location = System::Drawing::Point(710, 437);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(142, 29);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Zoom";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(190, 437);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(49, 20);
			this->textBox4->TabIndex = 13;
			this->textBox4->Text = L"1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(171, 440);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"b";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(78, 436);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(48, 20);
			this->textBox5->TabIndex = 11;
			this->textBox5->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(59, 438);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(13, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"a";
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
			this->textBox8->Location = System::Drawing::Point(591, 422);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(86, 20);
			this->textBox8->TabIndex = 19;
			this->textBox8->Text = L"100";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(553, 425);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 13);
			this->label8->TabIndex = 18;
			this->label8->Text = L"NMax";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(922, 497);
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
			this->Controls->Add(this->button2);
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
			this->Text = L"MyForm";
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

		//Только для тестовой задачи
		PointPairList^ f2_list = gcnew ZedGraph::PointPairList();

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
		
		
		if (radioButton1->Checked) {
			this->F_2->Visible = true;
			auto Res = RungeKutta4(f_test, xmin, xmax, y0, h, control, eps,NMax);
			auto& ans = Res.res_vec;
			double Max_Local_mis;
			if (control) {
				this->Local_Mistake->Visible = true;
				Max_Local_mis = abs(Res.local_mistake_vec[0]);
				for (size_t j = 0; j < Res.local_mistake_vec.size(); ++j) {
					dataGridView1->Rows->Add(); dataGridView1->Rows[j]->Cells[3]->Value = Res.local_mistake_vec[j];
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
				dataGridView1->Rows[i]->Cells[4]->Value = mtmp ;
				MaxGlobalMistake = (MaxGlobalMistake < abs(mtmp)) ? mtmp: MaxGlobalMistake;
				
				i++;
			}
			LineItem Curve1 = panel->AddCurve("F1(x)", f1_list, Color::Red, SymbolType::None);
			LineItem Curve2 = panel->AddCurve("F2(x)", f2_list, Color::Green, SymbolType::Plus);

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
				this->Local_Mistake->Visible = true;
				Max_Local_mis = abs(Res.local_mistake_vec[0]);
				for (size_t j = 0; j < Res.local_mistake_vec.size(); ++j) { 
					dataGridView1->Rows->Add(); dataGridView1->Rows[j]->Cells[3]->Value = Res.local_mistake_vec[j]; 
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
			LineItem Curve1 = panel->AddCurve("F1(x)", f1_list, Color::Red, SymbolType::None);

			if (control) { 
				auto tmp = "Максимальная по модулю локальная погрешность =" + (Max_Local_mis)+"\nВсего удвоений шага: " + Res.ND + "\nВсего делений шага: " + Res.NH;;
				MessageBox::Show(tmp);
			}
		}
		else if (radioButton3->Checked) {
			auto Res=RungeKutta4SS(f2, xmin, xmax, y0, 1.0, h, control, eps, NMax);
			auto& ans = Res.res_vec;
			//this->F_2->Visible = true;
			double Max_Local_mis;
			if (control) {
				this->Local_Mistake->Visible = true;
				Max_Local_mis = abs(Res.local_mistake_vec[0]);
				for (size_t j = 0; j < Res.local_mistake_vec.size(); ++j) {
					dataGridView1->Rows->Add(); dataGridView1->Rows[j]->Cells[3]->Value = Res.local_mistake_vec[j];
					if (abs(Res.local_mistake_vec[j]) > Max_Local_mis) Max_Local_mis = abs(Res.local_mistake_vec[j]);
				}
			}
			for (; i < ans.size();)
			{

				//Добавление на график
				f1_list->Add(ans[i].x, ans[i].y);

				//Печать в таблицу
				dataGridView1->Rows->Add();
				dataGridView1->Rows[i]->Cells[0]->Value = ans[i].x;
				dataGridView1->Rows[i]->Cells[1]->Value = floor(ans[i].y * 1000) / 1000;

				i++;
			}
			LineItem Curve1 = panel->AddCurve("F1(x)", f1_list, Color::Red, SymbolType::None);

			if (control) {
				auto tmp = "Максимальная по модулю локальная погрешность =" + (Max_Local_mis)+"\nВсего удвоений шага: " + Res.ND + "\nВсего делений шага: " + Res.NH;;
				MessageBox::Show(tmp);
			}
		}

		

		// Устанавливаем интересующий нас интервал по оси X
		panel->XAxis->Scale->Min = xmin_limit;
		panel->XAxis->Scale->Max = xmax_limit;
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

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	
	GraphPane^ panel = zedGraphControl1->GraphPane;
	double xmin = Convert::ToDouble(textBox5->Text);
	double xmax = Convert::ToDouble(textBox4->Text);
	
	// Устанавливаем интересующий нас интервал по оси X
	panel->XAxis->Scale->Min = xmin;
	panel->XAxis->Scale->Max = xmax;

	// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
	// В противном случае на рисунке будет показана только часть графика, 
	// которая умещается в интервалы по осям, установленные по умолчанию
	zedGraphControl1->AxisChange();
	// Обновляем график
	zedGraphControl1->Invalidate();


}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
