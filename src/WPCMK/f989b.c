#asm
	extrn f95bf_:near
#endasm
extern char *g56ca;
extern int g546e;
f989b(p4)
{
	char x0[8];
	int l10;
	int l12;
	int l14;
	f972a(p4);
	f030b(g56ca, 1, 1);
	f083f(1128, g56ca, 18);
	l12 = (unsigned char)g56ca[6];
	l14 = (unsigned char)g56ca[7];
	f033f(g56ca, l12, l14, (l12 + 7), l14);
	f030b(g56ca, l12, l14);
	f4654(g56ca, &l10, 7, 5, 0);
	if (!*(char *)&l10) goto L9982;
	if (f9575(&l10) != -1) goto L9943;
#asm
	db 0b8h,002h,000h,050h,0b8h,006h,000h,050h,0b8h,04eh,004h,050h
	call f95bf_
	db 083h,0c4h,006h,0ebh,03fh
#endasm
L9943:
	strcpy(21616, &l10);
	f457f(21616, p4, 1);
	f033f(g546e, 4, 1, 11, 1);
	f52b6();
	f9778();
L9982:
	;
}
