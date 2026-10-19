extern int combat_over;
extern int g438a;
extern int g438c;
extern int game_state;
extern int party_count;
extern int party_picture_win;
extern int return_cmd;
/* Finish a combat round: update party and groups, end combat if over. */
end_combat_round()
{
	int l2;
	update_party_after_round();
	compact_monster_groups();
	update_group(6);
	tick_combat_effects();
	fill_window(g438a, 32, 3, 0);
	clear_window(g438c, 0);
	clear_window(party_picture_win, 0);
	if (combat_over != 1) goto L72c4;
	l2 = 0;
	goto L72b0;
L72a6:
	draw_member_panel_mele(l2);
	l2++;
L72b0:
	if (l2 < party_count) goto L72a6;
	end_encounter();
	game_state = return_cmd;
	goto L72cd;
L72c4:
	game_state = 11;
	refresh_all_windows();
L72cd:
	;
}
