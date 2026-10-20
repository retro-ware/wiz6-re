extern char g00df[];
extern char g00e0[];
extern char g450c[];
extern char spell_table[];
extern int g501c;
extern int g51d4;
extern int pc_spell_pts[];
extern int pc_stamina[];
cast_spell_on_chest(win, win2, member)
{
	int spell;
	int level;
	spell = choose_chest_spell(win2, member);
	g501c = -1;
	if (spell == -1) goto L8520;
	level = (spell / 256);
	spell = (spell % 256);
	*(int *)((char *)pc_spell_pts + ((432 * member) + ((unsigned char)spell_table[(spell * 6)] << 2))) -= ((unsigned char)g00e0[(spell * 6)] * level);
	cast_chest_spell(member, spell, level, g51d4, win, win2);
	*(int *)((char *)pc_stamina + (432 * member)) -= ((random(level) + (unsigned char)g00df[(spell * 6)]) + level);
	if (*(int *)((char *)pc_stamina + (432 * member)) < 0) {
	*(int *)((char *)pc_stamina + (432 * member)) = 0;
	g450c[(432 * member)] = (char)(random(6) + 6);
	}
	draw_member_status(member);
L8520:
	;
}
