#pragma once
#include <math.h>
namespace CalculatorCLR {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für frmMain
	/// </summary>
	public ref class frmMain : public System::Windows::Forms::Form
	{
	public:
		frmMain(void)
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
		~frmMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	protected:
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripProgressBar^ toolStripProgressBar1;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnSub;
	private: System::Windows::Forms::Button^ btnMult;
	private: System::Windows::Forms::Button^ btnDiv;
	private: System::Windows::Forms::TextBox^ txtOne;
	private: System::Windows::Forms::TextBox^ txtTwo;

	private: System::Windows::Forms::TextBox^ txtResult;
	private: System::Windows::Forms::Button^ btnSQRT;
	private: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripProgressBar1 = (gcnew System::Windows::Forms::ToolStripProgressBar());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnSub = (gcnew System::Windows::Forms::Button());
			this->btnMult = (gcnew System::Windows::Forms::Button());
			this->btnDiv = (gcnew System::Windows::Forms::Button());
			this->txtOne = (gcnew System::Windows::Forms::TextBox());
			this->txtTwo = (gcnew System::Windows::Forms::TextBox());
			this->txtResult = (gcnew System::Windows::Forms::TextBox());
			this->btnSQRT = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			//
			// statusStrip1
			//
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripStatusLabel1,
					this->toolStripProgressBar1
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 182);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->ShowItemToolTips = true;
			this->statusStrip1->Size = System::Drawing::Size(283, 22);
			this->statusStrip1->SizingGrip = false;
			this->statusStrip1->TabIndex = 0;
			this->statusStrip1->Text = L"Status";
			//
			// toolStripStatusLabel1
			//
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(166, 17);
			this->toolStripStatusLabel1->Spring = true;
			this->toolStripStatusLabel1->Text = L"Status:";
			this->toolStripStatusLabel1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			//
			// toolStripProgressBar1
			//
			this->toolStripProgressBar1->Name = L"toolStripProgressBar1";
			this->toolStripProgressBar1->Size = System::Drawing::Size(100, 16);
			this->toolStripProgressBar1->Style = System::Windows::Forms::ProgressBarStyle::Marquee;
			this->toolStripProgressBar1->ToolTipText = L"Progress:";
			//
			// btnAdd
			//
			this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->Location = System::Drawing::Point(49, 53);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(33, 38);
			this->btnAdd->TabIndex = 1;
			this->btnAdd->Text = L"+";
			this->btnAdd->UseMnemonic = false;
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &frmMain::btnAdd_Click);
			//
			// btnSub
			//
			this->btnSub->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnSub->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSub->Location = System::Drawing::Point(88, 53);
			this->btnSub->Name = L"btnSub";
			this->btnSub->Size = System::Drawing::Size(33, 38);
			this->btnSub->TabIndex = 2;
			this->btnSub->Text = L"-";
			this->btnSub->UseMnemonic = false;
			this->btnSub->UseVisualStyleBackColor = true;
			this->btnSub->Click += gcnew System::EventHandler(this, &frmMain::btnSub_Click_1);
			//
			// btnMult
			//
			this->btnMult->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnMult->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMult->Location = System::Drawing::Point(127, 53);
			this->btnMult->Name = L"btnMult";
			this->btnMult->Size = System::Drawing::Size(33, 38);
			this->btnMult->TabIndex = 3;
			this->btnMult->Text = L"*";
			this->btnMult->UseMnemonic = false;
			this->btnMult->UseVisualStyleBackColor = true;
			this->btnMult->Click += gcnew System::EventHandler(this, &frmMain::btnMult_Click_1);
			//
			// btnDiv
			//
			this->btnDiv->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnDiv->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDiv->Location = System::Drawing::Point(166, 53);
			this->btnDiv->Name = L"btnDiv";
			this->btnDiv->Size = System::Drawing::Size(33, 38);
			this->btnDiv->TabIndex = 4;
			this->btnDiv->Text = L"/";
			this->btnDiv->UseMnemonic = false;
			this->btnDiv->UseVisualStyleBackColor = true;
			this->btnDiv->Click += gcnew System::EventHandler(this, &frmMain::btnDiv_Click_1);
			//
			// txtOne
			//
			this->txtOne->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtOne->Location = System::Drawing::Point(49, 12);
			this->txtOne->Name = L"txtOne";
			this->txtOne->Size = System::Drawing::Size(91, 35);
			this->txtOne->TabIndex = 5;
			this->txtOne->Text = L"0";
			this->txtOne->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			//
			// txtTwo
			//
			this->txtTwo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtTwo->Location = System::Drawing::Point(146, 12);
			this->txtTwo->Name = L"txtTwo";
			this->txtTwo->Size = System::Drawing::Size(92, 35);
			this->txtTwo->TabIndex = 6;
			this->txtTwo->Text = L"0";
			this->txtTwo->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			//
			// txtResult
			//
			this->txtResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtResult->Location = System::Drawing::Point(49, 97);
			this->txtResult->Name = L"txtResult";
			this->txtResult->ReadOnly = true;
			this->txtResult->Size = System::Drawing::Size(189, 35);
			this->txtResult->TabIndex = 7;
			this->txtResult->Text = L"0";
			this->txtResult->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			//
			// btnSQRT
			//
			this->btnSQRT->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnSQRT->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSQRT->Location = System::Drawing::Point(205, 53);
			this->btnSQRT->Name = L"btnSQRT";
			this->btnSQRT->Size = System::Drawing::Size(33, 38);
			this->btnSQRT->TabIndex = 8;
			this->btnSQRT->Text = L"√";
			this->btnSQRT->UseMnemonic = false;
			this->btnSQRT->UseVisualStyleBackColor = true;
			this->btnSQRT->Click += gcnew System::EventHandler(this, &frmMain::btnSQRT_Click_1);
			//
			// button1
			//
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(49, 141);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(189, 38);
			this->button1->TabIndex = 9;
			this->button1->Text = L"&CLR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMain::button1_Click);
			//
			// frmMain
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(283, 204);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnSQRT);
			this->Controls->Add(this->txtResult);
			this->Controls->Add(this->txtTwo);
			this->Controls->Add(this->txtOne);
			this->Controls->Add(this->btnDiv);
			this->Controls->Add(this->btnMult);
			this->Controls->Add(this->btnSub);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->statusStrip1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"frmMain";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Technocalc CLR";
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		double ldOne = double::Parse(txtOne->Text);
		double ldTwo = double::Parse(txtTwo->Text);
		txtResult->Text = (ldOne + ldTwo).ToString();
	}
	private: System::Void btnSub_Click_1(System::Object^ sender, System::EventArgs^ e) {
		double ldOne = double::Parse(txtOne->Text);
		double ldTwo = double::Parse(txtTwo->Text);
		txtResult->Text = (ldOne - ldTwo).ToString();
	}
	private: System::Void btnMult_Click_1(System::Object^ sender, System::EventArgs^ e) {
		double ldOne = double::Parse(txtOne->Text);
		double ldTwo = double::Parse(txtTwo->Text);
		txtResult->Text = (ldOne * ldTwo).ToString();
	}
	private: System::Void btnDiv_Click_1(System::Object^ sender, System::EventArgs^ e) {
		double ldOne = double::Parse(txtOne->Text);
		double ldTwo = double::Parse(txtTwo->Text);
		txtResult->Text = (ldOne / ldTwo).ToString();
	}
	private: System::Void btnSQRT_Click_1(System::Object^ sender, System::EventArgs^ e) {
		double ldOne = double::Parse(txtOne->Text);
		txtTwo->Text = "0";
		txtResult->Text = (sqrt(ldOne)).ToString();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		txtOne->Text = "0";
		txtTwo->Text = "0";
		txtResult->Text = "0";
	}
	};
}
