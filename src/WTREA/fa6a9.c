extern char g36e4[];
extern char g3717[];
extern char g531a[];
extern char g531b[];
extern char g531c[];
extern int g5310;
extern int g5312[];
extern int g5314[];
extern int g5316[];
extern int g5318[];
add_view_object_t(p4, p6, p8, p10, p12, p14, p16)
char p10;
char p16;
{
	g531a[(g5310 * 11)] = *(char *)&p4;
	*(int *)((char *)g5312 + (g5310 * 11)) = p6;
	*(int *)((char *)g5314 + (g5310 * 11)) = p8;
	if (p4 != 255) {
	*(int *)((char *)g5312 + (g5310 * 11)) += (unsigned char)g36e4[((314 * p4) + ((unsigned char)p10 << 1))];
	*(int *)((char *)g5314 + (g5310 * 11)) += (unsigned char)g3717[((314 * p4) + (unsigned char)p10)];
	}
	g531b[(g5310 * 11)] = p10;
	*(int *)((char *)g5316 + (g5310 * 11)) = p12;
	*(int *)((char *)g5318 + (g5310 * 11)) = p14;
	g531c[(g5310 * 11)] = p16;
	g5310++;
	if (g5310 < 30) goto La784;
La77a:
	play_sound(0);
	goto La77a;
La784:
	;
}
