#asm
	extrn $ldv:near
#endasm
/* Draw a 3-glyph vertical gauge for cur/max at x, y. */
draw_gauge_mele(win, x, y, p10, p12, glyph)
{
	int level;
	char l3;
	char l4;
	char l5;
	char x5[1];
#asm
	db 08bh,046h,00ah,0bbh,064h,000h,0f7h,0ebh,050h,052h,08bh,046h,00ch,099h,08bh,0c8h
	db 08bh,0dah,05ah,058h
	call $ldv
	db 0b9h,00ah,000h,0bbh,000h,000h
	call $ldv
	db 040h,089h,046h,0feh,03dh,00ah,000h,07eh,005h
#endasm
	level = 10;
L5f09:
	if (p10) goto L5f14;
	level = 0;
L5f14:
	l5 = (char)(glyph + 9);
	l4 = (char)(glyph + 4);
	l3 = *(char *)&glyph;
	if (level > 3) goto L5f3d;
	l3 = (char)(glyph + level);
	goto L5f77;
L5f3d:
	l3 = (char)(glyph + 3);
	level += -3;
	if (level > 4) goto L5f5e;
	l4 = (char)((glyph + level) + 4);
	goto L5f77;
L5f5e:
	l4 = (char)(glyph + 8);
	level += -4;
	l5 = (char)((glyph + level) + 9);
L5f77:
	set_cursor(win, x, y);
	put_char_hi(win, (unsigned char)l5, 1);
	set_cursor(win, x, (y + 1));
	put_char_hi(win, (unsigned char)l4, 1);
	set_cursor(win, x, (y + 2));
	put_char_hi(win, (unsigned char)l3, 1);
}
