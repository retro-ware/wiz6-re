#asm
	extrn play_sound_:near
#endasm
extern int maze_data;
change_walls_event()
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	int l14;
	int l16;
	int l18;
	register int rsi;
#asm
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,040h,002h,089h
	db 046h,0fch
#endasm
	l12 = extract_bits(l4, 0, 3);
	l14 = extract_bits(l4, 3, 3);
	l10 = extract_bits(l4, 6, 4);
	l16 = extract_bits(l4, 10, 1);
	l18 = extract_bits(l4, 11, 2);
#asm
	db 08bh,01eh,0aah,04fh,08bh,076h,0f6h,08ah,080h,0e0h,001h,02ah,0e4h,003h,046h,0f4h
	db 089h,046h,0fah,08ah,080h,0ech,001h,02ah,0e4h,003h,046h,0f2h,089h,046h,0f8h,08bh
	db 01eh,0a8h,04fh,08bh,036h,0e8h,04eh,08ah,080h,030h,006h,02ah,0e4h,089h,046h,0fch
#endasm
	l2 = (((l10 << 6) + (l14 << 3)) + l12);
	set_bitfield((maze_data + 96), l2, 2, fa68e(l4, 0));
	set_bitfield((maze_data + 288), l2, 2, fa68e(l4, 1));
	if (move_to_maze_cell_m(&l12, &l14, &l10, l6, (l8 - 1))) goto La808;
	l2 = (((l10 << 6) + (l14 << 3)) + l12);
	set_bitfield((maze_data + 96), l2, 2, fa68e(l4, 2));
La808:
	if (move_to_maze_cell_m(&l12, &l14, &l10, (l6 - 1), l8)) goto La861;
	l2 = (((l10 << 6) + (l14 << 3)) + l12);
	set_bitfield((maze_data + 288), l2, 2, fa68e(l4, 3));
La861:
	if (l16 != 1) goto La86a;
	redraw_maze_view();
La86a:
	;
#asm
la86a:
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,083h,038h,000h,07eh,006h
	db 0ffh,030h
	call play_sound_
	db 059h
#endasm
La880:
	set_event_flags(l18);
}
