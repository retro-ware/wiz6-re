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
	rsi = ((*(int *)pos + 1) % 12);
L8cef:
	if ((rdi = find_sprite_slot(rsi, p10, p12)) != -1) goto L8d22;
	rsi = ((rsi + 1) % 12);
	if (rsi != *(int *)pos) goto L8d20;
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
