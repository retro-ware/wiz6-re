extern char pc_sex[];
extern int group_monster_rec[];
extern int monster_groups[];
do_damage_effect(p4, p6, p8, p10, p12, p14, p16, p18, p20, p22)
{
	int l2;
	if ((unsigned char)((char *)monster_groups[p4] + (44 * p6))[34] >= p12) goto L7b83;
	if (!((char *)monster_groups[p4] + (44 * p6))[43]) goto L7b88;
L7b83:
	return;
L7b88:
	if (!p4) {
	movmem(((432 * p6) + 17722), (group_monster_rec[0] + 148), 14);
	}
	l2 = 0;
	if ((p10) && (random(100) <= ((unsigned char)((char *)group_monster_rec[p4] + p10)[148] - p14))) goto L7c3c;
	((char *)monster_groups[p4] + (44 * p6))[34] = *(char *)&p12;
	if (p12 < 3) goto L7c24;
	kill_combatant(p4, p6);
	if (p4) goto L7c24;
	l2 = ((unsigned char)pc_sex[(432 * p6)] + 8);
L7c24:
	f7a16(p4, p6, p8, 1, l2);
	goto L7c57;
L7c3c:
	if (p22 != 1) goto L7c57;
	f7a16(p4, p6, 3471, 0, 0);
L7c57:
	return;
}
