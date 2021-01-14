#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
using namespace std;

int main(){
	int m,n,k=4,l=12,A=0,b;
	float a[10][10],nu[10][10],p;
	gotoxy(4,9);	cprintf("Teclee el numero de ecuaciones");
	gotoxy(4,10);	cin>> m;
	n=m+1;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			gotoxy(k,l);	cin>> a[i][j];
			k=k+5;
		}
		k=4;
		l++;
	}
	l=l+2;
	gotoxy(4,l);	cprintf("Impresion :");
	l++;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(j==n-1){
				gotoxy(k,l);	cout<< "="<< a[i][j];
			}
			else{
				if(j==0){
					gotoxy(k,l);	cout<< a[i][j]<< "x"<< j+1;
					k=k+5;
				}
				else{
					if(a[i][j]>=0){
						gotoxy(k,l);	cout<< "+"<< a[i][j]<< "x"<< j+1;
						k=k+5;
					}
					else{
						gotoxy(k,l);	cout<< a[i][j]<< "x"<< j+1;
						k=k+5;
					}
				}
			}
		}
		k=4;
		l++;
	}
	Sleep(1000);
	system("cls");
	do{
		p=a[A][A];
		for(int j=0; j<n; j++){
			gotoxy(k,l);	cout<< a[A][j]/p;
			Sleep(500);
			k=k+5;
		}
		l++;
		k=4;
		for(int i=A; i<m-1; i++){
			for(int j=0; j<n; j++){
				gotoxy(k,l);	cout<< a[i][j];
				k=k+5;
			}
			k=4;
			l++;
		}
		A++;
	}while(A<1);
}
