#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdio.h>
using namespace std;

int main(){
	int m,n,k=4,l=12,A=0,B=1;
	float a[10][10],nu[10][10],p,c;
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
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			gotoxy(k,l);	cout<< a[i][j];
			k=k+8;
		}
		k=4;
		l++;
	}
	system("cls");
	k=4;
	l=12;
	do{
		p=a[A][A];
		for(int i=A; i<=A; i++){
			for(int j=A; j<n; j++){
				a[i][j]=a[i][j]/p;
			}
		}
		for(int i=B; i<m; i++){
			c=a[A+B][A];
			for(int j=0; j<n; j++){
				a[i][j]=a[i][j]-c*a[A][j];
			}
			k=4;
			l++;
			B++;
		}
		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				gotoxy(k,l);	cout<< a[i][j];
				k=k+8;
			}
			k=4;
			l++;
		}
		A++;
		l++;
	}while(A<m);
	return 0;
}
