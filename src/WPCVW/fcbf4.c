extern char g453a[];
fcbf4(p4, p6, p8)
{
	int l2;
	l2 = ((unsigned char)g453a[((432 * p4) + p6)] + p8);
#asm
	db 0b8h,000h,000h,08bh,04eh,0feh,083h,0f9h,000h,07ch,00ch,08bh,0c1h,050h,03dh,07dh
	db 000h,058h,07eh,003h,0b8h,07dh,000h
#endasm
Lcc28:
	;
#asm
lcc28:
	db 089h,046h,0feh,08ah,046h,0feh,088h,087h,03ah,045h
#endasm
}
