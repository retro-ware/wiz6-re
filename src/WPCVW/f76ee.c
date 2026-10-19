extern char spell_table[];
/* Count spells of realm p6 that member p4 knows. */
count_known_spells(member, realm, p8)
char *p8;
{
	int count;
	register int spell;
	count = 0;
	spell = 0;
L76fe:
	if ((unsigned char)spell_table[(spell * 6)] != realm) goto L773a;
	if (test_bit(((432 * member) + 17776), spell) != 1) goto L773a;
	*(int *)(p8 + (count << 1)) = spell;
	count++;
L773a:
	spell++;
	if (spell < 82) goto L76fe;
	return count;
}
