extern char g019d[];
extern int combat_over;
extern int monster_group_count;
extern int monster_groups[];
extern int view_anim_state;
/* Clear the seven combat group buffers and reset the encounter state. */
clear_combat_groups()
{
	char x0[416];
	register int rsi;
	get_message(3900, 17270);
	setmem(17250, 20, 0);
	for (rsi = 0; rsi < 7; rsi++) {
	setmem(monster_groups[rsi], 416, 0);
	}
	for (rsi = 0; rsi < 7; rsi++) {
	g019d[monster_groups[rsi]] = 0;
	}
	monster_group_count = 0;
	combat_over = 0;
	view_anim_state = -2;
}
