f9459(p4, p6, p8, p10, p12)
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
L948f:
	l2 = (unsigned char)(f2724(1));
	if (l2 == 13) goto L95a1;
	f030b(p4, l6, l8);
	f22b7(p4, 32, 1);
	f030b(p4, l6, l8);
	if (l2 != 8) goto L9529;
	if (l4 <= 0) goto L951f;
	l4--;
#asm
	db 08bh,05eh,006h,08bh,076h,0fch,0c6h,000h,000h
#endasm
	l6--;
	f030b(p4, l6, l8);
	f22b7(p4, 32, 1);
	f030b(p4, l6, l8);
	goto L9527;
L951f:
	f0aaa(0);
L9527:
	goto L958d;
L9529:
	if (l4 < p8) goto L953b;
	f0aaa(0);
	goto L958d;
L953b:
	if (p12) goto L954e;
#asm
	db 08bh,046h,0feh,03dh,020h,000h,07ch,005h,03dh,07fh,000h,07eh,013h
#endasm
L954e:
	if (p12 != 1) goto L958d;
#asm
	db 08bh,046h,0feh,03dh,030h,000h,07ch,031h,03dh,039h,000h,07fh,02ch
#endasm
L9561:
	;
#asm
l9561:
	db 08ah,046h,0feh,08bh,05eh,006h,08bh,076h,0fch,088h,000h
#endasm
	l4++;
#asm
	db 08bh,05eh,006h,08bh,076h,0fch,0c6h,000h,000h
#endasm
	f22b7(p4, (unsigned char)*(char *)&l2, p10);
	l6++;
L958d:
	f22b7(p4, 97, 1);
	goto L948f;
L95a1:
	f030b(p4, l6, l8);
	f22b7(p4, 32, 1);
}
