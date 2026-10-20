extern char g36e4[];
extern char g3717[];
extern char g51b2[];
extern char g51b3[];
extern char g51b4[];
extern int g51a8;
extern int g51aa[];
extern int g51ac[];
extern int g51ae[];
extern int g51b0[];
fdedc(p4, p6, p8, p10, p12, p14, p16)
char p10;
char p16;
{
	g51b2[(g51a8 * 11)] = *(char *)&p4;
	*(int *)((char *)g51aa + (g51a8 * 11)) = p6;
	*(int *)((char *)g51ac + (g51a8 * 11)) = p8;
	if (p4 != 255) {
	*(int *)((char *)g51aa + (g51a8 * 11)) += (unsigned char)g36e4[((314 * p4) + ((unsigned char)p10 << 1))];
	*(int *)((char *)g51ac + (g51a8 * 11)) += (unsigned char)g3717[((314 * p4) + (unsigned char)p10)];
	}
	g51b3[(g51a8 * 11)] = p10;
	*(int *)((char *)g51ae + (g51a8 * 11)) = p12;
	*(int *)((char *)g51b0 + (g51a8 * 11)) = p14;
	g51b4[(g51a8 * 11)] = p16;
	g51a8++;
	if (g51a8 < 30) goto Ldfb7;
Ldfad:
	play_sound(0);
	goto Ldfad;
Ldfb7:
	;
}
