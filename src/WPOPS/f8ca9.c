extern char *maze_data;
extern int g4fa6;
move_to_maze_cell(p4, p6, pos, p10, p12)
char *p4;
char *p6;
char *pos;
{
	register int rsi;
	register int rdi;
	if (((rdi = find_sprite_slot(*(int *)pos, p10, p12)) != -1) || ((rdi = find_sprite_slot(g4fa6, p10, p12)) != -1)) goto L8d22;
#asm
	db 08bh,05eh,008h,08bh,007h,040h,0b9h,00ch,000h,099h,0f7h,0f9h,08bh,0f2h
#endasm
L8cef:
	if ((rdi = find_sprite_slot(rsi, p10, p12)) != -1) goto L8d22;
#asm
	db 08bh,0c6h,040h,0b9h,00ch,000h,099h,0f7h,0f9h,08bh,0f2h,08bh,05eh,008h,03bh,037h
	db 075h,009h
#endasm
	return 1;
L8d20:
	goto L8cef;
L8d22:
	*(int *)p4 = (p10 - (unsigned char)(maze_data + rdi)[480]);
	*(int *)p6 = (p12 - (unsigned char)(maze_data + rdi)[492]);
	*(int *)pos = rdi;
	g4fa6 = rdi;
	return 0;
}
