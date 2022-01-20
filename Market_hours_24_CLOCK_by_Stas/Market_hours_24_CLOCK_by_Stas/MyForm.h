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
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòðóêòîðà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ðåñóðñû.
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
	private: System::Windows::Forms::Panel^ item1;


private: System::Windows::Forms::CheckBox^ checkBoxMain;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ item4;

private: System::Windows::Forms::CheckBox^ checkBoxDv1;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::PictureBox^ pictureBox2;




private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ item6;

private: System::Windows::Forms::CheckBox^ checkBoxDv2;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::PictureBox^ pictureBox3;
private: System::Windows::Forms::Panel^ panel14;
private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ item7;

private: System::Windows::Forms::CheckBox^ checkBoxLv1;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Panel^ item10;

private: System::Windows::Forms::CheckBox^ checkBoxLv3;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::PictureBox^ pictureBox6;
private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Panel^ item8;

private: System::Windows::Forms::CheckBox^ checkBoxLv2;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::PictureBox^ pictureBox5;
private: System::Windows::Forms::Panel^ panel12;


private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::Panel^ panelLv3;
	private: System::Windows::Forms::Label^ labelLv3;




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


private: System::Windows::Forms::Button^ Install;

private: System::Windows::Forms::Panel^ panel17;
private: System::Windows::Forms::Timer^ timer1;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Panel^ panel26;
private: System::Windows::Forms::Panel^ panel23;
private: System::Windows::Forms::Panel^ item15;




private: System::Windows::Forms::CheckBox^ checkBoxLv4;


private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::PictureBox^ pictureBox11;
private: System::Windows::Forms::Panel^ item12;

private: System::Windows::Forms::Panel^ panelDv3;
private: System::Windows::Forms::Label^ labelDv3;



private: System::Windows::Forms::CheckBox^ checkBoxDv3;



private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::PictureBox^ pictureBox10;
private: System::Windows::Forms::Panel^ panel47;
private: System::Windows::Forms::Panel^ panel41;
private: System::Windows::Forms::Panel^ panel31;
private: System::Windows::Forms::Panel^ item14;

private: System::Windows::Forms::Panel^ panelDv33;
private: System::Windows::Forms::Label^ labelDv33;


private: System::Windows::Forms::CheckBox^ checkBoxDv33;

private: System::Windows::Forms::Label^ label47;
private: System::Windows::Forms::PictureBox^ pictureBox18;
private: System::Windows::Forms::Panel^ panel28;
private: System::Windows::Forms::Panel^ item13;

private: System::Windows::Forms::Panel^ panelDv32;
private: System::Windows::Forms::Label^ labelDv32;


private: System::Windows::Forms::CheckBox^ checkBoxDv32;

private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::PictureBox^ pictureBox14;
private: System::Windows::Forms::Panel^ item3;

private: System::Windows::Forms::Panel^ panelMain3;
private: System::Windows::Forms::Label^ labelMain3;


private: System::Windows::Forms::CheckBox^ checkBoxMain3;

private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::PictureBox^ pictureBox13;
private: System::Windows::Forms::Panel^ item2;

private: System::Windows::Forms::Panel^ panelMain2;

private: System::Windows::Forms::Label^ labelMain2;

private: System::Windows::Forms::CheckBox^ checkBoxMain2;

private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::PictureBox^ pictureBox12;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Panel^ panel34;
private: System::Windows::Forms::Panel^ panel22;
private: System::Windows::Forms::Panel^ item1_4;

private: System::Windows::Forms::Panel^ panelInfoDv1;
private: System::Windows::Forms::Label^ labelInfoDv1;



private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::PictureBox^ pictureBox7;
private: System::Windows::Forms::Panel^ panel35;
private: System::Windows::Forms::Panel^ item1_3;

private: System::Windows::Forms::Panel^ panelInfoMain3;
private: System::Windows::Forms::Label^ labelInfoMain3;



private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::PictureBox^ pictureBox15;
private: System::Windows::Forms::Panel^ panel38;
private: System::Windows::Forms::Panel^ item1_2;

private: System::Windows::Forms::Panel^ panelInfoMain2;
private: System::Windows::Forms::Label^ labelInfoMain2;



private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::PictureBox^ pictureBox16;
private: System::Windows::Forms::Panel^ item1_1;


private: System::Windows::Forms::Panel^ panelInfoMain;
private: System::Windows::Forms::Label^ labelInfoMain;




private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::PictureBox^ pictureBox17;
private: System::Windows::Forms::Panel^ panel44;
private: System::Windows::Forms::Panel^ panel50;
private: System::Windows::Forms::Panel^ item16;

private: System::Windows::Forms::CheckBox^ checkBoxLv44;



private: System::Windows::Forms::Label^ label49;
private: System::Windows::Forms::PictureBox^ pictureBox19;
private: System::Windows::Forms::Panel^ item5;

private: System::Windows::Forms::CheckBox^ checkBoxDv11;

private: System::Windows::Forms::Label^ label52;
private: System::Windows::Forms::PictureBox^ pictureBox21;
private: System::Windows::Forms::Panel^ panel53;
private: System::Windows::Forms::Panel^ panel54;
private: System::Windows::Forms::Panel^ item11;

private: System::Windows::Forms::Panel^ panelLv33;
private: System::Windows::Forms::Label^ labelLv33;


private: System::Windows::Forms::CheckBox^ checkBoxLv33;

private: System::Windows::Forms::Label^ label51;
private: System::Windows::Forms::PictureBox^ pictureBox20;
private: System::Windows::Forms::Panel^ item9;

private: System::Windows::Forms::CheckBox^ checkBoxLv22;

private: System::Windows::Forms::Label^ label53;
private: System::Windows::Forms::PictureBox^ pictureBox22;
private: System::Windows::Forms::Panel^ panel56;
private: System::Windows::Forms::CheckBox^ checkBoxInfoDv1;

private: System::Windows::Forms::CheckBox^ checkBoxInfoMain3;

private: System::Windows::Forms::CheckBox^ checkBoxInfoMain2;

private: System::Windows::Forms::CheckBox^ checkBoxInfoMain;
private: System::Windows::Forms::ProgressBar^ progressBar;
private: System::Windows::Forms::CheckBox^ checkBoxInfo;
private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::Button^ button1;


private: System::ComponentModel::IContainer^ components;

	protected:


	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåðåìåííàÿ êîíñòðóêòîðà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òðåáóåìûé ìåòîä äëÿ ïîääåðæêè êîíñòðóêòîðà  íå èçìåíÿéòå 
		/// ñîäåðæèìîå ýòîãî ìåòîäà ñ ïîìîùüþ ðåäàêòîðà êîäà.
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
			this->panel28 = (gcnew System::Windows::Forms::Panel());
			this->item3 = (gcnew System::Windows::Forms::Panel());
			this->panelMain3 = (gcnew System::Windows::Forms::Panel());
			this->labelMain3 = (gcnew System::Windows::Forms::Label());
			this->checkBoxMain3 = (gcnew System::Windows::Forms::CheckBox());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->item2 = (gcnew System::Windows::Forms::Panel());
			this->panelMain2 = (gcnew System::Windows::Forms::Panel());
			this->labelMain2 = (gcnew System::Windows::Forms::Label());
			this->checkBoxMain2 = (gcnew System::Windows::Forms::CheckBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->panel47 = (gcnew System::Windows::Forms::Panel());
			this->panel31 = (gcnew System::Windows::Forms::Panel());
			this->panel41 = (gcnew System::Windows::Forms::Panel());
			this->item14 = (gcnew System::Windows::Forms::Panel());
			this->panelDv33 = (gcnew System::Windows::Forms::Panel());
			this->labelDv33 = (gcnew System::Windows::Forms::Label());
			this->checkBoxDv33 = (gcnew System::Windows::Forms::CheckBox());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->item13 = (gcnew System::Windows::Forms::Panel());
			this->panelDv32 = (gcnew System::Windows::Forms::Panel());
			this->labelDv32 = (gcnew System::Windows::Forms::Label());
			this->checkBoxDv32 = (gcnew System::Windows::Forms::CheckBox());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->panel50 = (gcnew System::Windows::Forms::Panel());
			this->panel26 = (gcnew System::Windows::Forms::Panel());
			this->item16 = (gcnew System::Windows::Forms::Panel());
			this->checkBoxLv44 = (gcnew System::Windows::Forms::CheckBox());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->panel23 = (gcnew System::Windows::Forms::Panel());
			this->item15 = (gcnew System::Windows::Forms::Panel());
			this->checkBoxLv4 = (gcnew System::Windows::Forms::CheckBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->item1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->checkBoxMain = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->checkBoxInfo = (gcnew System::Windows::Forms::CheckBox());
			this->item12 = (gcnew System::Windows::Forms::Panel());
			this->panelDv3 = (gcnew System::Windows::Forms::Panel());
			this->labelDv3 = (gcnew System::Windows::Forms::Label());
			this->checkBoxDv3 = (gcnew System::Windows::Forms::CheckBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->item4 = (gcnew System::Windows::Forms::Panel());
			this->checkBoxDv1 = (gcnew System::Windows::Forms::CheckBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->item5 = (gcnew System::Windows::Forms::Panel());
			this->checkBoxDv11 = (gcnew System::Windows::Forms::CheckBox());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->item6 = (gcnew System::Windows::Forms::Panel());
			this->checkBoxDv2 = (gcnew System::Windows::Forms::CheckBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->panel53 = (gcnew System::Windows::Forms::Panel());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->panel54 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->item11 = (gcnew System::Windows::Forms::Panel());
			this->panelLv33 = (gcnew System::Windows::Forms::Panel());
			this->labelLv33 = (gcnew System::Windows::Forms::Label());
			this->checkBoxLv33 = (gcnew System::Windows::Forms::CheckBox());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->item7 = (gcnew System::Windows::Forms::Panel());
			this->checkBoxLv1 = (gcnew System::Windows::Forms::CheckBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->item10 = (gcnew System::Windows::Forms::Panel());
			this->panelLv3 = (gcnew System::Windows::Forms::Panel());
			this->labelLv3 = (gcnew System::Windows::Forms::Label());
			this->checkBoxLv3 = (gcnew System::Windows::Forms::CheckBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->item9 = (gcnew System::Windows::Forms::Panel());
			this->checkBoxLv22 = (gcnew System::Windows::Forms::CheckBox());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->item8 = (gcnew System::Windows::Forms::Panel());
			this->checkBoxLv2 = (gcnew System::Windows::Forms::CheckBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->panel56 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->progressBar = (gcnew System::Windows::Forms::ProgressBar());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Install = (gcnew System::Windows::Forms::Button());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->trackBarSize = (gcnew System::Windows::Forms::TrackBar());
			this->panel34 = (gcnew System::Windows::Forms::Panel());
			this->panel22 = (gcnew System::Windows::Forms::Panel());
			this->item1_4 = (gcnew System::Windows::Forms::Panel());
			this->checkBoxInfoDv1 = (gcnew System::Windows::Forms::CheckBox());
			this->panelInfoDv1 = (gcnew System::Windows::Forms::Panel());
			this->labelInfoDv1 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->panel35 = (gcnew System::Windows::Forms::Panel());
			this->item1_3 = (gcnew System::Windows::Forms::Panel());
			this->checkBoxInfoMain3 = (gcnew System::Windows::Forms::CheckBox());
			this->panelInfoMain3 = (gcnew System::Windows::Forms::Panel());
			this->labelInfoMain3 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->panel38 = (gcnew System::Windows::Forms::Panel());
			this->item1_2 = (gcnew System::Windows::Forms::Panel());
			this->checkBoxInfoMain2 = (gcnew System::Windows::Forms::CheckBox());
			this->panelInfoMain2 = (gcnew System::Windows::Forms::Panel());
			this->labelInfoMain2 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->item1_1 = (gcnew System::Windows::Forms::Panel());
			this->panelInfoMain = (gcnew System::Windows::Forms::Panel());
			this->labelInfoMain = (gcnew System::Windows::Forms::Label());
			this->checkBoxInfoMain = (gcnew System::Windows::Forms::CheckBox());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->panel44 = (gcnew System::Windows::Forms::Panel());
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
			this->item3->SuspendLayout();
			this->panelMain3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			this->item2->SuspendLayout();
			this->panelMain2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			this->item14->SuspendLayout();
			this->panelDv33->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			this->item13->SuspendLayout();
			this->panelDv32->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			this->item16->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			this->item15->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			this->item1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->item12->SuspendLayout();
			this->panelDv3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			this->item4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->item5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			this->item6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->item11->SuspendLayout();
			this->panelLv33->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			this->item7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->item10->SuspendLayout();
			this->panelLv3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->item9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			this->item8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarSize))->BeginInit();
			this->panel34->SuspendLayout();
			this->item1_4->SuspendLayout();
			this->panelInfoDv1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->item1_3->SuspendLayout();
			this->panelInfoMain3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			this->item1_2->SuspendLayout();
			this->panelInfoMain2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			this->item1_1->SuspendLayout();
			this->panelInfoMain->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
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
			// 
			// viptext2
			// 
			this->viptext2->Name = L"viptext2";
			resources->ApplyResources(this->viptext2, L"viptext2");
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
			// 
			// youtubecomchannelUCKcWOEWJ1hrUW1irBZz8xQvideosToolStripMenuItem
			// 
			this->youtubecomchannelUCKcWOEWJ1hrUW1irBZz8xQvideosToolStripMenuItem->Name = L"youtubecomchannelUCKcWOEWJ1hrUW1irBZz8xQvideosToolStripMenuItem";
			resources->ApplyResources(this->youtubecomchannelUCKcWOEWJ1hrUW1irBZz8xQvideosToolStripMenuItem, L"youtubecomchannelUCKcWOEWJ1hrUW1irBZz8xQvideosToolStripMenuItem");
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
			this->panel2->Controls->Add(this->panel28);
			this->panel2->Controls->Add(this->item3);
			this->panel2->Controls->Add(this->panel6);
			this->panel2->Controls->Add(this->item2);
			this->panel2->Controls->Add(this->panel47);
			this->panel2->Controls->Add(this->panel31);
			this->panel2->Controls->Add(this->panel41);
			this->panel2->Controls->Add(this->item14);
			this->panel2->Controls->Add(this->item13);
			this->panel2->Controls->Add(this->panel50);
			this->panel2->Controls->Add(this->panel26);
			this->panel2->Controls->Add(this->item16);
			this->panel2->Controls->Add(this->panel23);
			this->panel2->Controls->Add(this->item15);
			this->panel2->Controls->Add(this->item1);
			this->panel2->Controls->Add(this->item12);
			this->panel2->Controls->Add(this->item4);
			this->panel2->Controls->Add(this->panel5);
			this->panel2->Controls->Add(this->item5);
			this->panel2->Controls->Add(this->item6);
			this->panel2->Controls->Add(this->panel53);
			this->panel2->Controls->Add(this->panel14);
			this->panel2->Controls->Add(this->panel54);
			this->panel2->Controls->Add(this->panel8);
			this->panel2->Controls->Add(this->item11);
			this->panel2->Controls->Add(this->item7);
			this->panel2->Controls->Add(this->item10);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->panel10);
			this->panel2->Controls->Add(this->item9);
			this->panel2->Controls->Add(this->item8);
			this->panel2->Controls->Add(this->panel56);
			this->panel2->Name = L"panel2";
			// 
			// panel28
			// 
			resources->ApplyResources(this->panel28, L"panel28");
			this->panel28->Name = L"panel28";
			// 
			// item3
			// 
			this->item3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->item3->Controls->Add(this->panelMain3);
			this->item3->Controls->Add(this->checkBoxMain3);
			this->item3->Controls->Add(this->label43);
			this->item3->Controls->Add(this->pictureBox13);
			this->item3->Cursor = System::Windows::Forms::Cursors::No;
			resources->ApplyResources(this->item3, L"item3");
			this->item3->Name = L"item3";
			// 
			// panelMain3
			// 
			this->panelMain3->BackColor = System::Drawing::Color::Black;
			this->panelMain3->Controls->Add(this->labelMain3);
			resources->ApplyResources(this->panelMain3, L"panelMain3");
			this->panelMain3->Name = L"panelMain3";
			// 
			// labelMain3
			// 
			resources->ApplyResources(this->labelMain3, L"labelMain3");
			this->labelMain3->ForeColor = System::Drawing::Color::Gold;
			this->labelMain3->Name = L"labelMain3";
			// 
			// checkBoxMain3
			// 
			resources->ApplyResources(this->checkBoxMain3, L"checkBoxMain3");
			this->checkBoxMain3->Name = L"checkBoxMain3";
			this->checkBoxMain3->UseVisualStyleBackColor = true;
			this->checkBoxMain3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxMain3_CheckedChanged);
			// 
			// label43
			// 
			resources->ApplyResources(this->label43, L"label43");
			this->label43->Name = L"label43";
			// 
			// pictureBox13
			// 
			resources->ApplyResources(this->pictureBox13, L"pictureBox13");
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->TabStop = false;
			// 
			// panel6
			// 
			resources->ApplyResources(this->panel6, L"panel6");
			this->panel6->Name = L"panel6";
			// 
			// item2
			// 
			this->item2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->item2->Controls->Add(this->panelMain2);
			this->item2->Controls->Add(this->checkBoxMain2);
			this->item2->Controls->Add(this->label35);
			this->item2->Controls->Add(this->pictureBox12);
			this->item2->Cursor = System::Windows::Forms::Cursors::No;
			resources->ApplyResources(this->item2, L"item2");
			this->item2->Name = L"item2";
			// 
			// panelMain2
			// 
			this->panelMain2->BackColor = System::Drawing::Color::Black;
			this->panelMain2->Controls->Add(this->labelMain2);
			resources->ApplyResources(this->panelMain2, L"panelMain2");
			this->panelMain2->Name = L"panelMain2";
			// 
			// labelMain2
			// 
			resources->ApplyResources(this->labelMain2, L"labelMain2");
			this->labelMain2->ForeColor = System::Drawing::Color::Gold;
			this->labelMain2->Name = L"labelMain2";
			// 
			// checkBoxMain2
			// 
			resources->ApplyResources(this->checkBoxMain2, L"checkBoxMain2");
			this->checkBoxMain2->Name = L"checkBoxMain2";
			this->checkBoxMain2->UseVisualStyleBackColor = true;
			this->checkBoxMain2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxMain2_CheckedChanged);
			// 
			// label35
			// 
			resources->ApplyResources(this->label35, L"label35");
			this->label35->Name = L"label35";
			// 
			// pictureBox12
			// 
			resources->ApplyResources(this->pictureBox12, L"pictureBox12");
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->TabStop = false;
			// 
			// panel47
			// 
			resources->ApplyResources(this->panel47, L"panel47");
			this->panel47->Name = L"panel47";
			// 
			// panel31
			// 
			resources->ApplyResources(this->panel31, L"panel31");
			this->panel31->Name = L"panel31";
			// 
			// panel41
			// 
			resources->ApplyResources(this->panel41, L"panel41");
			this->panel41->Name = L"panel41";
			// 
			// item14
			// 
			this->item14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->item14->Controls->Add(this->panelDv33);
			this->item14->Controls->Add(this->checkBoxDv33);
			this->item14->Controls->Add(this->label47);
			this->item14->Controls->Add(this->pictureBox18);
			this->item14->Cursor = System::Windows::Forms::Cursors::No;
			resources->ApplyResources(this->item14, L"item14");
			this->item14->Name = L"item14";
			// 
			// panelDv33
			// 
			this->panelDv33->BackColor = System::Drawing::Color::Black;
			this->panelDv33->Controls->Add(this->labelDv33);
			resources->ApplyResources(this->panelDv33, L"panelDv33");
			this->panelDv33->Name = L"panelDv33";
			// 
			// labelDv33
			// 
			resources->ApplyResources(this->labelDv33, L"labelDv33");
			this->labelDv33->ForeColor = System::Drawing::Color::Gold;
			this->labelDv33->Name = L"labelDv33";
			// 
			// checkBoxDv33
			// 
			resources->ApplyResources(this->checkBoxDv33, L"checkBoxDv33");
			this->checkBoxDv33->Name = L"checkBoxDv33";
			this->checkBoxDv33->UseVisualStyleBackColor = true;
			this->checkBoxDv33->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxDv33_CheckedChanged);
			// 
			// label47
			// 
			resources->ApplyResources(this->label47, L"label47");
			this->label47->Name = L"label47";
			// 
			// pictureBox18
			// 
			resources->ApplyResources(this->pictureBox18, L"pictureBox18");
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->TabStop = false;
			// 
			// item13
			// 
			this->item13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->item13->Controls->Add(this->panelDv32);
			this->item13->Controls->Add(this->checkBoxDv32);
			this->item13->Controls->Add(this->label45);
			this->item13->Controls->Add(this->pictureBox14);
			this->item13->Cursor = System::Windows::Forms::Cursors::No;
			resources->ApplyResources(this->item13, L"item13");
			this->item13->Name = L"item13";
			// 
			// panelDv32
			// 
			this->panelDv32->BackColor = System::Drawing::Color::Black;
			this->panelDv32->Controls->Add(this->labelDv32);
			resources->ApplyResources(this->panelDv32, L"panelDv32");
			this->panelDv32->Name = L"panelDv32";
			// 
			// labelDv32
			// 
			resources->ApplyResources(this->labelDv32, L"labelDv32");
			this->labelDv32->ForeColor = System::Drawing::Color::Gold;
			this->labelDv32->Name = L"labelDv32";
			// 
			// checkBoxDv32
			// 
			resources->ApplyResources(this->checkBoxDv32, L"checkBoxDv32");
			this->checkBoxDv32->Name = L"checkBoxDv32";
			this->checkBoxDv32->UseVisualStyleBackColor = true;
			this->checkBoxDv32->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxDv32_CheckedChanged);
			// 
			// label45
			// 
			resources->ApplyResources(this->label45, L"label45");
			this->label45->Name = L"label45";
			// 
			// pictureBox14
			// 
			resources->ApplyResources(this->pictureBox14, L"pictureBox14");
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->TabStop = false;
			// 
			// panel50
			// 
			resources->ApplyResources(this->panel50, L"panel50");
			this->panel50->Name = L"panel50";
			// 
			// panel26
			// 
			resources->ApplyResources(this->panel26, L"panel26");
			this->panel26->Name = L"panel26";
			// 
			// item16
			// 
			this->item16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->item16->Controls->Add(this->checkBoxLv44);
			this->item16->Controls->Add(this->label49);
			this->item16->Controls->Add(this->pictureBox19);
			this->item16->Cursor = System::Windows::Forms::Cursors::Default;
			resources->ApplyResources(this->item16, L"item16");
			this->item16->Name = L"item16";
			// 
			// checkBoxLv44
			// 
			resources->ApplyResources(this->checkBoxLv44, L"checkBoxLv44");
			this->checkBoxLv44->Name = L"checkBoxLv44";
			this->checkBoxLv44->UseVisualStyleBackColor = true;
			this->checkBoxLv44->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxLv44_CheckedChanged);
			// 
			// label49
			// 
			resources->ApplyResources(this->label49, L"label49");
			this->label49->Name = L"label49";
			// 
			// pictureBox19
			// 
			resources->ApplyResources(this->pictureBox19, L"pictureBox19");
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->TabStop = false;
			// 
			// panel23
			// 
			resources->ApplyResources(this->panel23, L"panel23");
			this->panel23->Name = L"panel23";
			// 
			// item15
			// 
			this->item15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->item15->Controls->Add(this->checkBoxLv4);
			this->item15->Controls->Add(this->label31);
			this->item15->Controls->Add(this->pictureBox11);
			this->item15->Cursor = System::Windows::Forms::Cursors::Default;
			resources->ApplyResources(this->item15, L"item15");
			this->item15->Name = L"item15";
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
			// item1
			// 
			this->item1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->item1->Controls->Add(this->pictureBox1);
			this->item1->Controls->Add(this->checkBoxMain);
			this->item1->Controls->Add(this->label3);
			this->item1->Controls->Add(this->checkBoxInfo);
			resources->ApplyResources(this->item1, L"item1");
			this->item1->Name = L"item1";
			// 
			// pictureBox1
			// 
			resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->TabStop = false;
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
			// checkBoxInfo
			// 
			resources->ApplyResources(this->checkBoxInfo, L"checkBoxInfo");
			this->checkBoxInfo->Name = L"checkBoxInfo";
			this->checkBoxInfo->UseVisualStyleBackColor = true;
			// 
			// item12
			// 
			this->item12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->item12->Controls->Add(this->panelDv3);
			this->item12->Controls->Add(this->checkBoxDv3);
			this->item12->Controls->Add(this->label32);
			this->item12->Controls->Add(this->label29);
			this->item12->Controls->Add(this->pictureBox10);
			this->item12->Cursor = System::Windows::Forms::Cursors::No;
			resources->ApplyResources(this->item12, L"item12");
			this->item12->Name = L"item12";
			// 
			// panelDv3
			// 
			this->panelDv3->BackColor = System::Drawing::Color::Black;
			this->panelDv3->Controls->Add(this->labelDv3);
			resources->ApplyResources(this->panelDv3, L"panelDv3");
			this->panelDv3->Name = L"panelDv3";
			// 
			// labelDv3
			// 
			resources->ApplyResources(this->labelDv3, L"labelDv3");
			this->labelDv3->ForeColor = System::Drawing::Color::Gold;
			this->labelDv3->Name = L"labelDv3";
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
			// item4
			// 
			this->item4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->item4->Controls->Add(this->checkBoxDv1);
			this->item4->Controls->Add(this->label4);
			this->item4->Controls->Add(this->pictureBox2);
			resources->ApplyResources(this->item4, L"item4");
			this->item4->Name = L"item4";
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
			// panel5
			// 
			resources->ApplyResources(this->panel5, L"panel5");
			this->panel5->Name = L"panel5";
			// 
			// item5
			// 
			this->item5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->item5->Controls->Add(this->checkBoxDv11);
			this->item5->Controls->Add(this->label52);
			this->item5->Controls->Add(this->pictureBox21);
			resources->ApplyResources(this->item5, L"item5");
			this->item5->Name = L"item5";
			// 
			// checkBoxDv11
			// 
			resources->ApplyResources(this->checkBoxDv11, L"checkBoxDv11");
			this->checkBoxDv11->Name = L"checkBoxDv11";
			this->checkBoxDv11->UseVisualStyleBackColor = true;
			this->checkBoxDv11->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxDv11_CheckedChanged_1);
			// 
			// label52
			// 
			resources->ApplyResources(this->label52, L"label52");
			this->label52->Name = L"label52";
			// 
			// pictureBox21
			// 
			resources->ApplyResources(this->pictureBox21, L"pictureBox21");
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->TabStop = false;
			// 
			// item6
			// 
			this->item6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->item6->Controls->Add(this->checkBoxDv2);
			this->item6->Controls->Add(this->label5);
			this->item6->Controls->Add(this->pictureBox3);
			resources->ApplyResources(this->item6, L"item6");
			this->item6->Name = L"item6";
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
			// panel53
			// 
			resources->ApplyResources(this->panel53, L"panel53");
			this->panel53->Name = L"panel53";
			// 
			// panel14
			// 
			resources->ApplyResources(this->panel14, L"panel14");
			this->panel14->Name = L"panel14";
			// 
			// panel54
			// 
			resources->ApplyResources(this->panel54, L"panel54");
			this->panel54->Name = L"panel54";
			// 
			// panel8
			// 
			resources->ApplyResources(this->panel8, L"panel8");
			this->panel8->Name = L"panel8";
			// 
			// item11
			// 
			this->item11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->item11->Controls->Add(this->panelLv33);
			this->item11->Controls->Add(this->checkBoxLv33);
			this->item11->Controls->Add(this->label51);
			this->item11->Controls->Add(this->pictureBox20);
			this->item11->Cursor = System::Windows::Forms::Cursors::No;
			resources->ApplyResources(this->item11, L"item11");
			this->item11->Name = L"item11";
			// 
			// panelLv33
			// 
			this->panelLv33->BackColor = System::Drawing::Color::Black;
			this->panelLv33->Controls->Add(this->labelLv33);
			resources->ApplyResources(this->panelLv33, L"panelLv33");
			this->panelLv33->Name = L"panelLv33";
			// 
			// labelLv33
			// 
			resources->ApplyResources(this->labelLv33, L"labelLv33");
			this->labelLv33->ForeColor = System::Drawing::Color::Gold;
			this->labelLv33->Name = L"labelLv33";
			// 
			// checkBoxLv33
			// 
			resources->ApplyResources(this->checkBoxLv33, L"checkBoxLv33");
			this->checkBoxLv33->Name = L"checkBoxLv33";
			this->checkBoxLv33->UseVisualStyleBackColor = true;
			this->checkBoxLv33->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxLv33_CheckedChanged);
			// 
			// label51
			// 
			resources->ApplyResources(this->label51, L"label51");
			this->label51->Name = L"label51";
			// 
			// pictureBox20
			// 
			resources->ApplyResources(this->pictureBox20, L"pictureBox20");
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->TabStop = false;
			// 
			// item7
			// 
			this->item7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->item7->Controls->Add(this->checkBoxLv1);
			this->item7->Controls->Add(this->label6);
			this->item7->Controls->Add(this->pictureBox4);
			this->item7->Controls->Add(this->panel12);
			resources->ApplyResources(this->item7, L"item7");
			this->item7->Name = L"item7";
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
			// panel12
			// 
			resources->ApplyResources(this->panel12, L"panel12");
			this->panel12->Name = L"panel12";
			// 
			// item10
			// 
			this->item10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->item10->Controls->Add(this->panelLv3);
			this->item10->Controls->Add(this->checkBoxLv3);
			this->item10->Controls->Add(this->label8);
			this->item10->Controls->Add(this->pictureBox6);
			this->item10->Cursor = System::Windows::Forms::Cursors::No;
			resources->ApplyResources(this->item10, L"item10");
			this->item10->Name = L"item10";
			// 
			// panelLv3
			// 
			this->panelLv3->BackColor = System::Drawing::Color::Black;
			this->panelLv3->Controls->Add(this->labelLv3);
			resources->ApplyResources(this->panelLv3, L"panelLv3");
			this->panelLv3->Name = L"panelLv3";
			// 
			// labelLv3
			// 
			resources->ApplyResources(this->labelLv3, L"labelLv3");
			this->labelLv3->ForeColor = System::Drawing::Color::Gold;
			this->labelLv3->Name = L"labelLv3";
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
			// panel3
			// 
			resources->ApplyResources(this->panel3, L"panel3");
			this->panel3->Name = L"panel3";
			// 
			// panel10
			// 
			resources->ApplyResources(this->panel10, L"panel10");
			this->panel10->Name = L"panel10";
			// 
			// item9
			// 
			this->item9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->item9->Controls->Add(this->checkBoxLv22);
			this->item9->Controls->Add(this->label53);
			this->item9->Controls->Add(this->pictureBox22);
			resources->ApplyResources(this->item9, L"item9");
			this->item9->Name = L"item9";
			// 
			// checkBoxLv22
			// 
			resources->ApplyResources(this->checkBoxLv22, L"checkBoxLv22");
			this->checkBoxLv22->Name = L"checkBoxLv22";
			this->checkBoxLv22->UseVisualStyleBackColor = true;
			this->checkBoxLv22->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxLv22_CheckedChanged);
			// 
			// label53
			// 
			resources->ApplyResources(this->label53, L"label53");
			this->label53->Name = L"label53";
			// 
			// pictureBox22
			// 
			resources->ApplyResources(this->pictureBox22, L"pictureBox22");
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->TabStop = false;
			// 
			// item8
			// 
			this->item8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->item8->Controls->Add(this->checkBoxLv2);
			this->item8->Controls->Add(this->label7);
			this->item8->Controls->Add(this->pictureBox5);
			resources->ApplyResources(this->item8, L"item8");
			this->item8->Name = L"item8";
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
			// panel56
			// 
			resources->ApplyResources(this->panel56, L"panel56");
			this->panel56->Name = L"panel56";
			// 
			// panel1
			// 
			resources->ApplyResources(this->panel1, L"panel1");
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)));
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->progressBar);
			this->panel1->Controls->Add(this->label28);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->Install);
			this->panel1->Controls->Add(this->panel17);
			this->panel1->Controls->Add(this->label20);
			this->panel1->Controls->Add(this->label24);
			this->panel1->Controls->Add(this->label27);
			this->panel1->Controls->Add(this->label16);
			this->panel1->Controls->Add(this->trackBarSize);
			this->panel1->Controls->Add(this->panel34);
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
			this->progressBar->ForeColor = System::Drawing::Color::Black;
			resources->ApplyResources(this->progressBar, L"progressBar");
			this->progressBar->Name = L"progressBar";
			// 
			// label28
			// 
			resources->ApplyResources(this->label28, L"label28");
			this->label28->Name = L"label28";
			// 
			// label9
			// 
			resources->ApplyResources(this->label9, L"label9");
			this->label9->Name = L"label9";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			resources->ApplyResources(this->button1, L"button1");
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Install
			// 
			this->Install->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
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
			// panel34
			// 
			resources->ApplyResources(this->panel34, L"panel34");
			this->panel34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(90)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->panel34->Controls->Add(this->panel22);
			this->panel34->Controls->Add(this->item1_4);
			this->panel34->Controls->Add(this->panel35);
			this->panel34->Controls->Add(this->item1_3);
			this->panel34->Controls->Add(this->panel38);
			this->panel34->Controls->Add(this->item1_2);
			this->panel34->Controls->Add(this->item1_1);
			this->panel34->Controls->Add(this->panel44);
			this->panel34->Name = L"panel34";
			// 
			// panel22
			// 
			resources->ApplyResources(this->panel22, L"panel22");
			this->panel22->Name = L"panel22";
			// 
			// item1_4
			// 
			this->item1_4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->item1_4->Controls->Add(this->checkBoxInfoDv1);
			this->item1_4->Controls->Add(this->panelInfoDv1);
			this->item1_4->Controls->Add(this->label33);
			this->item1_4->Controls->Add(this->pictureBox7);
			this->item1_4->Cursor = System::Windows::Forms::Cursors::No;
			resources->ApplyResources(this->item1_4, L"item1_4");
			this->item1_4->Name = L"item1_4";
			// 
			// checkBoxInfoDv1
			// 
			resources->ApplyResources(this->checkBoxInfoDv1, L"checkBoxInfoDv1");
			this->checkBoxInfoDv1->Name = L"checkBoxInfoDv1";
			this->checkBoxInfoDv1->UseVisualStyleBackColor = true;
			this->checkBoxInfoDv1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxInfoDv1_CheckedChanged);
			// 
			// panelInfoDv1
			// 
			this->panelInfoDv1->BackColor = System::Drawing::Color::Black;
			this->panelInfoDv1->Controls->Add(this->labelInfoDv1);
			resources->ApplyResources(this->panelInfoDv1, L"panelInfoDv1");
			this->panelInfoDv1->Name = L"panelInfoDv1";
			// 
			// labelInfoDv1
			// 
			resources->ApplyResources(this->labelInfoDv1, L"labelInfoDv1");
			this->labelInfoDv1->ForeColor = System::Drawing::Color::Gold;
			this->labelInfoDv1->Name = L"labelInfoDv1";
			// 
			// label33
			// 
			resources->ApplyResources(this->label33, L"label33");
			this->label33->Name = L"label33";
			// 
			// pictureBox7
			// 
			resources->ApplyResources(this->pictureBox7, L"pictureBox7");
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->TabStop = false;
			// 
			// panel35
			// 
			resources->ApplyResources(this->panel35, L"panel35");
			this->panel35->Name = L"panel35";
			// 
			// item1_3
			// 
			this->item1_3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->item1_3->Controls->Add(this->checkBoxInfoMain3);
			this->item1_3->Controls->Add(this->panelInfoMain3);
			this->item1_3->Controls->Add(this->label38);
			this->item1_3->Controls->Add(this->pictureBox15);
			this->item1_3->Cursor = System::Windows::Forms::Cursors::No;
			resources->ApplyResources(this->item1_3, L"item1_3");
			this->item1_3->Name = L"item1_3";
			// 
			// checkBoxInfoMain3
			// 
			resources->ApplyResources(this->checkBoxInfoMain3, L"checkBoxInfoMain3");
			this->checkBoxInfoMain3->Name = L"checkBoxInfoMain3";
			this->checkBoxInfoMain3->UseVisualStyleBackColor = true;
			this->checkBoxInfoMain3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxInfoMain3_CheckedChanged);
			// 
			// panelInfoMain3
			// 
			this->panelInfoMain3->BackColor = System::Drawing::Color::Black;
			this->panelInfoMain3->Controls->Add(this->labelInfoMain3);
			resources->ApplyResources(this->panelInfoMain3, L"panelInfoMain3");
			this->panelInfoMain3->Name = L"panelInfoMain3";
			// 
			// labelInfoMain3
			// 
			resources->ApplyResources(this->labelInfoMain3, L"labelInfoMain3");
			this->labelInfoMain3->ForeColor = System::Drawing::Color::Gold;
			this->labelInfoMain3->Name = L"labelInfoMain3";
			// 
			// label38
			// 
			resources->ApplyResources(this->label38, L"label38");
			this->label38->Name = L"label38";
			// 
			// pictureBox15
			// 
			resources->ApplyResources(this->pictureBox15, L"pictureBox15");
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->TabStop = false;
			// 
			// panel38
			// 
			resources->ApplyResources(this->panel38, L"panel38");
			this->panel38->Name = L"panel38";
			// 
			// item1_2
			// 
			this->item1_2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->item1_2->Controls->Add(this->checkBoxInfoMain2);
			this->item1_2->Controls->Add(this->panelInfoMain2);
			this->item1_2->Controls->Add(this->label40);
			this->item1_2->Controls->Add(this->pictureBox16);
			this->item1_2->Cursor = System::Windows::Forms::Cursors::No;
			resources->ApplyResources(this->item1_2, L"item1_2");
			this->item1_2->Name = L"item1_2";
			// 
			// checkBoxInfoMain2
			// 
			resources->ApplyResources(this->checkBoxInfoMain2, L"checkBoxInfoMain2");
			this->checkBoxInfoMain2->Name = L"checkBoxInfoMain2";
			this->checkBoxInfoMain2->UseVisualStyleBackColor = true;
			this->checkBoxInfoMain2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxInfoMain2_CheckedChanged);
			// 
			// panelInfoMain2
			// 
			this->panelInfoMain2->BackColor = System::Drawing::Color::Black;
			this->panelInfoMain2->Controls->Add(this->labelInfoMain2);
			resources->ApplyResources(this->panelInfoMain2, L"panelInfoMain2");
			this->panelInfoMain2->Name = L"panelInfoMain2";
			// 
			// labelInfoMain2
			// 
			resources->ApplyResources(this->labelInfoMain2, L"labelInfoMain2");
			this->labelInfoMain2->ForeColor = System::Drawing::Color::Gold;
			this->labelInfoMain2->Name = L"labelInfoMain2";
			// 
			// label40
			// 
			resources->ApplyResources(this->label40, L"label40");
			this->label40->Name = L"label40";
			// 
			// pictureBox16
			// 
			resources->ApplyResources(this->pictureBox16, L"pictureBox16");
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->TabStop = false;
			// 
			// item1_1
			// 
			this->item1_1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->item1_1->Controls->Add(this->panelInfoMain);
			this->item1_1->Controls->Add(this->checkBoxInfoMain);
			this->item1_1->Controls->Add(this->label42);
			this->item1_1->Controls->Add(this->pictureBox17);
			this->item1_1->Cursor = System::Windows::Forms::Cursors::No;
			resources->ApplyResources(this->item1_1, L"item1_1");
			this->item1_1->Name = L"item1_1";
			// 
			// panelInfoMain
			// 
			this->panelInfoMain->BackColor = System::Drawing::Color::Black;
			this->panelInfoMain->Controls->Add(this->labelInfoMain);
			resources->ApplyResources(this->panelInfoMain, L"panelInfoMain");
			this->panelInfoMain->Name = L"panelInfoMain";
			// 
			// labelInfoMain
			// 
			resources->ApplyResources(this->labelInfoMain, L"labelInfoMain");
			this->labelInfoMain->ForeColor = System::Drawing::Color::Gold;
			this->labelInfoMain->Name = L"labelInfoMain";
			// 
			// checkBoxInfoMain
			// 
			resources->ApplyResources(this->checkBoxInfoMain, L"checkBoxInfoMain");
			this->checkBoxInfoMain->Name = L"checkBoxInfoMain";
			this->checkBoxInfoMain->UseVisualStyleBackColor = true;
			this->checkBoxInfoMain->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxInfoMain_CheckedChanged);
			// 
			// label42
			// 
			resources->ApplyResources(this->label42, L"label42");
			this->label42->Name = L"label42";
			// 
			// pictureBox17
			// 
			resources->ApplyResources(this->pictureBox17, L"pictureBox17");
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->TabStop = false;
			// 
			// panel44
			// 
			resources->ApplyResources(this->panel44, L"panel44");
			this->panel44->Name = L"panel44";
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
			this->item3->ResumeLayout(false);
			this->item3->PerformLayout();
			this->panelMain3->ResumeLayout(false);
			this->panelMain3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			this->item2->ResumeLayout(false);
			this->item2->PerformLayout();
			this->panelMain2->ResumeLayout(false);
			this->panelMain2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			this->item14->ResumeLayout(false);
			this->item14->PerformLayout();
			this->panelDv33->ResumeLayout(false);
			this->panelDv33->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			this->item13->ResumeLayout(false);
			this->item13->PerformLayout();
			this->panelDv32->ResumeLayout(false);
			this->panelDv32->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			this->item16->ResumeLayout(false);
			this->item16->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			this->item15->ResumeLayout(false);
			this->item15->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			this->item1->ResumeLayout(false);
			this->item1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->item12->ResumeLayout(false);
			this->item12->PerformLayout();
			this->panelDv3->ResumeLayout(false);
			this->panelDv3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			this->item4->ResumeLayout(false);
			this->item4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->item5->ResumeLayout(false);
			this->item5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			this->item6->ResumeLayout(false);
			this->item6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->item11->ResumeLayout(false);
			this->item11->PerformLayout();
			this->panelLv33->ResumeLayout(false);
			this->panelLv33->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			this->item7->ResumeLayout(false);
			this->item7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->item10->ResumeLayout(false);
			this->item10->PerformLayout();
			this->panelLv3->ResumeLayout(false);
			this->panelLv3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->item9->ResumeLayout(false);
			this->item9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			this->item8->ResumeLayout(false);
			this->item8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarSize))->EndInit();
			this->panel34->ResumeLayout(false);
			this->item1_4->ResumeLayout(false);
			this->item1_4->PerformLayout();
			this->panelInfoDv1->ResumeLayout(false);
			this->panelInfoDv1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->item1_3->ResumeLayout(false);
			this->item1_3->PerformLayout();
			this->panelInfoMain3->ResumeLayout(false);
			this->panelInfoMain3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			this->item1_2->ResumeLayout(false);
			this->item1_2->PerformLayout();
			this->panelInfoMain2->ResumeLayout(false);
			this->panelInfoMain2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			this->item1_1->ResumeLayout(false);
			this->item1_1->PerformLayout();
			this->panelInfoMain->ResumeLayout(false);
			this->panelInfoMain->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
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
#pragma endregion
#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup") //hide console window

		//=================================================================================================================================================
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
		// 
		//=================================================================================================================================================

		String^ pass = "hahaha)";

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

	checkBoxMain->Checked = true;
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

			 ////////////// VIP /////////////////////

private: System::Void setVIPToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (viptext2->Text == pass)
	{
		sound();
		MessageBox::Show(this, "Thanks for subscribing)\nVIP activated, enjoy !", "Alert", MessageBoxButtons::OK, MessageBoxIcon::Information);

		// Âûñòàâëåíèå âèï ÷åêáîêñîâ â àêòèâ ïîëîæåíèå
		checkBoxMain2->Enabled = true;
		checkBoxMain3->Enabled = true;
		checkBoxLv3->Enabled = true;
		checkBoxLv33->Enabled = true;
		checkBoxDv3->Enabled = true;
		checkBoxDv32->Enabled = true;
		checkBoxDv33->Enabled = true;

		checkBoxInfoMain->Enabled = true;
		checkBoxInfoMain2->Enabled = true;
		checkBoxInfoMain3->Enabled = true;
		checkBoxInfoDv1->Enabled = true;

		// Óáèðàíèå àêòèâíîãî êóðñîðà ñ çàáëîèêðîâààííûõ ÿ÷ååê
		// 1
		item1->Cursor = Control::Cursor;
		item2->Cursor = Control::Cursor;
		item3->Cursor = Control::Cursor;
		item4->Cursor = Control::Cursor;
		item5->Cursor = Control::Cursor;
		item6->Cursor = Control::Cursor;
		item7->Cursor = Control::Cursor;
		item8->Cursor = Control::Cursor;
		item9->Cursor = Control::Cursor;
		item10->Cursor = Control::Cursor;
		item11->Cursor = Control::Cursor;
		item12->Cursor = Control::Cursor;
		item13->Cursor = Control::Cursor;
		item14->Cursor = Control::Cursor;
		item15->Cursor = Control::Cursor;
		item16->Cursor = Control::Cursor;
		// 2
		item1_1->Cursor = Control::Cursor;
		item1_2->Cursor = Control::Cursor;
		item1_3->Cursor = Control::Cursor;
		item1_4->Cursor = Control::Cursor;

		// Óáèðàíèå ÂÈÏ (÷åðíîãî ôîíà È òåêñòà æåëòîãî)
		// 1
		panelMain2->BackColor = Color::FromArgb(80, 210, 130);
		panelMain3->BackColor = Color::FromArgb(80, 210, 130);
		panelLv3->BackColor = Color::FromArgb(80, 210, 130);
		panelLv33->BackColor = Color::FromArgb(80, 210, 130);
		panelDv3->BackColor = Color::FromArgb(80, 210, 130);
		panelDv32->BackColor = Color::FromArgb(80, 210, 130);
		panelDv33->BackColor = Color::FromArgb(80, 210, 130);
		//2
		panelInfoMain->BackColor = Color::FromArgb(80, 210, 130);
		panelInfoMain2->BackColor = Color::FromArgb(80, 210, 130);
		panelInfoMain3->BackColor = Color::FromArgb(80, 210, 130);
		panelInfoDv1->BackColor = Color::FromArgb(80, 210, 130);


		labelMain2->ForeColor = Color::FromArgb(80, 210, 130);
		labelMain3->ForeColor = Color::FromArgb(80, 210, 130);
		labelLv3->ForeColor = Color::FromArgb(80, 210, 130);
		labelLv33->ForeColor = Color::FromArgb(80, 210, 130);
		labelDv3->ForeColor = Color::FromArgb(80, 210, 130);
		labelDv32->ForeColor = Color::FromArgb(80, 210, 130);
		labelDv33->ForeColor = Color::FromArgb(80, 210, 130);
		//2
		labelInfoMain->ForeColor = Color::FromArgb(80, 210, 130);
		labelInfoMain2->ForeColor = Color::FromArgb(80, 210, 130);
		labelInfoMain3->ForeColor = Color::FromArgb(80, 210, 130);
		labelInfoDv1->ForeColor = Color::FromArgb(80, 210, 130);
	}
}


			 
			///////////////// CheckBoxes ////////////////////////////

private: System::Void checkBoxMain_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	// Ñíÿòèå ñî âñåõ ãàëî÷êè êðîìå âûáðàííîãî
	//checkBoxMain->Checked = false;
	checkBoxMain2->Checked = false;
	checkBoxMain3->Checked = false;
	checkBoxDv1->Checked = false;
	checkBoxDv11->Checked = false;
	checkBoxDv2->Checked = false;
	checkBoxLv1->Checked = false;
	checkBoxLv2->Checked = false;
	checkBoxLv22->Checked = false;
	checkBoxLv3->Checked = false;
	checkBoxLv33->Checked = false;
	checkBoxDv3->Checked = false;
	checkBoxDv32->Checked = false;
	checkBoxDv33->Checked = false;
	checkBoxLv4->Checked = false;
	checkBoxLv44->Checked = false;

	checkBoxInfoMain->Checked = false;
	checkBoxInfoMain2->Checked = false;
	checkBoxInfoMain3->Checked = false;
	checkBoxInfoDv1->Checked = false;

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

private: System::Void checkBoxMain2_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	// Ñíÿòèå ñî âñåõ ãàëî÷êè êðîìå âûáðàííîãî
	checkBoxMain->Checked = false;
	//checkBoxMain2->Checked = false;
	checkBoxMain3->Checked = false;
	checkBoxDv1->Checked = false;
	checkBoxDv11->Checked = false;
	checkBoxDv2->Checked = false;
	checkBoxLv1->Checked = false;
	checkBoxLv2->Checked = false;
	checkBoxLv22->Checked = false;
	checkBoxLv3->Checked = false;
	checkBoxLv33->Checked = false;
	checkBoxDv3->Checked = false;
	checkBoxDv32->Checked = false;
	checkBoxDv33->Checked = false;
	checkBoxLv4->Checked = false;
	checkBoxLv44->Checked = false;

	checkBoxInfoMain->Checked = false;
	checkBoxInfoMain2->Checked = false;
	checkBoxInfoMain3->Checked = false;
	checkBoxInfoDv1->Checked = false;

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
private: System::Void checkBoxMain3_CheckedChanged(System::Object^ sender, System::EventArgs^ e){
	// Ñíÿòèå ñî âñåõ ãàëî÷êè êðîìå âûáðàííîãî
	checkBoxMain->Checked = false;
	checkBoxMain2->Checked = false;
	//checkBoxMain3->Checked = false;
	checkBoxDv1->Checked = false;
	checkBoxDv11->Checked = false;
	checkBoxDv2->Checked = false;
	checkBoxLv1->Checked = false;
	checkBoxLv2->Checked = false;
	checkBoxLv22->Checked = false;
	checkBoxLv3->Checked = false;
	checkBoxLv33->Checked = false;
	checkBoxDv3->Checked = false;
	checkBoxDv32->Checked = false;
	checkBoxDv33->Checked = false;
	checkBoxLv4->Checked = false;
	checkBoxLv44->Checked = false;

	checkBoxInfoMain->Checked = false;
	checkBoxInfoMain2->Checked = false;
	checkBoxInfoMain3->Checked = false;
	checkBoxInfoDv1->Checked = false;

	// Hour R G B
	hScrollBar4->Value = 220;
	hScrollBar6->Value = 0;
	hScrollBar5->Value = 0;

	// Minute 0,114,254
	hScrollBar9->Value = 0;
	hScrollBar7->Value = 144;
	hScrollBar8->Value = 254;

	// Seconds
	hScrollBar3->Value = 0;
	hScrollBar1->Value = 250;
	hScrollBar2->Value = 0;

	colorpanel2->BackColor = Color::FromArgb(hScrollBar4->Value, hScrollBar5->Value, hScrollBar6->Value);
	colorpanel3->BackColor = Color::FromArgb(hScrollBar9->Value, hScrollBar7->Value, hScrollBar8->Value);
	colorpanel4->BackColor = Color::FromArgb(hScrollBar3->Value, hScrollBar1->Value, hScrollBar2->Value);
}
private: System::Void checkBoxDv1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	// Ñíÿòèå ñî âñåõ ãàëî÷êè êðîìå âûáðàííîãî
	checkBoxMain->Checked = false;
	checkBoxMain2->Checked = false;
	checkBoxMain3->Checked = false;
	//checkBoxDv1->Checked = false;
	checkBoxDv11->Checked = false;
	checkBoxDv2->Checked = false;
	checkBoxLv1->Checked = false;
	checkBoxLv2->Checked = false;
	checkBoxLv22->Checked = false;
	checkBoxLv3->Checked = false;
	checkBoxLv33->Checked = false;
	checkBoxDv3->Checked = false;
	checkBoxDv32->Checked = false;
	checkBoxDv33->Checked = false;
	checkBoxLv4->Checked = false;
	checkBoxLv44->Checked = false;

	checkBoxInfoMain->Checked = false;
	checkBoxInfoMain2->Checked = false;
	checkBoxInfoMain3->Checked = false;
	checkBoxInfoDv1->Checked = false;

	// Hour R G B
	hScrollBar4->Value = 255;
	hScrollBar6->Value = 50;
	hScrollBar5->Value = 50;

	// Minute 0,114,254
	hScrollBar9->Value = 222;
	hScrollBar7->Value = 222;
	hScrollBar8->Value = 222;

	// Seconds
	hScrollBar3->Value = 255;
	hScrollBar1->Value = 50;
	hScrollBar2->Value = 50;

	colorpanel2->BackColor = Color::FromArgb(hScrollBar4->Value, hScrollBar5->Value, hScrollBar6->Value);
	colorpanel3->BackColor = Color::FromArgb(hScrollBar9->Value, hScrollBar7->Value, hScrollBar8->Value);
	colorpanel4->BackColor = Color::FromArgb(hScrollBar3->Value, hScrollBar1->Value, hScrollBar2->Value);
}
private: System::Void checkBoxDv11_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e) {
	// Ñíÿòèå ñî âñåõ ãàëî÷êè êðîìå âûáðàííîãî
	checkBoxMain->Checked = false;
	checkBoxMain2->Checked = false;
	checkBoxMain3->Checked = false;
	checkBoxDv1->Checked = false;
	//checkBoxDv11->Checked = false;
	checkBoxDv2->Checked = false;
	checkBoxLv1->Checked = false;
	checkBoxLv2->Checked = false;
	checkBoxLv22->Checked = false;
	checkBoxLv3->Checked = false;
	checkBoxLv33->Checked = false;
	checkBoxDv3->Checked = false;
	checkBoxDv32->Checked = false;
	checkBoxDv33->Checked = false;
	checkBoxLv4->Checked = false;
	checkBoxLv44->Checked = false;

	checkBoxInfoMain->Checked = false;
	checkBoxInfoMain2->Checked = false;
	checkBoxInfoMain3->Checked = false;
	checkBoxInfoDv1->Checked = false;

	// Hour R G B
	hScrollBar4->Value = 30;
	hScrollBar6->Value = 215;
	hScrollBar5->Value = 255;

	// Minute 0,114,254
	hScrollBar9->Value = 222;
	hScrollBar7->Value = 222;
	hScrollBar8->Value = 222;

	// Seconds
	hScrollBar3->Value = 30;
	hScrollBar1->Value = 215;
	hScrollBar2->Value = 255;

	colorpanel2->BackColor = Color::FromArgb(hScrollBar4->Value, hScrollBar5->Value, hScrollBar6->Value);
	colorpanel3->BackColor = Color::FromArgb(hScrollBar9->Value, hScrollBar7->Value, hScrollBar8->Value);
	colorpanel4->BackColor = Color::FromArgb(hScrollBar3->Value, hScrollBar1->Value, hScrollBar2->Value);
}
private: System::Void checkBoxDv2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	// Ñíÿòèå ñî âñåõ ãàëî÷êè êðîìå âûáðàííîãî
	checkBoxMain->Checked = false;
	checkBoxMain2->Checked = false;
	checkBoxMain3->Checked = false;
	checkBoxDv1->Checked = false;
	checkBoxDv11->Checked = false;
	//checkBoxDv2->Checked = false;
	checkBoxLv1->Checked = false;
	checkBoxLv2->Checked = false;
	checkBoxLv22->Checked = false;
	checkBoxLv3->Checked = false;
	checkBoxLv33->Checked = false;
	checkBoxDv3->Checked = false;
	checkBoxDv32->Checked = false;
	checkBoxDv33->Checked = false;
	checkBoxLv4->Checked = false;
	checkBoxLv44->Checked = false;

	checkBoxInfoMain->Checked = false;
	checkBoxInfoMain2->Checked = false;
	checkBoxInfoMain3->Checked = false;
	checkBoxInfoDv1->Checked = false;

	// Hour R G B
	hScrollBar4->Value = 255;
	hScrollBar6->Value = 50;
	hScrollBar5->Value = 50;

	// Minute 0,114,254
	hScrollBar9->Value = 222;
	hScrollBar7->Value = 222;
	hScrollBar8->Value = 222;

	// Seconds
	hScrollBar3->Value = 255;
	hScrollBar1->Value = 50;
	hScrollBar2->Value = 50;

	colorpanel2->BackColor = Color::FromArgb(hScrollBar4->Value, hScrollBar5->Value, hScrollBar6->Value);
	colorpanel3->BackColor = Color::FromArgb(hScrollBar9->Value, hScrollBar7->Value, hScrollBar8->Value);
	colorpanel4->BackColor = Color::FromArgb(hScrollBar3->Value, hScrollBar1->Value, hScrollBar2->Value);
}
private: System::Void checkBoxLv1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	// Ñíÿòèå ñî âñåõ ãàëî÷êè êðîìå âûáðàííîãî
	checkBoxMain->Checked = false;
	checkBoxMain2->Checked = false;
	checkBoxMain3->Checked = false;
	checkBoxDv1->Checked = false;
	checkBoxDv11->Checked = false;
	checkBoxDv2->Checked = false;
	//checkBoxLv1->Checked = false;
	checkBoxLv2->Checked = false;
	checkBoxLv22->Checked = false;
	checkBoxLv3->Checked = false;
	checkBoxLv33->Checked = false;
	checkBoxDv3->Checked = false;
	checkBoxDv32->Checked = false;
	checkBoxDv33->Checked = false;
	checkBoxLv4->Checked = false;
	checkBoxLv44->Checked = false;

	checkBoxInfoMain->Checked = false;
	checkBoxInfoMain2->Checked = false;
	checkBoxInfoMain3->Checked = false;
	checkBoxInfoDv1->Checked = false;

	// Hour R G B
	hScrollBar4->Value = 220;
	hScrollBar6->Value = 0;
	hScrollBar5->Value = 0;

	// Minute 0,114,254
	hScrollBar9->Value = 3;
	hScrollBar7->Value = 3;
	hScrollBar8->Value = 3;

	// Seconds
	hScrollBar3->Value = 255;
	hScrollBar1->Value = 0;
	hScrollBar2->Value = 0;

	colorpanel2->BackColor = Color::FromArgb(hScrollBar4->Value, hScrollBar5->Value, hScrollBar6->Value);
	colorpanel3->BackColor = Color::FromArgb(hScrollBar9->Value, hScrollBar7->Value, hScrollBar8->Value);
	colorpanel4->BackColor = Color::FromArgb(hScrollBar3->Value, hScrollBar1->Value, hScrollBar2->Value);
}
private: System::Void checkBoxLv2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	// Ñíÿòèå ñî âñåõ ãàëî÷êè êðîìå âûáðàííîãî
	checkBoxMain->Checked = false;
	checkBoxMain2->Checked = false;
	checkBoxMain3->Checked = false;
	checkBoxDv1->Checked = false;
	checkBoxDv11->Checked = false;
	checkBoxDv2->Checked = false;
	checkBoxLv1->Checked = false;
	//checkBoxLv2->Checked = false;
	checkBoxLv22->Checked = false;
	checkBoxLv3->Checked = false;
	checkBoxLv33->Checked = false;
	checkBoxDv3->Checked = false;
	checkBoxDv32->Checked = false;
	checkBoxDv33->Checked = false;
	checkBoxLv4->Checked = false;
	checkBoxLv44->Checked = false;

	checkBoxInfoMain->Checked = false;
	checkBoxInfoMain2->Checked = false;
	checkBoxInfoMain3->Checked = false;
	checkBoxInfoDv1->Checked = false;

	// Hour R G B
	hScrollBar4->Value = 70;
	hScrollBar6->Value = 70;
	hScrollBar5->Value = 70;

	// Minute 0,114,254
	hScrollBar9->Value = 3;
	hScrollBar7->Value = 3;
	hScrollBar8->Value = 3;

	// Seconds
	hScrollBar3->Value = 70;
	hScrollBar1->Value = 70;
	hScrollBar2->Value = 70;

	colorpanel2->BackColor = Color::FromArgb(hScrollBar4->Value, hScrollBar5->Value, hScrollBar6->Value);
	colorpanel3->BackColor = Color::FromArgb(hScrollBar9->Value, hScrollBar7->Value, hScrollBar8->Value);
	colorpanel4->BackColor = Color::FromArgb(hScrollBar3->Value, hScrollBar1->Value, hScrollBar2->Value);
}
private: System::Void checkBoxLv22_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	// Ñíÿòèå ñî âñåõ ãàëî÷êè êðîìå âûáðàííîãî
	checkBoxMain->Checked = false;
	checkBoxMain2->Checked = false;
	checkBoxMain3->Checked = false;
	checkBoxDv1->Checked = false;
	checkBoxDv11->Checked = false;
	checkBoxDv2->Checked = false;
	checkBoxLv1->Checked = false;
	checkBoxLv2->Checked = false;
	//checkBoxLv22->Checked = false;
	checkBoxLv3->Checked = false;
	checkBoxLv33->Checked = false;
	checkBoxDv3->Checked = false;
	checkBoxDv32->Checked = false;
	checkBoxDv33->Checked = false;
	checkBoxLv4->Checked = false;
	checkBoxLv44->Checked = false;

	checkBoxInfoMain->Checked = false;
	checkBoxInfoMain2->Checked = false;
	checkBoxInfoMain3->Checked = false;
	checkBoxInfoDv1->Checked = false;

	// Hour R G B
	hScrollBar4->Value = 70;
	hScrollBar6->Value = 70;
	hScrollBar5->Value = 70;

	// Minute 0,114,254
	hScrollBar9->Value = 3;
	hScrollBar7->Value = 3;
	hScrollBar8->Value = 3;

	// Seconds
	hScrollBar3->Value = 70;
	hScrollBar1->Value = 70;
	hScrollBar2->Value = 70;

	colorpanel2->BackColor = Color::FromArgb(hScrollBar4->Value, hScrollBar5->Value, hScrollBar6->Value);
	colorpanel3->BackColor = Color::FromArgb(hScrollBar9->Value, hScrollBar7->Value, hScrollBar8->Value);
	colorpanel4->BackColor = Color::FromArgb(hScrollBar3->Value, hScrollBar1->Value, hScrollBar2->Value);
}
private: System::Void checkBoxLv3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	// Ñíÿòèå ñî âñåõ ãàëî÷êè êðîìå âûáðàííîãî
	checkBoxMain->Checked = false;
	checkBoxMain2->Checked = false;
	checkBoxMain3->Checked = false;
	checkBoxDv1->Checked = false;
	checkBoxDv11->Checked = false;
	checkBoxDv2->Checked = false;
	checkBoxLv1->Checked = false;
	checkBoxLv2->Checked = false;
	checkBoxLv22->Checked = false;
	//checkBoxLv3->Checked = false;
	checkBoxLv33->Checked = false;
	checkBoxDv3->Checked = false;
	checkBoxDv32->Checked = false;
	checkBoxDv33->Checked = false;
	checkBoxLv4->Checked = false;
	checkBoxLv44->Checked = false;

	checkBoxInfoMain->Checked = false;
	checkBoxInfoMain2->Checked = false;
	checkBoxInfoMain3->Checked = false;
	checkBoxInfoDv1->Checked = false;

	// Hour R G B
	hScrollBar4->Value = 220;
	hScrollBar6->Value = 30;
	hScrollBar5->Value = 10;

	// Minute 0,114,254
	hScrollBar9->Value = 3;
	hScrollBar7->Value = 3;
	hScrollBar8->Value = 3;

	// Seconds
	hScrollBar3->Value = 220;
	hScrollBar1->Value = 30;
	hScrollBar2->Value = 10;

	colorpanel2->BackColor = Color::FromArgb(hScrollBar4->Value, hScrollBar5->Value, hScrollBar6->Value);
	colorpanel3->BackColor = Color::FromArgb(hScrollBar9->Value, hScrollBar7->Value, hScrollBar8->Value);
	colorpanel4->BackColor = Color::FromArgb(hScrollBar3->Value, hScrollBar1->Value, hScrollBar2->Value);
}
private: System::Void checkBoxLv33_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	// Ñíÿòèå ñî âñåõ ãàëî÷êè êðîìå âûáðàííîãî
	checkBoxMain->Checked = false;
	checkBoxMain2->Checked = false;
	checkBoxMain3->Checked = false;
	checkBoxDv1->Checked = false;
	checkBoxDv11->Checked = false;
	checkBoxDv2->Checked = false;
	checkBoxLv1->Checked = false;
	checkBoxLv2->Checked = false;
	checkBoxLv22->Checked = false;
	checkBoxLv3->Checked = false;
	//checkBoxLv33->Checked = false;
	checkBoxDv3->Checked = false;
	checkBoxDv32->Checked = false;
	checkBoxDv33->Checked = false;
	checkBoxLv4->Checked = false;
	checkBoxLv44->Checked = false;

	checkBoxInfoMain->Checked = false;
	checkBoxInfoMain2->Checked = false;
	checkBoxInfoMain3->Checked = false;
	checkBoxInfoDv1->Checked = false;

	// Hour R G B
	hScrollBar4->Value = 0;
	hScrollBar6->Value = 210;
	hScrollBar5->Value = 255;

	// Minute 0,114,254
	hScrollBar9->Value = 3;
	hScrollBar7->Value = 3;
	hScrollBar8->Value = 3;

	// Seconds
	hScrollBar3->Value = 0;
	hScrollBar1->Value = 210;
	hScrollBar2->Value = 255;

	colorpanel2->BackColor = Color::FromArgb(hScrollBar4->Value, hScrollBar5->Value, hScrollBar6->Value);
	colorpanel3->BackColor = Color::FromArgb(hScrollBar9->Value, hScrollBar7->Value, hScrollBar8->Value);
	colorpanel4->BackColor = Color::FromArgb(hScrollBar3->Value, hScrollBar1->Value, hScrollBar2->Value);
}
private: System::Void checkBoxDv3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	// Ñíÿòèå ñî âñåõ ãàëî÷êè êðîìå âûáðàííîãî
	checkBoxMain->Checked = false;
	checkBoxMain2->Checked = false;
	checkBoxMain3->Checked = false;
	checkBoxDv1->Checked = false;
	checkBoxDv11->Checked = false;
	checkBoxDv2->Checked = false;
	checkBoxLv1->Checked = false;
	checkBoxLv2->Checked = false;
	checkBoxLv22->Checked = false;
	checkBoxLv3->Checked = false;
	checkBoxLv33->Checked = false;
	//checkBoxDv3->Checked = false;
	checkBoxDv32->Checked = false;
	checkBoxDv33->Checked = false;
	checkBoxLv4->Checked = false;
	checkBoxLv44->Checked = false;

	checkBoxInfoMain->Checked = false;
	checkBoxInfoMain2->Checked = false;
	checkBoxInfoMain3->Checked = false;
	checkBoxInfoDv1->Checked = false;

	// Hour R G B
	hScrollBar4->Value = 0;
	hScrollBar6->Value = 160;
	hScrollBar5->Value = 0;

	// Minute 0,114,254
	hScrollBar9->Value = 175;
	hScrollBar7->Value = 175;
	hScrollBar8->Value = 175;

	// Seconds
	hScrollBar3->Value = 200;
	hScrollBar1->Value = 200;
	hScrollBar2->Value = 200;

	colorpanel2->BackColor = Color::FromArgb(hScrollBar4->Value, hScrollBar5->Value, hScrollBar6->Value);
	colorpanel3->BackColor = Color::FromArgb(hScrollBar9->Value, hScrollBar7->Value, hScrollBar8->Value);
	colorpanel4->BackColor = Color::FromArgb(hScrollBar3->Value, hScrollBar1->Value, hScrollBar2->Value);
}
private: System::Void checkBoxDv32_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	// Ñíÿòèå ñî âñåõ ãàëî÷êè êðîìå âûáðàííîãî
	checkBoxMain->Checked = false;
	checkBoxMain2->Checked = false;
	checkBoxMain3->Checked = false;
	checkBoxDv1->Checked = false;
	checkBoxDv11->Checked = false;
	checkBoxDv2->Checked = false;
	checkBoxLv1->Checked = false;
	checkBoxLv2->Checked = false;
	checkBoxLv22->Checked = false;
	checkBoxLv3->Checked = false;
	checkBoxLv33->Checked = false;
	checkBoxDv3->Checked = false;
	//checkBoxDv32->Checked = false;
	checkBoxDv33->Checked = false;
	checkBoxLv4->Checked = false;
	checkBoxLv44->Checked = false;

	checkBoxInfoMain->Checked = false;
	checkBoxInfoMain2->Checked = false;
	checkBoxInfoMain3->Checked = false;
	checkBoxInfoDv1->Checked = false;

	// Hour R G B
	hScrollBar4->Value = 160;
	hScrollBar6->Value = 0;
	hScrollBar5->Value = 25;

	// Minute 0,114,254
	hScrollBar9->Value = 175;
	hScrollBar7->Value = 175;
	hScrollBar8->Value = 175;

	// Seconds
	hScrollBar3->Value = 200;
	hScrollBar1->Value = 200;
	hScrollBar2->Value = 200;

	colorpanel2->BackColor = Color::FromArgb(hScrollBar4->Value, hScrollBar5->Value, hScrollBar6->Value);
	colorpanel3->BackColor = Color::FromArgb(hScrollBar9->Value, hScrollBar7->Value, hScrollBar8->Value);
	colorpanel4->BackColor = Color::FromArgb(hScrollBar3->Value, hScrollBar1->Value, hScrollBar2->Value);
}
private: System::Void checkBoxDv33_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	// Ñíÿòèå ñî âñåõ ãàëî÷êè êðîìå âûáðàííîãî
	checkBoxMain->Checked = false;
	checkBoxMain2->Checked = false;
	checkBoxMain3->Checked = false;
	checkBoxDv1->Checked = false;
	checkBoxDv11->Checked = false;
	checkBoxDv2->Checked = false;
	checkBoxLv1->Checked = false;
	checkBoxLv2->Checked = false;
	checkBoxLv22->Checked = false;
	checkBoxLv3->Checked = false;
	checkBoxLv33->Checked = false;
	checkBoxDv3->Checked = false;
	checkBoxDv32->Checked = false;
	//checkBoxDv33->Checked = false;
	checkBoxLv4->Checked = false;
	checkBoxLv44->Checked = false;

	checkBoxInfoMain->Checked = false;
	checkBoxInfoMain2->Checked = false;
	checkBoxInfoMain3->Checked = false;
	checkBoxInfoDv1->Checked = false;

	// Hour R G B
	hScrollBar4->Value = 0;
	hScrollBar6->Value = 155;
	hScrollBar5->Value = 160;

	// Minute 0,114,254
	hScrollBar9->Value = 175;
	hScrollBar7->Value = 175;
	hScrollBar8->Value = 175;

	// Seconds
	hScrollBar3->Value = 200;
	hScrollBar1->Value = 200;
	hScrollBar2->Value = 200;

	colorpanel2->BackColor = Color::FromArgb(hScrollBar4->Value, hScrollBar5->Value, hScrollBar6->Value);
	colorpanel3->BackColor = Color::FromArgb(hScrollBar9->Value, hScrollBar7->Value, hScrollBar8->Value);
	colorpanel4->BackColor = Color::FromArgb(hScrollBar3->Value, hScrollBar1->Value, hScrollBar2->Value);
}
private: System::Void checkBoxLv4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	// Ñíÿòèå ñî âñåõ ãàëî÷êè êðîìå âûáðàííîãî
	checkBoxMain->Checked = false;
	checkBoxMain2->Checked = false;
	checkBoxMain3->Checked = false;
	checkBoxDv1->Checked = false;
	checkBoxDv11->Checked = false;
	checkBoxDv2->Checked = false;
	checkBoxLv1->Checked = false;
	checkBoxLv2->Checked = false;
	checkBoxLv22->Checked = false;
	checkBoxLv3->Checked = false;
	checkBoxLv33->Checked = false;
	checkBoxDv3->Checked = false;
	checkBoxDv32->Checked = false;
	checkBoxDv33->Checked = false;
	//checkBoxLv4->Checked = false;
	checkBoxLv44->Checked = false;

	checkBoxInfoMain->Checked = false;
	checkBoxInfoMain2->Checked = false;
	checkBoxInfoMain3->Checked = false;
	checkBoxInfoDv1->Checked = false;

	// Hour R G B
	hScrollBar4->Value = 31;
	hScrollBar6->Value = 61;
	hScrollBar5->Value = 91;

	// Minute 0,114,254
	hScrollBar9->Value = 31;
	hScrollBar7->Value = 61;
	hScrollBar8->Value = 91;

	// Seconds
	hScrollBar3->Value = 155;
	hScrollBar1->Value = 155;
	hScrollBar2->Value = 155;

	colorpanel2->BackColor = Color::FromArgb(hScrollBar4->Value, hScrollBar5->Value, hScrollBar6->Value);
	colorpanel3->BackColor = Color::FromArgb(hScrollBar9->Value, hScrollBar7->Value, hScrollBar8->Value);
	colorpanel4->BackColor = Color::FromArgb(hScrollBar3->Value, hScrollBar1->Value, hScrollBar2->Value);
}
private: System::Void checkBoxLv44_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	// Ñíÿòèå ñî âñåõ ãàëî÷êè êðîìå âûáðàííîãî
	checkBoxMain->Checked = false;
	checkBoxMain2->Checked = false;
	checkBoxMain3->Checked = false;
	checkBoxDv1->Checked = false;
	checkBoxDv11->Checked = false;
	checkBoxDv2->Checked = false;
	checkBoxLv1->Checked = false;
	checkBoxLv2->Checked = false;
	checkBoxLv22->Checked = false;
	checkBoxLv3->Checked = false;
	checkBoxLv33->Checked = false;
	checkBoxDv3->Checked = false;
	checkBoxDv32->Checked = false;
	checkBoxDv33->Checked = false;
	checkBoxLv4->Checked = false;
	//checkBoxLv44->Checked = false;

	checkBoxInfoMain->Checked = false;
	checkBoxInfoMain2->Checked = false;
	checkBoxInfoMain3->Checked = false;
	checkBoxInfoDv1->Checked = false;

	// Hour R G B
	hScrollBar4->Value = 90;
	hScrollBar6->Value = 30;
	hScrollBar5->Value = 80;

	// Minute 0,114,254
	hScrollBar9->Value = 90;
	hScrollBar7->Value = 30;
	hScrollBar8->Value = 80;

	// Seconds
	hScrollBar3->Value = 155;
	hScrollBar1->Value = 155;
	hScrollBar2->Value = 155;

	colorpanel2->BackColor = Color::FromArgb(hScrollBar4->Value, hScrollBar5->Value, hScrollBar6->Value);
	colorpanel3->BackColor = Color::FromArgb(hScrollBar9->Value, hScrollBar7->Value, hScrollBar8->Value);
	colorpanel4->BackColor = Color::FromArgb(hScrollBar3->Value, hScrollBar1->Value, hScrollBar2->Value);
}
private: System::Void checkBoxInfoMain_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	// Ñíÿòèå ñî âñåõ ãàëî÷êè êðîìå âûáðàííîãî
	checkBoxMain->Checked = false;
	checkBoxMain2->Checked = false;
	checkBoxMain3->Checked = false;
	checkBoxDv1->Checked = false;
	checkBoxDv11->Checked = false;
	checkBoxDv2->Checked = false;
	checkBoxLv1->Checked = false;
	checkBoxLv2->Checked = false;
	checkBoxLv22->Checked = false;
	checkBoxLv3->Checked = false;
	checkBoxLv33->Checked = false;
	checkBoxDv3->Checked = false;
	checkBoxDv32->Checked = false;
	checkBoxDv33->Checked = false;
	checkBoxLv4->Checked = false;
	checkBoxLv44->Checked = false;

	//checkBoxInfoMain->Checked = false;
	checkBoxInfoMain2->Checked = false;
	checkBoxInfoMain3->Checked = false;
	checkBoxInfoDv1->Checked = false;

	// Hour R G B
	hScrollBar4->Value = 90;
	hScrollBar6->Value = 30;
	hScrollBar5->Value = 80;

	// Minute 0,114,254
	hScrollBar9->Value = 90;
	hScrollBar7->Value = 30;
	hScrollBar8->Value = 80;

	// Seconds
	hScrollBar3->Value = 155;
	hScrollBar1->Value = 155;
	hScrollBar2->Value = 155;

	colorpanel2->BackColor = Color::FromArgb(hScrollBar4->Value, hScrollBar5->Value, hScrollBar6->Value);
	colorpanel3->BackColor = Color::FromArgb(hScrollBar9->Value, hScrollBar7->Value, hScrollBar8->Value);
	colorpanel4->BackColor = Color::FromArgb(hScrollBar3->Value, hScrollBar1->Value, hScrollBar2->Value);
}
private: System::Void checkBoxInfoMain2_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	// Ñíÿòèå ñî âñåõ ãàëî÷êè êðîìå âûáðàííîãî
	checkBoxMain->Checked = false;
	checkBoxMain2->Checked = false;
	checkBoxMain3->Checked = false;
	checkBoxDv1->Checked = false;
	checkBoxDv11->Checked = false;
	checkBoxDv2->Checked = false;
	checkBoxLv1->Checked = false;
	checkBoxLv2->Checked = false;
	checkBoxLv22->Checked = false;
	checkBoxLv3->Checked = false;
	checkBoxLv33->Checked = false;
	checkBoxDv3->Checked = false;
	checkBoxDv32->Checked = false;
	checkBoxDv33->Checked = false;
	checkBoxLv4->Checked = false;
	checkBoxLv44->Checked = false;

	checkBoxInfoMain->Checked = false;
	//checkBoxInfoMain2->Checked = false;
	checkBoxInfoMain3->Checked = false;
	checkBoxInfoDv1->Checked = false;

	// Hour R G B
	hScrollBar4->Value = 90;
	hScrollBar6->Value = 30;
	hScrollBar5->Value = 80;

	// Minute 0,114,254
	hScrollBar9->Value = 90;
	hScrollBar7->Value = 30;
	hScrollBar8->Value = 80;

	// Seconds
	hScrollBar3->Value = 155;
	hScrollBar1->Value = 155;
	hScrollBar2->Value = 155;

	colorpanel2->BackColor = Color::FromArgb(hScrollBar4->Value, hScrollBar5->Value, hScrollBar6->Value);
	colorpanel3->BackColor = Color::FromArgb(hScrollBar9->Value, hScrollBar7->Value, hScrollBar8->Value);
	colorpanel4->BackColor = Color::FromArgb(hScrollBar3->Value, hScrollBar1->Value, hScrollBar2->Value);
}
private: System::Void checkBoxInfoMain3_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	// Ñíÿòèå ñî âñåõ ãàëî÷êè êðîìå âûáðàííîãî
	checkBoxMain->Checked = false;
	checkBoxMain2->Checked = false;
	checkBoxMain3->Checked = false;
	checkBoxDv1->Checked = false;
	checkBoxDv11->Checked = false;
	checkBoxDv2->Checked = false;
	checkBoxLv1->Checked = false;
	checkBoxLv2->Checked = false;
	checkBoxLv22->Checked = false;
	checkBoxLv3->Checked = false;
	checkBoxLv33->Checked = false;
	checkBoxDv3->Checked = false;
	checkBoxDv32->Checked = false;
	checkBoxDv33->Checked = false;
	checkBoxLv4->Checked = false;
	checkBoxLv44->Checked = false;

	checkBoxInfoMain->Checked = false;
	checkBoxInfoMain2->Checked = false;
	//checkBoxInfoMain3->Checked = false;
	checkBoxInfoDv1->Checked = false;

	// Hour R G B
	hScrollBar4->Value = 90;
	hScrollBar6->Value = 30;
	hScrollBar5->Value = 80;

	// Minute 0,114,254
	hScrollBar9->Value = 90;
	hScrollBar7->Value = 30;
	hScrollBar8->Value = 80;

	// Seconds
	hScrollBar3->Value = 155;
	hScrollBar1->Value = 155;
	hScrollBar2->Value = 155;

	colorpanel2->BackColor = Color::FromArgb(hScrollBar4->Value, hScrollBar5->Value, hScrollBar6->Value);
	colorpanel3->BackColor = Color::FromArgb(hScrollBar9->Value, hScrollBar7->Value, hScrollBar8->Value);
	colorpanel4->BackColor = Color::FromArgb(hScrollBar3->Value, hScrollBar1->Value, hScrollBar2->Value);
}
private: System::Void checkBoxInfoDv1_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	// Ñíÿòèå ñî âñåõ ãàëî÷êè êðîìå âûáðàííîãî
	checkBoxMain->Checked = false;
	checkBoxMain2->Checked = false;
	checkBoxMain3->Checked = false;
	checkBoxDv1->Checked = false;
	checkBoxDv11->Checked = false;
	checkBoxDv2->Checked = false;
	checkBoxLv1->Checked = false;
	checkBoxLv2->Checked = false;
	checkBoxLv22->Checked = false;
	checkBoxLv3->Checked = false;
	checkBoxLv33->Checked = false;
	checkBoxDv3->Checked = false;
	checkBoxDv32->Checked = false;
	checkBoxDv33->Checked = false;
	checkBoxLv4->Checked = false;
	checkBoxLv44->Checked = false;

	checkBoxInfoMain->Checked = false;
	checkBoxInfoMain2->Checked = false;
	checkBoxInfoMain3->Checked = false;
	//checkBoxInfoDv1->Checked = false;

	// Hour R G B
	hScrollBar4->Value = 90;
	hScrollBar6->Value = 30;
	hScrollBar5->Value = 80;

	// Minute 0,114,254
	hScrollBar9->Value = 90;
	hScrollBar7->Value = 30;
	hScrollBar8->Value = 80;

	// Seconds
	hScrollBar3->Value = 155;
	hScrollBar1->Value = 155;
	hScrollBar2->Value = 155;

	colorpanel2->BackColor = Color::FromArgb(hScrollBar4->Value, hScrollBar5->Value, hScrollBar6->Value);
	colorpanel3->BackColor = Color::FromArgb(hScrollBar9->Value, hScrollBar7->Value, hScrollBar8->Value);
	colorpanel4->BackColor = Color::FromArgb(hScrollBar3->Value, hScrollBar1->Value, hScrollBar2->Value);
}

			 ////////////// Start ////////////////

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

	bool IsItPro = 0;

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

	/*
	checkBoxMain
	checkBoxMain2
	checkBoxMain3

	checkBoxDv1
	checkBoxDv11
	checkBoxDv2

	checkBoxLv1
	checkBoxLv2
	checkBoxLv22
	checkBoxLv3
	checkBoxLv33

	checkBoxDv3
	checkBoxDv32
	checkBoxDv33

	checkBoxLv4
	checkBoxLv44
	*/

	if (checkBoxMain->Checked == true)
	{
		fout << "ImageName = Photoes/Theme/Main2.png\n";
	}
	else if (checkBoxMain2->Checked == true)
	{
		fout << "ImageName = Photoes/Theme/Main3.png\n";
	}
	else if (checkBoxMain3->Checked == true)
	{
		fout << "ImageName = Photoes/Theme/Main4.png\n";
	}

	else if (checkBoxDv1->Checked == true)
	{
		fout << "ImageName = Photoes/Theme/v-b1.png\n";
	}
	else if (checkBoxDv11->Checked == true)
	{
		fout << "ImageName = Photoes/Theme/v-b12.png\n";
	}
	else if (checkBoxDv2->Checked == true)
	{
		fout << "ImageName = Photoes/Theme/v-b2.png\n";
	}
	/*
	checkBoxLv1
		checkBoxLv2
		checkBoxLv22
		checkBoxLv3
		checkBoxLv33

		checkBoxDv3
		checkBoxDv32
		checkBoxDv33

		checkBoxLv4
		checkBoxLv44*/

	else if (checkBoxLv1->Checked == true)
	{
		fout << "ImageName = Photoes/Theme/v-w1.png\n";
	}
	else if (checkBoxLv2->Checked == true)
	{
		fout << "ImageName = Photoes/Theme/v-w2.png\n";
	}
	else if (checkBoxLv22->Checked == true)
	{
		fout << "ImageName = Photoes/Theme/v-w22.png\n";
	}
	else if (checkBoxLv3->Checked == true)
	{
		fout << "ImageName = Photoes/Theme/v-w3.png\n";
	}
	else if (checkBoxLv33->Checked == true)
	{
		fout << "ImageName = Photoes/Theme/v-w32.png\n";
	}

	else if (checkBoxDv3->Checked == true)
	{
		fout << "ImageName = Photoes/Theme/v-b3.png\n";
	}
	else if (checkBoxDv32->Checked == true)
	{
		fout << "ImageName = Photoes/Theme/v-b4.png\n";
	}
	else if (checkBoxDv33->Checked == true)
	{
		fout << "ImageName = Photoes/Theme/v-b5.png\n";
	}

	else if (checkBoxLv4->Checked == true)
	{
		fout << "ImageName = Photoes/Theme/v-w4.png\n";
	}
	else if (checkBoxLv44->Checked == true)
	{
		fout << "ImageName = Photoes/Theme/v-w5.png\n";
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
		this->Close();

	}
}
//////////////////////////// END

};
}
