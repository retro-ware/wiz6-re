extern char *maze_data;
extern int g4fa6;
move_to_maze_cell_m(p4, p6, p8, p10, p12)
char *p4;
char *p6;
char *p8;
{
	register int rsi;
	register int rdi;
	if ((rdi = f7ade(*(int *)p8, p10, p12)) != -1) goto L7b94;
	if ((rdi = f7ade(g4fa6, p10, p12)) != -1) goto L7b94;
	rsi = ((*(int *)p8 + 1) % 12);
L7b61:
	if ((rdi = f7ade(rsi, p10, p12)) != -1) goto L7b94;
	rsi = ((rsi + 1) % 12);
	if (rsi != *(int *)p8) goto L7b92;
	return 1;
L7b92:
	goto L7b61;
L7b94:
	*(int *)p4 = (p10 - (unsigned char)(maze_data + rdi)[480]);
	*(int *)p6 = (p12 - (unsigned char)(maze_data + rdi)[492]);
	*(int *)p8 = rdi;
	g4fa6 = rdi;
	return 0;
}
