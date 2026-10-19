extern char g4598[];
extern char party[];
extern char roster_slot_used[];
extern int g43d2[];
extern int g43de[];
extern int g4fb8;
extern int g4fba;
extern int member_pcfile_index[];
extern int member_portrait[];
extern int party_count;
struct s432 { int w[216]; };
/* Remove party member i, mark it available and redraw the panels. */
remove_party_member(i)
{
	int j;
	roster_slot_used[member_pcfile_index[i]] = 1;
	party_count--;
	for (j = i; j < party_count; j++) {
	*(struct s432 *)((char *)party + (432 * j)) = *(struct s432 *)((char *)g4598 + (432 * j));
	member_pcfile_index[j] = g43de[j];
	member_portrait[j] = g43d2[j];
	}
	fill_window(g4fba, 32, 3, 0);
	fill_window(g4fb8, 32, 3, 0);
	for (j = 0; j < party_count; j++) {
	draw_member_panel(j);
	}
}
