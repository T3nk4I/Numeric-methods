#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

int main(){
	float a,b,h,xa,xb,xc,xd,fx,bM,bm,A;
	int e1,e2;
	gotoxy(10,17);	cprintf("Inserte la operacion");
	gotoxy(10,18);	scanf("%f x^%d %f x^%d %f / %f",&xa,&e1,&xb,&e2,&xc,&xd);	
	gotoxy(10,19); 	cprintf("Inserte el limite 1");
	gotoxy(10,20); 	cin>> a;
	gotoxy(10,21);	cprintf("Inserte el limite 2");
	gotoxy(10,22);	cin>> b;
	h=b-a;
	bM=(pow(b,e1)*xa+pow(b,e2)*xb+xc)/xd;
	bm=(pow(a,e1)*xa+pow(a,e2)*xb+xc)/xd;
	A=(bM+bm)/2*h;
	gotoxy(12,23);	cprintf("A= %f",A);
}
