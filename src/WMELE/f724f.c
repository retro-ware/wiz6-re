#asm
	extrn refresh_all_windows_:near
#endasm
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
#asm
	db 0ebh,009h
#endasm
L72c4:
	;
#asm
l72c4:
	db 0c7h,006h,03ah,036h,00bh,000h
	call refresh_all_windows_
#endasm
L72cd:
	;
}
