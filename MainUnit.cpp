//---------------------------------------------------------------------------

#include <vcl.h>
#include <string>
#pragma hdrstop

#include "MainUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMainForm *MainForm;
//---------------------------------------------------------------------------
__fastcall TMainForm::TMainForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
void __fastcall TMainForm::Button1Click(TObject *Sender)
{
AnsiString rating;
//���������, ������� �� ���� �� ���� �����, ����������� � 18+
if ((CheckBox1->Checked)||(CheckBox2->Checked)
	||(CheckBox3->Checked)||(CheckBox4->Checked)
	||(CheckBox5->Checked)||(CheckBox6->Checked)
	||(CheckBox7->Checked)||(CheckBox8->Checked)) {
	rating="18+";
}

//���������, ��� ������, ����������� � 18+, �� �������
if (!((CheckBox1->Checked)||(CheckBox2->Checked)
	||(CheckBox3->Checked)||(CheckBox4->Checked)
	||(CheckBox5->Checked)||(CheckBox6->Checked)
	||(CheckBox7->Checked)||(CheckBox8->Checked))
	&((CheckBox9->Checked)||(CheckBox10->Checked)
	||(CheckBox11->Checked)||(CheckBox12->Checked)
	||(CheckBox13->Checked)||(CheckBox14->Checked)
	||(CheckBox15->Checked)||(CheckBox16->Checked)||(CheckBox17->Checked))) {
	rating="16+";
}

//���������, ��� ������, ����������� � 18+ � 16+, �� �������
if (!((CheckBox1->Checked)||(CheckBox2->Checked)
	||(CheckBox3->Checked)||(CheckBox4->Checked)
	||(CheckBox5->Checked)||(CheckBox6->Checked)
	||(CheckBox7->Checked)||(CheckBox8->Checked)
	||(CheckBox9->Checked)||(CheckBox10->Checked)
	||(CheckBox11->Checked)||(CheckBox12->Checked)
	||(CheckBox13->Checked)||(CheckBox14->Checked)
	||(CheckBox15->Checked)||(CheckBox16->Checked)
	||(CheckBox17->Checked))
	&((CheckBox18->Checked)||(CheckBox19->Checked)
	||(CheckBox20->Checked)||(CheckBox21->Checked))) {
	rating="12+";
}
//���������, ��� ������, ����������� � 18+, 16+ � 12+, �� �������
if (!((CheckBox1->Checked)||(CheckBox2->Checked)
	||(CheckBox3->Checked)||(CheckBox4->Checked)
	||(CheckBox5->Checked)||(CheckBox6->Checked)
	||(CheckBox7->Checked)||(CheckBox8->Checked)
	||(CheckBox9->Checked)||(CheckBox10->Checked)
	||(CheckBox11->Checked)||(CheckBox12->Checked)
	||(CheckBox13->Checked)||(CheckBox14->Checked)
	||(CheckBox15->Checked)||(CheckBox16->Checked)
	||(CheckBox17->Checked)||(CheckBox18->Checked)
	||(CheckBox19->Checked)||(CheckBox20->Checked)||(CheckBox21->Checked))
	&((CheckBox22->Checked)||(CheckBox23->Checked)||(CheckBox24->Checked))) {
	rating="6+";
}

//���������, ��� �� ���� ����� �� �������
if (!((CheckBox1->Checked)||(CheckBox2->Checked)
	||(CheckBox3->Checked)||(CheckBox4->Checked)
	||(CheckBox5->Checked)||(CheckBox6->Checked)
	||(CheckBox7->Checked)||(CheckBox8->Checked)
	||(CheckBox9->Checked)||(CheckBox10->Checked)
	||(CheckBox11->Checked)||(CheckBox12->Checked)
	||(CheckBox13->Checked)||(CheckBox14->Checked)
	||(CheckBox15->Checked)||(CheckBox16->Checked)
	||(CheckBox17->Checked)||(CheckBox18->Checked)
	||(CheckBox19->Checked)||(CheckBox20->Checked)
	||(CheckBox21->Checked)||(CheckBox22->Checked)
	||(CheckBox23->Checked)||(CheckBox24->Checked))) {
	rating="0+";
}
RatingText->Caption=rating;
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
