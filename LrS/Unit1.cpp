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
void __fastcall TForm1::Button1Click(TObject *Sender)
{
		//Form1->Repaint();

	Canvas->Pen->Color = clSkyBlue;
	Form1->Canvas->Brush->Color = clSkyBlue;
	Form1->Canvas->Rectangle(0, 0, 500, 600);

	Canvas->Pen->Color = clWhite;
	Form1->Canvas->Brush->Color = clWhite;
	Form1->Canvas->Rectangle(0, 400, 500, 600);

	Canvas->Pen->Color = clBlack;
	Form1->Canvas->Brush->Color = clMaroon;
	Form1->Canvas->Rectangle(230, 450, 270, 520);

	TPoint p[3];
	p[0] = Point(250, 300);
	p[1] = Point(70, 450);
	p[2] = Point(430, 450);
	Form1->Canvas->Brush->Color = clGreen;
	Form1->Canvas->Polygon(p, 2);

	p[0] = Point(250, 240);
	p[1] = Point(100, 350);
	p[2] = Point(400, 350);
	Form1->Canvas->Brush->Color = clGreen;
	Form1->Canvas->Polygon(p, 2);

	p[0] = Point(250, 170);
	p[1] = Point(140, 270);
	p[2] = Point(360, 270);
	Form1->Canvas->Brush->Color = clGreen;
	Form1->Canvas->Polygon(p, 2);

	Form1->Canvas->Brush->Color = clYellow;
	Form1->Canvas->Ellipse(170, 300, 200, 330);

	Form1->Canvas->Brush->Color = clFuchsia;
	Form1->Canvas->Ellipse(340, 400, 370, 430);

	Form1->Canvas->Brush->Color = clBlue;
	Form1->Canvas->Ellipse(150, 400, 180, 430);

	Form1->Canvas->Brush->Color = clPurple;
	Form1->Canvas->Ellipse(250, 390, 280, 420);

	Form1->Canvas->Brush->Color = clBlue;
	Form1->Canvas->Ellipse(230, 300, 260, 330);

	Form1->Canvas->Brush->Color = clPurple;
	Form1->Canvas->Ellipse(180, 230, 210, 260);

	Form1->Canvas->Brush->Color = clRed;
	Form1->Canvas->Ellipse(320, 310, 350, 340);

	Form1->Canvas->Brush->Color = clYellow;
	Form1->Canvas->Ellipse(290, 230, 320, 260);

	Form1->Canvas->Brush->Color = clFuchsia;
	Form1->Canvas->Ellipse(250, 200, 280, 230);

	for (int i = 0; i < 100; i++) {
		int pointX, pointY;
		pointX = rand() % 600;
		pointY = rand() % 500;
		Canvas->Pen->Color = clWhite;
		Form1->Canvas->Brush->Color = clWhite;
		Form1->Canvas->Ellipse(pointX, pointY, pointX + 7, pointY + 7);
	}
	Canvas->Brush->Style=bsClear;
	Canvas->Font->Color=clBlack;
	Canvas->Font->Size=40;
	Canvas->TextOut(20,50,"я мнбшл цнднл!");
}
//---------------------------------------------------------------------------
