extern char *maze_data;
extern int g4fa6;
/* Find the next free sprite slot after *slot that passes the visibility test. */
next_sprite_slot_dopt(p4, p6, p8, p10, p12)
char *p4;
char *p6;
char *p8;
{
	register int rsi;
	register int rdi;
	if (((rdi = f8096(*(int *)p8, p10, p12)) != -1) || ((rdi = f8096(g4fa6, p10, p12)) != -1)) goto L814c;
#asm
	db 08bh,05eh,008h,08bh,007h,040h,0b9h,00ch,000h,099h,0f7h,0f9h,08bh,0f2h
#endasm
L8119:
	if ((rdi = f8096(rsi, p10, p12)) != -1) goto L814c;
#asm
	db 08bh,0c6h,040h,0b9h,00ch,000h,099h,0f7h,0f9h,08bh,0f2h,08bh,05eh,008h,03bh,037h
	db 075h,009h
#endasm
	return 1;
L814a:
	goto L8119;
L814c:
	*(int *)p4 = (p10 - (unsigned char)(maze_data + rdi)[480]);
	*(int *)p6 = (p12 - (unsigned char)(maze_data + rdi)[492]);
	*(int *)p8 = rdi;
	g4fa6 = rdi;
	return 0;
}
