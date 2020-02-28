#pragma once
#include <math.h>
#include "functions.h"
#include "frmInfo.h"
#include "files.h"

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
		technolibCLR::TechnoClass^ tl = gcnew technolibCLR::TechnoClass;
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
	private: System::Windows::Forms::Button^ btnFac;
	private: System::Diagnostics::PerformanceCounter^ perfcCPU;
	private: System::Windows::Forms::Timer^ tmrPerfCounter;
	private: System::Windows::Forms::ToolTip^ toolTipMain;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel2;
	private: System::Windows::Forms::Button^ btnLn;
	private: System::Windows::Forms::ContextMenuStrip^ cmsClipboard;
	private: System::Windows::Forms::ToolStripMenuItem^ tsmiClipboard;
	private: System::Windows::Forms::Button^ btnLog10;
	private: System::Windows::Forms::MenuStrip^ msMain;
	private: System::Windows::Forms::ToolStripMenuItem^ tsmiInfo;
	private: System::Windows::Forms::ErrorProvider^ errorProviderMain;
	private: System::Windows::Forms::CheckBox^ chkOnTop;
	private: System::Windows::Forms::Button^ btnSin;
	private: System::Windows::Forms::ToolStripStatusLabel^ tsslPercent;
	private: System::Windows::Forms::Button^ btnD6;
	private: System::Windows::Forms::Button^ btnAD_D;
	private: System::Windows::Forms::Button^ btnRNG;
	private: System::Windows::Forms::Button^ btnSave;

	private: System::ComponentModel::IContainer^ components;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmMain::typeid));
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripProgressBar1 = (gcnew System::Windows::Forms::ToolStripProgressBar());
			this->tsslPercent = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnSub = (gcnew System::Windows::Forms::Button());
			this->btnMult = (gcnew System::Windows::Forms::Button());
			this->btnDiv = (gcnew System::Windows::Forms::Button());
			this->txtOne = (gcnew System::Windows::Forms::TextBox());
			this->txtTwo = (gcnew System::Windows::Forms::TextBox());
			this->txtResult = (gcnew System::Windows::Forms::TextBox());
			this->cmsClipboard = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->tsmiClipboard = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btnSQRT = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnFac = (gcnew System::Windows::Forms::Button());
			this->perfcCPU = (gcnew System::Diagnostics::PerformanceCounter());
			this->tmrPerfCounter = (gcnew System::Windows::Forms::Timer(this->components));
			this->toolTipMain = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->btnLn = (gcnew System::Windows::Forms::Button());
			this->btnLog10 = (gcnew System::Windows::Forms::Button());
			this->chkOnTop = (gcnew System::Windows::Forms::CheckBox());
			this->btnSin = (gcnew System::Windows::Forms::Button());
			this->btnD6 = (gcnew System::Windows::Forms::Button());
			this->btnAD_D = (gcnew System::Windows::Forms::Button());
			this->btnRNG = (gcnew System::Windows::Forms::Button());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->msMain = (gcnew System::Windows::Forms::MenuStrip());
			this->tsmiInfo = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->errorProviderMain = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->statusStrip1->SuspendLayout();
			this->cmsClipboard->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->perfcCPU))->BeginInit();
			this->msMain->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProviderMain))->BeginInit();
			this->SuspendLayout();
			//
			// statusStrip1
			//
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripStatusLabel1,
					this->toolStripProgressBar1, this->tsslPercent, this->toolStripStatusLabel2
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 234);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->ShowItemToolTips = true;
			this->statusStrip1->Size = System::Drawing::Size(449, 22);
			this->statusStrip1->SizingGrip = false;
			this->statusStrip1->TabIndex = 0;
			this->statusStrip1->Text = L"Status";
			//
			// toolStripStatusLabel1
			//
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(147, 17);
			this->toolStripStatusLabel1->Spring = true;
			this->toolStripStatusLabel1->Text = L"Total CPU Usage in %: ";
			this->toolStripStatusLabel1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			//
			// toolStripProgressBar1
			//
			this->toolStripProgressBar1->AutoToolTip = true;
			this->toolStripProgressBar1->Name = L"toolStripProgressBar1";
			this->toolStripProgressBar1->Size = System::Drawing::Size(100, 16);
			this->toolStripProgressBar1->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->toolStripProgressBar1->ToolTipText = L"Current usage of total processing power";
			//
			// tsslPercent
			//
			this->tsslPercent->AutoSize = false;
			this->tsslPercent->Margin = System::Windows::Forms::Padding(-1, 3, 0, 2);
			this->tsslPercent->Name = L"tsslPercent";
			this->tsslPercent->Size = System::Drawing::Size(38, 17);
			this->tsslPercent->Text = L"0% ";
			//
			// toolStripStatusLabel2
			//
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(147, 17);
			this->toolStripStatusLabel2->Spring = true;
			this->toolStripStatusLabel2->Text = L"©2020 Frank G. Dahncke";
			this->toolStripStatusLabel2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			//
			// btnAdd
			//
			this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->Location = System::Drawing::Point(58, 53);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(33, 38);
			this->btnAdd->TabIndex = 1;
			this->btnAdd->Text = L"+";
			this->toolTipMain->SetToolTip(this->btnAdd, L"Addition");
			this->btnAdd->UseMnemonic = false;
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &frmMain::btnAdd_Click);
			//
			// btnSub
			//
			this->btnSub->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnSub->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSub->Location = System::Drawing::Point(97, 53);
			this->btnSub->Name = L"btnSub";
			this->btnSub->Size = System::Drawing::Size(33, 38);
			this->btnSub->TabIndex = 2;
			this->btnSub->Text = L"-";
			this->toolTipMain->SetToolTip(this->btnSub, L"Subtraction");
			this->btnSub->UseMnemonic = false;
			this->btnSub->UseVisualStyleBackColor = true;
			this->btnSub->Click += gcnew System::EventHandler(this, &frmMain::btnSub_Click_1);
			//
			// btnMult
			//
			this->btnMult->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnMult->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMult->Location = System::Drawing::Point(136, 53);
			this->btnMult->Name = L"btnMult";
			this->btnMult->Size = System::Drawing::Size(33, 38);
			this->btnMult->TabIndex = 3;
			this->btnMult->Text = L"*";
			this->toolTipMain->SetToolTip(this->btnMult, L"Multiplication");
			this->btnMult->UseMnemonic = false;
			this->btnMult->UseVisualStyleBackColor = true;
			this->btnMult->Click += gcnew System::EventHandler(this, &frmMain::btnMult_Click_1);
			//
			// btnDiv
			//
			this->btnDiv->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnDiv->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDiv->Location = System::Drawing::Point(175, 53);
			this->btnDiv->Name = L"btnDiv";
			this->btnDiv->Size = System::Drawing::Size(33, 38);
			this->btnDiv->TabIndex = 4;
			this->btnDiv->Text = L"/";
			this->toolTipMain->SetToolTip(this->btnDiv, L"Division");
			this->btnDiv->UseMnemonic = false;
			this->btnDiv->UseVisualStyleBackColor = true;
			this->btnDiv->Click += gcnew System::EventHandler(this, &frmMain::btnDiv_Click_1);
			//
			// txtOne
			//
			this->txtOne->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtOne->Location = System::Drawing::Point(58, 12);
			this->txtOne->Name = L"txtOne";
			this->txtOne->Size = System::Drawing::Size(170, 35);
			this->txtOne->TabIndex = 5;
			this->txtOne->Text = L"0";
			this->txtOne->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->toolTipMain->SetToolTip(this->txtOne, L"First number");
			this->txtOne->WordWrap = false;
			this->txtOne->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &frmMain::txtOne_Validating);
			//
			// txtTwo
			//
			this->txtTwo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtTwo->Location = System::Drawing::Point(234, 12);
			this->txtTwo->Name = L"txtTwo";
			this->txtTwo->Size = System::Drawing::Size(169, 35);
			this->txtTwo->TabIndex = 6;
			this->txtTwo->Text = L"0";
			this->txtTwo->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->toolTipMain->SetToolTip(this->txtTwo, L"Second number. Only used if the operation requires it.");
			this->txtTwo->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &frmMain::txtTwo_Validating);
			//
			// txtResult
			//
			this->txtResult->ContextMenuStrip = this->cmsClipboard;
			this->txtResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtResult->Location = System::Drawing::Point(58, 97);
			this->txtResult->Multiline = true;
			this->txtResult->Name = L"txtResult";
			this->txtResult->ReadOnly = true;
			this->txtResult->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->txtResult->ShortcutsEnabled = false;
			this->txtResult->Size = System::Drawing::Size(345, 62);
			this->txtResult->TabIndex = 7;
			this->txtResult->Text = L"0";
			this->txtResult->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->toolTipMain->SetToolTip(this->txtResult, L"Result goes here");
			this->txtResult->WordWrap = false;
			//
			// cmsClipboard
			//
			this->cmsClipboard->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->tsmiClipboard });
			this->cmsClipboard->Name = L"cmsClipboard";
			this->cmsClipboard->Size = System::Drawing::Size(135, 26);
			this->toolTipMain->SetToolTip(this->cmsClipboard, L"Copy result to clipboard");
			this->cmsClipboard->Opening += gcnew System::ComponentModel::CancelEventHandler(this, &frmMain::cmsClipboard_Opening);
			//
			// tsmiClipboard
			//
			this->tsmiClipboard->AutoToolTip = true;
			this->tsmiClipboard->Name = L"tsmiClipboard";
			this->tsmiClipboard->Size = System::Drawing::Size(134, 22);
			this->tsmiClipboard->Text = L"Copy result";
			this->tsmiClipboard->ToolTipText = L"copies the current result to the clipboard";
			this->tsmiClipboard->Click += gcnew System::EventHandler(this, &frmMain::tsmiClipboard_Click);
			//
			// btnSQRT
			//
			this->btnSQRT->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnSQRT->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSQRT->Location = System::Drawing::Point(214, 53);
			this->btnSQRT->Name = L"btnSQRT";
			this->btnSQRT->Size = System::Drawing::Size(33, 38);
			this->btnSQRT->TabIndex = 8;
			this->btnSQRT->Text = L"√";
			this->toolTipMain->SetToolTip(this->btnSQRT, L"Square Root");
			this->btnSQRT->UseMnemonic = false;
			this->btnSQRT->UseVisualStyleBackColor = true;
			this->btnSQRT->Click += gcnew System::EventHandler(this, &frmMain::btnSQRT_Click_1);
			//
			// button1
			//
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(58, 165);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(345, 38);
			this->button1->TabIndex = 9;
			this->button1->Text = L"&CLR";
			this->toolTipMain->SetToolTip(this->button1, L"Clears all fields.");
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMain::button1_Click);
			//
			// btnFac
			//
			this->btnFac->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnFac->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFac->Location = System::Drawing::Point(253, 53);
			this->btnFac->Name = L"btnFac";
			this->btnFac->Size = System::Drawing::Size(33, 38);
			this->btnFac->TabIndex = 10;
			this->btnFac->Text = L"!";
			this->toolTipMain->SetToolTip(this->btnFac, L"Faculty");
			this->btnFac->UseMnemonic = false;
			this->btnFac->UseVisualStyleBackColor = true;
			this->btnFac->Click += gcnew System::EventHandler(this, &frmMain::btnFac_Click);
			//
			// perfcCPU
			//
			this->perfcCPU->CategoryName = L"Processor";
			this->perfcCPU->CounterName = L"% Processor Time";
			this->perfcCPU->InstanceName = L"_Total";
			//
			// tmrPerfCounter
			//
			this->tmrPerfCounter->Enabled = true;
			this->tmrPerfCounter->Interval = 1000;
			this->tmrPerfCounter->Tick += gcnew System::EventHandler(this, &frmMain::tmrPerfCounter_Tick);
			//
			// toolTipMain
			//
			this->toolTipMain->AutoPopDelay = 5000;
			this->toolTipMain->InitialDelay = 800;
			this->toolTipMain->IsBalloon = true;
			this->toolTipMain->ReshowDelay = 100;
			this->toolTipMain->ToolTipTitle = L"Calculator CLR";
			//
			// btnLn
			//
			this->btnLn->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnLn->Font = (gcnew System::Drawing::Font(L"Courier New", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLn->Location = System::Drawing::Point(292, 53);
			this->btnLn->Name = L"btnLn";
			this->btnLn->Size = System::Drawing::Size(33, 38);
			this->btnLn->TabIndex = 11;
			this->btnLn->Text = L"ln";
			this->toolTipMain->SetToolTip(this->btnLn, L"logarithmus naturalis");
			this->btnLn->UseMnemonic = false;
			this->btnLn->UseVisualStyleBackColor = true;
			this->btnLn->Click += gcnew System::EventHandler(this, &frmMain::btnLn_Click);
			//
			// btnLog10
			//
			this->btnLog10->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnLog10->Font = (gcnew System::Drawing::Font(L"Courier New", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLog10->Location = System::Drawing::Point(331, 53);
			this->btnLog10->Name = L"btnLog10";
			this->btnLog10->Size = System::Drawing::Size(33, 38);
			this->btnLog10->TabIndex = 12;
			this->btnLog10->Text = L"lg";
			this->toolTipMain->SetToolTip(this->btnLog10, L"logarithm to base of 10");
			this->btnLog10->UseMnemonic = false;
			this->btnLog10->UseVisualStyleBackColor = true;
			this->btnLog10->Click += gcnew System::EventHandler(this, &frmMain::btnLog10_Click);
			//
			// chkOnTop
			//
			this->chkOnTop->AutoSize = true;
			this->chkOnTop->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->chkOnTop->Location = System::Drawing::Point(62, 211);
			this->chkOnTop->Name = L"chkOnTop";
			this->chkOnTop->Size = System::Drawing::Size(84, 18);
			this->chkOnTop->TabIndex = 14;
			this->chkOnTop->Text = L"&stay on top";
			this->toolTipMain->SetToolTip(this->chkOnTop, L"if checked, makes the calculator window stay above all others");
			this->chkOnTop->UseVisualStyleBackColor = true;
			this->chkOnTop->CheckedChanged += gcnew System::EventHandler(this, &frmMain::chkOnTop_CheckedChanged);
			//
			// btnSin
			//
			this->btnSin->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnSin->Font = (gcnew System::Drawing::Font(L"Courier New", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSin->Location = System::Drawing::Point(370, 53);
			this->btnSin->Name = L"btnSin";
			this->btnSin->Size = System::Drawing::Size(33, 38);
			this->btnSin->TabIndex = 15;
			this->btnSin->Text = L"sin";
			this->toolTipMain->SetToolTip(this->btnSin, L"sinus");
			this->btnSin->UseMnemonic = false;
			this->btnSin->UseVisualStyleBackColor = true;
			this->btnSin->Click += gcnew System::EventHandler(this, &frmMain::btnSin_Click);
			//
			// btnD6
			//
			this->btnD6->Location = System::Drawing::Point(152, 204);
			this->btnD6->Name = L"btnD6";
			this->btnD6->Size = System::Drawing::Size(37, 31);
			this->btnD6->TabIndex = 16;
			this->btnD6->Text = L"D6";
			this->toolTipMain->SetToolTip(this->btnD6, L"Throw die");
			this->btnD6->UseVisualStyleBackColor = true;
			this->btnD6->Click += gcnew System::EventHandler(this, &frmMain::btnD6_Click);
			//
			// btnAD_D
			//
			this->btnAD_D->Location = System::Drawing::Point(195, 204);
			this->btnAD_D->Name = L"btnAD_D";
			this->btnAD_D->Size = System::Drawing::Size(52, 31);
			this->btnAD_D->TabIndex = 17;
			this->btnAD_D->Text = L"AD&D";
			this->toolTipMain->SetToolTip(this->btnAD_D, L"Throw AD&D die");
			this->btnAD_D->UseMnemonic = false;
			this->btnAD_D->UseVisualStyleBackColor = true;
			this->btnAD_D->Click += gcnew System::EventHandler(this, &frmMain::btnAD_D_Click);
			//
			// btnRNG
			//
			this->btnRNG->Location = System::Drawing::Point(253, 204);
			this->btnRNG->Name = L"btnRNG";
			this->btnRNG->Size = System::Drawing::Size(52, 31);
			this->btnRNG->TabIndex = 18;
			this->btnRNG->Text = L"RNG";
			this->toolTipMain->SetToolTip(this->btnRNG, L"Generate random numbers. First operand is number of numbers, second operand is th"
				L"e maximum value.");
			this->btnRNG->UseMnemonic = false;
			this->btnRNG->UseVisualStyleBackColor = true;
			this->btnRNG->Click += gcnew System::EventHandler(this, &frmMain::btnRNG_Click);
			//
			// btnSave
			//
			this->btnSave->Location = System::Drawing::Point(312, 204);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(91, 31);
			this->btnSave->TabIndex = 19;
			this->btnSave->Text = L"Save";
			this->toolTipMain->SetToolTip(this->btnSave, L"Saves the result to a file");
			this->btnSave->UseMnemonic = false;
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &frmMain::btnSave_Click);
			//
			// msMain
			//
			this->msMain->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->tsmiInfo });
			this->msMain->Location = System::Drawing::Point(0, 0);
			this->msMain->Name = L"msMain";
			this->msMain->Size = System::Drawing::Size(449, 24);
			this->msMain->TabIndex = 13;
			this->msMain->Text = L"menuStrip1";
			//
			// tsmiInfo
			//
			this->tsmiInfo->Name = L"tsmiInfo";
			this->tsmiInfo->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::I));
			this->tsmiInfo->Size = System::Drawing::Size(40, 20);
			this->tsmiInfo->Text = L"&Info";
			this->tsmiInfo->ToolTipText = L"Displays additional info about this program";
			this->tsmiInfo->Click += gcnew System::EventHandler(this, &frmMain::tsmiInfo_Click);
			//
			// errorProviderMain
			//
			this->errorProviderMain->ContainerControl = this;
			//
			// frmMain
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(449, 256);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->btnRNG);
			this->Controls->Add(this->btnAD_D);
			this->Controls->Add(this->btnD6);
			this->Controls->Add(this->btnSin);
			this->Controls->Add(this->chkOnTop);
			this->Controls->Add(this->btnLog10);
			this->Controls->Add(this->btnLn);
			this->Controls->Add(this->btnFac);
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
			this->Controls->Add(this->msMain);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->msMain;
			this->MaximizeBox = false;
			this->Name = L"frmMain";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Technocalc CLR";
			this->Load += gcnew System::EventHandler(this, &frmMain::frmMain_Load);
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->cmsClipboard->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->perfcCPU))->EndInit();
			this->msMain->ResumeLayout(false);
			this->msMain->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProviderMain))->EndInit();
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

		   //UInt64 faculty(unsigned int n)
		   //{
			  // if (n == 0)
				 //  return 1;
			  // else
				 //  return n * faculty(n - 1);
		   //}
	private: System::Void btnFac_Click(System::Object^ sender, System::EventArgs^ e) {
		unsigned luOne;
		if (!unsigned::TryParse(txtOne->Text, luOne)) {
			txtResult->Text = "invalid input";
			return;
		}
		txtTwo->Text = "0";
		txtResult->Text = (faculty(luOne)).ToString();
		if (txtResult->Text == "0") {
			txtResult->Text = "out of range";
		}
	}
	private: System::Void tmrPerfCounter_Tick(System::Object^ sender, System::EventArgs^ e) {
		toolStripProgressBar1->Value = (int)perfcCPU->NextValue();
		tsslPercent->Text = toolStripProgressBar1->Value.ToString() + "% ";
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnLn_Click(System::Object^ sender, System::EventArgs^ e) {
		double ldOne = double::Parse(txtOne->Text);
		txtTwo->Text = "0";
		txtResult->Text = (log(ldOne)).ToString();
	}
	private: System::Void cmsClipboard_Opening(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	}
	private: System::Void tsmiClipboard_Click(System::Object^ sender, System::EventArgs^ e) {
		Clipboard::SetDataObject(txtResult->Text, true);
	}
	private: System::Void btnLog10_Click(System::Object^ sender, System::EventArgs^ e) {
		double ldOne = double::Parse(txtOne->Text);
		txtTwo->Text = "0";
		txtResult->Text = (log10(ldOne)).ToString();
	}
	private: System::Void tsmiInfo_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Info coming up!", "Techno says", MessageBoxButtons::OK);
		Form^ info = gcnew frmInfo;
		//info->Parent = this;//->Handle;
		/*info->StartPosition = FormStartPosition::CenterParent;
		info->Show(this);*/
		info->ShowDialog();
	}
	private: System::Void txtOne_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
		if (!IsNumeric(txtOne->Text)) {
			// Cancel the event and select the text to be corrected by the user.

			e->Cancel = true;
			txtOne->Select(0, txtOne->Text->Length);

			// Set the ErrorProvider error with the text to display.

			frmMain::errorProviderMain->SetError(txtOne, "Invalid input. Numbers only!");
		}
		else {
			frmMain::errorProviderMain->Clear();
		}
	}
	private: System::Void chkOnTop_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		frmMain::TopMost = chkOnTop->Checked;
	}
	private: System::Void btnSin_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			double ldOne = double::Parse(txtOne->Text);
			txtTwo->Text = "0";
			txtResult->Text = (sin(ldOne)).ToString();
		}
		catch (Exception ^ ex) {
			MessageBox::Show(ex->Message + "\n Reason: " + ex->InnerException, "Calculation Error", MessageBoxButtons::OK);
		}
	}
	private: System::Void txtTwo_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
		if (!IsNumeric(txtTwo->Text)) {
			// Cancel the event and select the text to be corrected by the user.

			e->Cancel = true;
			txtTwo->Select(0, txtTwo->Text->Length);

			// Set the ErrorProvider error with the text to display.

			frmMain::errorProviderMain->SetError(txtTwo, "Invalid input. Numbers only!");
		}
		else {
			frmMain::errorProviderMain->Clear();
		}
	}
	private: System::Void frmMain_Load(System::Object^ sender, System::EventArgs^ e) {
		tl->InitRNG();
	}
	private: System::Void btnD6_Click(System::Object^ sender, System::EventArgs^ e) {
		txtResult->Text = tl->rollDie().ToString() + " rolled";
	}
	private: System::Void btnAD_D_Click(System::Object^ sender, System::EventArgs^ e) {
		unsigned result;
		try
		{
			unsigned sides = unsigned::Parse(txtOne->Text);
			result = tl->rollAD_D_Die(sides);
		}
		catch (Exception ^ ex)
		{
			txtResult->Text = "ERR";
			MessageBox::Show("Legal values are 2..100.", "Illegal Input", MessageBoxButtons::OK, MessageBoxIcon::Information);
			button1->PerformClick();
		}
		if (result == 0) {
			txtResult->Text = "Illegal input. Legal values are 2..100.";
		}
	}
	private: System::Void btnRNG_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			txtResult->Text = Randoms(unsigned::Parse(txtOne->Text), unsigned::Parse(txtTwo->Text));
		}
		catch (Exception ^ ex)
		{
			txtResult->Text = "ERROR: " + ex->Message;
		}
	}
	private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ lsResult = AskForSaveFileName("Save the result", "txt");
		if (lsResult != "") {
			try {
				System::IO::File::WriteAllText(lsResult, txtResult->Text, System::Text::Encoding::Default);
			}
			catch (Exception ^ ex) {
				MessageBox::Show(ex->Message, "Save failed");
			}
		}
	}
	};
}
