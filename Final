//Programa final
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <math.h>
#include <cmath>
#include <C:\Users\leone\Documents\Metodos numericos\P020.h>
#include <C:\Users\leone\Documents\Metodos numericos\Metodo del trapecio.h>
using namespace std;

int main(){
	char opc;
	while(1){
		P020();
		textcolor(WHITE);
		textbackground(BLUE);
		gotoxy(35,9); cprintf("Menu");
		gotoxy(10,10); cprintf("1,t,T: Metodo del trapecio");
		gotoxy(10,11); cprintf("2,c,C: ");
		gotoxy(10,12); cprintf("3,f,F: Fin");
		gotoxy(10,22); cprintf("Inserte opcion que desea realizar: ");
		cin>> opc;
		switch(opc){
			case '1':
			case 'T':
			case 't':
				P020();
				trapeciosim();
				getch();
				break;
			case '2':
			case 'C':
			case 'c':
				P020();
				getch();
				break;
			case '3':
			case 'F':
			case 'f': 
				goto fin;
				break;
			default:
				P020();
				textcolor(RED);
				textbackground(BLUE);
					for(int i=0; i<20; i++){
					gotoxy(30,10);	cprintf("ERROR");
					Sleep(100);
					gotoxy(30,10);	cprintf("/////");
					Sleep(100);
				}
				break;
		}
	}
	fin:
	return 0;
}
