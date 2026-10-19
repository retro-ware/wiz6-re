extern char g4326;
extern char g4330;
extern int anim_phase;
extern int g506a;
extern int g50c6[];
extern int g50f8;
extern int g50fc;
extern int g50fe[];
extern int g5132[];
extern int g5166;
extern int g5168;
extern int g516a;
extern int g5178;
extern int g517a[];
extern int g51ac;
extern int g51ae;
extern int g51b0;
extern int g51b2;
extern int g51b4;
extern int party_x;
extern int party_y;
extern int pclist_sex;
extern int picture_win;
/* Show an overhead map around the party, size by spell power, until a key. */
show_overhead_map(power)
{
	int col;
	int row;
	int win;
	int cols;
	int rows;
	int center;
	int waiting;
	cols = (power > 3 ? 5 : 3);
	rows = (power > 3 ? 5 : 3);
	center = (power > 3 ? 2 : 1);
	g51ac = (30 - (cols << 1));
	g51ae = 5;
	g5178 = ((power != 1) && (power != 4) ? 1 : -1);
	g50fc = ((power != 1) && (power != 4) ? 5 : -1);
#asm
	db 08bh,046h,004h,03dh,001h,000h,074h,005h,03dh,004h,000h,075h,005h
#endasm
L5c63:
	;
#asm
l5c63:
	db 0b8h,0ffh,0ffh,0ebh,015h
#endasm
L5c68:
	;
#asm
l5c68:
	db 08bh,046h,004h,03dh,002h,000h,074h,005h,03dh,005h,000h,075h,005h
#endasm
L5c75:
	;
#asm
l5c75:
	db 0b8h,005h,000h,0ebh,003h
#endasm
L5c7a:
	;
#asm
l5c7a:
	db 0b8h,006h,000h
#endasm
L5c7d:
	;
#asm
l5c7d:
	db 0a3h,06ch,051h,08bh,046h,004h,03dh,001h,000h,074h,005h,03dh,004h,000h,075h,005h
#endasm
L5c8d:
	;
#asm
l5c8d:
	db 0b8h,0ffh,0ffh,0ebh,015h
#endasm
L5c92:
	;
#asm
l5c92:
	db 08bh,046h,004h,03dh,002h,000h,074h,005h,03dh,005h,000h,075h,005h
#endasm
L5c9f:
	;
#asm
l5c9f:
	db 0b8h,005h,000h,0ebh,003h
#endasm
L5ca4:
	;
#asm
l5ca4:
	db 0b8h,007h,000h
#endasm
L5ca7:
	;
#asm
l5ca7:
	db 0a3h,06eh,051h,08bh,046h,004h,03dh,001h,000h,074h,005h,03dh,004h,000h,075h,005h
#endasm
L5cb7:
	;
#asm
l5cb7:
	db 0b8h,0ffh,0ffh,0ebh,015h
#endasm
L5cbc:
	;
#asm
l5cbc:
	db 08bh,046h,004h,03dh,002h,000h,074h,005h,03dh,005h,000h,075h,005h
#endasm
L5cc9:
	;
#asm
l5cc9:
	db 0b8h,005h,000h,0ebh,003h
#endasm
L5cce:
	;
#asm
l5cce:
	db 0b8h,008h,000h
#endasm
L5cd1:
	;
#asm
l5cd1:
	db 0a3h,070h,051h,08bh,046h,004h,03dh,001h,000h,074h,00ah,03dh,004h,000h,074h,005h
	db 0b8h,009h,000h,0ebh,003h
#endasm
L5ce6:
	;
#asm
l5ce6:
	db 0b8h,0ffh,0ffh
#endasm
L5ce9:
	;
#asm
l5ce9:
	db 0a3h,030h,051h,08bh,046h,004h,03dh,001h,000h,074h,005h,03dh,004h,000h,075h,005h
#endasm
L5cf9:
	;
#asm
l5cf9:
	db 0b8h,0ffh,0ffh,0ebh,015h
#endasm
L5cfe:
	;
#asm
l5cfe:
	db 08bh,046h,004h,03dh,002h,000h,074h,005h,03dh,005h,000h,075h,005h
#endasm
L5d0b:
	;
#asm
l5d0b:
	db 0b8h,009h,000h,0ebh,003h
#endasm
L5d10:
	;
#asm
l5d10:
	db 0b8h,00ah,000h
#endasm
L5d13:
	;
#asm
l5d13:
	db 0a3h,072h,051h,08bh,046h,004h,03dh,001h,000h,074h,005h,03dh,004h,000h,075h,005h
#endasm
L5d23:
	;
#asm
l5d23:
	db 0b8h,0ffh,0ffh,0ebh,015h
#endasm
L5d28:
	;
#asm
l5d28:
	db 08bh,046h,004h,03dh,002h,000h,074h,005h,03dh,005h,000h,075h,005h
#endasm
L5d35:
	;
#asm
l5d35:
	db 0b8h,009h,000h,0ebh,003h
#endasm
L5d3a:
	;
#asm
l5d3a:
	db 0b8h,00bh,000h
#endasm
L5d3d:
	;
#asm
l5d3d:
	db 0a3h,074h,051h,08bh,046h,004h,03dh,001h,000h,074h,005h,03dh,004h,000h,075h,005h
#endasm
L5d4d:
	;
#asm
l5d4d:
	db 0b8h,0ffh,0ffh,0ebh,015h
#endasm
L5d52:
	;
#asm
l5d52:
	db 08bh,046h,004h,03dh,002h,000h,074h,005h,03dh,005h,000h,075h,005h
#endasm
L5d5f:
	;
#asm
l5d5f:
	db 0b8h,009h,000h,0ebh,003h
#endasm
L5d64:
	;
#asm
l5d64:
	db 0b8h,00ch,000h
#endasm
L5d67:
	;
#asm
l5d67:
	db 0a3h,076h,051h
#endasm
	g51b2 = 13;
	pclist_sex = 14;
	g50f8 = 15;
	g5168 = 16;
#asm
	db 08bh,046h,004h,03dh,003h,000h,074h,005h,03dh,006h,000h,075h,005h
#endasm
L5d8f:
	;
#asm
l5d8f:
	db 0b8h,011h,000h,0ebh,003h
#endasm
L5d94:
	;
#asm
l5d94:
	db 0b8h,00dh,000h
#endasm
L5d97:
	;
#asm
l5d97:
	db 0a3h,064h,051h
#endasm
	g5166 = ((power == 3) || (power == 6) ? 18 : 13);
	g51b0 = 19;
	g516a = g5168;
	g51b4 = 20;
	for (col = 0; col < 5; col++) {
	for (row = 0; row < 5; row++) {
	*(int *)((char *)g50c6 + ((col * 10) + (row << 1))) = g51b2;
	*(int *)((char *)g50fe + ((col * 10) + (row << 1))) = -1;
	*(int *)((char *)g5132 + ((col * 10) + (row << 1))) = -1;
	*(int *)((char *)g517a + ((col * 10) + (row << 1))) = -1;
	}
	}
	load_monster_pic_dopt(0, 4);
	win = create_window(g51ac, g51ae, (cols << 1), (rows << 1), 20, -1, 2, 0);
	clear_click_flag();
	flush_keys();
	waiting = 1;
L5e5c:
	anim_phase = ((anim_phase + 1) % 2);
	draw_maze_view_dopt();
	drv_op_be(win, 0);
	draw_map_border(cols, rows);
	for (row = 0; row < rows; row++) {
	for (col = 0; col < cols; col++) {
	map_cell(((party_x + col) - center), ((party_y - row) + center), col, row);
	}
	}
	for (row = 0; row < rows; row++) {
	for (col = 0; col < cols; col++) {
	set_map_corner(col, row);
	}
	}
	for (row = 0; row < rows; row++) {
	for (col = 0; col < cols; col++) {
	draw_map_floor(col, row, *(int *)((char *)g50c6 + ((col * 10) + (row << 1))));
	}
	}
	for (row = 0; row < rows; row++) {
	for (col = 0; col < cols; col++) {
	draw_map_walls(col, row, *(int *)((char *)g50fe + ((col * 10) + (row << 1))), *(int *)((char *)g5132 + ((col * 10) + (row << 1))), *(int *)((char *)g517a + ((col * 10) + (row << 1))));
	}
	}
	draw_map_party(center, center, g51b4);
	drv_op_c2(picture_win);
	if (!check_screen_click()) goto L5fba;
	waiting = 0;
L5fba:
	if ((!key_available(1)) || ((char)get_key(1) != 13)) goto L5fd7;
	waiting = 0;
L5fd7:
	if (waiting) goto L5e5c;
	destroy_window(win, 0);
	redraw_maze_view();
	g506a = 0;
	g4330 = -1;
	g4326 = 0;
}
