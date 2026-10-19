extern char g5158[];
extern char g5159[];
extern char g515b[];
extern char pclist_pcindex[];
extern int g5156[];
extern int g52ce;
extern long g52cc;
f7f76(p4, p6, p8, p10, p12)
char p6;
char p10;
char p12;
{
	int l2;
	long l6;
	if (p6 != 2) goto L7fb5;
#asm
	db 08bh,046h,008h,099h,0b9h,008h,000h
l7f89:
	db 0d1h,0e0h,0d1h,0d2h,0e2h,0fah,050h,052h,08ah,046h,00ah,02ah,0e4h,099h,08bh,0c8h
	db 08bh,0dah,05ah,058h,003h,0c1h,013h,0d3h,089h,056h,0fch,089h,046h,0fah
#endasm
	g52cc += l6;
L7fb5:
	l2 = 0;
L7fba:
	if (pclist_pcindex[(l2 * 6)] != p6) goto L80be;
	if (p6 != 2) goto L8050;
#asm
	db 08bh,087h,056h,051h,099h,0b9h,008h,000h
l7fe1:
	db 0d1h,0e0h,0d1h,0d2h,0e2h,0fah,050h,052h,08bh,046h,0feh,08bh,0d0h,0d1h,0e0h,003h
	db 0c2h,0d1h,0e0h,08bh,0d8h,08ah,087h,058h,051h,02ah,0e4h,099h,08bh,0c8h,08bh,0dah
	db 05ah,058h,003h,0c1h,013h,0d3h,089h,056h,0fch,089h,046h,0fah,03bh,016h,0ceh,052h
	db 07fh,008h,075h,008h,03bh,006h,0cch,052h,076h,002h
#endasm
L801b:
	goto L804d;
L801d:
	g52ce = 0;
	*(int *)&g52cc = 0;
	p8 = f7038(p4, (unsigned char)g515b[(l2 * 6)]);
	return;
L804d:
	goto L80be;
L8050:
	if ((p6 != 1) || (g5156[(l2 * 3)])) goto L806f;
	p8 = 0;
L806f:
	if ((g5156[(l2 * 3)] != p8) && (p8)) goto L80be;
	if ((g5158[(l2 * 6)] != p10) && (p10)) goto L80be;
	if ((g5159[(l2 * 6)] != p12) && (p12)) goto L80be;
	p8 = f7038(p4, (unsigned char)g515b[(l2 * 6)]);
	return;
L80be:
	l2++;
	if (l2 < 8) goto L7fba;
	return 0;
}
