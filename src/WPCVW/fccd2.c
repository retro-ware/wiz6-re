extern char g4518[];
extern char g4591[];
extern char g4597[];
extern int pc_level[];
fccd2(p4, p6, p8, p10)
{
	int l2;
	if (*(int *)((char *)pc_level + (432 * p4)) < (unsigned char)g4597[(432 * p4)]) {
	l2 = ((unsigned)g4597[(432 * p4)] <= 20 ? (unsigned char)g4597[(432 * p4)] : 20);
	} else {
	l2 = (*(int *)((char *)pc_level + (432 * p4)) > 20 ? 20 : *(int *)((char *)pc_level + (432 * p4)));
	}
	g4591[(432 * p4)] = (char)((((unsigned char)g4518[(432 * p4)] / 6) + (((l2 + p8) - p10) / p8)) - 1);
#asm
	db 03ch,001h,073h,005h,0c6h,087h,091h,045h,001h
#endasm
Lcd41:
	;
#asm
lcd41:
	db 08ah,087h,091h,045h,02ah,0e4h,03bh,046h,006h,07eh,005h,08bh,046h,006h,0ebh,006h
#endasm
Lcd51:
	;
#asm
lcd51:
	db 08ah,087h,091h,045h,02ah,0e4h
#endasm
Lcd57:
	;
#asm
lcd57:
	db 088h,087h,091h,045h,08ah,087h,019h,045h,02ah,0e4h,0b9h,006h,000h,099h,0f7h,0f9h
	db 050h,08bh,046h,0feh,003h,046h,00ch,02bh,046h,00eh,099h,0f7h,07eh,00ch,08bh,0c8h
	db 058h,003h,0c1h,048h,088h,087h,092h,045h,03ch,001h,073h,005h,0c6h,087h,092h,045h
	db 001h
#endasm
Lcd88:
	;
#asm
lcd88:
	db 08ah,087h,092h,045h,02ah,0e4h,03bh,046h,006h,07eh,005h,08bh,046h,006h,0ebh,006h
#endasm
Lcd98:
	;
#asm
lcd98:
	db 08ah,087h,092h,045h,02ah,0e4h
#endasm
Lcd9e:
	;
#asm
lcd9e:
	db 088h,087h,092h,045h,08ah,087h,019h,045h,02ah,0e4h,003h,046h,0feh,088h,087h,093h
	db 045h
#endasm
}
