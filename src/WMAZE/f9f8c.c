#asm
	extrn show_maze_message_:near
#endasm
extern int g4f8c;
extern int g4f8e;
extern int g4f90;
extern int g4f92;
extern int g4f94;
extern int g4f96;
extern int g5232;
extern int main_window;
extern int message_delay;
extern int party_cell_x;
extern int party_cell_y;
extern int party_facing;
extern int party_level;
extern int party_x;
extern int party_y;
f9f8c()
{
	int l2;
	int l4;
	int l12[4];
	int l14;
	int l16;
	int l18;
	int l20;
	int l22;
	int l24;
	int l26;
	int l28;
	int l30;
	register int rsi;
#asm
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,083h,038h,000h,07eh,01ch
	db 0ffh,030h
	call show_maze_message_
	db 059h
#endasm
	wait_animating_m(message_delay);
	erase_window(main_window, 1);
L9fbf:
	;
#asm
l9fbf:
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,020h,001h,089h
	db 046h,0e2h,08bh,080h,040h,002h,089h,046h,0f2h
#endasm
	l2 = 0;
L9fdd:
	l12[l2] = extract_bits(l14, (l2 + 8), 1);
	l2++;
	if (l2 < 4) goto L9fdd;
	l16 = extract_bits(l14, 0, 8);
#asm
	db 08bh,01eh,0a8h,04fh,08bh,036h,0e8h,04eh,08ah,080h,030h,006h,02ah,0e4h,089h,046h
	db 0eeh
#endasm
	l24 = extract_bits(l14, 12, 1);
	l26 = (extract_bits(l14, 13, 1) == 1 ? 1 : -1);
	l28 = extract_bits(l14, 14, 1);
	l2 = 0;
	goto La1a8;
La07e:
	l22 = f9f54(l12);
	if (l24 != 1) goto La0f7;
	if (l22 == party_facing) goto La0f7;
	if (l26 != 1) goto La0ad;
	l20 = (((l22 - party_facing) + 4) % 4);
	goto La0bf;
La0ad:
	l20 = (((party_facing - l22) + 4) % 4);
La0bf:
	if (l18) goto La0c8;
	l20--;
La0c8:
	l4 = 0;
	goto La0ef;
La0cf:
	wait_animating_m(l30);
	party_facing = (((party_facing + l26) + 4) % 4);
	redraw_maze_view();
	l4++;
La0ef:
	if (l4 < l20) goto La0cf;
La0f7:
	wait_animating_m(l30);
	party_facing = l22;
	if (l18 <= 0) goto La1a2;
	g4f96 = party_x;
	g4f94 = party_y;
	g4f92 = party_cell_x;
	g4f90 = party_cell_y;
	g4f8e = party_level;
	g4f8c = party_facing;
	if (l28 != 1) goto La14c;
	step_position(party_facing, (random(l18) + 1));
	goto La159;
La14c:
	step_position(party_facing, l18);
La159:
	if (move_to_maze_cell_m(20384, 20382, 20380, party_x, party_y) != 1) goto La18b;
	kill_party(2022, 4);
	return;
La18b:
	;
#asm
la18b:
	db 08bh,01eh,0a8h,04fh,08bh,036h,09ch,04fh,08ah,080h,0c0h,006h,02ah,0e4h,0a3h,0e8h
	db 04eh
#endasm
	g5232 = 0;
La1a2:
	redraw_maze_view();
	l2++;
La1a8:
	if (l2 < l16) goto La07e;
	wait_animating_m(l30);
	return;
}
