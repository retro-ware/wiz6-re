extern char g4500[];
extern char g4587[];
extern char g4590[];
ff784(p4, p6, p8)
{
	int l2;
	char x2[2];
#asm
	db 0b8h,0b0h,001h,0f7h,06eh,008h,08bh,0d8h,0ffh,087h,00ch,044h,08ah,087h,097h,045h
	db 02ah,0e4h,03bh,087h,00ch,044h,07fh,005h,0c6h,087h,097h,045h,000h
#endasm
Lf7a7:
	ff6e6(p8);
	f93f8(p4, p6, p8);
	f32be(p6, 32, 3, 0);
	f2b19(p6);
	f075b(5010, 21902);
	f05c1(21902, ((432 * p8) + 17384), 94);
	f075b(((unsigned char)g4587[(432 * p8)] + 120), 22416);
	f05c1(21902, 22416, 36);
	fe8b6(p6, 21902, 1);
	ff568(p4, p6, p8);
	fed21(p4, p6, p8);
	feff8(p8);
	fea8d(p8);
	if ((unsigned)g4590[(432 * p8)] <= 0) goto Lf885;
	fe922(p6, p8);
Lf885:
	ff201(p8);
	l2 = 0;
Lf891:
	if ((unsigned)g4500[((432 * p8) + l2)] <= 0) goto Lf8b7;
	f8353(p4, p6, p8, l2);
	goto Lf891;
Lf8b7:
	l2++;
	if (l2 < 4) goto Lf891;
}
