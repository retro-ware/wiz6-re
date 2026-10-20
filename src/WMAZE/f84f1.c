extern char g36e4[];
extern char g3717[];
extern char g50d8[];
extern char g50d9[];
extern int g50ce;
extern int g50d0[];
extern int g50d2[];
add_view_object_m(p4, p6, p8, p10)
char p10;
{
	g50d8[(g50ce * 11)] = *(char *)&p4;
#asm
	db 08bh,046h,006h,089h,087h,0d0h,050h,08bh,046h,008h,089h,087h,0d2h,050h
#endasm
	if (p4 != 255) {
	*(int *)((char *)g50d0 + (g50ce * 11)) += (unsigned char)g36e4[((314 * p4) + ((unsigned char)p10 << 1))];
	*(int *)((char *)g50d2 + (g50ce * 11)) += (unsigned char)g3717[((314 * p4) + (unsigned char)p10)];
	}
	g50d9[(g50ce * 11)] = p10;
#asm
	db 08bh,046h,00ch,089h,087h,0d4h,050h,08bh,046h,00eh,089h,087h,0d6h,050h,08ah,046h
	db 010h,088h,087h,0dah,050h
#endasm
	g50ce++;
	if (g50ce < 30) goto L85cc;
L85c2:
	play_sound(0);
	goto L85c2;
L85cc:
	;
}
