int P020(){
	textbackground(BLACK);
	textcolor(WHITE);
	for(int i=2; i<80; i++){
		gotoxy(i,1);	cprintf("%c",205);
	}
	for(int i=2; i<24; i++){
		gotoxy(80,i);	cprintf("%c",186);
	}
	for(int i=79; i>1; i--){
		gotoxy(i,24);	cprintf("%c",205);
	}
	for(int i=23; i>1; i--){
		gotoxy(1,i);	cprintf("%c",186);
	}
	gotoxy(1,1);	cprintf("%c",201);
	gotoxy(80,1);	cprintf("%c",187);
    gotoxy(1,24);	cprintf("%c",200);
    gotoxy(80,24);	cprintf("%c",188);
    for(int i=2; i<80; i++){
    	gotoxy(i,8);	cprintf("%c",205);
	}
	textbackground(GREEN);
	for(int i=79; i>1; i--){
		for(int j=2; j<8; j++){
			gotoxy(i,j);	cprintf(" ");
		}
		i--;
		for(int k=7; k>1; k--){
			gotoxy(i,k);	cprintf(" ");
		}	
	}
	textbackground(BLUE);
	for(int i=79; i>1; i--){
		for(int j=23; j>8; j--){
			gotoxy(i,j);	cprintf(" ");
		}
		i--;
		for(int k=9; k<24; k++){
			gotoxy(i,k);	cprintf(" ");
		}	
	}
	textbackground(GREEN);
	gotoxy(37,2);	cprintf("IPN");
	gotoxy(35,4);	cprintf("ESIME");
	gotoxy(18,6);	cprintf("2RM1");
	gotoxy(45,6);	cprintf("Cruz Sato Tenkai Tonatiuh");
	return 0;
} 
