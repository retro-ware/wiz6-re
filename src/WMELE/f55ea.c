#asm
	extrn f5066_:near
#endasm
extern char g019d[];
extern int g4356;
extern int g4360;
extern int g4368;
extern int g436a;
extern int g436e;
extern int g4370;
extern int g43a8[];
extern int g4fce;
f55ea()
{
	int l2;
	int l4;
	int l6;
	char x6[6];
	register int rsi;
	register int rdi;
	l6 = 0;
	l2 = 1;
	goto L5713;
L55ff:
	f53ca(l2);
	if ((unsigned)g019d[g43a8[l2]] <= 0) goto L5710;
	l6++;
	if (l6 == l2) goto L5672;
	rsi = g43a8[l2];
	rdi = g43a8[l6];
#asm
	db 08ch,0d9h,08eh,0c1h,0b9h,0d0h,000h,0f3h,0a5h,08bh,046h,0feh,0d1h,0e0h,08bh,0d8h
	db 08bh,0b7h,0b6h,043h,08bh,046h,0fah,0d1h,0e0h,08bh,0d8h,08bh,0bfh,0b6h,043h,08ch
	db 0d9h,08eh,0c1h,0b9h,06fh,000h,0f3h,0a5h,0ffh,076h,0fah
	call f5066_
	db 059h
#endasm
	g019d[g43a8[l2]] = 0;
	goto L5710;
L5672:
	l4 = 0;
	goto L56f7;
L567a:
	rsi = (44 * l4);
	if (((char *)g43a8[l6] + rsi)[42] != 11) goto L56b7;
	if (g4368) goto L56b7;
	g436e = 0;
	g4368 = l6;
#asm
	db 0c6h,040h,02ah,003h
#endasm
	f4f02(l6, 3);
L56b7:
	rsi = (44 * l4);
	if (((char *)g43a8[l6] + rsi)[42] != 12) goto L56f4;
	if (g436a) goto L56f4;
	g4370 = 0;
	g436a = l6;
#asm
	db 0c6h,040h,02ah,004h
#endasm
	f4f02(l6, 4);
L56f4:
	l4++;
L56f7:
	if ((unsigned char)g019d[g43a8[l6]] > l4) goto L567a;
L5710:
	l2++;
L5713:
	if (l2 <= g4360) goto L55ff;
	g4360 = l6;
	if (g4360) goto L573f;
	if (g4fce == 8) goto L5739;
	g4fce = 15;
L5739:
	g4356 = 1;
L573f:
	f5574();
	f54d5();
}
