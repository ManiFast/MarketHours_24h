#pragma once

#include "sound.h"

namespace Markethours24CLOCKbyStas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	//using namespace System::Windows::Forms;

	using namespace std;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
private: System::Windows::Forms::ToolStripMenuItem^ vIPToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ setVIPToolStripMenuItem;
private: System::Windows::Forms::ToolStripSeparator^ viptext;
private: System::Windows::Forms::ToolStripTextBox^ viptext2;
private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ meToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ createdByStasToolStripMenuItem;
private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
private: System::Windows::Forms::ToolStripMenuItem^ followMeToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripTextBox1;
private: System::Windows::Forms::ToolStripTextBox^ youtubecomchannelUCKcWOEWJ1hrUW1irBZz8xQvideosToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ mainfasttToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ stasinsideToolStripMenuItem;
private: System::Windows::Forms::MenuStrip^ menuStrip1;

private: System::Windows::Forms::Panel^ vipback;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::Panel^ panel6;
private: System::Windows::Forms::Panel^ panel16;
private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::CheckBox^ checkBoxMain;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::Panel^ panel4;
private: System::Windows::Forms::CheckBox^ checkBoxDv1;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::PictureBox^ pictureBox2;
private: System::Windows::Forms::Panel^ panel15;
private: System::Windows::Forms::CheckBox^ checkBoxInfo;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::PictureBox^ pictureBox7;
private: System::Windows::Forms::Panel^ panel5;
private: System::Windows::Forms::Panel^ panel7;
private: System::Windows::Forms::CheckBox^ checkBoxDv2;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::PictureBox^ pictureBox3;
private: System::Windows::Forms::Panel^ panel14;
private: System::Windows::Forms::Panel^ panel8;
private: System::Windows::Forms::Panel^ panel9;
private: System::Windows::Forms::CheckBox^ checkBoxLv1;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::PictureBox^ pictureBox4;
private: System::Windows::Forms::Panel^ panel13;
private: System::Windows::Forms::CheckBox^ checkBoxLv3;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::PictureBox^ pictureBox6;
private: System::Windows::Forms::Panel^ panel10;
private: System::Windows::Forms::Panel^ panel11;
private: System::Windows::Forms::CheckBox^ checkBoxLv2;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::PictureBox^ pictureBox5;
private: System::Windows::Forms::Panel^ panel12;


private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::PictureBox^ pictureBox8;
private: System::Windows::Forms::Panel^ back2;
private: System::Windows::Forms::Label^ labelVip2;
private: System::Windows::Forms::Panel^ back1;
private: System::Windows::Forms::Label^ labelVip1;
private: System::Windows::Forms::Label^ label2;

private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
private: System::Windows::Forms::Panel^ panel19;
private: System::Windows::Forms::HScrollBar^ hScrollBar6;
private: System::Windows::Forms::HScrollBar^ hScrollBar5;
private: System::Windows::Forms::HScrollBar^ hScrollBar4;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Panel^ colorpanel2;



private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ HourLabel;


private: System::Windows::Forms::Panel^ panel18;
private: System::Windows::Forms::HScrollBar^ hScrollBar7;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::HScrollBar^ hScrollBar8;
private: System::Windows::Forms::HScrollBar^ hScrollBar9;
private: System::Windows::Forms::Label^ MinuteLabel;

private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Panel^ colorpanel3;

private: System::Windows::Forms::PictureBox^ pictureBox9;
private: System::Windows::Forms::Panel^ panel21;
private: System::Windows::Forms::HScrollBar^ hScrollBar1;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::HScrollBar^ hScrollBar2;
private: System::Windows::Forms::HScrollBar^ hScrollBar3;
private: System::Windows::Forms::Label^ SecondLabel;

private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Panel^ colorpanel4;
private: System::Windows::Forms::TrackBar^ trackBarSize;

private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::ProgressBar^ progressBar;

private: System::Windows::Forms::Button^ Install;

private: System::Windows::Forms::Panel^ panel17;
private: System::Windows::Forms::Timer^ timer1;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Panel^ panel26;
private: System::Windows::Forms::Panel^ panel23;
private: System::Windows::Forms::Panel^ panel24;
private: System::Windows::Forms::Panel^ back4;

private: System::Windows::Forms::Label^ labelVip4;
private: System::Windows::Forms::CheckBox^ checkBoxLv4;


private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::PictureBox^ pictureBox11;
private: System::Windows::Forms::Panel^ panel20;
private: System::Windows::Forms::Panel^ back3;

private: System::Windows::Forms::Label^ labelVip3;
private: System::Windows::Forms::CheckBox^ checkBoxDv3;



private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::PictureBox^ pictureBox10;
private: System::ComponentModel::IContainer^ components;

	protected:


	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->vIPToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->setVIPToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viptext = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->viptext2 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->meToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->createdByStasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->followMeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripTextBox1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->youtubecomchannelUCKcWOEWJ1hrUW1irBZz8xQvideosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->mainfasttToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->stasinsideToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->vipback = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel26 = (gcnew System::Windows::Forms::Panel());
			this->panel23 = (gcnew System::Windows::Forms::Panel());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->panel24 = (gcnew System::Windows::Forms::Panel());
			this->back4 = (gcnew System::Windows::Forms::Panel());
			this->labelVip4 = (gcnew System::Windows::Forms::Label());
			this->checkBoxLv4 = (gcnew System::Windows::Forms::CheckBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->checkBoxMain = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->back3 = (gcnew System::Windows::Forms::Panel());
			this->labelVip3 = (gcnew System::Windows::Forms::Label());
			this->checkBoxDv3 = (gcnew System::Windows::Forms::CheckBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->checkBoxDv1 = (gcnew System::Windows::Forms::CheckBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->back2 = (gcnew System::Windows::Forms::Panel());
			this->labelVip2 = (gcnew System::Windows::Forms::Label());
			this->checkBoxInfo = (gcnew System::Windows::Forms::CheckBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->checkBoxDv2 = (gcnew System::Windows::Forms::CheckBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->checkBoxLv1 = (gcnew System::Windows::Forms::CheckBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->back1 = (gcnew System::Windows::Forms::Panel());
			this->labelVip1 = (gcnew System::Windows::Forms::Label());
			this->checkBoxLv3 = (gcnew System::Windows::Forms::CheckBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->checkBoxLv2 = (gcnew System::Windows::Forms::CheckBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->progressBar = (gcnew System::Windows::Forms::ProgressBar());
			this->Install = (gcnew System::Windows::Forms::Button());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->trackBarSize = (gcnew System::Windows::Forms::TrackBar());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->hScrollBar1 = (gcnew System::Windows::Forms::HScrollBar());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->hScrollBar2 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar3 = (gcnew System::Windows::Forms::HScrollBar());
			this->SecondLabel = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->colorpanel4 = (gcnew System::Windows::Forms::Panel());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->hScrollBar7 = (gcnew System::Windows::Forms::HScrollBar());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->hScrollBar8 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar9 = (gcnew System::Windows::Forms::HScrollBar());
			this->MinuteLabel = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->colorpanel3 = (gcnew System::Windows::Forms::Panel());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->hScrollBar6 = (gcnew System::Windows::Forms::HScrollBar());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->hScrollBar5 = (gcnew System::Windows::Forms::HScrollBar());
			this->hScrollBar4 = (gcnew System::Windows::Forms::HScrollBar());
			this->HourLabel = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->colorpanel2 = (gcnew System::Windows::Forms::Panel());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel24->SuspendLayout();
			this->back4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel20->SuspendLayout();
			this->back3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel15->SuspendLayout();
			this->back2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel13->SuspendLayout();
			this->back1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->panel11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarSize))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->tableLayoutPanel1->SuspendLayout();
			this->panel21->SuspendLayout();
			this->panel18->SuspendLayout();
			this->panel19->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->SuspendLayout();
			// 
			// vIPToolStripMenuItem
			// 
			this->vIPToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->setVIPToolStripMenuItem });
			resources->ApplyResources(this->vIPToolStripMenuItem, L"vIPToolStripMenuItem");
			this->vIPToolStripMenuItem->Name = L"vIPToolStripMenuItem";
			this->vIPToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::vIPToolStripMenuItem_Click);
			// 
			// setVIPToolStripMenuItem
			// 
			this->setVIPToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->viptext,
					this->viptext2, this->toolStripSeparator2
			});
			resources->ApplyResources(this->setVIPToolStripMenuItem, L"setVIPToolStripMenuItem");
			this->setVIPToolStripMenuItem->Name = L"setVIPToolStripMenuItem";
			this->setVIPToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::setVIPToolStripMenuItem_Click);
			// 
			// viptext
			// 
			this->viptext->Name = L"viptext";
			resources->ApplyResources(this->viptext, L"viptext");
			this->viptext->Click += gcnew System::EventHandler(this, &MyForm::toolStripTextBox1_Click);
			// 
			// viptext2
			// 
			resources->ApplyResources(this->viptext2, L"viptext2");
			this->viptext2->Name = L"viptext2";
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			resources->ApplyResources(this->toolStripSeparator2, L"toolStripSeparator2");
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->meToolStripMenuItem });
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			resources->ApplyResources(this->aboutToolStripMenuItem, L"aboutToolStripMenuItem");
			// 
			// meToolStripMenuItem
			// 
			this->meToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->createdByStasToolStripMenuItem,
					this->toolStripSeparator1, this->followMeToolStripMenuItem, this->toolStripTextBox1, this->youtubecomchannelUCKcWOEWJ1hrUW1irBZz8xQvideosToolStripMenuItem,
					this->mainfasttToolStripMenuItem, this->stasinsideToolStripMenuItem
			});
			this->meToolStripMenuItem->Name = L"meToolStripMenuItem";
			resources->ApplyResources(this->meToolStripMenuItem, L"meToolStripMenuItem");
			// 
			// createdByStasToolStripMenuItem
			// 
			resources->ApplyResources(this->createdByStasToolStripMenuItem, L"createdByStasToolStripMenuItem");
			this->createdByStasToolStripMenuItem->Name = L"createdByStasToolStripMenuItem";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			resources->ApplyResources(this->toolStripSeparator1, L"toolStripSeparator1");
			// 
			// followMeToolStripMenuItem
			// 
			this->followMeToolStripMenuItem->Name = L"followMeToolStripMenuItem";
			resources->ApplyResources(this->followMeToolStripMenuItem, L"followMeToolStripMenuItem");
			// 
			// toolStripTextBox1
			// 
			resources->ApplyResources(this->toolStripTextBox1, L"toolStripTextBox1");
			this->toolStripTextBox1->Name = L"toolStripTextBox1";
			this->toolStripTextBox1->Click += gcnew System::EventHandler(this, &MyForm::toolStripTextBox1_Click_1);
			// 
			// youtubecomchannelUCKcWOEWJ1hrUW1irBZz8xQvideosToolStripMenuItem
			// 
			resources->ApplyResources(this->youtubecomchannelUCKcWOEWJ1hrUW1irBZz8xQvideosToolStripMenuItem, L"youtubecomchannelUCKcWOEWJ1hrUW1irBZz8xQvideosToolStripMenuItem");
			this->youtubecomchannelUCKcWOEWJ1hrUW1irBZz8xQvideosToolStripMenuItem->Name = L"youtubecomchannelUCKcWOEWJ1hrUW1irBZz8xQvideosToolStripMenuItem";
			// 
			// mainfasttToolStripMenuItem
			// 
			resources->ApplyResources(this->mainfasttToolStripMenuItem, L"mainfasttToolStripMenuItem");
			this->mainfasttToolStripMenuItem->Name = L"mainfasttToolStripMenuItem";
			// 
			// stasinsideToolStripMenuItem
			// 
			resources->ApplyResources(this->stasinsideToolStripMenuItem, L"stasinsideToolStripMenuItem");
			this->stasinsideToolStripMenuItem->Name = L"stasinsideToolStripMenuItem";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->vIPToolStripMenuItem,
					this->aboutToolStripMenuItem
			});
			resources->ApplyResources(this->menuStrip1, L"menuStrip1");
			this->menuStrip1->Name = L"menuStrip1";
			// 
			// vipback
			// 
			this->vipback->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)));
			resources->ApplyResources(this->vipback, L"vipback");
			this->vipback->Name = L"vipback";
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->Name = L"label1";
			// 
			// panel2
			// 
			resources->ApplyResources(this->panel2, L"panel2");
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(90)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->panel2->Controls->Add(this->panel6);
			this->panel2->Controls->Add(this->panel26);
			this->panel2->Controls->Add(this->panel23);
			this->panel2->Controls->Add(this->panel16);
			this->panel2->Controls->Add(this->panel24);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->panel20);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->panel15);
			this->panel2->Controls->Add(this->panel5);
			this->panel2->Controls->Add(this->panel7);
			this->panel2->Controls->Add(this->panel14);
			this->panel2->Controls->Add(this->panel8);
			this->panel2->Controls->Add(this->panel9);
			this->panel2->Controls->Add(this->panel13);
			this->panel2->Controls->Add(this->panel10);
			this->panel2->Controls->Add(this->panel11);
			this->panel2->Controls->Add(this->panel12);
			this->panel2->Name = L"panel2";
			// 
			// panel6
			// 
			resources->ApplyResources(this->panel6, L"panel6");
			this->panel6->Name = L"panel6";
			// 
			// panel26
			// 
			resources->ApplyResources(this->panel26, L"panel26");
			this->panel26->Name = L"panel26";
			// 
			// panel23
			// 
			resources->ApplyResources(this->panel23, L"panel23");
			this->panel23->Name = L"panel23";
			// 
			// panel16
			// 
			resources->ApplyResources(this->panel16, L"panel16");
			this->panel16->Name = L"panel16";
			// 
			// panel24
			// 
			this->panel24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->panel24->Controls->Add(this->back4);
			this->panel24->Controls->Add(this->checkBoxLv4);
			this->panel24->Controls->Add(this->label31);
			this->panel24->Controls->Add(this->pictureBox11);
			this->panel24->Cursor = System::Windows::Forms::Cursors::No;
			resources->ApplyResources(this->panel24, L"panel24");
			this->panel24->Name = L"panel24";
			// 
			// back4
			// 
			this->back4->BackColor = System::Drawing::Color::Black;
			this->back4->Controls->Add(this->labelVip4);
			resources->ApplyResources(this->back4, L"back4");
			this->back4->Name = L"back4";
			// 
			// labelVip4
			// 
			resources->ApplyResources(this->labelVip4, L"labelVip4");
			this->labelVip4->ForeColor = System::Drawing::Color::Gold;
			this->labelVip4->Name = L"labelVip4";
			// 
			// checkBoxLv4
			// 
			resources->ApplyResources(this->checkBoxLv4, L"checkBoxLv4");
			this->checkBoxLv4->Name = L"checkBoxLv4";
			this->checkBoxLv4->UseVisualStyleBackColor = true;
			this->checkBoxLv4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxLv4_CheckedChanged);
			// 
			// label31
			// 
			resources->ApplyResources(this->label31, L"label31");
			this->label31->Name = L"label31";
			// 
			// pictureBox11
			// 
			resources->ApplyResources(this->pictureBox11, L"pictureBox11");
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->panel3->Controls->Add(this->checkBoxMain);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->pictureBox1);
			resources->ApplyResources(this->panel3, L"panel3");
			this->panel3->Name = L"panel3";
			// 
			// checkBoxMain
			// 
			resources->ApplyResources(this->checkBoxMain, L"checkBoxMain");
			this->checkBoxMain->Name = L"checkBoxMain";
			this->checkBoxMain->UseVisualStyleBackColor = true;
			this->checkBoxMain->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxMain_CheckedChanged);
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->Name = L"label3";
			// 
			// pictureBox1
			// 
			resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->TabStop = false;
			// 
			// panel20
			// 
			this->panel20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->panel20->Controls->Add(this->back3);
			this->panel20->Controls->Add(this->checkBoxDv3);
			this->panel20->Controls->Add(this->label32);
			this->panel20->Controls->Add(this->label29);
			this->panel20->Controls->Add(this->pictureBox10);
			this->panel20->Cursor = System::Windows::Forms::Cursors::No;
			resources->ApplyResources(this->panel20, L"panel20");
			this->panel20->Name = L"panel20";
			// 
			// back3
			// 
			this->back3->BackColor = System::Drawing::Color::Black;
			this->back3->Controls->Add(this->labelVip3);
			resources->ApplyResources(this->back3, L"back3");
			this->back3->Name = L"back3";
			// 
			// labelVip3
			// 
			resources->ApplyResources(this->labelVip3, L"labelVip3");
			this->labelVip3->ForeColor = System::Drawing::Color::Gold;
			this->labelVip3->Name = L"labelVip3";
			// 
			// checkBoxDv3
			// 
			resources->ApplyResources(this->checkBoxDv3, L"checkBoxDv3");
			this->checkBoxDv3->Name = L"checkBoxDv3";
			this->checkBoxDv3->UseVisualStyleBackColor = true;
			this->checkBoxDv3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxDv3_CheckedChanged);
			// 
			// label32
			// 
			resources->ApplyResources(this->label32, L"label32");
			this->label32->Name = L"label32";
			// 
			// label29
			// 
			resources->ApplyResources(this->label29, L"label29");
			this->label29->Name = L"label29";
			// 
			// pictureBox10
			// 
			resources->ApplyResources(this->pictureBox10, L"pictureBox10");
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->TabStop = false;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->panel4->Controls->Add(this->checkBoxDv1);
			this->panel4->Controls->Add(this->label4);
			this->panel4->Controls->Add(this->pictureBox2);
			resources->ApplyResources(this->panel4, L"panel4");
			this->panel4->Name = L"panel4";
			// 
			// checkBoxDv1
			// 
			resources->ApplyResources(this->checkBoxDv1, L"checkBoxDv1");
			this->checkBoxDv1->Name = L"checkBoxDv1";
			this->checkBoxDv1->UseVisualStyleBackColor = true;
			this->checkBoxDv1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxDv1_CheckedChanged);
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->Name = L"label4";
			// 
			// pictureBox2
			// 
			resources->ApplyResources(this->pictureBox2, L"pictureBox2");
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->TabStop = false;
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->panel15->Controls->Add(this->back2);
			this->panel15->Controls->Add(this->checkBoxInfo);
			this->panel15->Controls->Add(this->label9);
			this->panel15->Controls->Add(this->pictureBox7);
			this->panel15->Cursor = System::Windows::Forms::Cursors::No;
			resources->ApplyResources(this->panel15, L"panel15");
			this->panel15->Name = L"panel15";
			// 
			// back2
			// 
			this->back2->BackColor = System::Drawing::Color::Black;
			this->back2->Controls->Add(this->labelVip2);
			resources->ApplyResources(this->back2, L"back2");
			this->back2->Name = L"back2";
			// 
			// labelVip2
			// 
			resources->ApplyResources(this->labelVip2, L"labelVip2");
			this->labelVip2->ForeColor = System::Drawing::Color::Gold;
			this->labelVip2->Name = L"labelVip2";
			// 
			// checkBoxInfo
			// 
			resources->ApplyResources(this->checkBoxInfo, L"checkBoxInfo");
			this->checkBoxInfo->Name = L"checkBoxInfo";
			this->checkBoxInfo->UseVisualStyleBackColor = true;
			this->checkBoxInfo->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxInfo_CheckedChanged);
			// 
			// label9
			// 
			resources->ApplyResources(this->label9, L"label9");
			this->label9->Name = L"label9";
			// 
			// pictureBox7
			// 
			resources->ApplyResources(this->pictureBox7, L"pictureBox7");
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->TabStop = false;
			// 
			// panel5
			// 
			resources->ApplyResources(this->panel5, L"panel5");
			this->panel5->Name = L"panel5";
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->panel7->Controls->Add(this->checkBoxDv2);
			this->panel7->Controls->Add(this->label5);
			this->panel7->Controls->Add(this->pictureBox3);
			resources->ApplyResources(this->panel7, L"panel7");
			this->panel7->Name = L"panel7";
			// 
			// checkBoxDv2
			// 
			resources->ApplyResources(this->checkBoxDv2, L"checkBoxDv2");
			this->checkBoxDv2->Name = L"checkBoxDv2";
			this->checkBoxDv2->UseVisualStyleBackColor = true;
			this->checkBoxDv2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxDv2_CheckedChanged);
			// 
			// label5
			// 
			resources->ApplyResources(this->label5, L"label5");
			this->label5->Name = L"label5";
			// 
			// pictureBox3
			// 
			resources->ApplyResources(this->pictureBox3, L"pictureBox3");
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->TabStop = false;
			// 
			// panel14
			// 
			resources->ApplyResources(this->panel14, L"panel14");
			this->panel14->Name = L"panel14";
			// 
			// panel8
			// 
			resources->ApplyResources(this->panel8, L"panel8");
			this->panel8->Name = L"panel8";
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->panel9->Controls->Add(this->checkBoxLv1);
			this->panel9->Controls->Add(this->label6);
			this->panel9->Controls->Add(this->pictureBox4);
			resources->ApplyResources(this->panel9, L"panel9");
			this->panel9->Name = L"panel9";
			// 
			// checkBoxLv1
			// 
			resources->ApplyResources(this->checkBoxLv1, L"checkBoxLv1");
			this->checkBoxLv1->Name = L"checkBoxLv1";
			this->checkBoxLv1->UseVisualStyleBackColor = true;
			this->checkBoxLv1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxLv1_CheckedChanged);
			// 
			// label6
			// 
			resources->ApplyResources(this->label6, L"label6");
			this->label6->Name = L"label6";
			// 
			// pictureBox4
			// 
			resources->ApplyResources(this->pictureBox4, L"pictureBox4");
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->TabStop = false;
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->panel13->Controls->Add(this->back1);
			this->panel13->Controls->Add(this->checkBoxLv3);
			this->panel13->Controls->Add(this->label8);
			this->panel13->Controls->Add(this->pictureBox6);
			this->panel13->Cursor = System::Windows::Forms::Cursors::No;
			resources->ApplyResources(this->panel13, L"panel13");
			this->panel13->Name = L"panel13";
			// 
			// back1
			// 
			this->back1->BackColor = System::Drawing::Color::Black;
			this->back1->Controls->Add(this->labelVip1);
			resources->ApplyResources(this->back1, L"back1");
			this->back1->Name = L"back1";
			// 
			// labelVip1
			// 
			resources->ApplyResources(this->labelVip1, L"labelVip1");
			this->labelVip1->ForeColor = System::Drawing::Color::Gold;
			this->labelVip1->Name = L"labelVip1";
			// 
			// checkBoxLv3
			// 
			resources->ApplyResources(this->checkBoxLv3, L"checkBoxLv3");
			this->checkBoxLv3->Name = L"checkBoxLv3";
			this->checkBoxLv3->UseVisualStyleBackColor = true;
			this->checkBoxLv3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxLv3_CheckedChanged);
			// 
			// label8
			// 
			resources->ApplyResources(this->label8, L"label8");
			this->label8->Name = L"label8";
			// 
			// pictureBox6
			// 
			resources->ApplyResources(this->pictureBox6, L"pictureBox6");
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->TabStop = false;
			// 
			// panel10
			// 
			resources->ApplyResources(this->panel10, L"panel10");
			this->panel10->Name = L"panel10";
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->panel11->Controls->Add(this->checkBoxLv2);
			this->panel11->Controls->Add(this->label7);
			this->panel11->Controls->Add(this->pictureBox5);
			resources->ApplyResources(this->panel11, L"panel11");
			this->panel11->Name = L"panel11";
			// 
			// checkBoxLv2
			// 
			resources->ApplyResources(this->checkBoxLv2, L"checkBoxLv2");
			this->checkBoxLv2->Name = L"checkBoxLv2";
			this->checkBoxLv2->UseVisualStyleBackColor = true;
			this->checkBoxLv2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxLv2_CheckedChanged);
			// 
			// label7
			// 
			resources->ApplyResources(this->label7, L"label7");
			this->label7->Name = L"label7";
			// 
			// pictureBox5
			// 
			resources->ApplyResources(this->pictureBox5, L"pictureBox5");
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->TabStop = false;
			// 
			// panel12
			// 
			resources->ApplyResources(this->panel12, L"panel12");
			this->panel12->Name = L"panel12";
			// 
			// panel1
			// 
			resources->ApplyResources(this->panel1, L"panel1");
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)));
			this->panel1->Controls->Add(this->progressBar);
			this->panel1->Controls->Add(this->Install);
			this->panel1->Controls->Add(this->panel17);
			this->panel1->Controls->Add(this->label20);
			this->panel1->Controls->Add(this->label24);
			this->panel1->Controls->Add(this->label27);
			this->panel1->Controls->Add(this->label16);
			this->panel1->Controls->Add(this->trackBarSize);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->pictureBox9);
			this->panel1->Controls->Add(this->tableLayoutPanel1);
			this->panel1->Controls->Add(this->label26);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->pictureBox8);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Name = L"panel1";
			// 
			// progressBar
			// 
			this->progressBar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->progressBar->ForeColor = System::Drawing::SystemColors::Desktop;
			resources->ApplyResources(this->progressBar, L"progressBar");
			this->progressBar->Name = L"progressBar";
			// 
			// Install
			// 
			this->Install->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			resources->ApplyResources(this->Install, L"Install");
			this->Install->Name = L"Install";
			this->Install->UseVisualStyleBackColor = false;
			this->Install->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// panel17
			// 
			resources->ApplyResources(this->panel17, L"panel17");
			this->panel17->Name = L"panel17";
			// 
			// label20
			// 
			resources->ApplyResources(this->label20, L"label20");
			this->label20->Name = L"label20";
			// 
			// label24
			// 
			resources->ApplyResources(this->label24, L"label24");
			this->label24->Name = L"label24";
			// 
			// label27
			// 
			resources->ApplyResources(this->label27, L"label27");
			this->label27->Name = L"label27";
			// 
			// label16
			// 
			resources->ApplyResources(this->label16, L"label16");
			this->label16->Name = L"label16";
			// 
			// trackBarSize
			// 
			this->trackBarSize->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)));
			this->trackBarSize->LargeChange = 1;
			resources->ApplyResources(this->trackBarSize, L"trackBarSize");
			this->trackBarSize->Maximum = 2;
			this->trackBarSize->Name = L"trackBarSize";
			// 
			// pictureBox9
			// 
			resources->ApplyResources(this->pictureBox9, L"pictureBox9");
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->TabStop = false;
			// 
			// tableLayoutPanel1
			// 
			resources->ApplyResources(this->tableLayoutPanel1, L"tableLayoutPanel1");
			this->tableLayoutPanel1->Controls->Add(this->panel21, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->panel18, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->panel19, 0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			// 
			// panel21
			// 
			this->panel21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel21->Controls->Add(this->hScrollBar1);
			this->panel21->Controls->Add(this->label10);
			this->panel21->Controls->Add(this->label22);
			this->panel21->Controls->Add(this->label23);
			this->panel21->Controls->Add(this->hScrollBar2);
			this->panel21->Controls->Add(this->hScrollBar3);
			this->panel21->Controls->Add(this->SecondLabel);
			this->panel21->Controls->Add(this->label25);
			this->panel21->Controls->Add(this->colorpanel4);
			resources->ApplyResources(this->panel21, L"panel21");
			this->panel21->Name = L"panel21";
			// 
			// hScrollBar1
			// 
			resources->ApplyResources(this->hScrollBar1, L"hScrollBar1");
			this->hScrollBar1->LargeChange = 0;
			this->hScrollBar1->Maximum = 255;
			this->hScrollBar1->Name = L"hScrollBar1";
			this->hScrollBar1->SmallChange = 0;
			this->hScrollBar1->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::hScrollBar1_Scroll);
			// 
			// label10
			// 
			resources->ApplyResources(this->label10, L"label10");
			this->label10->ForeColor = System::Drawing::Color::Blue;
			this->label10->Name = L"label10";
			// 
			// label22
			// 
			resources->ApplyResources(this->label22, L"label22");
			this->label22->ForeColor = System::Drawing::Color::Red;
			this->label22->Name = L"label22";
			// 
			// label23
			// 
			resources->ApplyResources(this->label23, L"label23");
			this->label23->ForeColor = System::Drawing::Color::DarkGreen;
			this->label23->Name = L"label23";
			// 
			// hScrollBar2
			// 
			resources->ApplyResources(this->hScrollBar2, L"hScrollBar2");
			this->hScrollBar2->LargeChange = 0;
			this->hScrollBar2->Maximum = 255;
			this->hScrollBar2->Name = L"hScrollBar2";
			this->hScrollBar2->SmallChange = 0;
			this->hScrollBar2->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::hScrollBar2_Scroll);
			// 
			// hScrollBar3
			// 
			resources->ApplyResources(this->hScrollBar3, L"hScrollBar3");
			this->hScrollBar3->LargeChange = 0;
			this->hScrollBar3->Maximum = 255;
			this->hScrollBar3->Name = L"hScrollBar3";
			this->hScrollBar3->SmallChange = 0;
			this->hScrollBar3->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::hScrollBar3_Scroll);
			// 
			// SecondLabel
			// 
			resources->ApplyResources(this->SecondLabel, L"SecondLabel");
			this->SecondLabel->Name = L"SecondLabel";
			// 
			// label25
			// 
			resources->ApplyResources(this->label25, L"label25");
			this->label25->Name = L"label25";
			// 
			// colorpanel4
			// 
			this->colorpanel4->BackColor = System::Drawing::Color::Red;
			resources->ApplyResources(this->colorpanel4, L"colorpanel4");
			this->colorpanel4->Name = L"colorpanel4";
			this->colorpanel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::colorpanel_Paint);
			// 
			// panel18
			// 
			this->panel18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel18->Controls->Add(this->hScrollBar7);
			this->panel18->Controls->Add(this->label17);
			this->panel18->Controls->Add(this->label18);
			this->panel18->Controls->Add(this->label19);
			this->panel18->Controls->Add(this->hScrollBar8);
			this->panel18->Controls->Add(this->hScrollBar9);
			this->panel18->Controls->Add(this->MinuteLabel);
			this->panel18->Controls->Add(this->label21);
			this->panel18->Controls->Add(this->colorpanel3);
			resources->ApplyResources(this->panel18, L"panel18");
			this->panel18->Name = L"panel18";
			// 
			// hScrollBar7
			// 
			resources->ApplyResources(this->hScrollBar7, L"hScrollBar7");
			this->hScrollBar7->LargeChange = 0;
			this->hScrollBar7->Maximum = 255;
			this->hScrollBar7->Name = L"hScrollBar7";
			this->hScrollBar7->SmallChange = 0;
			this->hScrollBar7->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::hScrollBar7_Scroll);
			// 
			// label17
			// 
			resources->ApplyResources(this->label17, L"label17");
			this->label17->ForeColor = System::Drawing::Color::Blue;
			this->label17->Name = L"label17";
			// 
			// label18
			// 
			resources->ApplyResources(this->label18, L"label18");
			this->label18->ForeColor = System::Drawing::Color::Red;
			this->label18->Name = L"label18";
			// 
			// label19
			// 
			resources->ApplyResources(this->label19, L"label19");
			this->label19->ForeColor = System::Drawing::Color::DarkGreen;
			this->label19->Name = L"label19";
			// 
			// hScrollBar8
			// 
			resources->ApplyResources(this->hScrollBar8, L"hScrollBar8");
			this->hScrollBar8->LargeChange = 0;
			this->hScrollBar8->Maximum = 255;
			this->hScrollBar8->Name = L"hScrollBar8";
			this->hScrollBar8->SmallChange = 0;
			this->hScrollBar8->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::hScrollBar8_Scroll);
			// 
			// hScrollBar9
			// 
			resources->ApplyResources(this->hScrollBar9, L"hScrollBar9");
			this->hScrollBar9->LargeChange = 0;
			this->hScrollBar9->Maximum = 255;
			this->hScrollBar9->Name = L"hScrollBar9";
			this->hScrollBar9->SmallChange = 0;
			this->hScrollBar9->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::hScrollBar9_Scroll);
			// 
			// MinuteLabel
			// 
			resources->ApplyResources(this->MinuteLabel, L"MinuteLabel");
			this->MinuteLabel->Name = L"MinuteLabel";
			// 
			// label21
			// 
			resources->ApplyResources(this->label21, L"label21");
			this->label21->Name = L"label21";
			// 
			// colorpanel3
			// 
			this->colorpanel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(114)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			resources->ApplyResources(this->colorpanel3, L"colorpanel3");
			this->colorpanel3->Name = L"colorpanel3";
			this->colorpanel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::colorpanel_Paint);
			// 
			// panel19
			// 
			this->panel19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel19->Controls->Add(this->hScrollBar6);
			this->panel19->Controls->Add(this->label15);
			this->panel19->Controls->Add(this->label13);
			this->panel19->Controls->Add(this->label14);
			this->panel19->Controls->Add(this->hScrollBar5);
			this->panel19->Controls->Add(this->hScrollBar4);
			this->panel19->Controls->Add(this->HourLabel);
			this->panel19->Controls->Add(this->label12);
			this->panel19->Controls->Add(this->colorpanel2);
			resources->ApplyResources(this->panel19, L"panel19");
			this->panel19->Name = L"panel19";
			// 
			// hScrollBar6
			// 
			resources->ApplyResources(this->hScrollBar6, L"hScrollBar6");
			this->hScrollBar6->LargeChange = 0;
			this->hScrollBar6->Maximum = 255;
			this->hScrollBar6->Name = L"hScrollBar6";
			this->hScrollBar6->SmallChange = 0;
			this->hScrollBar6->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::hScrollBar6_Scroll);
			// 
			// label15
			// 
			resources->ApplyResources(this->label15, L"label15");
			this->label15->ForeColor = System::Drawing::Color::Blue;
			this->label15->Name = L"label15";
			// 
			// label13
			// 
			resources->ApplyResources(this->label13, L"label13");
			this->label13->ForeColor = System::Drawing::Color::Red;
			this->label13->Name = L"label13";
			// 
			// label14
			// 
			resources->ApplyResources(this->label14, L"label14");
			this->label14->ForeColor = System::Drawing::Color::DarkGreen;
			this->label14->Name = L"label14";
			// 
			// hScrollBar5
			// 
			resources->ApplyResources(this->hScrollBar5, L"hScrollBar5");
			this->hScrollBar5->LargeChange = 0;
			this->hScrollBar5->Maximum = 255;
			this->hScrollBar5->Name = L"hScrollBar5";
			this->hScrollBar5->SmallChange = 0;
			this->hScrollBar5->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::hScrollBar5_Scroll);
			// 
			// hScrollBar4
			// 
			resources->ApplyResources(this->hScrollBar4, L"hScrollBar4");
			this->hScrollBar4->LargeChange = 0;
			this->hScrollBar4->Maximum = 255;
			this->hScrollBar4->Name = L"hScrollBar4";
			this->hScrollBar4->SmallChange = 0;
			this->hScrollBar4->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::hScrollBar4_Scroll);
			// 
			// HourLabel
			// 
			resources->ApplyResources(this->HourLabel, L"HourLabel");
			this->HourLabel->Name = L"HourLabel";
			// 
			// label12
			// 
			resources->ApplyResources(this->label12, L"label12");
			this->label12->Name = L"label12";
			// 
			// colorpanel2
			// 
			this->colorpanel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			resources->ApplyResources(this->colorpanel2, L"colorpanel2");
			this->colorpanel2->Name = L"colorpanel2";
			this->colorpanel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::colorpanel_Paint);
			// 
			// label26
			// 
			resources->ApplyResources(this->label26, L"label26");
			this->label26->Name = L"label26";
			// 
			// label11
			// 
			resources->ApplyResources(this->label11, L"label11");
			this->label11->Name = L"label11";
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->Name = L"label2";
			// 
			// pictureBox8
			// 
			resources->ApplyResources(this->pictureBox8, L"pictureBox8");
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->TabStop = false;
			// 
			// MyForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->vipback);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->HelpButton = true;
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel24->ResumeLayout(false);
			this->panel24->PerformLayout();
			this->back4->ResumeLayout(false);
			this->back4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel20->ResumeLayout(false);
			this->panel20->PerformLayout();
			this->back3->ResumeLayout(false);
			this->back3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			this->back2->ResumeLayout(false);
			this->back2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			this->back1->ResumeLayout(false);
			this->back1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarSize))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->panel21->ResumeLayout(false);
			this->panel21->PerformLayout();
			this->panel18->ResumeLayout(false);
			this->panel18->PerformLayout();
			this->panel19->ResumeLayout(false);
			this->panel19->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		//=============================================================================================================================================
		// 
		// 
		// 
		// 
		// 
		// 
		// 
		// 
		// 
		// 
		// 
		//=============================================================================================================================================
#pragma endregion
#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup") //hide console window

		String^ pass = "WV69VW";

		String^ colorHour1;
		String^ colorHour2;
		String^ colorHour3;

		String^ colorMinute1;
		String^ colorMinute2;
		String^ colorMinute3;

		String^ colorSecond1;
		String^ colorSecond2;
		String^ colorSecond3;



private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	// Hour R G B
	hScrollBar4->Value = 220; 
	hScrollBar6->Value = 0; 
	hScrollBar5->Value = 0; 

	// Minute 0,114,254
	hScrollBar9->Value = 0; 
	hScrollBar7->Value = 144; 
	hScrollBar8->Value = 254; 

	// Seconds
	hScrollBar3->Value = 255;
	hScrollBar1->Value = 0;
	hScrollBar2->Value = 0;

	colorpanel2->BackColor = Color::FromArgb(hScrollBar4->Value, hScrollBar5->Value, hScrollBar6->Value);
	colorpanel3->BackColor = Color::FromArgb(hScrollBar9->Value, hScrollBar7->Value, hScrollBar8->Value);
	colorpanel4->BackColor = Color::FromArgb(hScrollBar3->Value, hScrollBar1->Value, hScrollBar2->Value);
	
	trackBarSize->Value = 1;
}

			 // Hours scrolls
private: System::Void hScrollBar4_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
		colorpanel2->BackColor = Color::FromArgb(hScrollBar4->Value, hScrollBar6->Value, hScrollBar5->Value);

		if (hScrollBar4->Value != 220)
		{
			HourLabel->ForeColor = Color::FromArgb(100, 230, 150);
		}
}
private: System::Void hScrollBar6_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
		colorpanel2->BackColor = Color::FromArgb(hScrollBar4->Value, hScrollBar6->Value, hScrollBar5->Value);
}
private: System::Void hScrollBar5_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
		colorpanel2->BackColor = Color::FromArgb(hScrollBar4->Value, hScrollBar6->Value, hScrollBar5->Value);
}

			 // Minutes scrolls
private: System::Void hScrollBar9_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
		colorpanel3->BackColor = Color::FromArgb(hScrollBar9->Value, hScrollBar7->Value, hScrollBar8->Value);

}
private: System::Void hScrollBar7_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
		colorpanel3->BackColor = Color::FromArgb(hScrollBar9->Value, hScrollBar7->Value, hScrollBar8->Value);

		if (hScrollBar7->Value != 144)
		{
			MinuteLabel->ForeColor = Color::FromArgb(100, 230, 150);
		}
}
private: System::Void hScrollBar8_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
		colorpanel3->BackColor = Color::FromArgb(hScrollBar9->Value, hScrollBar7->Value, hScrollBar8->Value);
}

			 // Seconds scrolls
private: System::Void hScrollBar3_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
		colorpanel4->BackColor = Color::FromArgb(hScrollBar3->Value, hScrollBar1->Value, hScrollBar2->Value);

		if (hScrollBar3->Value != 255)
		{
			SecondLabel->ForeColor = Color::FromArgb(100, 230, 150);
		}
}
private: System::Void hScrollBar1_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
		colorpanel4->BackColor = Color::FromArgb(hScrollBar3->Value, hScrollBar1->Value, hScrollBar2->Value);
}
private: System::Void hScrollBar2_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
		colorpanel4->BackColor = Color::FromArgb(hScrollBar3->Value, hScrollBar1->Value, hScrollBar2->Value);
}

			 ////////////////////////////////////////////////////////////////


private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
		//colorpanel->BackColor = Color::FromArgb((trackBar1->Value) * 25, 0, 0);
}
private: System::Void vScrollBar1_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {

}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

			 // VIP

private: System::Void setVIPToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (viptext2->Text == pass)
	{
		sound();

		//viplabel->ForeColor = Color::Yellow;
		//vipback->BackColor = Color::Black;

		MessageBox::Show(this, "Thanks for subscribing)\nVIP activated, enjoy !", "Alert", MessageBoxButtons::OK, MessageBoxIcon::Information);

		checkBoxLv3->Enabled = true;
		checkBoxInfo->Enabled = true;
		checkBoxDv3->Enabled = true;
		checkBoxLv4->Enabled = true;

		panel13->Cursor = Control::Cursor;
		panel15->Cursor = Control::Cursor;
		panel20->Cursor = Control::Cursor;
		panel24->Cursor = Control::Cursor;

		back1->BackColor = Color::FromArgb(80, 210, 130);
		back2->BackColor = Color::FromArgb(80, 210, 130);
		back3->BackColor = Color::FromArgb(80, 210, 130);
		back4->BackColor = Color::FromArgb(80, 210, 130);

		labelVip1->ForeColor = Color::FromArgb(80, 210, 130);
		labelVip2->ForeColor = Color::FromArgb(80, 210, 130);
		labelVip3->ForeColor = Color::FromArgb(80, 210, 130);
		labelVip4->ForeColor = Color::FromArgb(80, 210, 130);
	}
}




private: System::Void toolStripTextBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void vIPToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void toolStripTextBox1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void viplabel_Click(System::Object^ sender, System::EventArgs^ e) {
}


			 // CheckBox

private: System::Void checkBoxMain_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	//checkBoxMain->Checked = false;
	checkBoxDv1->Checked = false;
	checkBoxDv2->Checked = false;
	checkBoxLv1->Checked = false;
	checkBoxLv2->Checked = false;
	checkBoxLv3->Checked = false;
	checkBoxInfo->Checked = false;
	checkBoxDv3->Checked = false;
	checkBoxLv4->Checked = false;

	// Hour R G B
	hScrollBar4->Value = 220;
	hScrollBar6->Value = 0;
	hScrollBar5->Value = 0;

	// Minute 0,114,254
	hScrollBar9->Value = 0;
	hScrollBar7->Value = 144;
	hScrollBar8->Value = 254;

	// Seconds
	hScrollBar3->Value = 255;
	hScrollBar1->Value = 0;
	hScrollBar2->Value = 0;

	colorpanel2->BackColor = Color::FromArgb(hScrollBar4->Value, hScrollBar5->Value, hScrollBar6->Value);
	colorpanel3->BackColor = Color::FromArgb(hScrollBar9->Value, hScrollBar7->Value, hScrollBar8->Value);
	colorpanel4->BackColor = Color::FromArgb(hScrollBar3->Value, hScrollBar1->Value, hScrollBar2->Value);
}
private: System::Void checkBoxDv1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	checkBoxMain->Checked = false;
	//checkBoxDv1->Checked = false;
	checkBoxDv2->Checked = false;
	checkBoxLv1->Checked = false;
	checkBoxLv2->Checked = false;
	checkBoxLv3->Checked = false;
	checkBoxInfo->Checked = false;
	checkBoxDv3->Checked = false;
	checkBoxLv4->Checked = false;

	// Hour R G B
	hScrollBar4->Value = 220;
	hScrollBar6->Value = 0;
	hScrollBar5->Value = 0;

	// Minute 0,114,254
	hScrollBar9->Value = 0;
	hScrollBar7->Value = 144;
	hScrollBar8->Value = 254;

	// Seconds
	hScrollBar3->Value = 255;
	hScrollBar1->Value = 0;
	hScrollBar2->Value = 0;

	colorpanel2->BackColor = Color::FromArgb(hScrollBar4->Value, hScrollBar5->Value, hScrollBar6->Value);
	colorpanel3->BackColor = Color::FromArgb(hScrollBar9->Value, hScrollBar7->Value, hScrollBar8->Value);
	colorpanel4->BackColor = Color::FromArgb(hScrollBar3->Value, hScrollBar1->Value, hScrollBar2->Value);
}
private: System::Void checkBoxDv2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	checkBoxMain->Checked = false;
	checkBoxDv1->Checked = false;
	//checkBoxDv2->Checked = false;
	checkBoxLv1->Checked = false;
	checkBoxLv2->Checked = false;
	checkBoxLv3->Checked = false;
	checkBoxInfo->Checked = false;
	checkBoxDv3->Checked = false;
	checkBoxLv4->Checked = false;

	// Hour R G B
	hScrollBar4->Value = 220;
	hScrollBar6->Value = 0;
	hScrollBar5->Value = 0;

	// Minute 0,114,254
	hScrollBar9->Value = 0;
	hScrollBar7->Value = 144;
	hScrollBar8->Value = 254;

	// Seconds
	hScrollBar3->Value = 255;
	hScrollBar1->Value = 0;
	hScrollBar2->Value = 0;

	colorpanel2->BackColor = Color::FromArgb(hScrollBar4->Value, hScrollBar5->Value, hScrollBar6->Value);
	colorpanel3->BackColor = Color::FromArgb(hScrollBar9->Value, hScrollBar7->Value, hScrollBar8->Value);
	colorpanel4->BackColor = Color::FromArgb(hScrollBar3->Value, hScrollBar1->Value, hScrollBar2->Value);
}
private: System::Void checkBoxLv1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	checkBoxMain->Checked = false;
	checkBoxDv1->Checked = false;
	checkBoxDv2->Checked = false;
	//checkBoxLv1->Checked = false;
	checkBoxLv2->Checked = false;
	checkBoxLv3->Checked = false;
	checkBoxInfo->Checked = false;
	checkBoxDv3->Checked = false;
	checkBoxLv4->Checked = false;

	// Hour R G B
	hScrollBar4->Value = 255;
	hScrollBar6->Value = 0;
	hScrollBar5->Value = 0;

	// Minute 0,114,254
	hScrollBar9->Value = 0;
	hScrollBar7->Value = 0;
	hScrollBar8->Value = 0;

	// Seconds
	hScrollBar3->Value = 255;
	hScrollBar1->Value = 0;
	hScrollBar2->Value = 0;

	colorpanel2->BackColor = Color::FromArgb(hScrollBar4->Value, hScrollBar5->Value, hScrollBar6->Value);
	colorpanel3->BackColor = Color::FromArgb(hScrollBar9->Value, hScrollBar7->Value, hScrollBar8->Value);
	colorpanel4->BackColor = Color::FromArgb(hScrollBar3->Value, hScrollBar1->Value, hScrollBar2->Value);
}
private: System::Void checkBoxLv2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	checkBoxMain->Checked = false;
	checkBoxDv1->Checked = false;
	checkBoxDv2->Checked = false;
	checkBoxLv1->Checked = false;
	//checkBoxLv2->Checked = false;
	checkBoxLv3->Checked = false;
	checkBoxInfo->Checked = false;
	checkBoxDv3->Checked = false;
	checkBoxLv4->Checked = false;

	// Hour R G B
	hScrollBar4->Value = 255;
	hScrollBar6->Value = 0;
	hScrollBar5->Value = 0;

	// Minute 0,114,254
	hScrollBar9->Value = 0;
	hScrollBar7->Value = 0;
	hScrollBar8->Value = 0;

	// Seconds
	hScrollBar3->Value = 255;
	hScrollBar1->Value = 0;
	hScrollBar2->Value = 0;

	colorpanel2->BackColor = Color::FromArgb(hScrollBar4->Value, hScrollBar5->Value, hScrollBar6->Value);
	colorpanel3->BackColor = Color::FromArgb(hScrollBar9->Value, hScrollBar7->Value, hScrollBar8->Value);
	colorpanel4->BackColor = Color::FromArgb(hScrollBar3->Value, hScrollBar1->Value, hScrollBar2->Value);
}
private: System::Void checkBoxLv3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	checkBoxMain->Checked = false;
	checkBoxDv1->Checked = false;
	checkBoxDv2->Checked = false;
	checkBoxLv1->Checked = false;
	checkBoxLv2->Checked = false;
	//checkBoxLv3->Checked = false;
	checkBoxInfo->Checked = false;
	checkBoxDv3->Checked = false;
	checkBoxLv4->Checked = false;

	// Hour R G B
	hScrollBar4->Value = 255;
	hScrollBar6->Value = 0;
	hScrollBar5->Value = 0;

	// Minute 0,114,254
	hScrollBar9->Value = 0;
	hScrollBar7->Value = 0;
	hScrollBar8->Value = 0;

	// Seconds
	hScrollBar3->Value = 255;
	hScrollBar1->Value = 0;
	hScrollBar2->Value = 0;

	colorpanel2->BackColor = Color::FromArgb(hScrollBar4->Value, hScrollBar5->Value, hScrollBar6->Value);
	colorpanel3->BackColor = Color::FromArgb(hScrollBar9->Value, hScrollBar7->Value, hScrollBar8->Value);
	colorpanel4->BackColor = Color::FromArgb(hScrollBar3->Value, hScrollBar1->Value, hScrollBar2->Value);
}
private: System::Void checkBoxInfo_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	checkBoxMain->Checked = false;
	checkBoxDv1->Checked = false;
	checkBoxDv2->Checked = false;
	checkBoxLv1->Checked = false;
	checkBoxLv2->Checked = false;
	checkBoxLv3->Checked = false;
	//checkBoxInfo->Checked = false;
	checkBoxDv3->Checked = false;
	checkBoxLv4->Checked = false;
}
private: System::Void checkBoxDv3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	checkBoxMain->Checked = false;
	checkBoxDv1->Checked = false;
	checkBoxDv2->Checked = false;
	checkBoxLv1->Checked = false;
	checkBoxLv2->Checked = false;
	checkBoxLv3->Checked = false;
	checkBoxInfo->Checked = false;
	//checkBoxDv3->Checked = false;
	checkBoxLv4->Checked = false;

	// Set color in scroll
	// Hour R G B 0,167,0
	hScrollBar4->Value = 0;
	hScrollBar6->Value = 165;
	hScrollBar5->Value = 0;

	// Minute 0,114,254
	hScrollBar9->Value = 178;
	hScrollBar7->Value = 178;
	hScrollBar8->Value = 178;

	// Seconds
	hScrollBar3->Value = 210;
	hScrollBar1->Value = 210;
	hScrollBar2->Value = 210;

	// Set color for panel
	colorpanel2->BackColor = Color::FromArgb(hScrollBar4->Value, hScrollBar6->Value, hScrollBar5->Value);
	colorpanel3->BackColor = Color::FromArgb(hScrollBar9->Value, hScrollBar7->Value, hScrollBar8->Value);
	colorpanel4->BackColor = Color::FromArgb(hScrollBar3->Value, hScrollBar1->Value, hScrollBar2->Value);
}
private: System::Void checkBoxLv4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	checkBoxMain->Checked = false;
	checkBoxDv1->Checked = false;
	checkBoxDv2->Checked = false;
	checkBoxLv1->Checked = false;
	checkBoxLv2->Checked = false;
	checkBoxLv3->Checked = false;
	checkBoxInfo->Checked = false;
	checkBoxDv3->Checked = false;
	//checkBoxLv4->Checked = false;

	// Set color in scroll
	// Hour R G B 0,167,0
	hScrollBar4->Value = 32;
	hScrollBar6->Value = 60;
	hScrollBar5->Value = 88;

	// Minute 0,114,254
	hScrollBar9->Value = 32;
	hScrollBar7->Value = 60;
	hScrollBar8->Value = 88;

	// Seconds
	hScrollBar3->Value = 155;
	hScrollBar1->Value = 155;
	hScrollBar2->Value = 155;

	// Set color for panel
	colorpanel2->BackColor = Color::FromArgb(hScrollBar4->Value, hScrollBar6->Value, hScrollBar5->Value);
	colorpanel3->BackColor = Color::FromArgb(hScrollBar9->Value, hScrollBar7->Value, hScrollBar8->Value);
	colorpanel4->BackColor = Color::FromArgb(hScrollBar3->Value, hScrollBar1->Value, hScrollBar2->Value);
}

private: System::Void colorpanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}


//==================================================================================================================================



private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	// 4 6 5
	colorHour1 = System::Convert::ToString(hScrollBar4->Value);
	colorHour2 = System::Convert::ToString(hScrollBar6->Value);
	colorHour3 = System::Convert::ToString(hScrollBar5->Value);

	colorMinute1 = System::Convert::ToString(hScrollBar9->Value);
	colorMinute2 = System::Convert::ToString(hScrollBar7->Value);
	colorMinute3 = System::Convert::ToString(hScrollBar8->Value);

	colorSecond1 = System::Convert::ToString(hScrollBar3->Value);
	colorSecond2 = System::Convert::ToString(hScrollBar1->Value);
	colorSecond3 = System::Convert::ToString(hScrollBar2->Value);


	// File
	String^ path = "../../SkinC.ini";

	ofstream fout;

	fout.open("../../SkinC.ini");		// ofstream::app



	fout << ";==================================\n";
	fout << "; Market hours 24 CLOCK by Stas\n";
	fout << ";==================================\n\n";
	fout << "[Rainmeter]\n";
	fout << "Author = Stas\n";
	fout
		<< "AppVersion=1001000\n"
		<< "Update=100\n\n"

		<< "[Variables]\n"
		<< "HandColor=238, 238, 238\n\n"

		<< "[MeasureTime]\n"
		<< "Measure=Time\n"
		<< ";-15.1000\n"
		<< "TimeZone=0\n\n"

		// color
		<< "[Clock]\n"
		<< "Meter=IMAGE\n"
		<< ";ImageName=Theme/v-b2.png\n";

	if (checkBoxMain->Checked == true)
	{
		fout << "ImageName = Photoes/Theme/Main2.png\n";
	}
	else if (checkBoxDv1->Checked == true)
	{
		fout << "ImageName = Photoes/Theme/v-b1.png\n";
	}
	else if (checkBoxDv2->Checked == true)
	{
		fout << "ImageName = Photoes/Theme/v-b2.png\n";
	}
	else if (checkBoxLv1->Checked == true)
	{
		fout << "ImageName = Photoes/Theme/v-w1.png\n";
	}
	else if (checkBoxLv2->Checked == true)
	{
		fout << "ImageName = Photoes/Theme/v-w2.png\n";
	}
	else if (checkBoxLv3->Checked == true)
	{
		fout << "ImageName = Photoes/Theme/v-w3.png\n";
	}
	else if (checkBoxInfo->Checked == true)		// Info
	{
		fout << "ImageName = Photoes/Theme/ThemePro-ComingSoon/pro.png\n";
	}
	else if (checkBoxDv3->Checked == true)
	{
		fout << "ImageName = Photoes/Theme/v-b3.png\n";
	}
	else if (checkBoxLv4->Checked == true)
	{
		fout << "ImageName = Photoes/Theme/v-w4.png\n";
	}

		
	fout << "X=0\n"
		<< "Y=0\n";

	if (trackBarSize->Value == 0)
	{
		fout << "W=175\n"
			<< "H=175\n\n";
	}
	else if (trackBarSize->Value == 1)
	{
		fout << "W=350\n"
			<< "H = 350\n\n";
	}
	else if (trackBarSize->Value == 2)
	{
		// 350 / 1.5
		fout << "W=525\n"
			<< "H=525\n\n";
	}

	fout << "[Hours]\n"
		<< "Timezone1=-4\n"
		<< "Meter=ROUNDLINE\n"
		<< "MeterStyle=Seconds\n";

			if (trackBarSize->Value == 0)
			{
				fout << "LineWidth=3\n";

				if (checkBoxMain->Checked == true)
				{
					fout << "LineLength=46\n";
				}
				else if (checkBoxInfo->Checked == true)
				{
					fout << "LineLength=46\n";
				}
				else
				{
					fout << "LineLength=36\n";
				}

			}
			else if (trackBarSize->Value == 1)
			{
				fout << "LineWidth=6\n";
				if (checkBoxMain->Checked == true)
				{
					fout << "LineLength=93\n";
				}
				else if (checkBoxInfo->Checked == true)
				{
					fout << "LineLength=93\n";
				}
				else {
					fout << "LineLength=83\n";
				}

			}
			else if (trackBarSize->Value == 2)
			{
				// 6 / 1.5
				fout << "LineWidth=9\n";

				if (checkBoxMain->Checked == true)
				{
					fout << "LineLength=140\n";
				}
				else if (checkBoxInfo->Checked == true)
				{
					fout << "LineLength=140\n";
				}
				else {
					fout << "LineLength=140\n";
				}

			}

		fout << "LineColor=";
		// Color 1

		//write(colorHour1);
		//fout << colorHour1;

		//fout.open("../../SkinC.ini", ofstream::app);

		fout.close();

		StreamWriter^ file = gcnew StreamWriter(path, ofstream::app);

		file->WriteLine(colorHour1 + "," + colorHour2 + "," + colorHour3);
		file->Close();
		fout.open("../../SkinC.ini", ofstream::app);		// ofstream::app

		fout << ";43200 12\n"
			<< ";86400 24\n"
			<< ";7200\n"
			<< "ValueReminder=86400\n\n"

			<< "[Minutes]\n"
			<< "TimeZone=6\n"
			<< "Meter=ROUNDLINE\n"
			<< "MeterStyle=Seconds\n";

		if (trackBarSize->Value == 0)
		{
			fout << "LineWidth=3.7\n";

			if (checkBoxMain->Checked == true)
			{
				fout << "LineLength=72\n";
			}
			else if (checkBoxInfo->Checked == true)
			{
				fout << "LineLength=72\n";
			}
			else
			{
				fout << "LineLength=62\n";
			}
		}
		else if (trackBarSize->Value == 1)
		{
			fout << "LineWidth=3.5\n";

			if (checkBoxMain->Checked == true)
			{
				fout << "LineLength=144\n";
			}
			else if (checkBoxInfo->Checked == true)
			{
				fout << "LineLength=144\n";
			}
			else
			{
				fout << "LineLength=134\n";
			}
		}
		else if (trackBarSize->Value == 2)
		{
			// 6 / 1.5
			fout << "LineWidth=5.2\n";

			if (checkBoxMain->Checked == true)
			{
				fout << "LineLength=216\n";
			}
			else if (checkBoxInfo->Checked == true)
			{
				fout << "LineLength=216\n";
			}
			else
			{
				fout << "LineLength=206\n";
			}
		}

			fout << "LineColor=";		// Color 2

		fout.close();

		StreamWriter^ file2 = gcnew StreamWriter(path, ofstream::app);

		file2->WriteLine(colorMinute1 + "," + colorMinute2 + "," + colorMinute3);
		file2->Close();
		fout.open("../../SkinC.ini", ofstream::app);		// ofstream::app

		fout << ";3600\n"
			<< ";1800\n"
			<< "ValueReminder=3600\n\n"

			<< "[Seconds]\n"
			<< "TimeZone=6\n"
			<< "Meter=ROUNDLINE\n"
			<< "MeasureName=MeasureTime\n"
			<< "; Center 350/2\n";

			if (trackBarSize->Value == 0)
			{
				fout << "X=87\n"
					<< "Y=87\n"; 
			}
			else if (trackBarSize->Value == 1)
			{
				fout << "X=175\n"
					<< "Y=175\n";
			}
			else if (trackBarSize->Value == 2)
			{
				// 6 / 1.5
				fout << "X=262\n"
					<< "Y=262\n";
			}

			fout << "W=0\n"
				<< "H=0\n"
				<< "StartAngle=4.7123889\n"
				<< "RotationAngle=6.2831853\n"
				<< ";60\n";

			if (trackBarSize->Value == 0)
			{
				fout << "LineWidth=0.6\n";

				if (checkBoxMain->Checked == true)
				{
					fout << "LineLength=77\n";
				}
				else if (checkBoxInfo->Checked == true)
				{
					fout << "LineLength=77\n";
				}
				else
				{
					fout << "LineLength=62\n";
				}
			}
			else if (trackBarSize->Value == 1)
			{
				fout << "LineWidth=1.3\n";

				if (checkBoxMain->Checked == true)
				{
					fout << "LineLength=155\n";
				}
				else if (checkBoxInfo->Checked == true)
				{
					fout << "LineLength=155\n";
				}
				else
				{
					fout << "LineLength=145\n";
				}
			}
			else if (trackBarSize->Value == 2)
			{
				// 6 / 1.5
				fout << "LineWidth=1.9\n";

				if (checkBoxMain->Checked == true)
				{
					fout << "LineLength=232\n";
				}
				else if (checkBoxInfo->Checked == true)
				{
					fout << "LineLength=232\n";
				}
				else
				{
					fout << "LineLength=222\n";
				}
			}

			//<< "LineWidth=1.3\n"
			//<< "LineLength=155\n"

			fout << "LineStart=0\n"
			<< "AntiAlias=1\n"
			<< "LineColor=";		// Color 3

		fout.close();

		StreamWriter^ file3 = gcnew StreamWriter(path, ofstream::app);

		file3->WriteLine(colorSecond1 + "," + colorSecond2 + "," + colorSecond3);
		file3->Close();
		fout.open("../../SkinC.ini", ofstream::app);

		fout << "Solid=0\n"
			<< ";60\n"
			<< "ValueReminder=60\n\n"

			<< ";DOT !!!!!!!!!!!!!!!!\n"
			<< "[MeterClockCent]\n"
			<< "Meter=ROUNDLINE\n"
			<< "MeasureName=MeasureAlways1\n";

		if (trackBarSize->Value == 0)
		{
			fout << "X=87\n"
				<< "Y=87\n";
		}
		else if (trackBarSize->Value == 1)
		{
			fout << "X=175\n"
				<< "Y=175\n";
		}
		else if (trackBarSize->Value == 2)
		{
			// 269 / 1.5
			fout << "X=260\n"
				<< "Y=260\n";
		}

			
		fout << "W=0\n"
			<< "H=0\n"
			<< "LineWidth=#LineWidth#\n"
			<< "StartAngle=1\n"
			<< "RotationAngle=90\n";

		if (trackBarSize->Value == 0)
		{
				fout << "LineLength=3.5\n";
		}
		else if (trackBarSize->Value == 1)
		{
				fout << "LineLength=7\n";
		}
		else if (trackBarSize->Value == 2)
		{
				fout << "LineLength=14\n";
		}

			fout << "LineStart=0\n"
			<< "AntiAlias=1\n"
			<< "LineColor=";		// Color dot

			if (checkBoxMain->Checked == true)
			{
				fout << "35,35,35\n";
			}
			else if (checkBoxDv1->Checked == true)
			{
				fout << "35,35,35\n";
			}
			else if (checkBoxDv2->Checked == true)
			{
				fout << "35,35,35\n";
			}
			else if (checkBoxLv1->Checked == true)
			{
				fout << "222,222,222\n";
			}
			else if (checkBoxLv2->Checked == true)
			{
				fout << "222,222,222\n";
			}
			else if (checkBoxLv3->Checked == true)
			{
				fout << "222,222,222\n";
			}
			else if (checkBoxInfo->Checked == true)
			{
				fout << "35,35,35\n";
			}
			else if (checkBoxDv3->Checked == true)
			{
				fout << "203,203,203\n";
			}
			else if (checkBoxLv4->Checked == true)
			{
				fout << "155,155,155\n";
			}

		fout << "Solid=1\n";



	//Application::Exit;


	fout.close();



	//form2^ gform2 = gcnew form2;


	//gform2->Visible = false;

	for (int i = 0; i < 101; i+=20)
	{
		progressBar->Value = i;
		Sleep(10);
	}

	timer1->Start();

	if (timer1->Interval == 10000)
	{
		Sleep(3000);
		//this->Close();

	}
}
};
}
