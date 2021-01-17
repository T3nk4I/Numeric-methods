#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdio.h>
using namespace std;

int main(){
	int m,n,k=4,l=12,A=0,B=1,C,i,j;
	float a[10][10],nu[10][10],p,c;
	gotoxy(4,9);	cprintf("Teclee el numero de ecuaciones");
	gotoxy(4,10);	cin>> m;
	n=m+1;
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			gotoxy(k,l);	cin>> a[i][j];
			k=k+8;
		}
		k=4;
		l++;
	}
	do{
		p=a[A][A];
		for(i=A; i<m; i++){
			for(j=A; j<n; j++){
				a[i][j]=a[i][j]/p;
			}
		}//Divide Row
		for(i=A+1; i<m; i++){
			c=a[A+B][A];
			for(j=0; j<n; j++){
				a[i][j]=a[i][j]-c*a[A][j];
			}
			B++;
		}//convert to 0
		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				gotoxy(k,l);	cout<< a[i][j];
				k=k+8;
			}
			k=4;
			l++;
		}
		B=1;
		A++;
		l++;
	}while(A<m);
	getch();
	return 0;
}
