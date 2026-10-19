extern char spell_table[];
/* Count the spells of realm the member knows and list them in out. */
count_known_spells(member, realm, p8)
char *p8;
{
	int count;
	register int spell;
	count = 0;
	spell = 0;
L6af2:
	if ((unsigned char)spell_table[(spell * 6)] != realm) goto L6b2e;
	if (test_bit(((432 * member) + 17776), spell) != 1) goto L6b2e;
	*(int *)(p8 + (count << 1)) = spell;
	count++;
L6b2e:
	spell++;
	if (spell < 82) goto L6af2;
	return count;
}
