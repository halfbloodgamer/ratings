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
//проверяем, активен ли хотя бы один пункт, относящийся к 18+
if ((CheckBox1->Checked)||(CheckBox2->Checked)
	||(CheckBox3->Checked)||(CheckBox4->Checked)
	||(CheckBox5->Checked)||(CheckBox6->Checked)
	||(CheckBox7->Checked)||(CheckBox8->Checked)) {
	rating="18+";
}

//проверяем, что пункты, относящиеся к 18+, не активны
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

//проверяем, что пункты, относящиеся к 18+ и 16+, не активны
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
//проверяем, что пункты, относящиеся к 18+, 16+ и 12+, не активны
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

//проверяем, что ни один пункт не активен
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
