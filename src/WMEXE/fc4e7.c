extern int party_count;
fc4e7(p4)
{
	int l2;
	int l4;
	register int rsi;
	l4 = (p4 > 0 ? (p4 - 1) : p4);
	l2 = 0;
Lc501:
	rsi = (44 * l4);
#asm
	db 08bh,01eh,0a8h,043h,080h,078h,022h,003h,073h,00eh,080h,078h,02bh,000h,075h,008h
#endasm
	return l4;
Lc521:
	l4 = ((party_count - 1) > p4 ? (p4 + 1) : p4);
	l2++;
	if (l2 < 2) goto Lc501;
	return p4;
}
