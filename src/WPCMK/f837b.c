extern char g55c2[];
f837b(p4, p6)
{
	int l2;
	l2 = ((unsigned char)g55c2[p4] + p6);
#asm
	db 0b8h,000h,000h,08bh,04eh,0feh,083h,0f9h,000h,07ch,00ch,08bh,0c1h,050h,03dh,07dh
	db 000h,058h,07eh,003h,0b8h,07dh,000h
#endasm
L83a7:
	;
#asm
l83a7:
	db 089h,046h,0feh,08ah,046h,0feh,088h,087h,0c2h,055h
#endasm
}
