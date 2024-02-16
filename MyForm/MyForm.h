#pragma once

namespace snake10 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void);


	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip;
	protected:

	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ labelScore;
	private: System::Windows::Forms::GroupBox^ groupBoxSettings;
	private: System::Windows::Forms::Button^ buttonSpeed;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ Border1;
	private: System::Windows::Forms::PictureBox^ Border3;
	private: System::Windows::Forms::PictureBox^ Border4;
	private: System::Windows::Forms::PictureBox^ Border2;
	private: System::Windows::Forms::Timer^ timer;

	private: System::Windows::Forms::Label^ labelGameOver;
	private: System::Windows::Forms::Label^ labelCoordinatesSnake;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


	#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->labelScore = (gcnew System::Windows::Forms::Label());
			this->groupBoxSettings = (gcnew System::Windows::Forms::GroupBox());
			this->buttonSpeed = (gcnew System::Windows::Forms::Button());
			this->numericUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Border1 = (gcnew System::Windows::Forms::PictureBox());
			this->Border3 = (gcnew System::Windows::Forms::PictureBox());
			this->Border4 = (gcnew System::Windows::Forms::PictureBox());
			this->Border2 = (gcnew System::Windows::Forms::PictureBox());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->labelGameOver = (gcnew System::Windows::Forms::Label());
			this->labelCoordinatesSnake = (gcnew System::Windows::Forms::Label());
			this->menuStrip->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBoxSettings->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Border1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Border3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Border4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Border2))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip
			// 
			this->menuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->����ToolStripMenuItem,
					this->���������������ToolStripMenuItem, this->�����ToolStripMenuItem
			});
			this->menuStrip->Location = System::Drawing::Point(0, 0);
			this->menuStrip->Name = L"menuStrip";
			this->menuStrip->Size = System::Drawing::Size(781, 24);
			this->menuStrip->TabIndex = 0;
			this->menuStrip->Text = L"menuStrip1";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->���������ToolStripMenuItem,
					this->���������������ToolStripMenuItem, this->���������ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->����ToolStripMenuItem->Text = L"����";
			this->����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����ToolStripMenuItem_Click);
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->���������ToolStripMenuItem->Text = L"����� ����";
			this->���������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::���������ToolStripMenuItem_Click);
			// 
			// ���������������ToolStripMenuItem
			// 
			this->���������������ToolStripMenuItem->Name = L"���������������ToolStripMenuItem";
			this->���������������ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->���������������ToolStripMenuItem->Text = L"�����/����������";
			this->���������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::���������������ToolStripMenuItem_Click);
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->���������ToolStripMenuItem->Text = L"���������";
			this->���������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::���������ToolStripMenuItem_Click);
			// 
			// ���������������ToolStripMenuItem
			// 
			this->���������������ToolStripMenuItem->Name = L"���������������ToolStripMenuItem";
			this->���������������ToolStripMenuItem->Size = System::Drawing::Size(131, 20);
			this->���������������ToolStripMenuItem->Text = L"���������� � ����";
			this->���������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::���������������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����ToolStripMenuItem_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->labelScore);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(0, 27);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(147, 64);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"������ ����:";
			// 
			// labelScore
			// 
			this->labelScore->AutoSize = true;
			this->labelScore->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelScore->Location = System::Drawing::Point(12, 26);
			this->labelScore->Name = L"labelScore";
			this->labelScore->Size = System::Drawing::Size(91, 25);
			this->labelScore->TabIndex = 0;
			this->labelScore->Text = L"����: 0";
			// 
			// groupBoxSettings
			// 
			this->groupBoxSettings->Controls->Add(this->buttonSpeed);
			this->groupBoxSettings->Controls->Add(this->numericUpDown);
			this->groupBoxSettings->Controls->Add(this->label2);
			this->groupBoxSettings->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBoxSettings->Location = System::Drawing::Point(198, 214);
			this->groupBoxSettings->Name = L"groupBoxSettings";
			this->groupBoxSettings->Size = System::Drawing::Size(337, 97);
			this->groupBoxSettings->TabIndex = 2;
			this->groupBoxSettings->TabStop = false;
			this->groupBoxSettings->Text = L"���������";
			this->groupBoxSettings->Visible = false;
			// 
			// buttonSpeed
			// 
			this->buttonSpeed->Location = System::Drawing::Point(223, 52);
			this->buttonSpeed->Name = L"buttonSpeed";
			this->buttonSpeed->Size = System::Drawing::Size(106, 32);
			this->buttonSpeed->TabIndex = 4;
			this->buttonSpeed->Text = L"���������";
			this->buttonSpeed->UseVisualStyleBackColor = true;
			this->buttonSpeed->Click += gcnew System::EventHandler(this, &MyForm::buttonSpeed_Click);
			// 
			// numericUpDown
			// 
			this->numericUpDown->BackColor = System::Drawing::Color::White;
			this->numericUpDown->Location = System::Drawing::Point(223, 20);
			this->numericUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 500, 0, 0, 0 });
			this->numericUpDown->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown->Name = L"numericUpDown";
			this->numericUpDown->Size = System::Drawing::Size(106, 26);
			this->numericUpDown->TabIndex = 3;
			this->numericUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(211, 20);
			this->label2->TabIndex = 0;
			this->label2->Text = L"������� �������� ������:";
			// 
			// Border1
			// 
			this->Border1->BackColor = System::Drawing::SystemColors::Desktop;
			this->Border1->Location = System::Drawing::Point(10, 100);
			this->Border1->Name = L"Border1";
			this->Border1->Size = System::Drawing::Size(750, 10);
			this->Border1->TabIndex = 3;
			this->Border1->TabStop = false;
			// 
			// Border3
			// 
			this->Border3->BackColor = System::Drawing::SystemColors::Desktop;
			this->Border3->Location = System::Drawing::Point(10, 640);
			this->Border3->Name = L"Border3";
			this->Border3->Size = System::Drawing::Size(750, 10);
			this->Border3->TabIndex = 4;
			this->Border3->TabStop = false;
			// 
			// Border4
			// 
			this->Border4->BackColor = System::Drawing::SystemColors::Desktop;
			this->Border4->Location = System::Drawing::Point(10, 100);
			this->Border4->Name = L"Border4";
			this->Border4->Size = System::Drawing::Size(10, 550);
			this->Border4->TabIndex = 5;
			this->Border4->TabStop = false;
			// 
			// Border2
			// 
			this->Border2->BackColor = System::Drawing::SystemColors::Desktop;
			this->Border2->Location = System::Drawing::Point(760, 100);
			this->Border2->Name = L"Border2";
			this->Border2->Size = System::Drawing::Size(10, 550);
			this->Border2->TabIndex = 6;
			this->Border2->TabStop = false;
			// 
			// timer
			// 
			this->timer->Tick += gcnew System::EventHandler(this, &MyForm::GameForm_Update);
			// 
			// labelGameOver
			// 
			this->labelGameOver->AutoSize = true;
			this->labelGameOver->Font = (gcnew System::Drawing::Font(L"MV Boli", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelGameOver->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->labelGameOver->Location = System::Drawing::Point(224, 314);
			this->labelGameOver->Name = L"labelGameOver";
			this->labelGameOver->Size = System::Drawing::Size(333, 68);
			this->labelGameOver->TabIndex = 7;
			this->labelGameOver->Text = L"Game Over !\r\n������������� ���� !";
			this->labelGameOver->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelGameOver->Visible = false;
			// 
			// labelCoordinatesSnake
			// 
			this->labelCoordinatesSnake->AutoSize = true;
			this->labelCoordinatesSnake->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelCoordinatesSnake->Location = System::Drawing::Point(153, 67);
			this->labelCoordinatesSnake->Name = L"labelCoordinatesSnake";
			this->labelCoordinatesSnake->Size = System::Drawing::Size(203, 24);
			this->labelCoordinatesSnake->TabIndex = 8;
			this->labelCoordinatesSnake->Text = L"��������� ������:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(781, 661);
			this->Controls->Add(this->labelCoordinatesSnake);
			this->Controls->Add(this->labelGameOver);
			this->Controls->Add(this->Border2);
			this->Controls->Add(this->Border4);
			this->Controls->Add(this->Border3);
			this->Controls->Add(this->Border1);
			this->Controls->Add(this->groupBoxSettings);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Game Snake_1.0";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::GameForm_KeyDown);
			this->menuStrip->ResumeLayout(false);
			this->menuStrip->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBoxSettings->ResumeLayout(false);
			this->groupBoxSettings->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Border1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Border3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Border4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Border2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//������ ����	
	private: PictureBox^ fruit;//�����
	private: array<PictureBox^>^ Serpens;//����
	private: bool play; //������
	private: bool die;  //������
	private: bool firstLaunch;//������ ������
	private: int step = 10;//���
	private: float updateInterval = 100;//�������� ����������
	private: int score = 0;//����

		   //-------------
		   //�������� ����
	private: void GeneratePositionFruit();//���� ������
	private: void Eating();               //�������� ������� ?
	private: void Movement();     //�������� ����
	private: void EatYourself();  //������ � ����
	private: void GameOver();     //����� ����
	private: void NewGame();      // ����� ����
	private: void ChackBorders(); // �������� ��������� �� � �����

		   //������� ����:
		   //������
	private: System::Void ����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ���������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ���������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonSpeed_Click(System::Object^ sender, System::EventArgs^ e);

		   //������� ������ ����
	private: System::Void GameForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);

		   // timer ���������� ����
	private: void GameForm_Update(Object^ obgect, EventArgs^ e);
	};
}