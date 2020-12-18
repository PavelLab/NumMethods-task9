#pragma once

#include "Utils.h"
#include <string.h>
namespace Graph {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

	int graphcount=0;
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
			DrawGraph();
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


	private: System::Windows::Forms::DataGridViewTextBoxColumn^  F_1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  F_2;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;

	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;



	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox7;

	private: System::Windows::Forms::CheckBox^ checkBox1;


	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label9;








	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;






	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::DataGridView^ dataGridView1;







	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;







	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBoxMaxQuH;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ textBoxVicinT;
private: System::Windows::Forms::Label^ label24;

private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::TextBox^ textBoxMaxU;
private: System::Windows::Forms::TextBox^ textBoxMinU;
private: System::Windows::Forms::TextBox^ textBoxMaxT;
private: System::Windows::Forms::TextBox^ textBoxMinT;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ X;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ function;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ NM_function;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ h;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Global_error;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Error_estimate;

































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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->X = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->function = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NM_function = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->h = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Global_error = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Error_estimate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBoxMaxQuH = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBoxVicinT = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->textBoxMaxU = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMinU = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMaxT = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMinT = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->zedGraphControl1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->zedGraphControl1->LinkModifierKeys = System::Windows::Forms::Keys::None;
			this->zedGraphControl1->Location = System::Drawing::Point(14, 110);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(5);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(668, 402);
			this->zedGraphControl1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(846, 525);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(189, 36);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Построить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(276, 725);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(20, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"0;";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(299, 725);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(57, 22);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(412, 613);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(130, 17);
			this->label3->TabIndex = 7;
			this->label3->Text = L"h - начальный шаг";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(631, 613);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(119, 22);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"0,01";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(63, 615);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(64, 22);
			this->textBox4->TabIndex = 13;
			this->textBox4->Text = L"1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(31, 616);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(24, 17);
			this->label4->TabIndex = 12;
			this->label4->Text = L"a3";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(64, 580);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(63, 22);
			this->textBox5->TabIndex = 11;
			this->textBox5->Text = L"1";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(31, 583);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(24, 17);
			this->label5->TabIndex = 10;
			this->label5->Text = L"a1";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(276, 576);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(80, 22);
			this->textBox6->TabIndex = 14;
			this->textBox6->Text = L"1,0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(222, 576);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 17);
			this->label6->TabIndex = 15;
			this->label6->Text = L"u0(0) ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(37, 647);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(19, 17);
			this->label7->TabIndex = 17;
			this->label7->Text = L"m";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(63, 644);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(64, 22);
			this->textBox7->TabIndex = 18;
			this->textBox7->Text = L"1";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(880, 568);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(117, 21);
			this->checkBox1->TabIndex = 20;
			this->checkBox1->Text = L"Контроль ЛП";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(631, 578);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(119, 22);
			this->textBox9->TabIndex = 22;
			this->textBox9->Text = L"0,001";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(412, 579);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(212, 17);
			this->label9->TabIndex = 23;
			this->label9->Text = L"E - параметр для контроля ЛП";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(1150, 577);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(200, 17);
			this->label10->TabIndex = 24;
			this->label10->Text = L"Максимум модуля глоб. погр.";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(1189, 532);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(161, 17);
			this->label11->TabIndex = 25;
			this->label11->Text = L"Максимум модуля ОЛП";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(1386, 532);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(192, 22);
			this->textBox10->TabIndex = 26;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(1386, 577);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(192, 22);
			this->textBox11->TabIndex = 27;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(13, 28);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(118, 17);
			this->label12->TabIndex = 28;
			this->label12->Text = L"Условия задачи:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(138, 38);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(158, 17);
			this->label13->TabIndex = 29;
			this->label13->Text = L"m*du/dx = R; u (0) = u0,";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(321, 38);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(141, 34);
			this->label14->TabIndex = 30;
			this->label14->Text = L"R = – (a1*u + a3*u^3)\r\n\r\n";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column1,
					this->X, this->function, this->NM_function, this->h, this->Global_error, this->Error_estimate
			});
			this->dataGridView1->Location = System::Drawing::Point(691, 110);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 49;
			this->dataGridView1->Size = System::Drawing::Size(1126, 402);
			this->dataGridView1->TabIndex = 2;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"№ шага";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 50;
			// 
			// X
			// 
			this->X->HeaderText = L"x_n";
			this->X->MinimumWidth = 6;
			this->X->Name = L"X";
			this->X->ReadOnly = true;
			this->X->Width = 125;
			// 
			// function
			// 
			this->function->HeaderText = L"U(x_n) - точное решение";
			this->function->MinimumWidth = 6;
			this->function->Name = L"function";
			this->function->ReadOnly = true;
			this->function->Width = 125;
			// 
			// NM_function
			// 
			this->NM_function->HeaderText = L"V(x_n) - численное решение";
			this->NM_function->MinimumWidth = 6;
			this->NM_function->Name = L"NM_function";
			this->NM_function->ReadOnly = true;
			this->NM_function->Width = 125;
			// 
			// h
			// 
			this->h->HeaderText = L"h - шаг";
			this->h->MinimumWidth = 6;
			this->h->Name = L"h";
			this->h->Width = 110;
			// 
			// Global_error
			// 
			this->Global_error->HeaderText = L"Глобальная погрешность";
			this->Global_error->MinimumWidth = 6;
			this->Global_error->Name = L"Global_error";
			this->Global_error->Width = 150;
			// 
			// Error_estimate
			// 
			this->Error_estimate->HeaderText = L"Оценка локальной ппогрешности";
			this->Error_estimate->MinimumWidth = 6;
			this->Error_estimate->Name = L"Error_estimate";
			this->Error_estimate->Width = 150;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(138, 9);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(1010, 17);
			this->label15->TabIndex = 31;
			this->label15->Text = L"Cвободный (горизонтальный) полет точки массы m под действием первоначального толч"
				L"ка и силы сопротивления среды R описывается уравнением:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(138, 72);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(448, 17);
			this->label16->TabIndex = 32;
			this->label16->Text = L"где a1 , a3 – положительные постоянные, u0 – начальная скорость";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(1487, 72);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(230, 17);
			this->label17->TabIndex = 33;
			this->label17->Text = L"Выполнили: Родионов, Семенюта";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(1573, 38);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(74, 17);
			this->label18->TabIndex = 34;
			this->label18->Text = L"4 вариант";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label19->Location = System::Drawing::Point(31, 544);
			this->label19->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(141, 19);
			this->label19->TabIndex = 35;
			this->label19->Text = L"Параметры задачи:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label20->Location = System::Drawing::Point(222, 544);
			this->label20->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(99, 19);
			this->label20->TabIndex = 36;
			this->label20->Text = L"Задача Коши";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label21->Location = System::Drawing::Point(412, 544);
			this->label21->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(142, 19);
			this->label21->TabIndex = 37;
			this->label21->Text = L"Параметры метода:";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(46, 758);
			this->label22->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(228, 17);
			this->label22->TabIndex = 38;
			this->label22->Text = L"Максимальное количество шагов";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(46, 725);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(215, 17);
			this->label1->TabIndex = 39;
			this->label1->Text = L"Интервал расчета траектории:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(46, 698);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(122, 19);
			this->label8->TabIndex = 40;
			this->label8->Text = L"Опции рассчета:";
			// 
			// textBoxMaxQuH
			// 
			this->textBoxMaxQuH->Location = System::Drawing::Point(299, 755);
			this->textBoxMaxQuH->Margin = System::Windows::Forms::Padding(4);
			this->textBoxMaxQuH->Name = L"textBoxMaxQuH";
			this->textBoxMaxQuH->Size = System::Drawing::Size(57, 22);
			this->textBoxMaxQuH->TabIndex = 41;
			this->textBoxMaxQuH->Text = L"10000";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(46, 786);
			this->label23->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(186, 34);
			this->label23->TabIndex = 42;
			this->label23->Text = L"Критерий остановки счета\r\n(окрестность t)";
			// 
			// textBoxVicinT
			// 
			this->textBoxVicinT->Location = System::Drawing::Point(299, 785);
			this->textBoxVicinT->Margin = System::Windows::Forms::Padding(4);
			this->textBoxVicinT->Name = L"textBoxVicinT";
			this->textBoxVicinT->Size = System::Drawing::Size(57, 22);
			this->textBoxVicinT->TabIndex = 43;
			this->textBoxVicinT->Text = L"0,001";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label24->Location = System::Drawing::Point(412, 698);
			this->label24->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(196, 19);
			this->label24->TabIndex = 44;
			this->label24->Text = L"Масштабирование графика:";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(412, 725);
			this->label25->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(127, 17);
			this->label25->TabIndex = 46;
			this->label25->Text = L"Интервал по оси t";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(412, 758);
			this->label26->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(131, 17);
			this->label26->TabIndex = 47;
			this->label26->Text = L"Интервал по оси u";
			// 
			// textBoxMaxU
			// 
			this->textBoxMaxU->Location = System::Drawing::Point(625, 758);
			this->textBoxMaxU->Margin = System::Windows::Forms::Padding(4);
			this->textBoxMaxU->Name = L"textBoxMaxU";
			this->textBoxMaxU->Size = System::Drawing::Size(57, 22);
			this->textBoxMaxU->TabIndex = 48;
			this->textBoxMaxU->Text = L"1,2";
			// 
			// textBoxMinU
			// 
			this->textBoxMinU->Location = System::Drawing::Point(556, 758);
			this->textBoxMinU->Margin = System::Windows::Forms::Padding(4);
			this->textBoxMinU->Name = L"textBoxMinU";
			this->textBoxMinU->Size = System::Drawing::Size(57, 22);
			this->textBoxMinU->TabIndex = 49;
			this->textBoxMinU->Text = L"-0,2";
			// 
			// textBoxMaxT
			// 
			this->textBoxMaxT->Location = System::Drawing::Point(625, 722);
			this->textBoxMaxT->Margin = System::Windows::Forms::Padding(4);
			this->textBoxMaxT->Name = L"textBoxMaxT";
			this->textBoxMaxT->Size = System::Drawing::Size(57, 22);
			this->textBoxMaxT->TabIndex = 50;
			this->textBoxMaxT->Text = L"1,2";
			// 
			// textBoxMinT
			// 
			this->textBoxMinT->Location = System::Drawing::Point(556, 722);
			this->textBoxMinT->Margin = System::Windows::Forms::Padding(4);
			this->textBoxMinT->Name = L"textBoxMinT";
			this->textBoxMinT->Size = System::Drawing::Size(57, 22);
			this->textBoxMinT->TabIndex = 51;
			this->textBoxMinT->Text = L"-0,2";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(846, 679);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(189, 38);
			this->button3->TabIndex = 52;
			this->button3->Text = L"Масштабировать";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(846, 628);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(189, 36);
			this->button2->TabIndex = 53;
			this->button2->Text = L"Очистить график";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1830, 844);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBoxMinT);
			this->Controls->Add(this->textBoxMaxT);
			this->Controls->Add(this->textBoxMinU);
			this->Controls->Add(this->textBoxMaxU);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->textBoxVicinT);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->textBoxMaxQuH);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->zedGraphControl1);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"Задача 9. 4 вариант. Родионов, Семенюта";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void DrawGraph(void) {
			GraphPane^ panel = zedGraphControl1->GraphPane;
			panel->XAxis->Title->Text = "t, время";
			panel->YAxis->Title->Text = "u, скорость";
			panel->Title->Text = "График зависимости скорости от времени";
		}

#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		
		GraphPane^ panel = zedGraphControl1->GraphPane;
		//panel->CurveList->Clear();
		//PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f2_list = gcnew ZedGraph::PointPairList();
		
		//Параметры системы
		double a1 = Convert::ToDouble(textBox5->Text);
		double a3 = Convert::ToDouble(textBox4->Text);
		double m = Convert::ToDouble(textBox7->Text);
		parameter param(a1, a3, m);
		
		//Параметры метода
		double eps = Convert::ToDouble(textBox9->Text);
		double step = Convert::ToDouble(textBox3->Text);
		
		//Опции рассчета 
		double MaxQustep = Convert::ToDouble(textBoxMaxQuH->Text);
		double VicinT = Convert::ToDouble(textBoxVicinT->Text);
		
		//Погрешность
		double max_E=0, max_Er_est=0;
		
		// Интервал, где есть данные
		//(xmin == 0 всегда)
		double xmin = 0;
		double xmax = Convert::ToDouble(textBox2->Text);

		double xmin_limit = xmin - 0.1;
		double xmax_limit = xmax + 0.1;

		// Список точек
		double u0 = Convert::ToDouble(textBox6->Text);
		int i = 1;
		dataGridView1->Rows->Clear();
		//Вывод первой точки
		dataGridView1->Rows->Add();
		dataGridView1->Rows[0]->Cells[0]->Value = 0;
		dataGridView1->Rows[0]->Cells[1]->Value = xmin;
		dataGridView1->Rows[0]->Cells[2]->Value = u0;
		
		
		//Считаем и выводим сonst в истинном решении
		param.calculate_const(u0);
		//textBox8->Text = Convert::ToString(param.c);

		//Добавление 1ой точки на график
		//f1_list->Add(xmin, u0);
		f2_list->Add(xmin, u0);
		
		std::vector<double> new_point;
		double y_funtion_1_RK_4, y_function_1;
		double flag;
		while (true)
		{
			//Проверка на максимальное количество шагов
			if (i > MaxQustep) break;
			
			//Проверка на попадание в нужную окрестность
			while (true) {
				if (checkBox1->Checked)
				{
					new_point = utils::next_point_with_step_conrol(utils::runge_kutta_4, utils::function_1_derivative, xmin, u0, step, eps, param);
				}
				else
				{
					new_point = utils::next_point(utils::runge_kutta_4, utils::function_1_derivative, xmin, u0, step, param);
				}
				if (new_point[0] <= xmax) break;
				else step = new_point[3] / 2.;
			}
			xmin = new_point[0];
			
			y_funtion_1_RK_4 = new_point[1];
			y_function_1 = utils::function_1(xmin, u0, param);


			//f1_list->Add(xmin, y_function_1);
			f2_list->Add(xmin, y_funtion_1_RK_4);

			max_E = utils::max_error(max_E, y_function_1 - y_funtion_1_RK_4);
			max_Er_est = utils::max_error(max_Er_est, utils::error_estimate(new_point[4], new_point[1], 4));
			
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = i;
			dataGridView1->Rows[i]->Cells[1]->Value = xmin;
			dataGridView1->Rows[i]->Cells[2]->Value = y_function_1;
			dataGridView1->Rows[i]->Cells[3]->Value = y_funtion_1_RK_4;
			dataGridView1->Rows[i]->Cells[4]->Value = new_point[3];
			dataGridView1->Rows[i]->Cells[5]->Value = y_function_1 - y_funtion_1_RK_4;
			dataGridView1->Rows[i]->Cells[6]->Value = utils::error_estimate(new_point[4], new_point[1], 4);
			u0 = y_funtion_1_RK_4;
			step = new_point[2];
			i++;
			
			//Попали в нужную окрестность t
			if ((xmin <= xmax) && (xmin > xmax - VicinT))
				break;

		}
		//Вывод погрешности
		textBox11->Text = Convert::ToString(max_E);
		textBox10->Text = Convert::ToString(max_Er_est);

		//LineItem Curve1 = panel->AddCurve("Истинная траектория", f1_list, Color::Red,SymbolType::None);
		graphcount++;
		if (graphcount % 3 == 0) LineItem Curve2 = panel->AddCurve("Численная траектория", f2_list, Color::Blue, SymbolType::Plus);
		if (graphcount % 3 == 1) LineItem Curve2 = panel->AddCurve("Численная траектория", f2_list, Color::Green, SymbolType::Plus);
		if (graphcount % 3 == 2) LineItem Curve2 = panel->AddCurve("Численная траектория", f2_list, Color::Red, SymbolType::Plus);
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
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	
	GraphPane^ panel = zedGraphControl1->GraphPane;
	double xmin = Convert::ToDouble(textBoxMinT->Text);
	double xmax = Convert::ToDouble(textBoxMaxT->Text);
	// Устанавливаем интересующий нас интервал по оси t
	panel->XAxis->Scale->Min = xmin;
	panel->XAxis->Scale->Max = xmax;

	double ymin = Convert::ToDouble(textBoxMinU->Text);
	double ymax = Convert::ToDouble(textBoxMaxU->Text);
	// Устанавливаем интересующий нас интервал по оси u
	panel->YAxis->Scale->Min = ymin;
	panel->YAxis->Scale->Max = ymax;

	// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
	// В противном случае на рисунке будет показана только часть графика, 
	// которая умещается в интервалы по осям, установленные по умолчанию
	zedGraphControl1->AxisChange();
	// Обновляем график
	zedGraphControl1->Invalidate();

}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		graphcount = 0;
		GraphPane^ panel = zedGraphControl1->GraphPane;
		panel->CurveList->Clear();
		// Обновляем график
		zedGraphControl1->Invalidate();
	}
};
}
