extern char g36e4[];
extern char g3717[];
extern char g5112[];
extern char g5113[];
extern int g5108;
extern int g510a[];
extern int g510c[];
f967f(p4, p6, p8, p10)
char p10;
{
	g5112[(g5108 * 11)] = *(char *)&p4;
#asm
	db 08bh,046h,006h,089h,087h,00ah,051h,08bh,046h,008h,089h,087h,00ch,051h
#endasm
	if (p4 == 255) goto L9715;
	*(int *)((char *)g510a + (g5108 * 11)) += (unsigned char)g36e4[((314 * p4) + ((unsigned char)p10 << 1))];
	*(int *)((char *)g510c + (g5108 * 11)) += (unsigned char)g3717[((314 * p4) + (unsigned char)p10)];
L9715:
	g5113[(g5108 * 11)] = p10;
#asm
	db 08bh,046h,00ch,089h,087h,00eh,051h,08bh,046h,00eh,089h,087h,010h,051h,08ah,046h
	db 010h,088h,087h,014h,051h
#endasm
	g5108++;
	if (g5108 < 30) goto L975a;
L9750:
	f0aaa(0);
	goto L9750;
L975a:
	;
}
