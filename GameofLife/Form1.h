#pragma once
//#include "Form1.cpp"

#ifndef FORM1_H
#define FORM1_H

void clearButton(cli::array<System::Windows::Forms::Button^, 2>^ b, int size);
void moveOneStep(cli::array<System::Windows::Forms::Button^, 2>^ b, int size);
void checkLife(cli::array<System::Windows::Forms::Button^, 2>^ b, int size);


#endif // !FORM1_H




namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{

		int size = 20;
		int iter = 0;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label3;




		int sec = 0;
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;
	private: System::Windows::Forms::Button^ bttnsArray;
	public: array<Button^, 2>^ b;// = gcnew cli::array<Button^, 2>(10, 10);
			array<int, 2>^ arrayBoard; 
	private: System::Windows::Forms::Button^  button1;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;














	protected:


	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->label1);
			this->flowLayoutPanel1->Location = System::Drawing::Point(10, 16);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(0);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(510, 530);
			this->flowLayoutPanel1->TabIndex = 0;
			this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::flowLayoutPanel1_Paint);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(200, 150);
			this->label1->Margin = System::Windows::Forms::Padding(200, 150, 200, 150);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(10, 549);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(74, 34);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Load Board/Clear";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(446, 630);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(74, 34);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Clear & Exit";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 500;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::button2_Click_1);
			// 
			// button5
			// 
			this->button5->Enabled = false;
			this->button5->Location = System::Drawing::Point(10, 589);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(74, 34);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Glider";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Enabled = false;
			this->button6->Location = System::Drawing::Point(10, 630);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(74, 34);
			this->button6->TabIndex = 6;
			this->button6->Text = L"10 Cell Row";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Enabled = false;
			this->button7->Location = System::Drawing::Point(186, 630);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(74, 34);
			this->button7->TabIndex = 7;
			this->button7->Text = L"Move";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(266, 630);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(93, 34);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Start/Continue";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click_1);
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(366, 630);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(74, 34);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Stop";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click_1);
			// 
			// timer2
			// 
			this->timer2->Interval = 1000;
			this->timer2->Tick += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(205, 589);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(69, 20);
			this->numericUpDown1->TabIndex = 10;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(112, 591);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Select Speed";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Location = System::Drawing::Point(313, 566);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(207, 57);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Iterations";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(92, 25);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(15, 16);
			this->label3->TabIndex = 0;
			this->label3->Text = L"0";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(533, 676);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Name = L"Form1";
			this->Text = L"Game of Life";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void flowLayoutPanel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {


	}
	private: System::Void tableLayoutPanel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		flowLayoutPanel1->Controls->Clear();
		this->iter = 0;
		this->label3->Text = "0";
		this->b = gcnew cli::array<Button^, 2>(size, size);
		this->arrayBoard = gcnew array<int, 2>(size, size);

		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				this->bttnsArray = (gcnew System::Windows::Forms::Button());
				this->bttnsArray->Width = 25;
				this->bttnsArray->Height = 25;
				this->bttnsArray->Margin = System::Windows::Forms::Padding(0);
				this->bttnsArray->BackColor = System::Drawing::SystemColors::ControlLight;
				this->b[i, j] = bttnsArray;
				this->b[i,j]->Click += gcnew System::EventHandler(this, &Form1::arrayClick);
				
				flowLayoutPanel1->Controls->Add(b[i, j]);
			}
		}

		this->button3->Enabled = true;
		this->button2->Enabled = true;
		this->button5->Enabled = true;
		this->button6->Enabled = true;
		this->button7->Enabled = true;
	}
	
	
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		flowLayoutPanel1->Controls->Clear();
		this->timer1->Stop();
		this->label1->Text = "Bye!!! See you again";
		flowLayoutPanel1->Controls->Add(label1);

		this->timer2->Start();
		sec++;

		if (sec == 3)
		{
			this->timer2->Stop();
			Application::Exit();
		}

	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

		clearButton(b, size);

		for (int i=0; i< size; i++)
		{
			for (int j=0; j<size; j++)
			{
				if ((i == 10 && j == 10) || (i == 11 && j == 11) || (i == 12 && j == 11) || (i == 12 && j == 10) || (i == 12 && j == 9))
				{
					this->b[i, j]->BackColor = System::Drawing::SystemColors::Highlight;
					
				}
			}
		}
	}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	clearButton(b, size);

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if ((i == 10 && j == 6) || (i == 10 && j == 7) || (i == 10 && j == 8) || (i == 10 && j == 9) || (i == 10 && j == 10) || (i == 10 && j == 11) || (i == 10 && j == 12) || (i == 10 && j == 13) || (i == 10 && j == 14) || (i == 10 && j == 15))
			{
				this->b[i, j]->BackColor = System::Drawing::SystemColors::Highlight;
				//this->arrayBoard[i,j] = 1;
			}
		}
	}

}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	
checkLife(b, size);

}

		 
		 
 private: System::Void arrayClick(System::Object^  sender, System::EventArgs^  e)
{
	System::Windows::Forms::Button^ bttnsArray = gcnew System::Windows::Forms::Button();
	bttnsArray = safe_cast<Button ^>(sender);
	bttnsArray->BackColor = System::Drawing::SystemColors::Highlight;
}

private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {

	int speed = System::Convert::ToInt16(numericUpDown1->Text);
	if (speed == 1)
	{
		this->timer1->Interval = 1000;
	}
	if (speed == 2)
	{
		this->timer1->Interval = 600;
	}
	if (speed == 3)
	{
		this->timer1->Interval = 300;
	}
	if (speed == 4)
	{
		this->timer1->Interval = 100;
	}
	


	this->timer1->Start();
	sec++;
	iter++;
	label3->Text = System::Convert::ToString(iter);
	
	
	if (sec == 1)
	{
		checkLife(b, size);
		sec = 0;
		//this->timer1->Stop();
		
	}
	

}
private: System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->timer1->Stop();

}
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {


}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
