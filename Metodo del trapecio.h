using namespace std;

int trapeciosim(){
	float a,b,h,xa,xb,xc,xd,fx,bM,bm,A,As,Ea;
	int e1,e2;
	textbackground(BLUE);
	gotoxy(15,10);	cprintf("Inserte la operacion");
	gotoxy(15,11);	scanf("%f x^%d %f x^%d %f / %f",&xa,&e1,&xb,&e2,&xc,&xd);	
	gotoxy(15,12); 	cprintf("Inserte el limite 1");
	gotoxy(15,13); 	cin>> a;
	gotoxy(15,14);	cprintf("Inserte el limite 2");
	gotoxy(15,15);	cin>> b;
	gotoxy(15,16);	cprintf("Inserte el valor de As");
	gotoxy(15,17);	cin>> As;
	h=b-a;
	bM=(pow(b,e1)*xa+pow(b,e2)*xb+xc)/xd;
	bm=(pow(a,e1)*xa+pow(a,e2)*xb+xc)/xd;
	A=(bM+bm)/2*h;
	Ea=abs(As-A);
	gotoxy(20,20);	cprintf("A= %f",A);
	gotoxy(20,21);	cprintf("Ea= %f",Ea);
}
