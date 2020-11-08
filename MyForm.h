#pragma once
#include <math.h>
#include "numerical_methods.h"
#include "numerical_methods_lab2.h"
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



	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ X;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ F_1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ F_2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ H_Col;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Local_Mistake;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Global_Mistake;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Y;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ U;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;

	private: PointPairList^ f1_list = gcnew ZedGraph::PointPairList();

	private: PointPairList^ f2_list = gcnew ZedGraph::PointPairList();

	private: PointPairList^ f3_list = gcnew ZedGraph::PointPairList();

	private: System::Windows::Forms::Label^ label4;

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
			this->Y = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->U = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->H_Col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Local_Mistake = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Global_Mistake = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
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
			this->label4 = (gcnew System::Windows::Forms::Label());
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
			this->button1->Location = System::Drawing::Point(636, 363);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(274, 90);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Draw";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->X, this->Y,
					this->U, this->H_Col, this->Local_Mistake, this->Global_Mistake
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
			// Y
			// 
			this->Y->HeaderText = L"U\'";
			this->Y->MinimumWidth = 6;
			this->Y->Name = L"Y";
			this->Y->ReadOnly = true;
			this->Y->Width = 125;
			// 
			// U
			// 
			this->U->HeaderText = L"U";
			this->U->MinimumWidth = 6;
			this->U->Name = L"U";
			this->U->ReadOnly = true;
			this->U->Width = 125;
			// 
			// H_Col
			// 
			this->H_Col->HeaderText = L"H";
			this->H_Col->Name = L"H_Col";
			this->H_Col->ReadOnly = true;
			this->H_Col->Visible = false;
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
			this->textBox1->Location = System::Drawing::Point(77, 394);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(48, 20);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(44, 430);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"xmax";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(77, 427);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(49, 20);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"5";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(149, 397);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"h";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(168, 393);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(61, 20);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"0,01";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(258, 396);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(18, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"y0";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(292, 393);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(49, 20);
			this->textBox6->TabIndex = 6;
			this->textBox6->Text = L"0";
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(484, 393);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(86, 20);
			this->textBox7->TabIndex = 15;
			this->textBox7->Text = L"1,0E-17";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(443, 396);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(24, 13);
			this->label7->TabIndex = 14;
			this->label7->Text = L"eps";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::SystemColors::Control;
			this->checkBox1->Location = System::Drawing::Point(368, 395);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(59, 17);
			this->checkBox1->TabIndex = 16;
			this->checkBox1->Text = L"Control";
			this->checkBox1->UseVisualStyleBackColor = false;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(484, 427);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(86, 20);
			this->textBox8->TabIndex = 19;
			this->textBox8->Text = L"10000";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(443, 430);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 13);
			this->label8->TabIndex = 18;
			this->label8->Text = L"NMax";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(292, 427);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(49, 20);
			this->textBox9->TabIndex = 21;
			this->textBox9->Text = L"0";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(258, 430);
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
			this->checkBox2->Size = System::Drawing::Size(47, 17);
			this->checkBox2->TabIndex = 22;
			this->checkBox2->Text = L"U(X)";
			this->checkBox2->UseVisualStyleBackColor = false;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->BackColor = System::Drawing::SystemColors::Control;
			this->checkBox3->Location = System::Drawing::Point(565, 71);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(49, 17);
			this->checkBox3->TabIndex = 23;
			this->checkBox3->Text = L"U\'(X)";
			this->checkBox3->UseVisualStyleBackColor = false;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox3_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->BackColor = System::Drawing::SystemColors::Control;
			this->checkBox4->Location = System::Drawing::Point(565, 110);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(50, 17);
			this->checkBox4->TabIndex = 24;
			this->checkBox4->Text = L"U(U\')";
			this->checkBox4->UseVisualStyleBackColor = false;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox4_CheckedChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(44, 467);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(31, 13);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Уравнение:\nu'' = (L^-1 – x*L^-2 )*PL^2/[ EI ]\nУсловия:\nu(0) = 0; u'(0) = 0.\nL = 1.0 м; PL^2 / EI = 2.0 ";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(937, 551);
			this->Controls->Add(this->label4);
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
		panel->CurveList->Clear();
		f1_list->Clear();
		f2_list->Clear();
		f3_list->Clear();
		
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
		tridiagonalMatrixAlg({ 8,6,10,6 }, { -2,-2,-4 }, { -1,2,-1 }, {6,3,8,5});
		this->Local_Mistake->Visible = control;
		this->H_Col->Visible = control;
		double u0 = Convert::ToDouble(textBox9->Text);
		Res = RungeKutta4SS(xmin, xmax, y0, u0, h, control, eps, NMax);
		auto& ans = Res.res_vec;
		this->Global_Mistake->Visible = false;;
		double Max_Local_mis;
		if (control) {
			Max_Local_mis = abs(Res.local_mistake_vec[0]);
			for (size_t j = 0; j < Res.local_mistake_vec.size(); ++j) {
				dataGridView1->Rows->Add(); dataGridView1->Rows[j]->Cells[4]->Value = Res.local_mistake_vec[j];
				dataGridView1->Rows[j]->Cells[3]->Value = Res.h_vec[j];
				if (abs(Res.local_mistake_vec[j]) > Max_Local_mis) Max_Local_mis = abs(Res.local_mistake_vec[j]);
			}
		}
		double ymin = ans[0].v2, ymax = ans[0].v2;
		for (; i < ans.size();) {

			//Äîáàâëåíèå íà ãðàôèê
			f1_list->Add(ans[i].x, ans[i].v2);
			f2_list->Add(ans[i].x, ans[i].y);
			f3_list->Add(ans[i].y, ans[i].v2);

			if (ans[i].y > ymax) ymax = ans[i].y;
			else if (ans[i].y < ymin) ymin = ans[i].y;


			//Ïå÷àòü â òàáëèöó
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = ans[i].x;
			dataGridView1->Rows[i]->Cells[1]->Value = floor(ans[i].y * 1000) / 1000;
			dataGridView1->Rows[i]->Cells[2]->Value = floor(ans[i].v2 * 1000) / 1000;
			i++;
		}
		if (checkBox2->Checked) {
			LineItem^ Curve1 = panel->AddCurve("U(x)", f1_list, Color::Red, SymbolType::None);
			/*panel->YAxis->Scale->Min = std::min(ans[0].v2, ans[ans.size() - 1].v2) - 0.1;
			panel->YAxis->Scale->Max = std::max(ans[0].v2, ans[ans.size() - 1].v2) + abs(std::max(ans[0].v2, ans[ans.size() - 1].v2));*/
			panel->XAxis->Title->Text = "X";
			panel->YAxis->Title->Text = "U";
		} else if (checkBox3->Checked) {
			LineItem^ Curve1 = panel->AddCurve("U'(x)", f2_list, Color::Blue, SymbolType::None);
			panel->XAxis->Title->Text = "X";
			panel->YAxis->Title->Text = "U'";
		} else { 
			LineItem^ Curve1 = panel->AddCurve("U(u')", f3_list, Color::Green, SymbolType::None); 
			panel->XAxis->Title->Text = "U'";
			panel->YAxis->Title->Text = "U";
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

private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	CheckBox^ btn = static_cast<CheckBox^>(sender);
	if (btn->Checked == true) {
		this->resetSelection(1);
		if (f1_list->Count != 0) {
			GraphPane^ panel = zedGraphControl1->GraphPane;
			panel->CurveList->Clear();
			LineItem^ Curve1 = panel->AddCurve("U(x)", f1_list, Color::Red, SymbolType::None);
			panel->XAxis->Title->Text = "X";
			panel->YAxis->Title->Text = "U";
			panel->XAxis->Scale->Min = this->find_min(Res.res_vec).x;
			panel->XAxis->Scale->Max = this->find_max(Res.res_vec).x;
			panel->CalcScaleFactor();
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
			panel->AddCurve("U'(x)", f2_list, Color::Blue, SymbolType::None);
			panel->XAxis->Title->Text = "X";
			panel->YAxis->Title->Text = "U'";
			panel->XAxis->Scale->Min = this->find_min(Res.res_vec).x;
			panel->XAxis->Scale->Max = this->find_max(Res.res_vec).x;
			panel->CalcScaleFactor();
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
			panel->AddCurve("U(y)", f3_list, Color::Green, SymbolType::None);
			panel->XAxis->Title->Text = "U'";
			panel->YAxis->Title->Text = "U";
			panel->XAxis->Scale->Min = this->find_min(Res.res_vec).y;
			panel->XAxis->Scale->Max = this->find_max(Res.res_vec).y;
			panel->CalcScaleFactor();
			zedGraphControl1->AxisChange();
			zedGraphControl1->Invalidate();
		}
	}
}
};
}
