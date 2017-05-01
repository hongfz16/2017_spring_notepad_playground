#pragma once

#include<cstring>
#include<iostream>
#include<cstdlib>
#include<cstdio>

namespace CLRnotepad {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Text;
	using namespace System::Runtime::InteropServices;
	//	using namespace System::Object;

	/// <summary>
	/// MyWindow ժҪ
	/// </summary>


/*
	const int WM_USER = 0x0400;
	const int EM_GETPARAFORMAT = WM_USER + 61;
	const int EM_SETPARAFORMAT = WM_USER + 71;
	const long MAX_TAB_STOPS = 32;
	const unsigned int PFM_LINESPACING = 0x00000100;
	
	[StructLayout(LayoutKind::Sequential)]
	ref struct PARAFORMAT2
	{
		int cbSize;
		unsigned int dwMask;
		//DWORD dwMask;
		short wNumbering;
		short wReserved;
		int dxStartIndent;
		int dxRightIndent;
		int dxOffset;
		short wAlignment;
		short cTabCount;
		[MarshalAs(UnmanagedType::ByValArray, SizeConst = 32)]
		int* rgxTabs;
		int dySpaceBefore;
		int dySpaceAfter;
		int dyLineSpacing;
		short sStyle;
		Byte bLineSpacingRule;
		Byte bOutlineLevel;
		short wShadingWeight;
		short wShadingStyle;
		short wNumberingStart;
		short wNumberingStyle;
		short wNumberingTab;
		short wBorderSpace;
		short wBorderWidth;
		short wBorders;
	};

	[DllImport("user32", CharSet = CharSet::Auto)]
	//[DllImport("user32.dll", CallingConvention = CallingConvention::StdCall)];
	static IntPtr SendMessage(HandleRef^ hWnd, int msg, int wParam, PARAFORMAT2^ lParam);

	/// <summary>
	/// �����о�
	/// </summary>
	/// <param name="ctl">�ؼ�</param>
	/// <param name="dyLineSpacing">���</param>
	static void SetLineSpace(Control^ ctl, int dyLineSpacing)
	{
		PARAFORMAT2^ fmt = gcnew PARAFORMAT2();
		fmt->cbSize = System::Runtime::InteropServices::Marshal::SizeOf(fmt);
		fmt->bLineSpacingRule = 4;// bLineSpacingRule;
		fmt->dyLineSpacing = dyLineSpacing;
		fmt->dwMask = PFM_LINESPACING;
	//	try
	//	{
		SendMessage(gcnew HandleRef(ctl, ctl->Handle), EM_SETPARAFORMAT, 0, fmt);
	//	}
	//	catch
	//	{

	//	}
		
	};
*/
	public ref class MyWindow : public System::Windows::Forms::Form
	{
/*
	public:
		const int WM_USER = 0x0400;
		const int EM_GETPARAFORMAT = WM_USER + 61;
		const int EM_SETPARAFORMAT = WM_USER + 71;
		const long MAX_TAB_STOPS = 32;
		const unsigned int PFM_LINESPACING = 0x00000100;
		//	[StructLayout(LayoutKind::Sequential)]
		ref struct PARAFORMAT2
		{
			int cbSize;
			unsigned int dwMask;
			//DWORD dwMask;
			short wNumbering;
			short wReserved;
			int dxStartIndent;
			int dxRightIndent;
			int dxOffset;
			short wAlignment;
			short cTabCount;
			[MarshalAs(UnmanagedType::ByValArray, SizeConst = 32)]
			int* rgxTabs;
			int dySpaceBefore;
			int dySpaceAfter;
			int dyLineSpacing;
			short sStyle;
			Byte bLineSpacingRule;
			Byte bOutlineLevel;
			short wShadingWeight;
			short wShadingStyle;
			short wNumberingStart;
			short wNumberingStyle;
			short wNumberingTab;
			short wBorderSpace;
			short wBorderWidth;
			short wBorders;
		};

		[DllImport("user32.dll", CharSet = CharSet::Auto)]
		//[DllImport("user32.dll", CallingConvention = CallingConvention::StdCall)];
		//	static extern IntPtr SendMessage(HandleRef hWnd, int msg, int wParam, ref PARAFORMAT2 lParam);

		/// <summary>
		/// �����о�
		/// </summary>
		/// <param name="ctl">�ؼ�</param>
		/// <param name="dyLineSpacing">���</param>
		static void SetLineSpace(Control^ ctl, int dyLineSpacing)
		{
			PARAFORMAT2* fmt = new PARAFORMAT2();
			fmt->cbSize = 100000;//System::Runtime::InteropServices::Marshal::SizeOf(fmt);
			fmt->bLineSpacingRule = 4;// bLineSpacingRule;
			fmt->dyLineSpacing = dyLineSpacing;
			fmt->dwMask = PFM_LINESPACING;
			/*
			try
			{
			//SendMessage(new HandleRef(ctl, ctl.Handle), EM_SETPARAFORMAT, 0, ref fmt);
			}
			catch
			{

			}
			
		}
*/
	public:
		MyWindow(void)
		{
			InitializeComponent();
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
			//CreateMyRichTextBox();
		}
		/*
		public:
			void CreateMyRichTextBox()
			{
				RichTextBox^ richTextBox1 = gcnew RichTextBox;
				richTextBox1->Dock = DockStyle::Fill;

				richTextBox1->LoadFile("C:\\vs2015_project\\MyDocument.rtf");
				richTextBox1->Find("Text", RichTextBoxFinds::MatchCase);

				richTextBox1->SelectionFont = gcnew System::Drawing::Font(
					"Verdana", 50, FontStyle::Bold);
				richTextBox1->SelectionColor = Color::Red;

				richTextBox1->SaveFile("C:\\vs2015_project\\MyDocument.rtf",
					RichTextBoxStreamType::RichText);

				this->Controls->Add(richTextBox1);
			}
			*/
	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~MyWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  �ļ�FToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �½�NToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����SToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �˳�ToolStripMenuItem;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::ToolStripMenuItem^  ��OToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;

	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^  testToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  fontToolStripMenuItem;
	private: System::Windows::Forms::FontDialog^  fontDialog1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::ColorDialog^  colorDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^  colorToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  wtfToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  letterSpacingToolStripMenuItem;



	protected:

	private:
		/// <summary>
		/// ����������������
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ�޸�
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->�ļ�FToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�½�NToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��OToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����SToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�˳�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->testToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fontToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->colorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wtfToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->letterSpacingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->�ļ�FToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(8, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(379, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyWindow::menuStrip1_ItemClicked);
			// 
			// �ļ�FToolStripMenuItem
			// 
			this->�ļ�FToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {
				this->�½�NToolStripMenuItem,
					this->��OToolStripMenuItem, this->����SToolStripMenuItem, this->�˳�ToolStripMenuItem, this->testToolStripMenuItem, this->fontToolStripMenuItem,
					this->colorToolStripMenuItem, this->wtfToolStripMenuItem, this->letterSpacingToolStripMenuItem
			});
			this->�ļ�FToolStripMenuItem->Name = L"�ļ�FToolStripMenuItem";
			this->�ļ�FToolStripMenuItem->Size = System::Drawing::Size(69, 24);
			this->�ļ�FToolStripMenuItem->Text = L"�ļ�(&F)";
			this->�ļ�FToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyWindow::�ļ�FToolStripMenuItem_Click);
			// 
			// �½�NToolStripMenuItem
			// 
			this->�½�NToolStripMenuItem->Name = L"�½�NToolStripMenuItem";
			this->�½�NToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->�½�NToolStripMenuItem->Text = L"�½�(&N)";
			this->�½�NToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyWindow::�½�NToolStripMenuItem_Click);
			// 
			// ��OToolStripMenuItem
			// 
			this->��OToolStripMenuItem->Name = L"��OToolStripMenuItem";
			this->��OToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->��OToolStripMenuItem->Text = L"��(&O)";
			this->��OToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyWindow::��OToolStripMenuItem_Click);
			// 
			// ����SToolStripMenuItem
			// 
			this->����SToolStripMenuItem->Name = L"����SToolStripMenuItem";
			this->����SToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->����SToolStripMenuItem->Text = L"����(&S)";
			this->����SToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyWindow::����SToolStripMenuItem_Click);
			// 
			// �˳�ToolStripMenuItem
			// 
			this->�˳�ToolStripMenuItem->Name = L"�˳�ToolStripMenuItem";
			this->�˳�ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->�˳�ToolStripMenuItem->Text = L"�˳�(&Q)";
			this->�˳�ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyWindow::�˳�ToolStripMenuItem_Click);
			// 
			// testToolStripMenuItem
			// 
			this->testToolStripMenuItem->Name = L"testToolStripMenuItem";
			this->testToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->testToolStripMenuItem->Text = L"test(&T)";
			this->testToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyWindow::testToolStripMenuItem_Click);
			// 
			// fontToolStripMenuItem
			// 
			this->fontToolStripMenuItem->Name = L"fontToolStripMenuItem";
			this->fontToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->fontToolStripMenuItem->Text = L"font";
			this->fontToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyWindow::fontToolStripMenuItem_Click);
			// 
			// colorToolStripMenuItem
			// 
			this->colorToolStripMenuItem->Name = L"colorToolStripMenuItem";
			this->colorToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->colorToolStripMenuItem->Text = L"color";
			this->colorToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyWindow::colorToolStripMenuItem_Click);
			// 
			// wtfToolStripMenuItem
			// 
			this->wtfToolStripMenuItem->Name = L"wtfToolStripMenuItem";
			this->wtfToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->wtfToolStripMenuItem->Text = L"wtf";
			this->wtfToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyWindow::wtfToolStripMenuItem_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->AutoSize = true;
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->richTextBox1, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 35);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(4);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(379, 291);
			this->tableLayoutPanel1->TabIndex = 2;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox1->EnableAutoDragDrop = true;
			this->richTextBox1->Location = System::Drawing::Point(4, 4);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(4);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(371, 283);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"Default";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// letterSpacingToolStripMenuItem
			// 
			this->letterSpacingToolStripMenuItem->Name = L"letterSpacingToolStripMenuItem";
			this->letterSpacingToolStripMenuItem->Size = System::Drawing::Size(184, 26);
			this->letterSpacingToolStripMenuItem->Text = L"letter spacing";
			this->letterSpacingToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyWindow::letterSpacingToolStripMenuItem_Click);
			// 
			// MyWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(379, 328);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyWindow";
			this->Text = L"MyWindow";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ����SToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		/*richTextBox1->SaveFile("C:\\vs2015_project\\MyDocument.rtf",
			RichTextBoxStreamType::RichText);*/
		//StreamWriter^ myStream;
		this->saveFileDialog1->Filter = "txt files (*.txt)|*.txt |rtf files (*.rtf)|*.rtf|All files (*.*)|*.*";
		this->saveFileDialog1->FilterIndex = 2;
		this->saveFileDialog1->RestoreDirectory = true;
		if (this->saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			richTextBox1->SaveFile(saveFileDialog1->FileName);
			/*
			myStream = gcnew StreamWriter(this->saveFileDialog1->FileName);
			myStream->Write(this->richTextBox1->Text); //д��
			myStream->Close();//�ر���
			*/
		}
	}
	private: System::Void ��OToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		//richTextBox1->LoadFile("C:\\vs2015_project\\MyDocument.rtf");
		//this->openFileDialog1->ShowDialog();
		//Stream^ myStream;
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

		openFileDialog1->InitialDirectory = "c:\\";
		openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		openFileDialog1->FilterIndex = 2;
		openFileDialog1->RestoreDirectory = true;

//		unsigned char s[100];

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			/*
			StreamReader^ sr = gcnew StreamReader(openFileDialog1->FileName, Encoding::Default);     //�ö�����ָ���д���ļ���
			this->Text = Path::GetFileName(openFileDialog1->FileName) + " - notepad";

			richTextBox1->Text = sr->ReadToEnd();       //���ļ������ж������д��richtextbox��
			//filename = openFileDialog1->FileName;       //�����ļ�����ֵ
			sr->Close();
			*/
			richTextBox1->LoadFile(openFileDialog1->FileName);
		}
	}
	private: System::Void �˳�ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}

private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
}
private: System::Void testToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	this->folderBrowserDialog1->ShowDialog();

}
private: System::Void fontToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	//this->fontDialog1->ShowDialog();
	if (fontDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		//richTextBox1->ForeColor = fontDialog1->Color;
		richTextBox1->SelectionFont = fontDialog1->Font;
	}

}
private: System::Void colorToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		richTextBox1->SelectionColor = colorDialog1->Color;
	}
}
private: System::Void �½�NToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void wtfToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	richTextBox1->SelectionCharOffset = -1 * 10;//(Convert::ToInt32(R223.Txt_Space_Before.Text) * 100);
//	richTextBox1->LineHeight = 100;
}
private: System::Void �ļ�FToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void letterSpacingToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	
	//richTextBox1->//sSpacing = 1;
	//richTextBox1->pa
	//Message
}
};
}
