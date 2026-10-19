extern int g5012;
extern int game_state;
extern int party_count;
/* Redraw party panels and monsters; let monsters advance; continue with combat menu. */
redraw_combat_screen()
{
	int i;
	for (i = 0; i < party_count; i++) {
	draw_member_panel_mele(i);
	}
	arrange_monster_positions();
	show_encounter_view(0);
	if (g5012) goto L7103;
	advance_monster_groups();
L7103:
	g5012 = 0;
	game_state = 12;
}
