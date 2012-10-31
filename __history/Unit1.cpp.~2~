//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "MyString.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	MyString str("kaaak");
	str = str - "a";
	//str = str + "bb";
	Canvas->Font->Name = "Arial";
	Canvas->Font->Color= clBlack;
	Canvas->TextOutW(10,10,str.GetStr());
}
//---------------------------------------------------------------------------
