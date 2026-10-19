extern char spell_table[];
/* Count spells of realm p6 that member p4 knows. */
count_known_spells(member, realm)
{
	int count;
	register int spell;
	register int rdi;
	count = 0;
	spell = 0;
L76fe:
	if ((unsigned char)spell_table[(spell * 6)] != realm) goto L773a;
	if (test_bit(((432 * member) + 17776), spell) != 1) goto L773a;
#asm
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0f8h,08bh,05eh,008h,089h,031h
#endasm
	count++;
L773a:
	spell++;
	if (spell < 82) goto L76fe;
	return count;
}
