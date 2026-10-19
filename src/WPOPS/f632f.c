extern char spell_table[];
list_known_realm_spells(member, realm, p8)
char *p8;
{
	int n;
	register int rsi;
	n = 0;
	rsi = 0;
L633f:
	if ((unsigned char)spell_table[(rsi * 6)] != realm) goto L637b;
	if (test_bit(((432 * member) + 17776), rsi) != 1) goto L637b;
	*(int *)(p8 + (n << 1)) = rsi;
	n++;
L637b:
	rsi++;
	if (rsi < 82) goto L633f;
	return n;
}
