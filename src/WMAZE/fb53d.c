extern char *g4fa8;
extern char *maze_data;
extern int cell_event_index;
extern int party_facing;
extern int picture_win;
fb53d()
{
	char x0[2];
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	int l14;
	int l16;
	int l18;
	int l20;
	int l22;
	int l24;
	int l26;
	int l28;
	int l30;
	int l32;
	int l34;
	int l36;
	l6 = *(int *)((g4fa8 + (cell_event_index << 1)) + 576);
	l32 = (*(int *)(g4fa8 + (cell_event_index << 1)) / 256);
	l30 = (*(int *)(g4fa8 + (cell_event_index << 1)) % 256);
	l34 = (*(int *)((g4fa8 + (cell_event_index << 1)) + 288) / 256);
	l36 = (*(int *)((g4fa8 + (cell_event_index << 1)) + 288) % 256);
	l28 = (((party_facing - l34) + 4) % 4);
	if (l28 == 3) {
	l28 = -1;
	}
	l26 = (unsigned char)(g4fa8 + cell_event_index)[1584];
	l14 = extract_bits(l6, 0, 3);
	l16 = extract_bits(l6, 3, 3);
	l12 = extract_bits(l6, 6, 4);
	l22 = extract_bits(l6, 10, 1);
	l24 = extract_bits(l6, 11, 1);
	l20 = extract_bits(l6, 12, 1);
	l8 = ((unsigned char)(maze_data + l12)[480] + l14);
	l10 = ((unsigned char)(maze_data + l12)[492] + l16);
	l18 = (l24 == 0 ? 1 : 2);
	l4 = (((l12 << 6) + (l16 << 3)) + l14);
	if ((((!l20) || (l22 != 1)) || (l28)) || (l24 != 1)) goto Lb6a3;
	if (party_facing != l36) goto Lb696;
	animate_door(0, l32, l30, l26);
	goto Lb6a3;
Lb696:
	shake_view(7, l26);
Lb6a3:
	switch (l34) {
case 0:
	set_bitfield((maze_data + 96), l4, 2, l18);
	if (l22 == 1) {
	set_door_feature(l8, l10, 0, l24, 0);
	set_door_feature(l8, (l10 + 1), 2, l24, 0);
	}
	goto Lb870;
case 1:
	set_bitfield((maze_data + 288), l4, 2, l18);
	if (l22 == 1) {
	set_door_feature(l8, l10, 1, l24, 0);
	set_door_feature((l8 + 1), l10, 3, l24, 0);
	}
	goto Lb870;
case 2:
	if (l22 == 1) {
	set_door_feature(l8, l10, 2, l24, 0);
	set_door_feature(l8, (l10 - 1), 0, l24, 0);
	}
	if (!move_to_maze_cell_m(&l14, &l16, &l12, l8, (l10 - 1))) {
	l4 = (((l12 << 6) + (l16 << 3)) + l14);
	set_bitfield((maze_data + 96), l4, 2, l18);
	}
	goto Lb870;
case 3:
	if (l22 == 1) {
	set_door_feature(l8, l10, 3, l24, 0);
	set_door_feature((l8 - 1), l10, 1, l24, 0);
	}
	if (!move_to_maze_cell_m(&l14, &l16, &l12, (l8 - 1), l10)) {
	l4 = (((l12 << 6) + (l16 << 3)) + l14);
	set_bitfield((maze_data + 288), l4, 2, l18);
	}
	goto Lb870;
	}
Lb870:
	if (!l20) goto Lb960;
	if (l22 != 1) goto Lb94e;
	if ((l28) || (l24)) goto Lb8bb;
	if (party_facing == l36) {
	animate_door(1, l32, l30, l26);
	} else {
	shake_view(7, l26);
	}
	goto Lb94c;
Lb8bb:
	if (((l28 != 1) || (l24)) && ((l28 != -1) || (l24 != 1))) goto Lb8fa;
	draw_maze_view_m();
	shake_view(1, l26);
	drv_op_c2(picture_win);
	shake_view(6, l26);
	goto Lb94c;
Lb8fa:
	if (((l28 != 1) || (l24 != 1)) && ((l28 != -1) || (l24))) goto Lb939;
	draw_maze_view_m();
	shake_view(6, l26);
	drv_op_c2(picture_win);
	shake_view(1, l26);
	goto Lb94c;
Lb939:
	if (l28 != 2) goto Lb94c;
	shake_view(7, l26);
Lb94c:
	goto Lb95e;
Lb94e:
	redraw_maze_view();
	if (l26 <= 0) goto Lb95e;
	play_sound(l26);
Lb95e:
	goto Lb986;
Lb960:
	if (l22 == 1) {
	shake_view(7, 3);
	} else {
	play_sound(4);
	}
	wait_animating_m(2);
Lb986:
	if ((unsigned)(g4fa8 + cell_event_index)[1440] > 0) {
	set_event_flags(2);
	}
}
