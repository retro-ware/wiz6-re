extern char spell_table[];
list_known_realm_spells(member, realm)
{
	int n;
	register int rsi;
	register int rdi;
	n = 0;
	rsi = 0;
L633f:
	if ((unsigned char)spell_table[(rsi * 6)] != realm) goto L637b;
	if (test_bit(((432 * member) + 17776), rsi) != 1) goto L637b;
#asm
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0f8h,08bh,05eh,008h,089h,031h
#endasm
	n++;
L637b:
	rsi++;
	if (rsi < 82) goto L633f;
	return n;
}
