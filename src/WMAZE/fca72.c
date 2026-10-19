#asm
	extrn fca32_:near
	extrn play_sound_:near
#endasm
extern int maze_data;
extern int party_cell_x;
extern int party_cell_y;
extern int party_facing;
extern int party_level;
fca72()
{
	char x0[2];
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	int l14;
	register int rsi;
#asm
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,040h,002h,089h
	db 046h,0feh
#endasm
	l10 = party_cell_x;
	l12 = party_cell_y;
	l8 = party_level;
#asm
	db 08bh,01eh,0aah,04fh,08bh,0f0h,08ah,080h,0e0h,001h,02ah,0e4h,003h,046h,0f6h,089h
	db 046h,0fch,08ah,080h,0ech,001h,02ah,0e4h,003h,046h,0f4h,089h,046h,0fah,0b9h,006h
	db 000h,0d3h,0e6h,08bh,0c6h,08bh,04eh,0f4h,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h,003h,0c1h
	db 003h,046h,0f6h,089h,046h,0f2h
#endasm
	switch (party_facing) {
case 0:
	set_bitfield((maze_data + 96), l14, 2, 1);
	goto Lcbce;
case 1:
	set_bitfield((maze_data + 288), l14, 2, 1);
	goto Lcbce;
case 2:
	if (move_to_maze_cell_m(&l10, &l12, &l8, l4, (l6 - 1))) goto Lcb5e;
	l14 = (((l8 << 6) + (l12 << 3)) + l10);
	set_bitfield((maze_data + 96), l14, 2, 1);
Lcb5e:
	goto Lcbce;
case 3:
	if (move_to_maze_cell_m(&l10, &l12, &l8, (l4 - 1), l6)) goto Lcbaf;
	l14 = (((l8 << 6) + (l12 << 3)) + l10);
	set_bitfield((maze_data + 288), l14, 2, 1);
Lcbaf:
	goto Lcbce;
	}
Lcbce:
	set_door_feature(l4, l6, 0, 0, 1);
	redraw_maze_view();
#asm
	db 0b8h,004h,000h,050h
	call play_sound_
	db 059h,0a1h,09ah,04fh,0d1h,0e0h,005h,008h,000h,050h,08bh,04eh,004h,0d1h,0e1h,0a1h
	db 0a8h,04fh,003h,0c1h,005h,040h,002h,050h
	call fca32_
	db 083h,0c4h,004h
#endasm
}
