#asm
	extrn f48df_:near
	extrn f4a03_:near
#endasm
extern int g0002;
extern int g502e;
extern int g5030;
extern int g5032;
f4a31(p4)
char *p4;
{
	int l2;
	int l4;
	l4 = f3350(20462, (unsigned char)*p4);
	if (l4 < 0) goto L4ab7;
#asm
	db 0ebh,055h
#endasm
	p4++;
	g5030++;
#asm
	db 0ebh,059h
#endasm
	p4++;
#asm
	db 0ffh,036h,0cah,04fh
	call f48df_
	db 059h,0ebh,04ch,0ffh,046h,004h
#endasm
	p4++;
#asm
	db 0ebh,044h
#endasm
	p4++;
#asm
	db 0ebh,03fh
#endasm
	p4++;
	f02f0(g502e, 1);
	g5030 = 0;
#asm
	db 0ebh,026h
#endasm
	p4++;
#asm
	db 0b8h,000h,000h,050h
	call f4a03_
	db 059h,0ebh,019h,053h,04ah,05ch,04ah,069h,04ah,071h,04ah,076h,04ah,08fh,04ah
l4aa8:
	db 03dh,006h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,09ch,04ah
l4ab5:
	db 0ebh,080h
#endasm
L4ab7:
	if (g5030 <= 4) goto L4ac6;
	f4a03(0);
L4ac6:
	l2 = (20 - ((strlen(p4) + 1) / 2));
	switch ((unsigned char)*p4) {
case 36:
	p4++;
	l2 = 0;
	goto L4b06;
case 94:
	p4++;
	l2 = g5032;
	goto L4b06;
	}
L4b06:
	f030b(g502e, l2, g5030);
	g5032 = l2;
	g5030++;
	f24e9(g502e, p4, g0002);
}
