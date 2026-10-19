extern char *g4fa8;
extern int main_window;
extern int maze_data;
extern int message_delay;
extern int party_cell_x;
extern int party_cell_y;
extern int party_facing;
extern int party_level;
search_cell()
{
	int l2;
	int l4;
	int l6;
	l2 = (((party_level << 6) + (party_cell_y << 3)) + party_cell_x);
	if ((get_bitfield((maze_data + 504), l2, 4) != 5) || (get_bitfield((maze_data + 888), l2, 2) != party_facing)) goto Lcd46;
	show_maze_message(2044);
	play_sound(4);
	wait_animating_m(2);
	l6 = 0;
	goto Lcd5b;
Lcd46:
	show_maze_message(2043);
	wait_animating_m(message_delay);
	l6 = 1;
Lcd5b:
	l4 = (unsigned char)(g4fa8 + party_level)[1728];
Lcd6c:
	if ((l4 = f7bd2(party_cell_x, party_cell_y, party_level, l4)) == -1) goto Lcddf;
	if (((g4fa8 + l4)[864] != 7) || (extract_bits(*(int *)((g4fa8 + (l4 << 1)) + 576), ((party_facing << 1) + 8), 2) != 2)) goto Lcdc0;
	fca72(l4);
	return;
Lcdc0:
	if (((g4fa8 + l4)[864] != 8) || (try_flag_event_at(l4) != 1)) goto Lcdda;
	return;
Lcdda:
	l4++;
	goto Lcd6c;
Lcddf:
	if (l6 != 1) goto Lce03;
	show_maze_message(2045);
	play_sound(0);
	wait_animating_m((message_delay / 2));
Lce03:
	erase_window(main_window, 1);
	return;
}
