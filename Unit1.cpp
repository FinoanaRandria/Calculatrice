//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;


Double fristnum, secondnum, answer;
String op;




//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::NumberClick(TObject *Sender)
{

		 TButton* b = ((TButton*)Sender);

		 if(EditDisplay->Text == "0"){

			EditDisplay->Text = b->Caption;


		 }else{
             EditDisplay->Text = EditDisplay->Text + b ->Caption;
         }

}
//---------------------------------------------------------------------------
void __fastcall TForm1::OperatorClick(TObject *Sender)
{
			  TButton* b = ((TButton*)Sender);

			  fristnum = (EditDisplay->Text.ToDouble());
			  op = b->Caption;
			  EditDisplay -> Text ="";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnEqualsClick(TObject *Sender)
{

		secondnum = (EditDisplay->Text.ToDouble());
		if(op == "+"){

		answer = fristnum + secondnum;
		 EditDisplay->Text = answer;

		}else if(op == "-"){

		answer = fristnum - secondnum;
		 EditDisplay->Text = answer;

		} else if(op == "x"){

		answer = fristnum * secondnum;
		 EditDisplay->Text = answer;

		} else if(op == "/"){

		answer = fristnum / secondnum;
		 EditDisplay->Text = answer;

		}





}
//---------------------------------------------------------------------------
