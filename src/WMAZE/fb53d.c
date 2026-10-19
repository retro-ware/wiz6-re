extern int cell_event_index;
extern int maze_data;
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
	register int rsi;
#asm
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,040h,002h,089h
	db 046h,0fah,08bh,000h,0b9h,000h,001h,099h,0f7h,0f9h,089h,046h,0e0h,08bh,000h,099h
	db 0f7h,0f9h,089h,056h,0e2h,08bh,080h,020h,001h,099h,0f7h,0f9h,089h,046h,0deh,08bh
	db 080h,020h,001h,099h,0f7h,0f9h,089h,056h,0dch,0a1h,09ah,04fh,02bh,046h,0deh,005h
	db 004h,000h,0b9h,004h,000h,099h,0f7h,0f9h,089h,056h,0e4h,083h,0fah,003h,075h,005h
#endasm
	l28 = -1;
Lb599:
	rsi = cell_event_index;
#asm
	db 08ah,080h,030h,006h,02ah,0e4h,089h,046h,0e6h
#endasm
	l14 = extract_bits(l6, 0, 3);
	l16 = extract_bits(l6, 3, 3);
	l12 = extract_bits(l6, 6, 4);
	l22 = extract_bits(l6, 10, 1);
	l24 = extract_bits(l6, 11, 1);
	l20 = extract_bits(l6, 12, 1);
#asm
	db 08bh,01eh,0aah,04fh,08bh,076h,0f4h,08ah,080h,0e0h,001h,02ah,0e4h,003h,046h,0f2h
	db 089h,046h,0f8h,08ah,080h,0ech,001h,02ah,0e4h,003h,046h,0f0h,089h,046h,0f6h
#endasm
	l18 = (l24 == 0 ? 1 : 2);
#asm
	db 0b9h,006h,000h,0d3h,0e6h,08bh,0c6h,08bh,04eh,0f0h,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h
	db 003h,0c1h,003h,046h,0f2h,089h,046h,0fch
#endasm
	if (!l20) goto Lb6a3;
	if (l22 != 1) goto Lb6a3;
	if (l28) goto Lb6a3;
	if (l24 != 1) goto Lb6a3;
	if (party_facing != l36) goto Lb696;
	animate_door(0, l32, l30, l26);
	goto Lb6a3;
Lb696:
	shake_view(7, l26);
Lb6a3:
	switch (l34) {
case 0:
	set_bitfield((maze_data + 96), l4, 2, l18);
	if (l22 != 1) goto Lb6f3;
	set_door_feature(l8, l10, 0, l24, 0);
	set_door_feature(l8, (l10 + 1), 2, l24, 0);
Lb6f3:
	goto Lb870;
case 1:
	set_bitfield((maze_data + 288), l4, 2, l18);
	if (l22 != 1) goto Lb743;
	set_door_feature(l8, l10, 1, l24, 0);
	set_door_feature((l8 + 1), l10, 3, l24, 0);
Lb743:
	goto Lb870;
case 2:
	if (l22 != 1) goto Lb779;
	set_door_feature(l8, l10, 2, l24, 0);
	set_door_feature(l8, (l10 - 1), 0, l24, 0);
Lb779:
	if (move_to_maze_cell_m(&l14, &l16, &l12, l8, (l10 - 1))) goto Lb7c7;
	l4 = (((l12 << 6) + (l16 << 3)) + l14);
	set_bitfield((maze_data + 96), l4, 2, l18);
Lb7c7:
	goto Lb870;
case 3:
	if (l22 != 1) goto Lb800;
	set_door_feature(l8, l10, 3, l24, 0);
	set_door_feature((l8 - 1), l10, 1, l24, 0);
Lb800:
	if (move_to_maze_cell_m(&l14, &l16, &l12, (l8 - 1), l10)) goto Lb84e;
	l4 = (((l12 << 6) + (l16 << 3)) + l14);
	set_bitfield((maze_data + 288), l4, 2, l18);
Lb84e:
	goto Lb870;
	}
Lb870:
	if (!l20) goto Lb960;
	if (l22 != 1) goto Lb94e;
	if (l28) goto Lb8bb;
	if (l24) goto Lb8bb;
	if (party_facing != l36) goto Lb8ab;
	animate_door(1, l32, l30, l26);
	goto Lb8b8;
Lb8ab:
	shake_view(7, l26);
Lb8b8:
	goto Lb94c;
Lb8bb:
	if (l28 != 1) goto Lb8c7;
	if (!l24) goto Lb8d3;
Lb8c7:
	if (l28 != -1) goto Lb8fa;
	if (l24 != 1) goto Lb8fa;
Lb8d3:
	draw_maze_view_m();
	shake_view(1, l26);
	drv_op_c2(picture_win);
	shake_view(6, l26);
	goto Lb94c;
Lb8fa:
	if (l28 != 1) goto Lb906;
	if (l24 == 1) goto Lb912;
Lb906:
	if (l28 != -1) goto Lb939;
	if (l24) goto Lb939;
Lb912:
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
	if (l22 != 1) goto Lb976;
	shake_view(7, 3);
	goto Lb97e;
Lb976:
	play_sound(4);
Lb97e:
	wait_animating_m(2);
Lb986:
	rsi = cell_event_index;
#asm
	db 08bh,01eh,0a8h,04fh,080h,0b8h,0a0h,005h,000h,076h,008h
#endasm
	set_event_flags(2);
Lb99d:
	;
}
