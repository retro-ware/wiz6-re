extern int g4fa6;
move_to_maze_cell(p4, p6, pos, p10, p12)
char *pos;
{
	register int rsi;
	register int rdi;
	rdi = find_sprite_slot(*(int *)pos, p10, p12);
#asm
	db 08bh,0c7h,03dh,0ffh,0ffh,075h,05ah
#endasm
	rdi = find_sprite_slot(g4fa6, p10, p12);
#asm
	db 08bh,0c7h,03dh,0ffh,0ffh,075h,041h
#endasm
	rsi = ((*(int *)pos + 1) % 12);
L8cef:
	rdi = find_sprite_slot(rsi, p10, p12);
#asm
	db 08bh,0c7h,03dh,0ffh,0ffh,075h,01dh
#endasm
	rsi = ((rsi + 1) % 12);
	if (rsi != *(int *)pos) goto L8d20;
	return 1;
L8d20:
	goto L8cef;
L8d22:
	;
#asm
l8d22:
	db 08bh,046h,00ah,050h,08bh,01eh,0aah,04fh,08ah,081h,0e0h,001h,02ah,0e4h,08bh,0c8h
	db 058h,02bh,0c1h,08bh,05eh,004h,089h,007h,08bh,046h,00ch,050h,08bh,01eh,0aah,04fh
	db 08ah,081h,0ech,001h,02ah,0e4h,08bh,0c8h,058h,02bh,0c1h,08bh,05eh,006h,089h,007h
#endasm
	*(int *)pos = rdi;
	g4fa6 = rdi;
	return 0;
}
