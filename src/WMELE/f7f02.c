extern char g36e4[];
extern char g3717[];
extern char g51b0[];
extern char g51b1[];
extern int g51a6;
extern int g51a8[];
extern int g51aa[];
f7f02(p4, p6, p8, p10)
char p10;
{
	g51b0[(g51a6 * 11)] = *(char *)&p4;
#asm
	db 08bh,046h,006h,089h,087h,0a8h,051h,08bh,046h,008h,089h,087h,0aah,051h
#endasm
	if (p4 == 255) goto L7f98;
	*(int *)((char *)g51a8 + (g51a6 * 11)) += (unsigned char)g36e4[((314 * p4) + ((unsigned char)p10 << 1))];
	*(int *)((char *)g51aa + (g51a6 * 11)) += (unsigned char)g3717[((314 * p4) + (unsigned char)p10)];
L7f98:
	g51b1[(g51a6 * 11)] = p10;
#asm
	db 08bh,046h,00ch,089h,087h,0ach,051h,08bh,046h,00eh,089h,087h,0aeh,051h,08ah,046h
	db 010h,088h,087h,0b2h,051h
#endasm
	g51a6++;
	if (g51a6 < 30) goto L7fdd;
L7fd3:
	f0aaa(0);
	goto L7fd3;
L7fdd:
	;
}
