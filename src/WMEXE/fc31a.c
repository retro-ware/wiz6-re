struct s44 { int w[22]; };
struct s432 { int w[216]; };
extern char party[];
extern char *monster_groups;
extern int member_pcfile_index[];
extern int member_portrait[];
/* Swap two party members (records, portraits) and redraw their cards. */
swap_members(p4, p6)
{
	char x0[476];
	int l478;
	swapmem(party + (432 * p6), party + (432 * p4), sizeof(struct s432));
	swapmem((struct s44 *)monster_groups + p6, (struct s44 *)monster_groups + p4, sizeof(struct s44));
	l478 = member_pcfile_index[p6];
	member_pcfile_index[p6] = member_pcfile_index[p4];
	member_pcfile_index[p4] = l478;
	l478 = member_portrait[p6];
	member_portrait[p6] = member_portrait[p4];
	member_portrait[p4] = l478;
	draw_member_card_x(p4, 0);
	draw_member_card_x(p6, 0);
	combat_delay(3);
}
