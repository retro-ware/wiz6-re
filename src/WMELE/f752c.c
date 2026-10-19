extern char *maze_data;
extern int g4fa6;
/* Find the next free sprite slot after *slot that passes the visibility test. */
next_sprite_slot(p4, p6, p8, p10, p12)
char *p4;
char *p6;
char *p8;
{
	register int rsi;
	register int rdi;
	if (((rdi = f74ef(*(int *)p8, p10, p12)) != -1) || ((rdi = f74ef(g4fa6, p10, p12)) != -1)) goto L75a5;
	rsi = ((*(int *)p8 + 1) % 12);
L7572:
	if ((rdi = f74ef(rsi, p10, p12)) != -1) goto L75a5;
	rsi = ((rsi + 1) % 12);
	if (rsi != *(int *)p8) goto L75a3;
	return 1;
L75a3:
	goto L7572;
L75a5:
	*(int *)p4 = (p10 - (unsigned char)(maze_data + rdi)[480]);
	*(int *)p6 = (p12 - (unsigned char)(maze_data + rdi)[492]);
	*(int *)p8 = rdi;
	g4fa6 = rdi;
	return 0;
}
