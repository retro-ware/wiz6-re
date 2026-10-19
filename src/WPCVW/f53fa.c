extern int pc_spell_pts[];
extern int pc_spell_pts_max[];
extern int realm_colors[];
draw_spell_points(p4, p6)
{
	int l2;
	for (l2 = 0; l2 < 6; l2++) {
	set_cursor(p4, (l2 < 3 ? 3 : 13), (((l2 % 3) << 1) + 14));
	print_int(p4, *(int *)((char *)pc_spell_pts + ((432 * p6) + (l2 << 2))), 3, realm_colors[l2]);
	put_char(p4, 47, 9);
	print_int(p4, *(int *)((char *)pc_spell_pts_max + ((432 * p6) + (l2 << 2))), 3, realm_colors[l2]);
	}
}
