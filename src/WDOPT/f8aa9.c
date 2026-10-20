extern char g36e4[];
extern char g3717[];
extern char g54aa[];
extern char g54ab[];
extern char g54ac[];
extern int g54a0;
extern int g54a2[];
extern int g54a4[];
extern int g54a6[];
extern int g54a8[];
/* Append a glyph to the view glyph queue. */
queue_view_glyph_dopt(p4, p6, p8, p10, p12, p14, p16)
char p10;
char p16;
{
	g54aa[(g54a0 * 11)] = *(char *)&p4;
	*(int *)((char *)g54a2 + (g54a0 * 11)) = p6;
	*(int *)((char *)g54a4 + (g54a0 * 11)) = p8;
	if (p4 != 255) {
	*(int *)((char *)g54a2 + (g54a0 * 11)) += (unsigned char)g36e4[((314 * p4) + ((unsigned char)p10 << 1))];
	*(int *)((char *)g54a4 + (g54a0 * 11)) += (unsigned char)g3717[((314 * p4) + (unsigned char)p10)];
	}
	g54ab[(g54a0 * 11)] = p10;
	*(int *)((char *)g54a6 + (g54a0 * 11)) = p12;
	*(int *)((char *)g54a8 + (g54a0 * 11)) = p14;
	g54ac[(g54a0 * 11)] = p16;
	g54a0++;
	if (g54a0 < 30) goto L8b84;
L8b7a:
	play_sound(0);
	goto L8b7a;
L8b84:
	;
}
