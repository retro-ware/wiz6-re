#asm
	extrn f9ef6_:near
	extrn f9f25_:near
#endasm
extern char g450a[];
extern char g453a[];
extern char g4589[];
extern char g458c[];
extern int g4fca;
fad18(p4, p6, p8, p10, p12, p14, p16)
{
	char x0[4];
	int l6;
	char x6[78];
	int l86;
	char x86[78];
	int l166;
	char x166[78];
	int l246;
	register int rsi;
	register int rdi;
	if ((unsigned)g4589[(432 * p4)] < 2) goto Lad36;
	return;
Lad36:
	;
#asm
lad36:
	db 0ffh,076h,010h,0ffh,076h,00eh,0ffh,076h,00ch
	call f9f25_
	db 083h,0c4h,006h,08bh,0c8h,083h,0ech,004h,08bh,0c4h,08ch,0d2h,08eh,0c2h,08bh,0f1h
	db 08bh,0f8h,0a5h,0a5h
	call f9ef6_
	db 083h,0c4h,004h,089h,046h,0fah
#endasm
	if (!p8) goto Lad96;
	if (f09e2(100) <= ((unsigned char)g453a[((432 * p4) + p8)] - (p12 * 3))) goto Lae46;
Lad96:
	if (p16 != 255) goto Ladaf;
	g450a[((432 * p4) + p10)] = 255;
	goto Lade5;
Ladaf:
	if (((unsigned char)g450a[((432 * p4) + p10)] + l6) <= 250) goto Ladd8;
	l6 = (250 - (unsigned char)g450a[((432 * p4) + p10)]);
Ladd8:
	g450a[((432 * p4) + p10)] = (char)((unsigned char)g450a[((432 * p4) + p10)] + l6);
Lade5:
	if (p10 != 5) goto Ladfc;
	g458c[(432 * p4)] = *(char *)&p12;
Ladfc:
	f075b(p6, &l86);
	*(char *)&l166 = 0;
	*(char *)&l246 = 0;
	faa50(p4, &l86, &l166, &l246, 1, 6, 0, 0);
	f4ba8(p4);
	f533b(g4fca);
Lae46:
	return;
}
