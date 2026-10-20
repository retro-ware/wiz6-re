extern char g36e4[];
extern char g3717[];
extern char g54aa[];
extern char g54ab[];
extern int g54a0;
extern int g54a2[];
extern int g54a4[];
/* Append a glyph to the view glyph queue. */
queue_view_glyph_dopt(p4, p6, p8, p10)
char p10;
{
	g54aa[(g54a0 * 11)] = *(char *)&p4;
#asm
	db 08bh,046h,006h,089h,087h,0a2h,054h,08bh,046h,008h,089h,087h,0a4h,054h
#endasm
	if (p4 != 255) {
	*(int *)((char *)g54a2 + (g54a0 * 11)) += (unsigned char)g36e4[((314 * p4) + ((unsigned char)p10 << 1))];
	*(int *)((char *)g54a4 + (g54a0 * 11)) += (unsigned char)g3717[((314 * p4) + (unsigned char)p10)];
	}
	g54ab[(g54a0 * 11)] = p10;
#asm
	db 08bh,046h,00ch,089h,087h,0a6h,054h,08bh,046h,00eh,089h,087h,0a8h,054h,08ah,046h
	db 010h,088h,087h,0ach,054h
#endasm
	g54a0++;
	if (g54a0 < 30) goto L8b84;
L8b7a:
	play_sound(0);
	goto L8b7a;
L8b84:
	;
}
