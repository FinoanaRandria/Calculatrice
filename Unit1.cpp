//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
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
