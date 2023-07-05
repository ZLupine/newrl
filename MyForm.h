#pragma once

namespace NelderMid {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart;
	protected:

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ APPLY;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::NumericUpDown^ A1X1;
	private: System::Windows::Forms::NumericUpDown^ A1X2;


	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;


	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::NumericUpDown^ A3X1;
	private: System::Windows::Forms::NumericUpDown^ A3X2;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::NumericUpDown^ A2X1;
	private: System::Windows::Forms::NumericUpDown^ A2X2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::GroupBox^ groupBox2;








	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nomer;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ N;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ B;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ C;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ fA;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ fB;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ fC;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Go;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ BS;
	private: System::Windows::Forms::TextBox^ ZMNK;























































	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->APPLY = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->A1X1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->A1X2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->A3X1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->A3X2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->A2X1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->A2X2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Nomer = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->N = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->B = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->C = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fA = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fB = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Go = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->BS = (gcnew System::Windows::Forms::TextBox());
			this->ZMNK = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1X1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1X2))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3X1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3X2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2X1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2X2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// chart
			// 
			this->chart->BackColor = System::Drawing::Color::Lavender;
			chartArea1->Name = L"ChartArea1";
			this->chart->ChartAreas->Add(chartArea1);
			this->chart->Location = System::Drawing::Point(6, 29);
			this->chart->Name = L"chart";
			series1->BorderWidth = 3;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Color = System::Drawing::Color::Navy;
			series1->EmptyPointStyle->BackImageAlignment = System::Windows::Forms::DataVisualization::Charting::ChartImageAlignmentStyle::Center;
			series1->IsVisibleInLegend = false;
			series1->LabelBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			series1->Name = L"Series1";
			series2->BorderWidth = 3;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Color = System::Drawing::Color::Red;
			series2->CustomProperties = L"LabelStyle=Top";
			series2->EmptyPointStyle->BorderDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::DashDot;
			series2->IsVisibleInLegend = false;
			series2->Name = L"Series2";
			this->chart->Series->Add(series1);
			this->chart->Series->Add(series2);
			this->chart->Size = System::Drawing::Size(417, 370);
			this->chart->TabIndex = 0;
			this->chart->Text = L"chart";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(6, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 18);
			this->label1->TabIndex = 2;
			this->label1->Text = L"x1 = ";
			// 
			// APPLY
			// 
			this->APPLY->Location = System::Drawing::Point(62, 165);
			this->APPLY->Name = L"APPLY";
			this->APPLY->Size = System::Drawing::Size(233, 39);
			this->APPLY->TabIndex = 3;
			this->APPLY->Text = L"Выполнить расчёт";
			this->APPLY->UseVisualStyleBackColor = true;
			this->APPLY->Click += gcnew System::EventHandler(this, &MyForm::APPLY_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Минимум", L"Максимум" });
			this->comboBox1->Location = System::Drawing::Point(81, 126);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 33);
			this->comboBox1->TabIndex = 6;
			// 
			// A1X1
			// 
			this->A1X1->DecimalPlaces = 1;
			this->A1X1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->A1X1->Location = System::Drawing::Point(52, 61);
			this->A1X1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->A1X1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, System::Int32::MinValue });
			this->A1X1->Name = L"A1X1";
			this->A1X1->Size = System::Drawing::Size(57, 24);
			this->A1X1->TabIndex = 7;
			// 
			// A1X2
			// 
			this->A1X2->DecimalPlaces = 1;
			this->A1X2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->A1X2->Location = System::Drawing::Point(52, 86);
			this->A1X2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->A1X2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, System::Int32::MinValue });
			this->A1X2->Name = L"A1X2";
			this->A1X2->Size = System::Drawing::Size(57, 24);
			this->A1X2->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(6, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 18);
			this->label2->TabIndex = 9;
			this->label2->Text = L"x2 = ";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(298, 405);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(125, 51);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Шаг вперёд";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(9, 405);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 51);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Шаг назад";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(140, 417);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(149, 20);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Номер итерации";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(167, 440);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 30);
			this->textBox2->TabIndex = 15;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(4, 129);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(69, 25);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Найти";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->A3X1);
			this->groupBox1->Controls->Add(this->A3X2);
			this->groupBox1->Controls->Add(this->APPLY);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->A2X1);
			this->groupBox1->Controls->Add(this->A2X2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->A1X1);
			this->groupBox1->Controls->Add(this->A1X2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(12, 9);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(432, 210);
			this->groupBox1->TabIndex = 19;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Начальные условия";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(274, 44);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(19, 18);
			this->label12->TabIndex = 20;
			this->label12->Text = L"C";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(164, 42);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(18, 18);
			this->label11->TabIndex = 19;
			this->label11->Text = L"B";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(59, 40);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(17, 18);
			this->label10->TabIndex = 18;
			this->label10->Text = L"A";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(217, 65);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(40, 18);
			this->label8->TabIndex = 14;
			this->label8->Text = L"x1 = ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(217, 94);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(40, 18);
			this->label9->TabIndex = 17;
			this->label9->Text = L"x2 = ";
			// 
			// A3X1
			// 
			this->A3X1->DecimalPlaces = 1;
			this->A3X1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->A3X1->Location = System::Drawing::Point(263, 65);
			this->A3X1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->A3X1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, System::Int32::MinValue });
			this->A3X1->Name = L"A3X1";
			this->A3X1->Size = System::Drawing::Size(57, 24);
			this->A3X1->TabIndex = 15;
			// 
			// A3X2
			// 
			this->A3X2->DecimalPlaces = 1;
			this->A3X2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->A3X2->Location = System::Drawing::Point(263, 90);
			this->A3X2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->A3X2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, System::Int32::MinValue });
			this->A3X2->Name = L"A3X2";
			this->A3X2->Size = System::Drawing::Size(57, 24);
			this->A3X2->TabIndex = 16;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(111, 63);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 18);
			this->label4->TabIndex = 10;
			this->label4->Text = L"x1 = ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(111, 92);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(40, 18);
			this->label7->TabIndex = 13;
			this->label7->Text = L"x2 = ";
			// 
			// A2X1
			// 
			this->A2X1->DecimalPlaces = 1;
			this->A2X1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->A2X1->Location = System::Drawing::Point(157, 63);
			this->A2X1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->A2X1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, System::Int32::MinValue });
			this->A2X1->Name = L"A2X1";
			this->A2X1->Size = System::Drawing::Size(56, 24);
			this->A2X1->TabIndex = 11;
			// 
			// A2X2
			// 
			this->A2X2->DecimalPlaces = 1;
			this->A2X2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->A2X2->Location = System::Drawing::Point(157, 88);
			this->A2X2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->A2X2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, System::Int32::MinValue });
			this->A2X2->Name = L"A2X2";
			this->A2X2->Size = System::Drawing::Size(56, 24);
			this->A2X2->TabIndex = 12;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Nomer,
					this->N, this->B, this->C, this->fA, this->fB, this->fC, this->Go
			});
			this->dataGridView1->Location = System::Drawing::Point(6, 21);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(769, 672);
			this->dataGridView1->TabIndex = 20;
			// 
			// Nomer
			// 
			this->Nomer->HeaderText = L"№";
			this->Nomer->MinimumWidth = 6;
			this->Nomer->Name = L"Nomer";
			this->Nomer->Width = 30;
			// 
			// N
			// 
			this->N->HeaderText = L"A";
			this->N->MinimumWidth = 6;
			this->N->Name = L"N";
			this->N->Width = 70;
			// 
			// B
			// 
			this->B->HeaderText = L"B";
			this->B->MinimumWidth = 6;
			this->B->Name = L"B";
			this->B->Width = 70;
			// 
			// C
			// 
			this->C->HeaderText = L"C";
			this->C->MinimumWidth = 6;
			this->C->Name = L"C";
			this->C->Width = 70;
			// 
			// fA
			// 
			this->fA->HeaderText = L"f(A)";
			this->fA->MinimumWidth = 6;
			this->fA->Name = L"fA";
			this->fA->Width = 70;
			// 
			// fB
			// 
			this->fB->HeaderText = L"f(B)";
			this->fB->MinimumWidth = 6;
			this->fB->Name = L"fB";
			this->fB->Width = 70;
			// 
			// fC
			// 
			this->fC->HeaderText = L"f(C)";
			this->fC->MinimumWidth = 6;
			this->fC->Name = L"fC";
			this->fC->Width = 70;
			// 
			// Go
			// 
			this->Go->HeaderText = L"Действие";
			this->Go->MinimumWidth = 6;
			this->Go->Name = L"Go";
			this->Go->Width = 123;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->chart);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(12, 225);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(432, 487);
			this->groupBox2->TabIndex = 21;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Графическая визуализация";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->dataGridView1);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox3->Location = System::Drawing::Point(451, 13);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(782, 699);
			this->groupBox3->TabIndex = 22;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Рассчёты";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label6);
			this->groupBox4->Controls->Add(this->BS);
			this->groupBox4->Controls->Add(this->ZMNK);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox4->Location = System::Drawing::Point(1240, 34);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(200, 100);
			this->groupBox4->TabIndex = 23;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Ошибка на текущей итерации";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(143, 44);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(49, 20);
			this->label6->TabIndex = 2;
			this->label6->Text = L"0,001";
			// 
			// BS
			// 
			this->BS->Location = System::Drawing::Point(114, 41);
			this->BS->Name = L"BS";
			this->BS->Size = System::Drawing::Size(23, 26);
			this->BS->TabIndex = 1;
			// 
			// ZMNK
			// 
			this->ZMNK->Location = System::Drawing::Point(6, 40);
			this->ZMNK->Name = L"ZMNK";
			this->ZMNK->Size = System::Drawing::Size(100, 26);
			this->ZMNK->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(1485, 724);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"MyForm";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->Text = L"Метод Нелдера-Мида";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1X1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1X2))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3X1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3X2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2X1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2X2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void APPLY_Click(System::Object^ sender, System::EventArgs^ e);
	double NelderMid::MyForm::f(double x1, double x2);
	void NelderMid::MyForm::SAF();
	double NelderMid::MyForm::FindC(double C[]);
	double NelderMid::MyForm::MNK(double fc);
	double NelderMid::MyForm::Reflect(double R[2], double C[2]);
    void NelderMid::MyForm::Stretching(double C[], double R[], double E[]);
	int NelderMid::MyForm::ReflectionRight(double FR);
	void NelderMid::MyForm::Substitution(double FR, double R[]);
	void NelderMid::MyForm::CANDR(double S[], double C[]);
	void NelderMid::MyForm::Compression(double R[]);
	int NelderMid::MyForm::Simplex(int D);
	void NelderMid::MyForm::End(double fc);
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);
};
}
