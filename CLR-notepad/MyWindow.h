#pragma once

#include<cstring>
#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<Windows.h>

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
	/// MyWindow 摘要
	/// </summary>


/*
	const int WM_USER = 0x0400;
	const int SCF_SELECTION = 1;
	const int EM_GETPARAFORMAT = WM_USER + 61;
	const int EM_SETPARAFORMAT = WM_USER + 71;
	const long MAX_TAB_STOPS = 32;
*/	
//	typedef unsigned int UInt32
	const unsigned int PFM_LINESPACING = 0x00000100;
	const UInt32 SIWM_USER = 0x0400;
	const UInt32 EM_GETCHARFORMAT = (SIWM_USER + 58);
	const UInt32 EM_SETCHARFORMAT = (SIWM_USER + 68);
	const UInt32 SCF_ALL = 0x0004;
	const UInt32 SCF_SELECTION = 0x0001;

	typedef unsigned int UINT;
	typedef unsigned long DWORD;
	typedef unsigned short WORD;
	typedef long LONG;
	typedef short SHORT;
	typedef unsigned char BYTE;
	typedef DWORD COLORREF;
	typedef DWORD LCID;
	typedef wchar_t WCHAR;
	#ifdef UNICODE
		typedef WCHAR TCHAR;
	#else
		typedef char TCHAR;
	#endif

	typedef struct _paraformat {
		UINT  cbSize;
		DWORD dwMask;
		WORD  wNumbering;
		WORD  wEffects;
		LONG  dxStartIndent;
		LONG  dxRightIndent;
		LONG  dxOffset;
		WORD  wAlignment;
		SHORT cTabCount;
		LONG  rgxTabs;
		LONG  dySpaceBefore;
		LONG  dySpaceAfter;
		LONG  dyLineSpacing;
		SHORT sStyle;
		BYTE  bLineSpacingRule;
		BYTE  bOutlineLevel;
		WORD  wShadingWeight;
		WORD  wShadingStyle;
		WORD  wNumberingStart;
		WORD  wNumberingStyle;
		WORD  wNumberingTab;
		WORD  wBorderSpace;
		WORD  wBorderWidth;
		WORD  wBorders;
	} PARAFORMAT2;

//	const int LF_FACESIZE = 10;

	typedef struct _charformat2 {
		UINT     cbSize;
		DWORD    dwMask;
		DWORD    dwEffects;
		LONG     yHeight;
		LONG     yOffset;
		COLORREF crTextColor;
		BYTE     bCharSet;
		BYTE     bPitchAndFamily;
		TCHAR    szFaceName[LF_FACESIZE];
		WORD     wWeight;
		SHORT    sSpacing;
		COLORREF crBackColor;
		LCID     lcid;
#if (_RICHEDIT_VER >= 0x0500)
		union {
			DWORD dwReserved;
			DWORD dwCookie;
		};
#else 
		DWORD    dwReserved;
#endif 
		SHORT    sStyle;
		WORD     wKerning;
		BYTE     bUnderlineType;
		BYTE     bAnimation;
		BYTE     bRevAuthor;
#if (_RICHEDIT_VER >= 0x0800)
		BYTE     bUnderlineColor;
#endif 
	} CHARFORMAT2;


	// CHARFORMAT masks -------------------------------------
	const UInt32 CFM_BOLD = 0x00000001;
	const UInt32 CFM_ITALIC = 0x00000002;
	const UInt32 CFM_UNDERLINE = 0x00000004;
	const UInt32 CFM_STRIKEOUT = 0x00000008;
	const UInt32 CFM_PROTECTED = 0x00000010;
	const UInt32 CFM_LINK = 0x00000020;         // Exchange hyperlink extension 
	const UInt32 CFM_SIZE = 0x80000000;
	const UInt32 CFM_COLOR = 0x40000000;
	const UInt32 CFM_FACE = 0x20000000;
	const UInt32 CFM_OFFSET = 0x10000000;
	const UInt32 CFM_CHARSET = 0x08000000;

	const UInt32 CFM_SMALLCAPS = 0x0040;            // (*)  
	const UInt32 CFM_ALLCAPS = 0x0080;          // Displayed by 3.0 
	const UInt32 CFM_HIDDEN = 0x0100;           // Hidden by 3.0 
	const UInt32 CFM_OUTLINE = 0x0200;          // (*)  
	const UInt32 CFM_SHADOW = 0x0400;           // (*)  
	const UInt32 CFM_EMBOSS = 0x0800;           // (*)  
	const UInt32 CFM_IMPRINT = 0x1000;          // (*)  
	const UInt32 CFM_DISABLED = 0x2000;
	const UInt32 CFM_REVISED = 0x4000;

	const UInt32 CFM_BACKCOLOR = 0x04000000;
	const UInt32 CFM_LCID = 0x02000000;
	const UInt32 CFM_UNDERLINETYPE = 0x00800000;        // Many displayed by 3.0 
	const UInt32 CFM_WEIGHT = 0x00400000;
	const UInt32 CFM_SPACING = 0x00200000;      // Displayed by 3.0 
	const UInt32 CFM_KERNING = 0x00100000;      // (*)  
	const UInt32 CFM_STYLE = 0x00080000;        // (*)  
	const UInt32 CFM_ANIMATION = 0x00040000;        // (*)  
	const UInt32 CFM_REVAUTHOR = 0x00008000;

	const UInt32 CFE_SUBSCRIPT = 0x00010000;        // Superscript and subscript are 
	const UInt32 CFE_SUPERSCRIPT = 0x00020000;      //  mutually exclusive           

	const UInt32 CFM_SUBSCRIPT = (CFE_SUBSCRIPT | CFE_SUPERSCRIPT);
	const UInt32 CFM_SUPERSCRIPT = CFM_SUBSCRIPT;

	// CHARFORMAT "ALL" masks
/*
	const UInt32 CFM_EFFECTS = (CFM_BOLD | CFM_ITALIC | CFM_UNDERLINE | CFM_COLOR |
		CFM_STRIKEOUT | CFE_PROTECTED | CFM_LINK);
	const UInt32 CFM_ALL = (CFM_EFFECTS | CFM_SIZE | CFM_FACE | CFM_OFFSET | CFM_CHARSET);

	const UInt32 CFM_EFFECTS2 = (CFM_EFFECTS | CFM_DISABLED | CFM_SMALLCAPS | CFM_ALLCAPS
		| CFM_HIDDEN | CFM_OUTLINE | CFM_SHADOW | CFM_EMBOSS
		| CFM_IMPRINT | CFM_DISABLED | CFM_REVISED
		| CFM_SUBSCRIPT | CFM_SUPERSCRIPT | CFM_BACKCOLOR);
*/
/*
	const UInt32 CFM_ALL2 = (CFM_ALL | CFM_EFFECTS2 | CFM_BACKCOLOR | CFM_LCID
		| CFM_UNDERLINETYPE | CFM_WEIGHT | CFM_REVAUTHOR
		| CFM_SPACING | CFM_KERNING | CFM_STYLE | CFM_ANIMATION);
*/
	//------------------------------------------------------------


	//CHAR EFFECTS-----------------------------------------------
	const UInt32 CFE_BOLD = 0x0001;
	const UInt32 CFE_ITALIC = 0x0002;
	const UInt32 CFE_UNDERLINE = 0x0004;
	const UInt32 CFE_STRIKEOUT = 0x0008;
	const UInt32 CFE_PROTECTED = 0x0010;
	const UInt32 CFE_LINK = 0x0020;
	const UInt32 CFE_AUTOCOLOR = 0x40000000;            // NOTE: this corresponds to 
														// CFM_COLOR, which controls it 
														// Masks and effects defined for CHARFORMAT2 -- an (*) indicates
														// that the data is stored by RichEdit 2.0/3.0, but not displayed
	const UInt32 CFE_SMALLCAPS = CFM_SMALLCAPS;
	const UInt32 CFE_ALLCAPS = CFM_ALLCAPS;
	const UInt32 CFE_HIDDEN = CFM_HIDDEN;
	const UInt32 CFE_OUTLINE = CFM_OUTLINE;
	const UInt32 CFE_SHADOW = CFM_SHADOW;
	const UInt32 CFE_EMBOSS = CFM_EMBOSS;
	const UInt32 CFE_IMPRINT = CFM_IMPRINT;
	const UInt32 CFE_DISABLED = CFM_DISABLED;
	const UInt32 CFE_REVISED = CFM_REVISED;

	// CFE_AUTOCOLOR and CFE_AUTOBACKCOLOR correspond to CFM_COLOR and
	// CFM_BACKCOLOR, respectively, which control them
	const UInt32 CFE_AUTOBACKCOLOR = CFM_BACKCOLOR;
	//-------------------------------------------------------

	
//	[DllImport("user32", CharSet = CharSet::Auto)]
	//[DllImport("user32.dll", EntryPoint = "SendMessage", CharSet = CharSet::Auto)]
	//[DllImport("user32.dll", CallingConvention = CallingConvention::StdCall)];
	//static IntPtr SendMessage(HandleRef^ hWnd, int msg, int wParam, PARAFORMAT2^ lParam);

	/// <summary>
	/// 设置行距
	/// </summary>
	/// <param name="ctl">控件</param>
	/// <param name="dyLineSpacing">间距</param>

	[DllImport("user32.dll", CharSet = CharSet::Auto)]
	//[DllImport("user32.dll", CallingConvention = CallingConvention::StdCall)];
	extern IntPtr SendMessage(IntPtr hWnd, int msg, int wParam,CHARFORMAT2* lParam);


	void Kerning(RichTextBox^ ctl,int kerning)
	{
		CHARFORMAT2* fmt = new CHARFORMAT2();
		fmt->cbSize = sizeof(CHARFORMAT2);
		fmt->sSpacing = kerning;
		fmt->wKerning = kerning;
		//fmt->dwMask = CFM_SPACING;
		fmt->dwMask = CFM_SPACING | CFM_KERNING | CFM_BOLD | CFM_ITALIC;
		fmt->dwEffects = ~0;//CFE_BOLD;
		//Message::Create(ctl->Handle, EM_SETCHARFORMAT ,IntPtr((int)SCF_SELECTION),IntPtr(fmt));
		SendMessage(ctl->Handle, EM_SETCHARFORMAT, SCF_SELECTION, fmt);
	}
/*
	static void SetLineSpace(RichTextBox^ ctl, int dyLineSpacing)
	{
		PARAFORMAT2* fmt = new PARAFORMAT2();
		fmt->cbSize = sizeof(PARAFORMAT2);//System::Runtime::InteropServices::Marshal::SizeOf(fmt);
		fmt->bLineSpacingRule = 4;// bLineSpacingRule;
		fmt->dyLineSpacing = dyLineSpacing;
		fmt->dwMask = PFM_LINESPACING;
	//	try
	//	{
		Message::Create(ctl->Handle, EM_SETPARAFORMAT, IntPtr(0), IntPtr(fmt));
		//ctl->hand
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
		/// 设置行距
		/// </summary>
		/// <param name="ctl">控件</param>
		/// <param name="dyLineSpacing">间距</param>
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
			//TODO:  在此处添加构造函数代码
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
		/// 清理所有正在使用的资源。
		/// </summary>
		~MyWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  文件FToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  新建NToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  保存SToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  退出ToolStripMenuItem;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::ToolStripMenuItem^  打开OToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;

	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^  testToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  fontToolStripMenuItem;
	private: System::Windows::Forms::FontDialog^  fontDialog1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::ColorDialog^  colorDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^  colorToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  wtfToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  paddingToolStripMenuItem;




	protected:

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->文件FToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->新建NToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->打开OToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->保存SToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->退出ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->paddingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->文件FToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(8, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(379, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyWindow::menuStrip1_ItemClicked);
			// 
			// 文件FToolStripMenuItem
			// 
			this->文件FToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {
				this->新建NToolStripMenuItem,
					this->打开OToolStripMenuItem, this->保存SToolStripMenuItem, this->退出ToolStripMenuItem, this->testToolStripMenuItem, this->fontToolStripMenuItem,
					this->colorToolStripMenuItem, this->wtfToolStripMenuItem, this->paddingToolStripMenuItem
			});
			this->文件FToolStripMenuItem->Name = L"文件FToolStripMenuItem";
			this->文件FToolStripMenuItem->Size = System::Drawing::Size(69, 24);
			this->文件FToolStripMenuItem->Text = L"文件(&F)";
			this->文件FToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyWindow::文件FToolStripMenuItem_Click);
			// 
			// 新建NToolStripMenuItem
			// 
			this->新建NToolStripMenuItem->Name = L"新建NToolStripMenuItem";
			this->新建NToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->新建NToolStripMenuItem->Text = L"新建(&N)";
			this->新建NToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyWindow::新建NToolStripMenuItem_Click);
			// 
			// 打开OToolStripMenuItem
			// 
			this->打开OToolStripMenuItem->Name = L"打开OToolStripMenuItem";
			this->打开OToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->打开OToolStripMenuItem->Text = L"打开(&O)";
			this->打开OToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyWindow::打开OToolStripMenuItem_Click);
			// 
			// 保存SToolStripMenuItem
			// 
			this->保存SToolStripMenuItem->Name = L"保存SToolStripMenuItem";
			this->保存SToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->保存SToolStripMenuItem->Text = L"保存(&S)";
			this->保存SToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyWindow::保存SToolStripMenuItem_Click);
			// 
			// 退出ToolStripMenuItem
			// 
			this->退出ToolStripMenuItem->Name = L"退出ToolStripMenuItem";
			this->退出ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->退出ToolStripMenuItem->Text = L"退出(&Q)";
			this->退出ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyWindow::退出ToolStripMenuItem_Click);
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
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(40);
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
			// paddingToolStripMenuItem
			// 
			this->paddingToolStripMenuItem->Name = L"paddingToolStripMenuItem";
			this->paddingToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->paddingToolStripMenuItem->Text = L"padding";
			this->paddingToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyWindow::paddingToolStripMenuItem_Click);
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
	private: System::Void 保存SToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
			myStream->Write(this->richTextBox1->Text); //写入
			myStream->Close();//关闭流
			*/
		}
	}
	private: System::Void 打开OToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
			StreamReader^ sr = gcnew StreamReader(openFileDialog1->FileName, Encoding::Default);     //用读入流指针读写个文件名
			this->Text = Path::GetFileName(openFileDialog1->FileName) + " - notepad";

			richTextBox1->Text = sr->ReadToEnd();       //将文件从流中读到最后写入richtextbox中
			//filename = openFileDialog1->FileName;       //并将文件名赋值
			sr->Close();
			*/
			richTextBox1->LoadFile(openFileDialog1->FileName);
		}
	}
	private: System::Void 退出ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
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
private: System::Void 新建NToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void wtfToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	//richTextBox1->SelectionCharOffset = -1 * 10;//(Convert::ToInt32(R223.Txt_Space_Before.Text) * 100);
	//	SetLineSpace(richTextBox1, 40);
	//	richTextBox1->LineHeight = 100;
	Kerning(richTextBox1, 100);
}
private: System::Void 文件FToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void letterSpacingToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	
	//richTextBox1->//sSpacing = 1;
	//richTextBox1->pa
	//Message
	//richTextBox1->SelectionFont->

}
private: System::Void paddingToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	this->richTextBox1->Margin = System::Windows::Forms::Padding(40,4,40,4);
}
};
}
