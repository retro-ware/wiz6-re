extern char spell_table[];
/* Count spells of realm p6 that member p4 knows. */
count_known_spells(member, realm, p8)
char *p8;
{
	int count;
	register int spell;
	count = 0;
	spell = 0;
	do {
	if (((unsigned char)spell_table[(spell * 6)] == realm) && (test_bit(((432 * member) + 17776), spell) == 1)) {
	*(int *)(p8 + (count << 1)) = spell;
	count++;
	}
	spell++;
	} while (spell < 82);
	return count;
}
