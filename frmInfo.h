#pragma once

namespace CalculatorCLR {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class frmInfo : public System::Windows::Forms::Form
	{
	public:
		frmInfo(void)
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
		~frmInfo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblInfo;
	protected:

	protected:

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
			this->lblInfo = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			//
			// lblInfo
			//
			this->lblInfo->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblInfo->Location = System::Drawing::Point(0, 0);
			this->lblInfo->Name = L"lblInfo";
			this->lblInfo->Size = System::Drawing::Size(284, 261);
			this->lblInfo->TabIndex = 0;
			this->lblInfo->Text = L"Info";
			this->lblInfo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			//
			// frmInfo
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->lblInfo);
			this->DoubleBuffered = true;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"frmInfo";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"frmInfo";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &frmInfo::frmInfo_Load);
			this->ResumeLayout(false);
		}
#pragma endregion
	private: System::Void frmInfo_Load(System::Object^ sender, System::EventArgs^ e) {
		//frmInfo::Parent = IntPtr(frmMain::handle);
		technolibCLR::TechnoClass^ tl = gcnew technolibCLR::TechnoClass;
		String^ result = tl->currentDECDate();
		lblInfo->Text = "Today is " + result->ToString();
	}
	};
}
