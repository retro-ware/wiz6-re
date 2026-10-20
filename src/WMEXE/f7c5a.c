extern int group_monster_rec[];
extern int monster_groups[];
struct s4 { int w[2]; };
struct s4 f5eea();
do_status_effect(p4, p6, p8, p10, p12, p14, p16, p18, p20, p22, p24)
{
	char x0[4];
	int l6;
	if ((unsigned)((char *)monster_groups[p4] + (44 * p6))[34] >= 2) goto L7c81;
	if (!((char *)monster_groups[p4] + (44 * p6))[43]) goto L7c87;
L7c81:
	return;
L7c87:
	if (!p4) {
	movmem(((432 * p6) + 17722), (group_monster_rec[0] + 148), 14);
	}
	l6 = roll_dice_x(f5eea(p16, p18, p20));
	l6 = f7af7(p4, l6, p10, p14);
	if ((l6 <= 0) || (random(100) <= ((unsigned char)((char *)group_monster_rec[p4] + p10)[148] - p14))) goto L7dbe;
	if (p20 != 255) goto L7d3b;
	((char *)monster_groups[p4] + ((44 * p6) + p12))[14] = -1;
	goto L7d84;
L7d3b:
	if (((unsigned char)((char *)monster_groups[p4] + ((44 * p6) + p12))[14] + l6) <= 250) goto L7d64;
	((char *)monster_groups[p4] + ((44 * p6) + p12))[14] = -6;
	goto L7d84;
L7d64:
	((char *)monster_groups[p4] + ((44 * p6) + p12))[14] += *(char *)&l6;
L7d84:
	if (p12 == 5) {
	((char *)monster_groups[p4] + (44 * p6))[35] = *(char *)&p20;
	}
	f7a16(p4, p6, p8, 1, 0);
	goto L7dd9;
L7dbe:
	if (p24 != 1) goto L7dd9;
	f7a16(p4, p6, 3471, 0, 0);
L7dd9:
	return;
}
