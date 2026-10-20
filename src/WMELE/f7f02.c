extern char g36e4[];
extern char g3717[];
extern char g51b0[];
extern char g51b1[];
extern char g51b2[];
extern int g51a8[];
extern int g51aa[];
extern int g51ac[];
extern int g51ae[];
extern int view_glyph_count;
/* Append a glyph to the view glyph queue. */
queue_view_glyph(p4, p6, p8, p10, p12, p14, p16)
char p10;
char p16;
{
	g51b0[(view_glyph_count * 11)] = *(char *)&p4;
	*(int *)((char *)g51a8 + (view_glyph_count * 11)) = p6;
	*(int *)((char *)g51aa + (view_glyph_count * 11)) = p8;
	if (p4 != 255) {
	*(int *)((char *)g51a8 + (view_glyph_count * 11)) += (unsigned char)g36e4[((314 * p4) + ((unsigned char)p10 << 1))];
	*(int *)((char *)g51aa + (view_glyph_count * 11)) += (unsigned char)g3717[((314 * p4) + (unsigned char)p10)];
	}
	g51b1[(view_glyph_count * 11)] = p10;
	*(int *)((char *)g51ac + (view_glyph_count * 11)) = p12;
	*(int *)((char *)g51ae + (view_glyph_count * 11)) = p14;
	g51b2[(view_glyph_count * 11)] = p16;
	view_glyph_count++;
	if (view_glyph_count < 30) goto L7fdd;
L7fd3:
	play_sound(0);
	goto L7fd3;
L7fdd:
	;
}
