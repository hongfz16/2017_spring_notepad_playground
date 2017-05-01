#pragma once

namespace CLRnotepad {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Text;
//	using namespace System::Windows::Forms::Control;
	/// <summary>
	/// MyWindow 摘要
	/// </summary>
	public ref class MyWindow : public System::Windows::Forms::Form
	{
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

	private: System::Windows::Forms::ToolStripMenuItem^  打开OToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;

	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^  testToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  fontToolStripMenuItem;
	private: System::Windows::Forms::FontDialog^  fontDialog1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::ColorDialog^  colorDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^  colorToolStripMenuItem;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::ToolStripMenuItem^  lingspacingToolStripMenuItem;



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
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lingspacingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->menuStrip1->Size = System::Drawing::Size(768, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyWindow::menuStrip1_ItemClicked);
			// 
			// 文件FToolStripMenuItem
			// 
			this->文件FToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->新建NToolStripMenuItem,
					this->打开OToolStripMenuItem, this->保存SToolStripMenuItem, this->退出ToolStripMenuItem, this->testToolStripMenuItem, this->fontToolStripMenuItem,
					this->colorToolStripMenuItem, this->lingspacingToolStripMenuItem
			});
			this->文件FToolStripMenuItem->Name = L"文件FToolStripMenuItem";
			this->文件FToolStripMenuItem->Size = System::Drawing::Size(69, 24);
			this->文件FToolStripMenuItem->Text = L"文件(&F)";
			// 
			// 新建NToolStripMenuItem
			// 
			this->新建NToolStripMenuItem->Name = L"新建NToolStripMenuItem";
			this->新建NToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->新建NToolStripMenuItem->Text = L"新建(&N)";
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
			this->tableLayoutPanel1->Location = System::Drawing::Point(55, 31);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(4);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(713, 692);
			this->tableLayoutPanel1->TabIndex = 2;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox1->Location = System::Drawing::Point(3, 3);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(707, 686);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"default";
			this->richTextBox1->VScroll += gcnew System::EventHandler(this, &MyWindow::richTextBox1_VScroll);
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyWindow::richTextBox1_TextChanged);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->panel1->Location = System::Drawing::Point(0, 31);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(48, 692);
			this->panel1->TabIndex = 3;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyWindow::panel1_Paint);
			// 
			// lingspacingToolStripMenuItem
			// 
			this->lingspacingToolStripMenuItem->Name = L"lingspacingToolStripMenuItem";
			this->lingspacingToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->lingspacingToolStripMenuItem->Text = L"lingspacing";
			this->lingspacingToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyWindow::lingspacingToolStripMenuItem_Click);
			// 
			// MyWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(768, 725);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyWindow";
			this->Text = L"MyWindow";
			this->Load += gcnew System::EventHandler(this, &MyWindow::MyWindow_Load);
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

		  private: void showLineNo()
		  {
			  //获得当前坐标信息
			  Point p = richTextBox1->Location;
			  int crntFirstIndex = richTextBox1->GetCharIndexFromPosition(p);
			  int crntFirstLine = richTextBox1->GetLineFromCharIndex(crntFirstIndex);

			  Point crntFirstPos = richTextBox1->GetPositionFromCharIndex(crntFirstIndex);

			  p.Y += richTextBox1->Height;

			  int crntLastIndex = richTextBox1->GetCharIndexFromPosition(p);

			  int crntLastLine = richTextBox1->GetLineFromCharIndex(crntLastIndex);
			  Point crntLastPos = richTextBox1->GetPositionFromCharIndex(crntLastIndex);

			  //准备画图
			  Graphics^ g = panel1->CreateGraphics();

			  //	 Font^ fnt = gcnew Font(richTextBox1->Font, richTextBox1->Font->Style);
			  //	 Font
			  System::Drawing::Font^ font = gcnew System::Drawing::Font(richTextBox1->Font, richTextBox1->Font->Style);


			  SolidBrush^ brush = gcnew SolidBrush(Color::Green);

			  //画图开始

			  //刷新画布

			  Rectangle rect = panel1->ClientRectangle;
			  brush->Color = panel1->BackColor;

			  g->FillRectangle(brush, 0, 0, panel1->ClientRectangle.Width, panel1->ClientRectangle.Height);

			  brush->Color = Color::Black;//重置画笔颜色

										  //绘制行号

			  int lineSpace = 0;

			  if (crntFirstLine != crntLastLine)
			  {
				  lineSpace = (crntLastPos.Y - crntFirstPos.Y) / (crntLastLine - crntFirstLine);

			  }

			  else
			  {
				  lineSpace = Convert::ToInt32(richTextBox1->Font->Size);

			  }

			  int brushX = panel1->ClientRectangle.Width - Convert::ToInt32(font->Size * 3);

			  int brushY = crntLastPos.Y + Convert::ToInt32(font->Size * 0.21f);//惊人的算法啊！！
			  for (int i = crntLastLine; i >= crntFirstLine; i--)
			  {

				  g->DrawString((i + 1).ToString(), font, brush, brushX, brushY);

				  brushY -= lineSpace;
			  }

			  //	 g->Dispose();

			  //	 font->Dispose();

			  //	 brush->Dispose();
			  delete g;
			  delete font;
			  delete brush;
		  }

private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
//	Graphics^ g = this->panel1->CreateGraphics();
	showLineNo();
}

private: System::Void MyWindow_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	//panel1_Paint(sender, Null);
	showLineNo();
}
private: System::Void richTextBox1_VScroll(System::Object^  sender, System::EventArgs^  e)
{
	showLineNo();
}
/*
private: System::Void OnTextChanged(System::TextChangedEventArgs^ e)
{

}
*/
private: System::Void lingspacingToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	richTextBox1->SelectionCharOffset = -1 * 50;//(Convert::ToInt32(R223.Txt_Space_Before.Text) * 100);
}
};
}
