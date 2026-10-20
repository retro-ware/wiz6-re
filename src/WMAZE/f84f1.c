extern char g36e4[];
extern char g3717[];
extern char g50d8[];
extern char g50d9[];
extern char g50da[];
extern int g50ce;
extern int g50d0[];
extern int g50d2[];
extern int g50d4[];
extern int g50d6[];
add_view_object_m(p4, p6, p8, p10, p12, p14, p16)
char p10;
char p16;
{
	g50d8[(g50ce * 11)] = *(char *)&p4;
	*(int *)((char *)g50d0 + (g50ce * 11)) = p6;
	*(int *)((char *)g50d2 + (g50ce * 11)) = p8;
	if (p4 != 255) {
	*(int *)((char *)g50d0 + (g50ce * 11)) += (unsigned char)g36e4[((314 * p4) + ((unsigned char)p10 << 1))];
	*(int *)((char *)g50d2 + (g50ce * 11)) += (unsigned char)g3717[((314 * p4) + (unsigned char)p10)];
	}
	g50d9[(g50ce * 11)] = p10;
	*(int *)((char *)g50d4 + (g50ce * 11)) = p12;
	*(int *)((char *)g50d6 + (g50ce * 11)) = p14;
	g50da[(g50ce * 11)] = p16;
	g50ce++;
	if (g50ce < 30) goto L85cc;
L85c2:
	play_sound(0);
	goto L85c2;
L85cc:
	;
}
