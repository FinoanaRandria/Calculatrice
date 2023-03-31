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
void __fastcall TForm1::btnCClick(TObject *Sender)
{
                  EditDisplay->Text = "0";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnCEClick(TObject *Sender)
{

  EditDisplay->Text = "";

  String f,s;

  f= (fristnum);
  s= (secondnum);


  f="";
  s="";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnPMClick(TObject *Sender)
{
   Double q = (EditDisplay->Text.ToDouble());
   EditDisplay ->Text = (-1 * q);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnBSClick(TObject *Sender)
{

int q = EditDisplay->Text.Length();

   if(q==1){
	   EditDisplay->Text = "0";

   }else{

		String d = EditDisplay->Text.Delete(q,1);
        EditDisplay->Text = d;

   }



}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnDotClick(TObject *Sender)
{

if(! EditDisplay->Text.Pos(".")){
					 EditDisplay->Text = EditDisplay->Text + ".";
}
}
//---------------------------------------------------------------------------
