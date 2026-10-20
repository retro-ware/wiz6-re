extern char g36e4[];
extern char g3717[];
extern char g6b3c[];
extern char g6b3d[];
extern char g6b3e[];
extern int g6b32;
extern int g6b34[];
extern int g6b36[];
extern int g6b38[];
extern int g6b3a[];
fe2e4(p4, p6, p8, p10, p12, p14, p16)
char p10;
char p16;
{
	g6b3c[(g6b32 * 11)] = *(char *)&p4;
	*(int *)((char *)g6b34 + (g6b32 * 11)) = p6;
	*(int *)((char *)g6b36 + (g6b32 * 11)) = p8;
	if (p4 != 255) {
	*(int *)((char *)g6b34 + (g6b32 * 11)) += (unsigned char)g36e4[((314 * p4) + ((unsigned char)p10 << 1))];
	*(int *)((char *)g6b36 + (g6b32 * 11)) += (unsigned char)g3717[((314 * p4) + (unsigned char)p10)];
	}
	g6b3d[(g6b32 * 11)] = p10;
	*(int *)((char *)g6b38 + (g6b32 * 11)) = p12;
	*(int *)((char *)g6b3a + (g6b32 * 11)) = p14;
	g6b3e[(g6b32 * 11)] = p16;
	g6b32++;
	if (g6b32 < 30) goto Le3bf;
Le3b5:
	play_sound(0);
	goto Le3b5;
Le3bf:
	;
}
