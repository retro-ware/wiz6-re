#asm
	extrn f533b_:near
	extrn f9cde_:near
#endasm
extern int g0002;
extern int g4336;
extern int g522a;
extern int g522c;
extern int g522e;
f9d0c(p4)
char *p4;
{
	int l2;
	int l4;
	l4 = f3350(20488, (unsigned char)*p4);
	if (l4 < 0) goto L9dd2;
#asm
l9d2f:
	db 0e9h,090h,000h
#endasm
	p4++;
	g522c++;
#asm
	db 0e9h,093h,000h
#endasm
	p4++;
#asm
	db 0ffh,036h,0cah,04fh
	call f533b_
	db 059h,0e9h,085h,000h,0ffh,046h,004h
#endasm
	p4++;
#asm
	db 0e9h,07ch,000h
#endasm
	p4++;
#asm
	db 0e9h,076h,000h
#endasm
	p4++;
	f02f0(g522a, 1);
	g522c = 0;
#asm
	db 0ebh,05dh
#endasm
	p4++;
#asm
	db 0b8h,000h,000h,050h
	call f9cde_
	db 059h,0ebh,050h
#endasm
	p4++;
	if ((unsigned)*p4 < 14) goto L9da3;
	if ((unsigned char)*p4 == g4336) goto L9d99;
	f9948((unsigned char)*p4);
L9d99:
	f0aaa(14);
	goto L9daf;
L9da3:
	f0aaa((unsigned char)*p4);
L9daf:
	p4++;
#asm
	db 0ebh,01bh,032h,09dh,03ch,09dh,04ah,09dh,053h,09dh,059h,09dh,072h,09dh,07fh,09dh
l9dc2:
	db 03dh,007h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,0b4h,09dh
l9dcf:
	db 0e9h,040h,0ffh
#endasm
L9dd2:
	if (g522c <= 4) goto L9de1;
	f9cde(0);
L9de1:
	l2 = (20 - ((strlen(p4) + 1) / 2));
	switch ((unsigned char)*p4) {
case 36:
	p4++;
	l2 = 0;
	goto L9e21;
case 94:
	p4++;
	l2 = g522e;
	goto L9e21;
	}
L9e21:
	f030b(g522a, l2, g522c);
	g522e = l2;
	g522c++;
	f24e9(g522a, p4, g0002);
}
