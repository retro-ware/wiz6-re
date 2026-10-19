#asm
	extrn swapmem_:near
#endasm
extern char g4586[];
extern char g4589[];
extern char g458a[];
extern char g458b[];
extern int g4356;
extern int g43ce;
extern int g43d0[];
extern int g43dc[];
extern int g4fb8;
extern int g4fba;
extern int g4fce;
f5c7a()
{
	int l2;
	int l4;
	char x4[476];
	int l482;
	int l484;
	register int rsi;
	l2 = 0;
	goto L5d43;
L5c8a:
	rsi = (44 * l2);
#asm
	db 08bh,01eh,0a8h,043h,080h,078h,022h,003h,072h,003h
#endasm
	goto L5d40;
L5c9f:
	if (f51f0(0, l2, (unsigned char)g458a[(432 * l2)], (unsigned char)g458b[(432 * l2)]) != 1) goto L5d40;
	f5fe6(l2);
	f0aaa(((unsigned char)g4586[(432 * l2)] + 8));
	f030b((!(l2 % 2) ? g4fba : g4fb8), 0, ((l2 / 2) << 2));
	f24e9((!(l2 % 2) ? g4fba : g4fb8), ((432 * l2) + 17384), -4);
L5d40:
	l2++;
L5d43:
	if (l2 < g43ce) goto L5c8a;
	l2 = 0;
	goto L5d60;
L5d56:
	f5bf3(l2);
	l2++;
L5d60:
	if (l2 < g43ce) goto L5d56;
	l2 = 0;
	goto L5e52;
L5d71:
	l4 = (l2 + 1);
	goto L5e43;
L5d7b:
	if ((unsigned)g4589[(432 * l2)] <= g4589[(432 * l4)]) goto L5e40;
#asm
l5d9c:
	db 0b8h,0b0h,001h,050h,081h,0c3h,0e8h,043h,08bh,0c3h,050h,0b8h,0b0h,001h,0f7h,06eh
	db 0feh,005h,0e8h,043h,050h
	call swapmem_
	db 083h,0c4h,006h,0b8h,02ch,000h,050h,0b8h,02ch,000h,0f7h,06eh,0fch,08bh,0c8h,0a1h
	db 0a8h,043h,003h,0c1h,050h,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0c8h,0a1h,0a8h,043h
	db 003h,0c1h,050h
	call swapmem_
	db 083h,0c4h,006h
#endasm
	l482 = g43dc[l2];
	g43dc[l2] = g43dc[l4];
	g43dc[l4] = l482;
	l482 = g43d0[l2];
	g43d0[l2] = g43d0[l4];
	g43d0[l4] = l482;
L5e40:
	l4++;
L5e43:
	if (l4 < g43ce) goto L5d7b;
	l2++;
L5e52:
	if ((g43ce - 1) > l2) goto L5d71;
	l4 = 0;
	l484 = 0;
	l2 = 0;
	goto L5e9d;
L5e70:
	if ((unsigned)g4589[(432 * l2)] < 2) goto L5e82;
	l4++;
L5e82:
	rsi = (44 * l2);
#asm
	db 08bh,01eh,0a8h,043h,080h,078h,02bh,002h,075h,006h
#endasm
	l484 = 1;
L5e9a:
	l2++;
L5e9d:
	if (l2 < g43ce) goto L5e70;
	if (l4 != g43ce) goto L5ebd;
	g4fce = 8;
	g4356 = 1;
#asm
	db 0ebh,013h
#endasm
L5ebd:
	if (l484 <= 0) goto L5ed0;
	g4fce = 23;
	g4356 = 1;
L5ed0:
	;
}
