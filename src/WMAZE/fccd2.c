#asm
	extrn extract_bits_:near
#endasm
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
	register int rsi;
	l2 = (((party_level << 6) + (party_cell_y << 3)) + party_cell_x);
	if (get_bitfield((maze_data + 504), l2, 4) != 5) goto Lcd46;
	if (get_bitfield((maze_data + 888), l2, 2) != party_facing) goto Lcd46;
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
	;
#asm
lcd5b:
	db 08bh,01eh,0a8h,04fh,08bh,036h,09ch,04fh,08ah,080h,0c0h,006h,02ah,0e4h,089h,046h
	db 0fch
#endasm
Lcd6c:
	if ((l4 = f7bd2(party_cell_x, party_cell_y, party_level, l4)) == -1) goto Lcddf;
#asm
	db 08bh,01eh,0a8h,04fh,08bh,0f0h,080h,0b8h,060h,003h,007h,075h,02ah,0b8h,002h,000h
	db 050h,0a1h,09ah,04fh,0d1h,0e0h,005h,008h,000h,050h,0d1h,0e6h,0ffh,0b0h,040h,002h
	call extract_bits_
	db 083h,0c4h,006h,03dh,002h,000h,075h,00ch
#endasm
	fca72(l4);
	return;
Lcdc0:
	;
#asm
lcdc0:
	db 08bh,01eh,0a8h,04fh,08bh,076h,0fch,080h,0b8h,060h,003h,008h,075h,00ch
#endasm
	if (try_flag_event_at(rsi) != 1) goto Lcdda;
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
