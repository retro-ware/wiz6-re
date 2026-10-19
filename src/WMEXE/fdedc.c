extern char g36e4[];
extern char g3717[];
extern char g51b2[];
extern char g51b3[];
extern int g51a8;
extern int g51aa[];
extern int g51ac[];
fdedc(p4, p6, p8, p10)
char p10;
{
	g51b2[(g51a8 * 11)] = *(char *)&p4;
#asm
	db 08bh,046h,006h,089h,087h,0aah,051h,08bh,046h,008h,089h,087h,0ach,051h
#endasm
	if (p4 == 255) goto Ldf72;
	*(int *)((char *)g51aa + (g51a8 * 11)) += (unsigned char)g36e4[((314 * p4) + ((unsigned char)p10 << 1))];
	*(int *)((char *)g51ac + (g51a8 * 11)) += (unsigned char)g3717[((314 * p4) + (unsigned char)p10)];
Ldf72:
	g51b3[(g51a8 * 11)] = p10;
#asm
	db 08bh,046h,00ch,089h,087h,0aeh,051h,08bh,046h,00eh,089h,087h,0b0h,051h,08ah,046h
	db 010h,088h,087h,0b4h,051h
#endasm
	g51a8++;
	if (g51a8 < 30) goto Ldfb7;
Ldfad:
	f0aaa(0);
	goto Ldfad;
Ldfb7:
	;
}
