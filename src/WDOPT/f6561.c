extern char *g4fa8;
extern int cell_event_index;
extern int cur_sound;
extern int g502a;
extern int g502c;
extern int game_state_arg;
extern int party_cell_x;
extern int party_cell_y;
extern int party_facing;
extern int party_level;
extern int pc_item_id[];
/* Check maze events at the party location for the used item; 1 if one fired. */
check_item_location_event(p4, p6)
{
	char x0[4];
	int l6;
	int ev;
	int l10;
	ev = (unsigned char)(g4fa8 + party_level)[1728];
L6579:
	ev = find_maze_event(party_cell_x, party_cell_y, party_level, ev);
	if (ev == -1) goto L6731;
	if (((g4fa8 + ev)[864] != 19) || (*(int *)((char *)pc_item_id + ((432 * p4) + (p6 << 3))) != *(int *)(g4fa8 + (ev << 1)))) goto L6692;
	l10 = extract_bits(*(int *)((g4fa8 + (ev << 1)) + 576), 0, 8);
	set_bit(((game_state_arg * 10) + 20204), l10, 0);
	if (!(l10 = extract_bits(*(int *)((g4fa8 + (ev << 1)) + 576), 8, 8))) goto L6641;
	set_bit(((game_state_arg * 10) + 20204), l10, 1);
L6641:
	if ((unsigned)(g4fa8 + ev)[1584] <= 0) goto L6683;
	if ((unsigned)(g4fa8 + ev)[1584] < 14) goto L6671;
	if ((unsigned char)(g4fa8 + ev)[1584] == cur_sound) goto L6667;
	load_sound_dopt((unsigned char)(g4fa8 + ev)[1584]);
L6667:
	play_sound(14);
	goto L6683;
L6671:
	play_sound((unsigned char)(g4fa8 + ev)[1584]);
L6683:
	cell_event_index = (ev + 1);
	return 1;
L6692:
	if (((g4fa8 + ev)[864] != 7) || ((extract_bits(*(int *)((g4fa8 + (ev << 1)) + 576), (party_facing << 1), 2) != 1) && (extract_bits(*(int *)((g4fa8 + (ev << 1)) + 576), (party_facing << 1), 2) != 2))) goto L672b;
	l6 = *(int *)((g4fa8 + (ev << 1)) + 288);
	if (*(int *)((char *)pc_item_id + ((432 * p4) + (p6 << 3))) != l6) goto L672b;
	clear_maze_event(ev);
	g502a = 2113;
	g502c = 0;
	return 1;
L672b:
	ev++;
	goto L6579;
L6731:
	return 0;
}
