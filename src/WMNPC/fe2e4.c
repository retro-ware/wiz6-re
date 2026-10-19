extern char g36e4[];
extern char g3717[];
extern char g6b3c[];
extern char g6b3d[];
extern int g6b32;
extern int g6b34[];
extern int g6b36[];
fe2e4(p4, p6, p8, p10)
char p10;
{
	g6b3c[(g6b32 * 11)] = *(char *)&p4;
#asm
	db 08bh,046h,006h,089h,087h,034h,06bh,08bh,046h,008h,089h,087h,036h,06bh
#endasm
	if (p4 == 255) goto Le37a;
	*(int *)((char *)g6b34 + (g6b32 * 11)) += (unsigned char)g36e4[((314 * p4) + ((unsigned char)p10 << 1))];
	*(int *)((char *)g6b36 + (g6b32 * 11)) += (unsigned char)g3717[((314 * p4) + (unsigned char)p10)];
Le37a:
	g6b3d[(g6b32 * 11)] = p10;
#asm
	db 08bh,046h,00ch,089h,087h,038h,06bh,08bh,046h,00eh,089h,087h,03ah,06bh,08ah,046h
	db 010h,088h,087h,03eh,06bh
#endasm
	g6b32++;
	if (g6b32 < 30) goto Le3bf;
Le3b5:
	play_sound(0);
	goto Le3b5;
Le3bf:
	;
}
