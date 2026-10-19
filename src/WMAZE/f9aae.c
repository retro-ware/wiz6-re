f9aae(p4, p6, p8, p10, p12)
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
L9ae4:
	l2 = f9a66(1);
	if (l2 == 13) goto L9bf4;
	f030b(p4, l6, l8);
	f22b7(p4, 32, 1);
	f030b(p4, l6, l8);
	if (l2 != 8) goto L9b7c;
	if (l4 <= 0) goto L9b72;
	l4--;
#asm
	db 08bh,05eh,006h,08bh,076h,0fch,0c6h,000h,000h
#endasm
	l6--;
	f030b(p4, l6, l8);
	f22b7(p4, 32, 1);
	f030b(p4, l6, l8);
	goto L9b7a;
L9b72:
	f0aaa(0);
L9b7a:
	goto L9be0;
L9b7c:
	if (l4 < p8) goto L9b8e;
	f0aaa(0);
	goto L9be0;
L9b8e:
	if (p12) goto L9ba1;
#asm
	db 08bh,046h,0feh,03dh,020h,000h,07ch,005h,03dh,07fh,000h,07eh,013h
#endasm
L9ba1:
	if (p12 != 1) goto L9be0;
#asm
	db 08bh,046h,0feh,03dh,030h,000h,07ch,031h,03dh,039h,000h,07fh,02ch
#endasm
L9bb4:
	;
#asm
l9bb4:
	db 08ah,046h,0feh,08bh,05eh,006h,08bh,076h,0fch,088h,000h
#endasm
	l4++;
#asm
	db 08bh,05eh,006h,08bh,076h,0fch,0c6h,000h,000h
#endasm
	f22b7(p4, (unsigned char)*(char *)&l2, p10);
	l6++;
L9be0:
	f22b7(p4, 97, 1);
	goto L9ae4;
L9bf4:
	f030b(p4, l6, l8);
	f22b7(p4, 32, 1);
}
