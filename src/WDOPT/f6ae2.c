extern char spell_table[];
/* Count the spells of realm the member knows and list them in out. */
count_known_spells(member, realm)
{
	int count;
	register int spell;
	register int rdi;
	count = 0;
	spell = 0;
L6af2:
	if ((unsigned char)spell_table[(spell * 6)] != realm) goto L6b2e;
	if (test_bit(((432 * member) + 17776), spell) != 1) goto L6b2e;
#asm
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0f8h,08bh,05eh,008h,089h,031h
#endasm
	count++;
L6b2e:
	spell++;
	if (spell < 82) goto L6af2;
	return count;
}
