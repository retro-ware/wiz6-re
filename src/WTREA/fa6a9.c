extern char g36e4[];
extern char g3717[];
extern char g531a[];
extern char g531b[];
extern int g5310;
extern int g5312[];
extern int g5314[];
add_view_object_t(p4, p6, p8, p10)
char p10;
{
	g531a[(g5310 * 11)] = *(char *)&p4;
#asm
	db 08bh,046h,006h,089h,087h,012h,053h,08bh,046h,008h,089h,087h,014h,053h
#endasm
	if (p4 != 255) {
	*(int *)((char *)g5312 + (g5310 * 11)) += (unsigned char)g36e4[((314 * p4) + ((unsigned char)p10 << 1))];
	*(int *)((char *)g5314 + (g5310 * 11)) += (unsigned char)g3717[((314 * p4) + (unsigned char)p10)];
	}
	g531b[(g5310 * 11)] = p10;
#asm
	db 08bh,046h,00ch,089h,087h,016h,053h,08bh,046h,00eh,089h,087h,018h,053h,08ah,046h
	db 010h,088h,087h,01ch,053h
#endasm
	g5310++;
	if (g5310 < 30) goto La784;
La77a:
	play_sound(0);
	goto La77a;
La784:
	;
}
