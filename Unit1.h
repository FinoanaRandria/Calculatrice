//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// Composants gérés par l'EDI
	TEdit *EditDisplay;
	TButton *btnBS;
	TButton *btnCE;
	TButton *btnC;
	TButton *btnPM;
	TButton *btn7;
	TButton *btn8;
	TButton *btn9;
	TButton *btnAdd;
	TButton *btn4;
	TButton *btn5;
	TButton *btn6;
	TButton *btnSub;
	TButton *btn1;
	TButton *btn2;
	TButton *btn3;
	TButton *btnMult;
	TButton *btn0;
	TButton *btnDot;
	TButton *btnEquals;
	TButton *btnDiv;
	void __fastcall NumberClick(TObject *Sender);
	void __fastcall OperatorClick(TObject *Sender);
	void __fastcall btnEqualsClick(TObject *Sender);
private:	// Déclarations utilisateur
public:		// Déclarations utilisateur
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
