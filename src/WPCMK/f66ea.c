extern char spell_table[];
list_realm_spells(p4, p6)
char *p6;
{
	int l2;
	register int rsi;
	l2 = 0;
	rsi = 0;
L66fa:
	if ((unsigned char)spell_table[(rsi * 6)] != p4) goto L6730;
	if (test_bit(22008, rsi) != 1) goto L6730;
	*(int *)(p6 + (l2 << 1)) = rsi;
	l2++;
L6730:
	rsi++;
	if (rsi < 82) goto L66fa;
	return l2;
}
