extern char g505c;
extern int g4fc8;
extern int g500a;
extern int party_picture_win;
f7a16(p4, p6, p8, p10, p12)
{
	get_combatant_name(20492, p4, p6);
	get_message(p8, 20652);
	g505c = 0;
	if (g500a != 2) goto L7a93;
	clear_window_area(party_picture_win, 0, 2, 39, 4);
	clear_msg_line(2);
	print_combat_centered(20492, (p4 == 0 ? 1 : 6), 2);
	print_combat_centered(20652, 6, 3);
	goto L7abf;
L7a93:
	clear_msg_line(4);
	print_combat_line(20492, 20652, 20572, (p4 == 0 ? 1 : 6), 6, 0);
L7abf:
	if ((p10 != 1) || (p4)) goto L7ae5;
	if (p12 <= 0) goto L7ad8;
	play_sound(p12);
L7ad8:
	draw_member_card_x(p6, 1);
L7ae5:
	combat_delay((g4fc8 / 2));
}
