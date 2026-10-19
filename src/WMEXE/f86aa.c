extern char g018f[];
extern char g019d[];
extern int g4fc8;
extern int g500a;
extern int monster_groups[];
f86aa(p4, p6, p8, p10, p12, p14, p16, p18, p20, p22, p24)
{
	int l2;
	int l4;
	int l6;
	register int rsi;
	g500a = 2;
	l4 = 0;
	if (p10 != 3) goto L872d;
	if (p14 != 1) goto L872d;
	if (p8 != 5) goto L8717;
	if (((unsigned char)g018f[monster_groups[p4]] / 5) <= p16) goto L8717;
	clear_msg_line(2);
	print_msg_centered(3212, 5, 2);
	combat_delay((g4fc8 / 2));
	return;
L8717:
	if (p8 != 5) goto L8722;
	l4 = 2;
L8722:
	if (p8 != 11) goto L872d;
	l4 = 3;
L872d:
	l2 = 0;
	goto L8795;
L8734:
	l6 = p12;
	if (l4 <= 0) goto L8768;
	rsi = (44 * l2);
#asm
	db 08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08bh,000h,050h,08bh,046h
	db 010h,0f7h,06eh,0fch,08bh,0c8h,058h,03bh,0c1h,07eh,005h
#endasm
	l6 = -100;
L8768:
	f825f(p4, l2, p6, p8, p10, l6, p14, p16, p18, p20, p22, p24);
	l2++;
L8795:
	if ((unsigned char)g019d[monster_groups[p4]] > l2) goto L8734;
	return;
}
