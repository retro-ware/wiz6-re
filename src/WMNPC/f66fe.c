extern char g44db[];
extern char g44dc[];
extern char g44e2[];
extern char g44e4[];
extern char g44e5[];
extern char g44e7[];
extern char g4525[];
extern char g4539[];
extern char pc_class[];
f66fe(p4, p6)
{
	int l2;
	int l4;
	register int rsi;
	g44e5[((432 * p4) + (p6 << 4))] = 0;
	g44e4[((432 * p4) + (p6 << 4))] = 0;
	l4 = 0;
L6728:
	g44dc[(((432 * p4) + (p6 << 4)) + l4)] = 0;
	l4++;
	if (l4 < 8) goto L6728;
#asm
	db 0b8h,0b0h,001h,0f7h,06eh,004h,08bh,056h,006h,0b9h,004h,000h,0d3h,0e2h,08bh,0cah
	db 003h,0c1h,08bh,0d8h,0c6h,087h,0e6h,044h,000h,0c6h,087h,0dah,044h,002h,0c6h,087h
	db 0dbh,044h,002h,0c7h,087h,0d8h,044h,000h,000h,0c6h,087h,0e7h,044h,020h
#endasm
	l2 = ((unsigned char)g4525[(432 * p4)] / 5);
	l4 = ((unsigned char)g4539[(432 * p4)] / 5);
	if (pc_class[(432 * p4)] == 13) goto L67ae;
	if (pc_class[(432 * p4)] != 12) goto L67da;
L67ae:
	;
#asm
l67ae:
	db 08bh,046h,0feh,0b9h,003h,000h,099h,0f7h,0f9h,040h,040h,08bh,076h,006h,0b9h,004h
	db 000h,0d3h,0e6h,08bh,0ceh,003h,0d9h,088h,087h,0dbh,044h,080h,08fh,0e7h,044h,040h
	db 08bh,046h,0fch,005h,005h,000h,088h,087h,0e2h,044h,0ebh,056h
#endasm
L67da:
	if (l2 <= 0) goto L680b;
	g44db[((432 * p4) + (p6 << 4))] = (char)((l2 / 4) + 1);
	g44e7[((432 * p4) + (p6 << 4))] |= 64;
L680b:
	if (l4 <= 0) goto L6830;
	g44e2[((432 * p4) + (p6 << 4))] = *(char *)&l4;
L6830:
	;
}
