#asm
	extrn apply_member_effects_:near
	extrn change_walls_event_:near
	extrn check_party_item_event_:near
	extrn do_message_event_:near
	extrn encounter_event_:near
	extrn fa385_:near
	extrn fa5cd_:near
	extrn fa68d_:near
	extrn fb123_:near
	extrn fb53d_:near
	extrn fb9a2_:near
	extrn fbaed_:near
	extrn fc363_:near
	extrn npc_event_:near
	extrn puzzle_event_:near
	extrn riddle_event_:near
	extrn set_flag_event_:near
	extrn show_message_text_m_:near
	extrn trap_event_:near
#endasm
extern char *g4fa8;
extern int cell_event_index;
extern int event_screen_dirty;
extern int g4f8a;
extern int g5034;
extern int g5232;
extern int game_state;
extern int party_cell_x;
extern int party_cell_y;
extern int party_level;
/* Run each event record attached to the party's cell while still in maze state. */
run_cell_events()
{
	g4f8a = -1;
	event_screen_dirty = 0;
Lc8f8:
	cell_event_index = f7bd2(party_cell_x, party_cell_y, party_level, cell_event_index);
	if (cell_event_index == -1) goto Lca26;
	g5232 = 1;
#asm
	db 08bh,01eh,0a8h,04fh,08bh,0f0h,08ah,080h,060h,003h,02ah,0e4h,0e9h,0d4h,000h
#endasm
	do_teleport_event();
	goto Lca0f;
	if (!g5034) goto Lc93e;
	f9f8c();
Lc93e:
	goto Lca0f;
#asm
	call do_message_event_
	db 0e9h,0c8h,000h
	call encounter_event_
	db 0e9h,0c2h,000h
	call npc_event_
	db 0e9h,0bch,000h
	call check_party_item_event_
	db 0e9h,0b6h,000h
	call fa5cd_
	db 0e9h,0b0h,000h
#endasm
	if (*(int *)(g4fa8 + (cell_event_index << 1)) <= 0) goto Lc97d;
#asm
	db 0b8h,000h,000h,050h,0ffh,030h
	call show_message_text_m_
	db 083h,0c4h,004h,0ebh,003h
#endasm
Lc97d:
	check_secret_detect();
Lc980:
	;
#asm
lc980:
	db 0e9h,08ch,000h
	call trap_event_
	db 0e9h,086h,000h
	call change_walls_event_
	db 0e9h,080h,000h
	call set_flag_event_
	db 0e9h,07ah,000h
	call puzzle_event_
	db 0e9h,074h,000h
	call riddle_event_
	db 0ebh,06fh,0ebh,06dh
	call fb123_
	db 0ebh,068h
	call fa68d_
	db 0ebh,063h
	call fa385_
	db 0ebh,05eh,0ebh,05ch,0ebh,05ah
	call fb53d_
	db 0ebh,055h
	call fb9a2_
	db 0ebh,050h
	call fbaed_
	db 0ebh,04bh
	call fc363_
	db 0ebh,046h
	call apply_member_effects_
	db 0ebh,041h,00fh,0cah,02eh,0c9h,034h,0c9h,041h,0c9h,047h,0c9h,04dh,0c9h,053h,0c9h
	db 059h,0c9h,05fh,0c9h,083h,0c9h,089h,0c9h,08fh,0c9h,095h,0c9h,09bh,0c9h,0a0h,0c9h
	db 0a0h,0c9h,0a2h,0c9h,0a7h,0c9h,0ach,0c9h,0b1h,0c9h,0b3h,0c9h,0b5h,0c9h,0bah,0c9h
	db 0bfh,0c9h,0c4h,0c9h,0c9h,0c9h
lca02:
	db 03dh,01ah,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,0ceh,0c9h
#endasm
Lca0f:
	if (game_state == 5) goto Lca18;
	return;
Lca18:
	if (g5232 != 1) goto Lca23;
	cell_event_index++;
Lca23:
	goto Lc8f8;
Lca26:
	if (event_screen_dirty != 1) goto Lca30;
	refresh_all_windows();
Lca30:
	return;
}
