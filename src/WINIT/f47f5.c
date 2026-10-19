#asm
	extrn f33e9_:near
#endasm
extern int g3348[];
extern int g4f84;
f47f5(p4)
{
	char x0[13];
	char l14;
	char l15;
	char x15[3];
	int l20;
	int l22;
	int l24;
	f3640();
	l24 = 0;
	goto L48df;
L4806:
	f0882(9, ((l24 * 12) + 13124), l24, 0);
	if (*(long *)((char *)g3348 + (l24 * 12)) <= 0L) goto L48dc;
	strcpy(&l20, 20472);
	l15 = (char)((l24 / 10) + 48);
	l14 = (char)((l24 % 10) + 48);
	g4f84 = 20428;
	l22 = open(f0cd6(&l20, 1), 0);
	if (l22 != -1) goto L489e;
	f00d5(10);
L489e:
	;
#asm
l489e:
	db 0ffh,076h,0e8h,08bh,046h,0e8h,08bh,0d0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,0d1h,0e0h
	db 08bh,0d8h,0ffh,0b7h,04ah,033h,0ffh,0b7h,048h,033h,0b8h,000h,000h,0bah,000h,000h
	db 052h,050h,0ffh,076h,0eah
	call f33e9_
	db 083h,0c4h,00ch,085h,0c0h,074h,008h
#endasm
	f00d5(11);
L48d5:
	close(l22);
L48dc:
	l24++;
L48df:
	if (l24 < p4) goto L4806;
}
