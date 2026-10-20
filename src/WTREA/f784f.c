extern char spell_table[];
count_known_realm_spells(p4, p6, p8)
char *p8;
{
	int l2;
	register int rsi;
	l2 = 0;
	rsi = 0;
L785f:
	if (((unsigned char)spell_table[(rsi * 6)] == p6) && (test_bit(((432 * p4) + 17776), rsi) == 1)) {
	*(int *)(p8 + (l2 << 1)) = rsi;
	l2++;
	}
	rsi++;
	if (rsi < 82) goto L785f;
	return l2;
}
