extern int g4f84;
f529e(p4, p6, p8, p10, p12)
char *p4;
char *p6;
{
	int l2;
	int l4;
	int l6;
	int l8;
	register int rsi;
	l6 = (unsigned char)p4[6];
	l8 = (unsigned char)p4[7];
	l4 = 0;
	*p6 = 0;
	f22b7(p4, 97, 1);
L52d4:
	l2 = f523f(1);
	if (l2 == 13) goto L53f1;
	f030b(p4, l6, l8);
	f22b7(p4, 32, 1);
	f030b(p4, l6, l8);
	if (l2 != 8) goto L536d;
	if (l4 <= 0) goto L5362;
	l4--;
#asm
	db 08bh,05eh,006h,08bh,076h,0fch,0c6h,000h,000h
#endasm
	l6--;
	f030b(p4, l6, l8);
	f22b7(p4, 32, 1);
	f030b(p4, l6, l8);
	goto L536a;
L5362:
	f0aaa(0);
L536a:
	;
#asm
l536a:
	db 0e9h,070h,000h
#endasm
L536d:
	if (l4 < p8) goto L537f;
	f0aaa(0);
	goto L53dd;
L537f:
	if (p12) goto L5392;
#asm
	db 08bh,046h,0feh,03dh,020h,000h,07ch,005h,03dh,07fh,000h,07eh,013h
#endasm
L5392:
	if (p12 != 1) goto L53dd;
#asm
	db 08bh,046h,0feh,03dh,030h,000h,07ch,03dh,03dh,039h,000h,07fh,038h
#endasm
L53a5:
	;
#asm
l53a5:
	db 08ah,046h,0feh,08bh,05eh,006h,08bh,076h,0fch,088h,000h
#endasm
	l4++;
#asm
	db 08bh,05eh,006h,08bh,076h,0fch,0c6h,000h,000h
#endasm
	f22b7(p4, (unsigned char)*(char *)&l2, p10);
	l6++;
	if (l4 <= 2) goto L53dd;
	g4f84 = 17210;
L53dd:
	f22b7(p4, 97, 1);
	goto L52d4;
L53f1:
	f030b(p4, l6, l8);
	f22b7(p4, 32, 1);
}
