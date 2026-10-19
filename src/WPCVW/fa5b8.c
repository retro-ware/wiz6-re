#asm
	extrn fa4b1_:near
#endasm
extern char g4587[];
extern int g440c[];
extern int g57e0[];
fa5b8(p4, p6, p8)
{
	int l2;
	int l4;
	char x4[8];
	int l14;
	int l42[14];
	int l44;
	int l46;
	fa1f9(p8);
	l46 = f011a(20, 4, 20, 16, 30, -1, 0, 0);
	f32be(l46, 32, 3, 0);
	f3118(l46);
	f9fa8(l46);
	f31d1(l46);
	f32be(p6, 32, 3, 0);
	f2a63();
	l44 = 1;
	l4 = 0;
La637:
	if (g57e0[l4] != 1) goto La64e;
	l42[l4] = 1;
	goto La657;
La64e:
	l42[l4] = 0;
La657:
	l4++;
	if (l4 <= 13) goto La637;
	l14 = -1;
	l42[(unsigned char)g4587[(432 * p8)]] = 0;
	f030b(p6, 4, 1);
	f083f(660, p6, 18);
	f030b(p6, 6, 2);
	f083f(661, p6, 18);
	l2 = rename_test_fn(l46, 119, &l44, 1, 1, 10, 11, 5, 0);
	f02d2(l46, 0);
	if (l2 <= 0) goto La789;
	g4587[(432 * p8)] = (char)(l2 - 1);
	if (*(int *)((char *)g440c + (432 * p8)) >= 250) goto La727;
#asm
	db 08ah,087h,00ch,044h,088h,087h,097h,045h
#endasm
	goto La72c;
La727:
	;
#asm
la727:
	db 0c6h,087h,097h,045h,000h
#endasm
La72c:
	;
#asm
la72c:
	db 0c7h,087h,00ch,044h,001h,000h,0c6h,087h,088h,045h,000h,0c7h,087h,0f6h,043h,000h
	db 000h,0c7h,087h,0f4h,043h,000h,000h,08ah,087h,085h,045h,02ah,0e4h,050h,0ffh,076h
	db 008h
	call fa4b1_
	db 083h,0c4h,004h
#endasm
	fa368(p8, (unsigned char)g4587[(432 * p8)]);
	f93f8(p4, p6, p8);
	fd399(p4, p6, p8);
La789:
	;
}
