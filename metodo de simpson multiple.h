using namespace std;

int multsimp(){
	textbackground(BLUE);
	int n,N,d,e1,e2,e3,k;
	float x[50],fx[50],sum=0,sum2=0,h,a,b,fa,fb,An,xa,xb,xc,xd,xe,Aa,Ea;
	gotoxy(15,9);	cprintf("b=");
	gotoxy(15,11);	cprintf("a=");
	gotoxy(10,10);	cprintf("Aa=%cf(x)dx=",8747);
	gotoxy(22,10);	scanf("%fx^%d%fx^%d%f/%f",&xb,&e2,&xc,&e3,&xd,&xe);
	gotoxy(18,11);	cin>> a;
	gotoxy(18,9);	cin>> b;
	gotoxy(50,10);	cprintf("N=");
	gotoxy(53,10);	cin>> n;
	gotoxy(10,21);	cprintf("Aa=");
	gotoxy(14,21);	cin>> Aa;
	N=(n-2)*2;
	h=(b-a)/N;
	for(int i=0; i<N; i++){
		x[i]=a+(i+1)*h;
		fx[i]=(pow(x[i],e2)*xb+pow(x[i],e3)*xc+xd)/xe;
	}
	for(int i=0; i<N; i=i+2){
		sum=sum+fx[i];
	}
	int i=1;
	while(1){
		sum2=sum2+fx[i];
		i=i+2;
		if(i>=N){
			break;
		}
	}
	fa=(pow(a,e2)*xb+pow(a,e3)*xc+xd)/xe;
	fb=(pow(b,e2)*xb+pow(b,e3)*xc+xd)/xe;
	An=h/3*(fa+4*sum+2*sum2+fb);
	Ea=abs(An-Aa);
	k=12;
	for(i=0; i<N; i=i+2){
		gotoxy(40,k);	cprintf("f(x%d)=",i+1);
		gotoxy(45,k);	cprintf("%.4f",fx[i]);
		k++;
	}
	k=12;
	for(i=1; i<N; i=i+2){
		gotoxy(60,k);	cprintf("f(x%d)=",i+1);
		gotoxy(65,k);	cprintf("%.4f",fx[i]);
		k++;
	}
	gotoxy(60,22);	cprintf("sum=%.4f",sum);
	gotoxy(40,22);	cprintf("sum=%.4f",sum2);
	gotoxy(10,23);	cprintf("Ea=%f",Ea);
	gotoxy(10,22);	cprintf("An=%f",An);
	textbackground(BLUE);
	textcolor(WHITE);
}
