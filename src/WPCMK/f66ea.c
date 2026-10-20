extern char spell_table[];
list_realm_spells(p4, p6)
char *p6;
{
	int l2;
	register int rsi;
	l2 = 0;
	rsi = 0;
	do {
	if (((unsigned char)spell_table[(rsi * 6)] == p4) && (test_bit(22008, rsi) == 1)) {
	*(int *)(p6 + (l2 << 1)) = rsi;
	l2++;
	}
	rsi++;
	} while (rsi < 82);
	return l2;
}
