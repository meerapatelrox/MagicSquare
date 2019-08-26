#pragma once
#include <cctype>

namespace MagicSquare{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;

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
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  sumRow1;
	private: System::Windows::Forms::Label^  sumRow2;
	private: System::Windows::Forms::Label^  sumRow3;
	private: System::Windows::Forms::Label^  sumCol1;
	private: System::Windows::Forms::Label^  sumCol2;
	private: System::Windows::Forms::Label^  sumCol3;
	private: System::Windows::Forms::Label^  sumDiag1;
	private: System::Windows::Forms::Label^  sumDiag2;





	private: System::Windows::Forms::Button^  solutionButton;
	private: System::Windows::Forms::Button^  clearButton;
	private: System::Windows::Forms::Timer^  myTimer;
	private: System::Windows::Forms::Label^  timeLabel;
	private: System::Windows::Forms::Label^  titleLabel;
	private: System::Windows::Forms::Label^  instructionsLabel;
	private: System::Windows::Forms::Timer^  solutionTimer;
	private: System::ComponentModel::IContainer^  components;

	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->sumRow1 = (gcnew System::Windows::Forms::Label());
			this->sumRow2 = (gcnew System::Windows::Forms::Label());
			this->sumRow3 = (gcnew System::Windows::Forms::Label());
			this->sumCol1 = (gcnew System::Windows::Forms::Label());
			this->sumCol2 = (gcnew System::Windows::Forms::Label());
			this->sumCol3 = (gcnew System::Windows::Forms::Label());
			this->sumDiag1 = (gcnew System::Windows::Forms::Label());
			this->sumDiag2 = (gcnew System::Windows::Forms::Label());
			this->solutionButton = (gcnew System::Windows::Forms::Button());
			this->clearButton = (gcnew System::Windows::Forms::Button());
			this->myTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->timeLabel = (gcnew System::Windows::Forms::Label());
			this->titleLabel = (gcnew System::Windows::Forms::Label());
			this->instructionsLabel = (gcnew System::Windows::Forms::Label());
			this->solutionTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(155, 275);
			this->textBox1->MaxLength = 1;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 92);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(266, 275);
			this->textBox2->MaxLength = 1;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 92);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(377, 275);
			this->textBox3->MaxLength = 1;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 92);
			this->textBox3->TabIndex = 2;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox3_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(155, 378);
			this->textBox4->MaxLength = 1;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 92);
			this->textBox4->TabIndex = 3;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox4_KeyPress);
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(266, 378);
			this->textBox5->MaxLength = 1;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 92);
			this->textBox5->TabIndex = 4;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox5_KeyPress);
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(377, 378);
			this->textBox6->MaxLength = 1;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 92);
			this->textBox6->TabIndex = 5;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox6_KeyPress);
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(155, 481);
			this->textBox7->MaxLength = 1;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 92);
			this->textBox7->TabIndex = 6;
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			this->textBox7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox7_KeyPress);
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(266, 481);
			this->textBox8->MaxLength = 1;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 92);
			this->textBox8->TabIndex = 7;
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox8_TextChanged);
			this->textBox8->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox8_KeyPress);
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(377, 481);
			this->textBox9->MaxLength = 1;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 92);
			this->textBox9->TabIndex = 8;
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox9_TextChanged);
			this->textBox9->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox9_KeyPress);
			// 
			// sumRow1
			// 
			this->sumRow1->AutoSize = true;
			this->sumRow1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sumRow1->Location = System::Drawing::Point(487, 292);
			this->sumRow1->Name = L"sumRow1";
			this->sumRow1->Size = System::Drawing::Size(41, 63);
			this->sumRow1->TabIndex = 9;
			this->sumRow1->Text = L" ";
			this->sumRow1->TextChanged += gcnew System::EventHandler(this, &MyForm::sumRow1_TextChanged);
			// 
			// sumRow2
			// 
			this->sumRow2->AutoSize = true;
			this->sumRow2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sumRow2->Location = System::Drawing::Point(487, 395);
			this->sumRow2->Name = L"sumRow2";
			this->sumRow2->Size = System::Drawing::Size(41, 63);
			this->sumRow2->TabIndex = 10;
			this->sumRow2->Text = L" ";
			this->sumRow2->TextChanged += gcnew System::EventHandler(this, &MyForm::sumRow2_TextChanged);
			// 
			// sumRow3
			// 
			this->sumRow3->AutoSize = true;
			this->sumRow3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sumRow3->Location = System::Drawing::Point(487, 498);
			this->sumRow3->Name = L"sumRow3";
			this->sumRow3->Size = System::Drawing::Size(41, 63);
			this->sumRow3->TabIndex = 11;
			this->sumRow3->Text = L" ";
			this->sumRow3->TextChanged += gcnew System::EventHandler(this, &MyForm::sumRow3_TextChanged);
			// 
			// sumCol1
			// 
			this->sumCol1->AutoSize = true;
			this->sumCol1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sumCol1->Location = System::Drawing::Point(169, 586);
			this->sumCol1->Name = L"sumCol1";
			this->sumCol1->Size = System::Drawing::Size(41, 63);
			this->sumCol1->TabIndex = 12;
			this->sumCol1->Text = L" ";
			this->sumCol1->TextChanged += gcnew System::EventHandler(this, &MyForm::sumCol1_TextChanged);
			// 
			// sumCol2
			// 
			this->sumCol2->AutoSize = true;
			this->sumCol2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sumCol2->Location = System::Drawing::Point(276, 586);
			this->sumCol2->Name = L"sumCol2";
			this->sumCol2->Size = System::Drawing::Size(41, 63);
			this->sumCol2->TabIndex = 13;
			this->sumCol2->Text = L" ";
			this->sumCol2->TextChanged += gcnew System::EventHandler(this, &MyForm::sumCol2_TextChanged);
			// 
			// sumCol3
			// 
			this->sumCol3->AutoSize = true;
			this->sumCol3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sumCol3->Location = System::Drawing::Point(389, 586);
			this->sumCol3->Name = L"sumCol3";
			this->sumCol3->Size = System::Drawing::Size(41, 63);
			this->sumCol3->TabIndex = 14;
			this->sumCol3->Text = L" ";
			this->sumCol3->TextChanged += gcnew System::EventHandler(this, &MyForm::sumCol3_TextChanged);
			// 
			// sumDiag1
			// 
			this->sumDiag1->AutoSize = true;
			this->sumDiag1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sumDiag1->Location = System::Drawing::Point(487, 586);
			this->sumDiag1->Name = L"sumDiag1";
			this->sumDiag1->Size = System::Drawing::Size(41, 63);
			this->sumDiag1->TabIndex = 15;
			this->sumDiag1->Text = L" ";
			this->sumDiag1->TextChanged += gcnew System::EventHandler(this, &MyForm::sumDiag1_TextChanged);
			// 
			// sumDiag2
			// 
			this->sumDiag2->AutoSize = true;
			this->sumDiag2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sumDiag2->Location = System::Drawing::Point(72, 586);
			this->sumDiag2->Name = L"sumDiag2";
			this->sumDiag2->Size = System::Drawing::Size(41, 63);
			this->sumDiag2->TabIndex = 16;
			this->sumDiag2->Text = L" ";
			this->sumDiag2->TextChanged += gcnew System::EventHandler(this, &MyForm::sumDiag2_TextChanged);
			// 
			// solutionButton
			// 
			this->solutionButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->solutionButton->Location = System::Drawing::Point(653, 311);
			this->solutionButton->Name = L"solutionButton";
			this->solutionButton->Size = System::Drawing::Size(200, 80);
			this->solutionButton->TabIndex = 17;
			this->solutionButton->Text = L"See solution";
			this->solutionButton->UseVisualStyleBackColor = true;
			this->solutionButton->Click += gcnew System::EventHandler(this, &MyForm::solutionButton_Click);
			// 
			// clearButton
			// 
			this->clearButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clearButton->Location = System::Drawing::Point(904, 311);
			this->clearButton->Name = L"clearButton";
			this->clearButton->Size = System::Drawing::Size(200, 80);
			this->clearButton->TabIndex = 18;
			this->clearButton->Text = L"Clear all";
			this->clearButton->UseVisualStyleBackColor = true;
			this->clearButton->Click += gcnew System::EventHandler(this, &MyForm::clearButton_Click);
			// 
			// myTimer
			// 
			this->myTimer->Interval = 1000;
			this->myTimer->Tick += gcnew System::EventHandler(this, &MyForm::myTimer_Tick);
			// 
			// timeLabel
			// 
			this->timeLabel->AutoSize = true;
			this->timeLabel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->timeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->timeLabel->ForeColor = System::Drawing::Color::Crimson;
			this->timeLabel->Location = System::Drawing::Point(791, 486);
			this->timeLabel->Name = L"timeLabel";
			this->timeLabel->Size = System::Drawing::Size(169, 65);
			this->timeLabel->TabIndex = 19;
			this->timeLabel->Text = L"00:00";
			// 
			// titleLabel
			// 
			this->titleLabel->AutoSize = true;
			this->titleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titleLabel->Location = System::Drawing::Point(25, 33);
			this->titleLabel->Name = L"titleLabel";
			this->titleLabel->Size = System::Drawing::Size(433, 51);
			this->titleLabel->TabIndex = 20;
			this->titleLabel->Text = L"Magic Square Game";
			// 
			// instructionsLabel
			// 
			this->instructionsLabel->AutoSize = true;
			this->instructionsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->instructionsLabel->Location = System::Drawing::Point(29, 99);
			this->instructionsLabel->Name = L"instructionsLabel";
			this->instructionsLabel->Size = System::Drawing::Size(1128, 145);
			this->instructionsLabel->TabIndex = 21;
			this->instructionsLabel->Text = resources->GetString(L"instructionsLabel.Text");
			// 
			// solutionTimer
			// 
			this->solutionTimer->Interval = 1000;
			this->solutionTimer->Tick += gcnew System::EventHandler(this, &MyForm::solutionTimer_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1224, 679);
			this->Controls->Add(this->instructionsLabel);
			this->Controls->Add(this->titleLabel);
			this->Controls->Add(this->timeLabel);
			this->Controls->Add(this->clearButton);
			this->Controls->Add(this->solutionButton);
			this->Controls->Add(this->sumDiag2);
			this->Controls->Add(this->sumDiag1);
			this->Controls->Add(this->sumCol3);
			this->Controls->Add(this->sumCol2);
			this->Controls->Add(this->sumCol1);
			this->Controls->Add(this->sumRow3);
			this->Controls->Add(this->sumRow2);
			this->Controls->Add(this->sumRow1);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"Magic Square Game by Meera Patel";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

	/* int flag is for the purpose of determining whether the user clicks the solution button,
	and therefore which message to display: "Congratulations!" or "Try again!" */
	int flag;

//
// TYPING IN THE TEXT BOXES
//

	private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		// Allows textbox to accept digits except for '0' and backspace
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08 || e->KeyChar == '0') {
			e->Handled = true;	// means the control does not need to handle the event if invalid input
		}

		if (e->KeyChar.ToString() == textBox2->Text ||
			e->KeyChar.ToString() == textBox3->Text ||
			e->KeyChar.ToString() == textBox4->Text ||
			e->KeyChar.ToString() == textBox5->Text ||
			e->KeyChar.ToString() == textBox6->Text ||
			e->KeyChar.ToString() == textBox7->Text ||
			e->KeyChar.ToString() == textBox8->Text ||
			e->KeyChar.ToString() == textBox9->Text) {
			SystemSounds::Beep->Play();
			e->Handled = true;
		}

		// Changed property so that the maximum length is 1 character

		flag = 0;
		myTimer->Start();
	}

	private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		// Allows textbox to accept digits except for '0' and backspace
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08 || e->KeyChar == '0')
			e->Handled = true;

		// Validates that the digit entered is not already in any other boxes
		if (e->KeyChar.ToString() == textBox1->Text ||
			e->KeyChar.ToString() == textBox3->Text ||
			e->KeyChar.ToString() == textBox4->Text ||
			e->KeyChar.ToString() == textBox5->Text ||
			e->KeyChar.ToString() == textBox6->Text ||
			e->KeyChar.ToString() == textBox7->Text ||
			e->KeyChar.ToString() == textBox8->Text ||
			e->KeyChar.ToString() == textBox9->Text) {
			SystemSounds::Beep->Play();
			e->Handled = true;
		}

		// Changed property so that the maximum length is 1 character

		flag = 0;
		myTimer->Start();
	}

	private: System::Void textBox3_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		// Allows textbox to accept digits except for '0' and backspace
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08 || e->KeyChar == '0')
			e->Handled = true;

		// Validates that the digit entered is not already in any other boxes
		if (e->KeyChar.ToString() == textBox1->Text ||
			e->KeyChar.ToString() == textBox2->Text ||
			e->KeyChar.ToString() == textBox4->Text ||
			e->KeyChar.ToString() == textBox5->Text ||
			e->KeyChar.ToString() == textBox6->Text ||
			e->KeyChar.ToString() == textBox7->Text ||
			e->KeyChar.ToString() == textBox8->Text ||
			e->KeyChar.ToString() == textBox9->Text) {
			SystemSounds::Beep->Play();
			e->Handled = true;
		}

		// Changed property so that the maximum length is 1 character

		flag = 0;
		myTimer->Start();
	}

	private: System::Void textBox4_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		// Allows textbox to accept digits except for '0' and backspace
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08 || e->KeyChar == '0')
			e->Handled = true;

		// Validates that the digit entered is not already in any other boxes
		if (e->KeyChar.ToString() == textBox1->Text ||
			e->KeyChar.ToString() == textBox2->Text ||
			e->KeyChar.ToString() == textBox3->Text ||
			e->KeyChar.ToString() == textBox5->Text ||
			e->KeyChar.ToString() == textBox6->Text ||
			e->KeyChar.ToString() == textBox7->Text ||
			e->KeyChar.ToString() == textBox8->Text ||
			e->KeyChar.ToString() == textBox9->Text) {
			SystemSounds::Beep->Play();
			e->Handled = true;
		}

		// Changed property so that the maximum length is 1 character

		flag = 0;
		myTimer->Start();
	}

	private: System::Void textBox5_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		// Allows textbox to accept digits except for '0' and backspace
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08 || e->KeyChar == '0')
			e->Handled = true;

		// Validates that the digit entered is not already in any other boxes
		if (e->KeyChar.ToString() == textBox1->Text ||
			e->KeyChar.ToString() == textBox2->Text ||
			e->KeyChar.ToString() == textBox3->Text ||
			e->KeyChar.ToString() == textBox4->Text ||
			e->KeyChar.ToString() == textBox6->Text ||
			e->KeyChar.ToString() == textBox7->Text ||
			e->KeyChar.ToString() == textBox8->Text ||
			e->KeyChar.ToString() == textBox9->Text) {
			SystemSounds::Beep->Play();
			e->Handled = true;
		}

		// Changed property so that the maximum length is 1 character	

		flag = 0;
		myTimer->Start();
	}

	private: System::Void textBox6_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		// Allows textbox to accept digits except for '0' and backspace
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08 || e->KeyChar == '0')
			e->Handled = true;

		// Validates that the digit entered is not already in any other boxes
		if (e->KeyChar.ToString() == textBox1->Text ||
			e->KeyChar.ToString() == textBox2->Text ||
			e->KeyChar.ToString() == textBox3->Text ||
			e->KeyChar.ToString() == textBox4->Text ||
			e->KeyChar.ToString() == textBox5->Text ||
			e->KeyChar.ToString() == textBox7->Text ||
			e->KeyChar.ToString() == textBox8->Text ||
			e->KeyChar.ToString() == textBox9->Text) {
			SystemSounds::Beep->Play();
			e->Handled = true;
		}

		// Changed property so that the maximum length is 1 character	

		flag = 0;
		myTimer->Start();
	}

	private: System::Void textBox7_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		// Allows textbox to accept digits except for '0' and backspace
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08 || e->KeyChar == '0')
			e->Handled = true;

		// Validates that the digit entered is not already in any other boxes
		if (e->KeyChar.ToString() == textBox1->Text ||
			e->KeyChar.ToString() == textBox2->Text ||
			e->KeyChar.ToString() == textBox3->Text ||
			e->KeyChar.ToString() == textBox4->Text ||
			e->KeyChar.ToString() == textBox5->Text ||
			e->KeyChar.ToString() == textBox6->Text ||
			e->KeyChar.ToString() == textBox8->Text ||
			e->KeyChar.ToString() == textBox9->Text) {
			SystemSounds::Beep->Play();
			e->Handled = true;
		}

		// Changed property so that the maximum length is 1 character	

		flag = 0;
		myTimer->Start();
	}

	private: System::Void textBox8_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		// Allows textbox to accept digits except for '0' and backspace
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08 || e->KeyChar == '0')
			e->Handled = true;

		// Validates that the digit entered is not already in any other boxes
		if (e->KeyChar.ToString() == textBox1->Text ||
			e->KeyChar.ToString() == textBox2->Text ||
			e->KeyChar.ToString() == textBox3->Text ||
			e->KeyChar.ToString() == textBox4->Text ||
			e->KeyChar.ToString() == textBox5->Text ||
			e->KeyChar.ToString() == textBox6->Text ||
			e->KeyChar.ToString() == textBox7->Text ||
			e->KeyChar.ToString() == textBox9->Text) {
			SystemSounds::Beep->Play();
			e->Handled = true;
		}

		// Changed property so that the maximum length is 1 character

		flag = 0;
		myTimer->Start();
	}

	private: System::Void textBox9_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		// Allows textbox to accept digits except for '0' and backspace
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08 || e->KeyChar == '0')
			e->Handled = true;

		// Validates that the digit entered is not already in any other boxes
		if (e->KeyChar.ToString() == textBox1->Text ||
			e->KeyChar.ToString() == textBox2->Text ||
			e->KeyChar.ToString() == textBox3->Text ||
			e->KeyChar.ToString() == textBox4->Text ||
			e->KeyChar.ToString() == textBox5->Text ||
			e->KeyChar.ToString() == textBox6->Text ||
			e->KeyChar.ToString() == textBox7->Text ||
			e->KeyChar.ToString() == textBox8->Text) {
			SystemSounds::Beep->Play();
			e->Handled = true;
		}

		// Changed property so that the maximum length is 1 character	

		flag = 0;
		myTimer->Start();
	}

//
// FORM LOAD
//

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}

//
// TIMER TICK
//

	int s, m;
	private: System::Void myTimer_Tick(System::Object^  sender, System::EventArgs^  e) {
		// Dealing with the time label
		s++;
		if (s == 60) {
			m++;
			s = 0;
		}
		if (m >= 100) {
			m = 99;
			s = 59;
		}

		timeLabel->Text = m.ToString("00") + ":" + s.ToString("00");
	}

//
// CLEAR BUTTON
//

	private: System::Void clearButton_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Clear();
		textBox2->Clear();
		textBox3->Clear();
		textBox4->Clear();
		textBox5->Clear();
		textBox6->Clear();
		textBox7->Clear();
		textBox8->Clear();
		textBox9->Clear();
		flag = 0;
	}

//
// SOLUTION BUTTON
//

	private: System::Void solutionButton_Click(System::Object^  sender, System::EventArgs^  e) {
		flag = 1;

		// Clear all boxes first
		textBox1->Clear();
		textBox2->Clear();
		textBox3->Clear();
		textBox4->Clear();
		textBox5->Clear();
		textBox6->Clear();
		textBox7->Clear();
		textBox8->Clear();
		textBox9->Clear();

		// Implement solution using timer
		solutionTimer->Start();
	}

//
// SOLUTION TIMER
//

	int delay;
	private: System::Void solutionTimer_Tick(System::Object^  sender, System::EventArgs^  e) {
		myTimer->Start();

		switch (delay) {
		case 0:
			textBox1->Text = "8";
			break;
		case 1:
			textBox2->Text = "1";
			break;
		case 2:
			textBox3->Text = "6";
			break;
		case 3:
			textBox4->Text = "3";
			break;
		case 4:
			textBox5->Text = "5";
			break;
		case 5:
			textBox6->Text = "7";
			break;
		case 6:
			textBox7->Text = "4";
			break;
		case 7:
			textBox8->Text = "9";
			break;
		case 8:
			textBox9->Text = "2";
			break;
		}
		delay++;
		flag = 1;

		if (delay > 8)
			delay = 0;

		// Display message box at the end
		if (sumRow1->Text == "15" &&
			sumRow2->Text == "15" &&
			sumRow3->Text == "15" &&
			sumCol1->Text == "15" &&
			sumCol2->Text == "15" &&
			sumCol3->Text == "15" &&
			sumDiag1->Text == "15" &&
			sumDiag2->Text == "15") {
			myTimer->Stop();
			solutionTimer->Stop();
			if (MessageBox::Show("This is one solution to the Magic Square. See if you can find another!",
				"Try again!", MessageBoxButtons::OK) == System::Windows::Forms::DialogResult::Cancel)
				this->Close();
		}
	}

//
// FOR CALCULATING AND DISPLAYING SUMS
//

	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int tempSum;

		// sumRow1
		if (!String::IsNullOrEmpty(textBox1->Text) && !String::IsNullOrEmpty(textBox2->Text) && !String::IsNullOrEmpty(textBox3->Text)) {
			tempSum = Convert::ToInt32(textBox1->Text) + Convert::ToInt32(textBox2->Text) + Convert::ToInt32(textBox3->Text);
			sumRow1->Text = tempSum.ToString();
		}
		else
			sumRow1->Text = " ";

		// sumCol1
		if (!String::IsNullOrEmpty(textBox1->Text) && !String::IsNullOrEmpty(textBox4->Text) && !String::IsNullOrEmpty(textBox7->Text)) {
			tempSum = Convert::ToInt32(textBox1->Text) + Convert::ToInt32(textBox4->Text) + Convert::ToInt32(textBox7->Text);
			sumCol1->Text = tempSum.ToString();
		}
		else
			sumCol1->Text = " ";

		// sumDiag1
		if (!String::IsNullOrEmpty(textBox1->Text) && !String::IsNullOrEmpty(textBox5->Text) && !String::IsNullOrEmpty(textBox9->Text)) {
			tempSum = Convert::ToInt32(textBox1->Text) + Convert::ToInt32(textBox5->Text) + Convert::ToInt32(textBox9->Text);
			sumDiag1->Text = tempSum.ToString();
		}
		else
			sumDiag1->Text = " ";
	}

	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int tempSum;

		// sumRow1
		if (!String::IsNullOrEmpty(textBox1->Text) && !String::IsNullOrEmpty(textBox2->Text) && !String::IsNullOrEmpty(textBox3->Text)) {
			tempSum = Convert::ToInt32(textBox1->Text) + Convert::ToInt32(textBox2->Text) + Convert::ToInt32(textBox3->Text);
			sumRow1->Text = tempSum.ToString();
		}
		else
			sumRow1->Text = " ";

		// sumCol2
		if (!String::IsNullOrEmpty(textBox2->Text) && !String::IsNullOrEmpty(textBox5->Text) && !String::IsNullOrEmpty(textBox8->Text)) {
			tempSum = Convert::ToInt32(textBox2->Text) + Convert::ToInt32(textBox5->Text) + Convert::ToInt32(textBox8->Text);
			sumCol2->Text = tempSum.ToString();
		}
		else
			sumCol2->Text = " ";
	}

	private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int tempSum;

		// sumRow1
		if (!String::IsNullOrEmpty(textBox1->Text) && !String::IsNullOrEmpty(textBox2->Text) && !String::IsNullOrEmpty(textBox3->Text)) {
			tempSum = Convert::ToInt32(textBox1->Text) + Convert::ToInt32(textBox2->Text) + Convert::ToInt32(textBox3->Text);
			sumRow1->Text = tempSum.ToString();
		}
		else
			sumRow1->Text = " ";

		// sumCol3
		if (!String::IsNullOrEmpty(textBox3->Text) && !String::IsNullOrEmpty(textBox6->Text) && !String::IsNullOrEmpty(textBox9->Text)) {
			tempSum = Convert::ToInt32(textBox3->Text) + Convert::ToInt32(textBox6->Text) + Convert::ToInt32(textBox9->Text);
			sumCol3->Text = tempSum.ToString();
		}
		else
			sumCol3->Text = " ";

		//sumDiag2
		if (!String::IsNullOrEmpty(textBox3->Text) && !String::IsNullOrEmpty(textBox5->Text) && !String::IsNullOrEmpty(textBox7->Text)) {
			tempSum = Convert::ToInt32(textBox3->Text) + Convert::ToInt32(textBox5->Text) + Convert::ToInt32(textBox7->Text);
			sumDiag2->Text = tempSum.ToString();
		}
		else
			sumDiag2->Text = " ";
	}

	private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int tempSum;

		// sumRow2
		if (!String::IsNullOrEmpty(textBox4->Text) && !String::IsNullOrEmpty(textBox5->Text) && !String::IsNullOrEmpty(textBox6->Text)) {
			tempSum = Convert::ToInt32(textBox4->Text) + Convert::ToInt32(textBox5->Text) + Convert::ToInt32(textBox6->Text);
			sumRow2->Text = tempSum.ToString();
		}
		else
			sumRow2->Text = " ";

		// sumCol1
		if (!String::IsNullOrEmpty(textBox1->Text) && !String::IsNullOrEmpty(textBox4->Text) && !String::IsNullOrEmpty(textBox7->Text)) {
			tempSum = Convert::ToInt32(textBox1->Text) + Convert::ToInt32(textBox4->Text) + Convert::ToInt32(textBox7->Text);
			sumCol1->Text = tempSum.ToString();
		}
		else
			sumCol1->Text = " ";
	}

	private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int tempSum;

		// sumRow2
		if (!String::IsNullOrEmpty(textBox4->Text) && !String::IsNullOrEmpty(textBox5->Text) && !String::IsNullOrEmpty(textBox6->Text)) {
			tempSum = Convert::ToInt32(textBox4->Text) + Convert::ToInt32(textBox5->Text) + Convert::ToInt32(textBox6->Text);
			sumRow2->Text = tempSum.ToString();
		}
		else
			sumRow2->Text = " ";

		// sumCol2
		if (!String::IsNullOrEmpty(textBox2->Text) && !String::IsNullOrEmpty(textBox5->Text) && !String::IsNullOrEmpty(textBox8->Text)) {
			tempSum = Convert::ToInt32(textBox2->Text) + Convert::ToInt32(textBox5->Text) + Convert::ToInt32(textBox8->Text);
			sumCol2->Text = tempSum.ToString();
		}
		else
			sumCol2->Text = " ";

		// sumDiag1
		if (!String::IsNullOrEmpty(textBox1->Text) && !String::IsNullOrEmpty(textBox5->Text) && !String::IsNullOrEmpty(textBox9->Text)) {
			tempSum = Convert::ToInt32(textBox1->Text) + Convert::ToInt32(textBox5->Text) + Convert::ToInt32(textBox9->Text);
			sumDiag1->Text = tempSum.ToString();
		}
		else
			sumDiag1->Text = " ";

		// sumDiag2
		if (!String::IsNullOrEmpty(textBox3->Text) && !String::IsNullOrEmpty(textBox5->Text) && !String::IsNullOrEmpty(textBox7->Text)) {
			tempSum = Convert::ToInt32(textBox3->Text) + Convert::ToInt32(textBox5->Text) + Convert::ToInt32(textBox7->Text);
			sumDiag2->Text = tempSum.ToString();
		}
		else
			sumDiag2->Text = " ";
	}

	private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int tempSum;

		// sumRow2
		if (!String::IsNullOrEmpty(textBox4->Text) && !String::IsNullOrEmpty(textBox5->Text) && !String::IsNullOrEmpty(textBox6->Text)) {
			tempSum = Convert::ToInt32(textBox4->Text) + Convert::ToInt32(textBox5->Text) + Convert::ToInt32(textBox6->Text);
			sumRow2->Text = tempSum.ToString();
		}
		else
			sumRow2->Text = " ";

		// sumCol3
		if (!String::IsNullOrEmpty(textBox3->Text) && !String::IsNullOrEmpty(textBox6->Text) && !String::IsNullOrEmpty(textBox9->Text)) {
			tempSum = Convert::ToInt32(textBox3->Text) + Convert::ToInt32(textBox6->Text) + Convert::ToInt32(textBox9->Text);
			sumCol3->Text = tempSum.ToString();
		}
		else
			sumCol3->Text = " ";
	}

	private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int tempSum;

		// sumRow3
		if (!String::IsNullOrEmpty(textBox7->Text) && !String::IsNullOrEmpty(textBox8->Text) && !String::IsNullOrEmpty(textBox9->Text)) {
			tempSum = Convert::ToInt32(textBox7->Text) + Convert::ToInt32(textBox8->Text) + Convert::ToInt32(textBox9->Text);
			sumRow3->Text = tempSum.ToString();
		}
		else
			sumRow3->Text = " ";

		// sumCol1
		if (!String::IsNullOrEmpty(textBox1->Text) && !String::IsNullOrEmpty(textBox4->Text) && !String::IsNullOrEmpty(textBox7->Text)) {
			tempSum = Convert::ToInt32(textBox1->Text) + Convert::ToInt32(textBox4->Text) + Convert::ToInt32(textBox7->Text);
			sumCol1->Text = tempSum.ToString();
		}
		else
			sumCol1->Text = " ";

		// sumDiag2
		if (!String::IsNullOrEmpty(textBox3->Text) && !String::IsNullOrEmpty(textBox5->Text) && !String::IsNullOrEmpty(textBox7->Text)) {
			tempSum = Convert::ToInt32(textBox3->Text) + Convert::ToInt32(textBox5->Text) + Convert::ToInt32(textBox7->Text);
			sumDiag2->Text = tempSum.ToString();
		}
		else
			sumDiag2->Text = " ";
	}

	private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int tempSum;

		// sumRow3
		if (!String::IsNullOrEmpty(textBox7->Text) && !String::IsNullOrEmpty(textBox8->Text) && !String::IsNullOrEmpty(textBox9->Text)) {
			tempSum = Convert::ToInt32(textBox7->Text) + Convert::ToInt32(textBox8->Text) + Convert::ToInt32(textBox9->Text);
			sumRow3->Text = tempSum.ToString();
		}
		else
			sumRow3->Text = " ";

		// sumCol2
		if (!String::IsNullOrEmpty(textBox2->Text) && !String::IsNullOrEmpty(textBox5->Text) && !String::IsNullOrEmpty(textBox8->Text)) {
			tempSum = Convert::ToInt32(textBox2->Text) + Convert::ToInt32(textBox5->Text) + Convert::ToInt32(textBox8->Text);
			sumCol2->Text = tempSum.ToString();
		}
		else
			sumCol2->Text = " ";
	}

	private: System::Void textBox9_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int tempSum;

		// sumRow3
		if (!String::IsNullOrEmpty(textBox7->Text) && !String::IsNullOrEmpty(textBox8->Text) && !String::IsNullOrEmpty(textBox9->Text)) {
			tempSum = Convert::ToInt32(textBox7->Text) + Convert::ToInt32(textBox8->Text) + Convert::ToInt32(textBox9->Text);
			sumRow3->Text = tempSum.ToString();
		}
		else
			sumRow3->Text = " ";

		// sumCol3
		if (!String::IsNullOrEmpty(textBox3->Text) && !String::IsNullOrEmpty(textBox6->Text) && !String::IsNullOrEmpty(textBox9->Text)) {
			tempSum = Convert::ToInt32(textBox3->Text) + Convert::ToInt32(textBox6->Text) + Convert::ToInt32(textBox9->Text);
			sumCol3->Text = tempSum.ToString();
		}
		else
			sumCol3->Text = " ";

		// sumDiag1
		if (!String::IsNullOrEmpty(textBox1->Text) && !String::IsNullOrEmpty(textBox5->Text) && !String::IsNullOrEmpty(textBox9->Text)) {
			tempSum = Convert::ToInt32(textBox1->Text) + Convert::ToInt32(textBox5->Text) + Convert::ToInt32(textBox9->Text);
			sumDiag1->Text = tempSum.ToString();
		}
		else
			sumDiag1->Text = " ";
	}

//
// DISPLAY WINDOW AND STOP TIMER WHEN PUZZLE IS SOLVED
//

	private: System::Void sumRow1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		if (sumRow1->Text == "15" &&
			sumRow2->Text == "15" &&
			sumRow3->Text == "15" &&
			sumCol1->Text == "15" &&
			sumCol2->Text == "15" &&
			sumCol3->Text == "15" &&
			sumDiag1->Text == "15" &&
			sumDiag2->Text == "15") {
			myTimer->Stop();
			
			if (flag == 0) {
				if (MessageBox::Show("You made it!", "Congratulations!", MessageBoxButtons::OK)
					== System::Windows::Forms::DialogResult::Cancel)
					this->Close();
			}
		}
	}

	private: System::Void sumRow2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		if (sumRow1->Text == "15" &&
			sumRow2->Text == "15" &&
			sumRow3->Text == "15" &&
			sumCol1->Text == "15" &&
			sumCol2->Text == "15" &&
			sumCol3->Text == "15" &&
			sumDiag1->Text == "15" &&
			sumDiag2->Text == "15") {
			myTimer->Stop();

			if (flag == 0) {
				if (MessageBox::Show("You made it!", "Congratulations!", MessageBoxButtons::OK)
					== System::Windows::Forms::DialogResult::Cancel)
					this->Close();
			}
		}
	}

	private: System::Void sumRow3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		if (sumRow1->Text == "15" &&
			sumRow2->Text == "15" &&
			sumRow3->Text == "15" &&
			sumCol1->Text == "15" &&
			sumCol2->Text == "15" &&
			sumCol3->Text == "15" &&
			sumDiag1->Text == "15" &&
			sumDiag2->Text == "15") {
			myTimer->Stop();

			if (flag == 0) {
				if (MessageBox::Show("You made it!", "Congratulations!", MessageBoxButtons::OK)
					== System::Windows::Forms::DialogResult::Cancel)
					this->Close();
			}
		}
	}

	private: System::Void sumCol1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		if (sumRow1->Text == "15" &&
			sumRow2->Text == "15" &&
			sumRow3->Text == "15" &&
			sumCol1->Text == "15" &&
			sumCol2->Text == "15" &&
			sumCol3->Text == "15" &&
			sumDiag1->Text == "15" &&
			sumDiag2->Text == "15") {
			myTimer->Stop();

			if (flag == 0) {
				if (MessageBox::Show("You made it!", "Congratulations!", MessageBoxButtons::OK)
					== System::Windows::Forms::DialogResult::Cancel)
					this->Close();
			}
		}
	}

	private: System::Void sumCol2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		if (sumRow1->Text == "15" &&
			sumRow2->Text == "15" &&
			sumRow3->Text == "15" &&
			sumCol1->Text == "15" &&
			sumCol2->Text == "15" &&
			sumCol3->Text == "15" &&
			sumDiag1->Text == "15" &&
			sumDiag2->Text == "15") {
			myTimer->Stop();

			if (flag == 0) {
				if (MessageBox::Show("You made it!", "Congratulations!", MessageBoxButtons::OK)
					== System::Windows::Forms::DialogResult::Cancel)
					this->Close();
			}
		}
	}

	private: System::Void sumCol3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		if (sumRow1->Text == "15" &&
			sumRow2->Text == "15" &&
			sumRow3->Text == "15" &&
			sumCol1->Text == "15" &&
			sumCol2->Text == "15" &&
			sumCol3->Text == "15" &&
			sumDiag1->Text == "15" &&
			sumDiag2->Text == "15") {
			myTimer->Stop();

			if (flag == 0) {
				if (MessageBox::Show("You made it!", "Congratulations!", MessageBoxButtons::OK)
					== System::Windows::Forms::DialogResult::Cancel)
					this->Close();
			}
		}
	}

	private: System::Void sumDiag1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		if (sumRow1->Text == "15" &&
			sumRow2->Text == "15" &&
			sumRow3->Text == "15" &&
			sumCol1->Text == "15" &&
			sumCol2->Text == "15" &&
			sumCol3->Text == "15" &&
			sumDiag1->Text == "15" &&
			sumDiag2->Text == "15") {
			myTimer->Stop();

			if (flag == 0) {
				if (MessageBox::Show("You made it!", "Congratulations!", MessageBoxButtons::OK)
					== System::Windows::Forms::DialogResult::Cancel)
					this->Close();
			}
		}
	}

	private: System::Void sumDiag2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		if (sumRow1->Text == "15" &&
			sumRow2->Text == "15" &&
			sumRow3->Text == "15" &&
			sumCol1->Text == "15" &&
			sumCol2->Text == "15" &&
			sumCol3->Text == "15" &&
			sumDiag1->Text == "15" &&
			sumDiag2->Text == "15") {
			myTimer->Stop();

			if (flag == 0) {
				if (MessageBox::Show("You made it!", "Congratulations!", MessageBoxButtons::OK)
					== System::Windows::Forms::DialogResult::Cancel)
					this->Close();
			}
		}
	}

	};
}
