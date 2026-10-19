extern char *g43b8;
extern int g500e;
extern int g5010;
extern int g50b4[];
extern int main_window;
extern int view_anim_state;
/* Show the encounter view with monster sprites flashing in. */
show_encounter_view()
{
	int flash;
	int row;
	int col;
	int l8;
	int l10;
	if (g500e != 1) goto L6e57;
	get_message(2025, 20500);
	erase_window(main_window, 1);
	print_centered(main_window, 20500, 0, 18);
	g500e = 0;
L6e57:
	l8 = random(4);
	flash = 0;
L6e67:
	if (!random(8)) goto L6e7b;
	if (flash != l8) goto L6e8e;
L6e7b:
	if ((unsigned)g43b8[210] <= 0) goto L6e8e;
	play_sound(14);
L6e8e:
	view_anim_state = -2;
	animate_view_step();
	row = 0;
L6e9c:
	col = 0;
L6ea1:
	if ((col % 2) == 1) goto L6eb7;
#asm
	db 083h,07eh,0fah,000h,075h,01bh
#endasm
L6eb7:
	;
#asm
l6eb7:
	db 08bh,046h,004h,0d1h,0e0h,0d1h,0e0h,003h,046h,0feh,08bh,0d8h,08ah,087h,0c4h,000h
	db 02ah,0e4h,08bh,0c8h,0b8h,000h,000h,02bh,0c1h,0ebh,012h
l6ed2:
	db 08bh,046h,004h,0d1h,0e0h,0d1h,0e0h,003h,046h,0feh,08bh,0d8h,08ah,087h,0c4h,000h
	db 02ah,0e4h
l6ee4:
	db 089h,046h,0f6h
#endasm
	l10 = (*(int *)((char *)g50b4 + ((row * 10) + (col << 1))) == 1 ? l10 : 0);
	if (row) goto L6f27;
	if (col) goto L6f27;
	if (g5010 != 1) goto L6f27;
	l10 = 0;
L6f27:
	queue_monster_sprite(row, col, l10);
	col++;
	if (col < 5) goto L6ea1;
	row++;
	if (row < 2) goto L6e9c;
	view_anim_state = 0;
L6f58:
	animate_view_step();
	if (view_anim_state != -2) goto L6f58;
	flash++;
	if (flash < 4) goto L6e67;
	row = 0;
L6f75:
	col = 0;
L6f7a:
	*(int *)((char *)g50b4 + ((row * 10) + (col << 1))) = 0;
	col++;
	if (col < 5) goto L6f7a;
	row++;
	if (row < 2) goto L6f75;
	g5010 = 0;
}
