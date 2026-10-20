#asm
	extrn copy_far_:near
#endasm
extern char *maze_data;
extern char g4eea;
extern char g4eeb;
extern int g3304;
extern int g3306;
extern int g4fa8;
extern int party_cell_x;
extern int party_cell_y;
extern int party_level;
extern int party_x;
extern int party_y;
alloc_maze_buffers()
{
	if (!maze_data) {
	maze_data = malloc(g3304);
	g4eeb = 1;
	}
	if (!g4fa8) {
	g4fa8 = malloc(g3306);
	g4eea = 1;
	}
	if (g4eeb != 1) goto L45fe;
#asm
	db 0ffh,036h,004h,033h,0a1h,0aah,04fh,08ch,0dah,052h,050h,0a1h,03ch,036h,0d1h,0e0h
	db 0d1h,0e0h,08bh,0d8h,0ffh,0b7h,0d4h,007h,0ffh,0b7h,0d2h,007h
	call copy_far_
	db 083h,0c4h,00ah
#endasm
L45fe:
	if (g4eea != 1) goto L4627;
#asm
	db 0ffh,036h,006h,033h,0a1h,0a8h,04fh,08ch,0dah,052h,050h,0a1h,03ch,036h,0d1h,0e0h
	db 0d1h,0e0h,08bh,0d8h,0ffh,0b7h,00ch,008h,0ffh,0b7h,00ah,008h
	call copy_far_
	db 083h,0c4h,00ah
#endasm
L4627:
	g4eeb = 0;
	g4eea = 0;
	party_x = ((unsigned char)(maze_data + party_level)[480] + party_cell_x);
	party_y = ((unsigned char)(maze_data + party_level)[492] + party_cell_y);
}
