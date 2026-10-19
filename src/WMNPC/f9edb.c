extern char g00df[];
extern char g00e0[];
extern char g450c[];
extern char spell_table[];
extern int g522c;
extern int g527a;
extern int g5322;
extern int pc_spell_pts[];
extern int pc_stamina[];
f9edb(p4, p6)
{
	int l2;
	int l4;
	fill_window(p4, 32, 3, 0);
	l2 = npc_choose_spell(p4, p6);
	g522c = -1;
	if (l2 == -1) goto L9fcb;
	l4 = (l2 / 256);
	l2 = (l2 % 256);
	*(int *)((char *)pc_spell_pts + ((432 * p6) + ((unsigned char)spell_table[(l2 * 6)] << 2))) -= ((unsigned char)g00e0[(l2 * 6)] * l4);
	f817e(p6, l2, l4, g5322);
	*(int *)((char *)pc_stamina + (432 * p6)) -= ((random(l4) + (unsigned char)g00df[(l2 * 6)]) + l4);
	if (*(int *)((char *)pc_stamina + (432 * p6)) >= 0) goto L9fbe;
	*(int *)((char *)pc_stamina + (432 * p6)) = 0;
	g450c[(432 * p6)] = (char)(random(6) + 6);
L9fbe:
	f5078(p6, g527a);
L9fcb:
	;
}
