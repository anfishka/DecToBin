#pragma once

namespace addforms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbEnterNum;
	private: System::Windows::Forms::TextBox^ tbEnterNum;
	private: System::Windows::Forms::Label^ lbBinaryNum;
	private: System::Windows::Forms::Label^ lbProgress;
	protected:
	protected:

	private: System::Windows::Forms::Button^ btnClear;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ label1;

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->lbEnterNum = (gcnew System::Windows::Forms::Label());
			this->tbEnterNum = (gcnew System::Windows::Forms::TextBox());
			this->lbBinaryNum = (gcnew System::Windows::Forms::Label());
			this->lbProgress = (gcnew System::Windows::Forms::Label());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbEnterNum
			// 
			this->lbEnterNum->AutoSize = true;
			this->lbEnterNum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbEnterNum->Location = System::Drawing::Point(15, 130);
			this->lbEnterNum->Name = L"lbEnterNum";
			this->lbEnterNum->Size = System::Drawing::Size(221, 25);
			this->lbEnterNum->TabIndex = 0;
			this->lbEnterNum->Text = L"Enter decimal number";
			this->lbEnterNum->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// tbEnterNum
			// 
			this->tbEnterNum->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbEnterNum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbEnterNum->Location = System::Drawing::Point(12, 201);
			this->tbEnterNum->Name = L"tbEnterNum";
			this->tbEnterNum->Size = System::Drawing::Size(554, 34);
			this->tbEnterNum->TabIndex = 1;
			this->tbEnterNum->TextChanged += gcnew System::EventHandler(this, &MainForm::tbEnterNum_TextChanged);
			// 
			// lbBinaryNum
			// 
			this->lbBinaryNum->AutoSize = true;
			this->lbBinaryNum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbBinaryNum->Location = System::Drawing::Point(18, 288);
			this->lbBinaryNum->Name = L"lbBinaryNum";
			this->lbBinaryNum->Size = System::Drawing::Size(164, 25);
			this->lbBinaryNum->TabIndex = 2;
			this->lbBinaryNum->Text = L"Binary number: ";
			this->lbBinaryNum->Click += gcnew System::EventHandler(this, &MainForm::lbBinaryNum_Click);
			// 
			// lbProgress
			// 
			this->lbProgress->AutoSize = true;
			this->lbProgress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbProgress->Location = System::Drawing::Point(231, 277);
			this->lbProgress->Name = L"lbProgress";
			this->lbProgress->Size = System::Drawing::Size(157, 38);
			this->lbProgress->TabIndex = 4;
			this->lbProgress->Text = L"Progress";
			this->lbProgress->Click += gcnew System::EventHandler(this, &MainForm::lbProgress_Click);
			// 
			// btnClear
			// 
			this->btnClear->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->Location = System::Drawing::Point(280, 3);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(271, 58);
			this->btnClear->TabIndex = 0;
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button2->BackColor = System::Drawing::Color::Green;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(3, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(271, 58);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Convert";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->button2, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->btnClear, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(20, 457);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(554, 64);
			this->tableLayoutPanel1->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(152, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(253, 32);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Decimal to Binary";
			this->label1->Click += gcnew System::EventHandler(this, &MainForm::label1_Click_1);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(583, 592);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->lbProgress);
			this->Controls->Add(this->lbBinaryNum);
			this->Controls->Add(this->tbEnterNum);
			this->Controls->Add(this->lbEnterNum);
			this->MinimumSize = System::Drawing::Size(367, 486);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	
private: System::Void MainForm::MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->lbProgress->Text = "";
}


private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->tbEnterNum->Text = "";
	this->lbProgress->Text = "";
}
private: System::Void lbBinaryNum_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tbEnterNum_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::String^ MainForm::ConvertToBinary(System::String^ input)
{
	System::Text::StringBuilder^ res = gcnew System::Text::StringBuilder();
	int num = System::Convert::ToInt32(input);
#define CONVERT_TO_BINARY(num) System::Convert::ToString(num,2)

		System::String^ binary = CONVERT_TO_BINARY(num);
		res->Append(binary);

#undef CONVERT_TO_BINARY

	return res->ToString();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ enterNum = this->tbEnterNum->Text;
	String^ res = ConvertToBinary(enterNum);
	this->lbProgress->Text = res;
	 
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lbProgress_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
