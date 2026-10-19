extern char spell_table[];
count_known_realm_spells(p4, p6)
{
	int l2;
	register int rsi;
	register int rdi;
	l2 = 0;
	rsi = 0;
L785f:
	if ((unsigned char)spell_table[(rsi * 6)] != p6) goto L789b;
	if (test_bit(((432 * p4) + 17776), rsi) != 1) goto L789b;
#asm
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0f8h,08bh,05eh,008h,089h,031h
#endasm
	l2++;
L789b:
	rsi++;
	if (rsi < 82) goto L785f;
	return l2;
}
