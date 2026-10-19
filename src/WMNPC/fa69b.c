extern int g43fc[];
extern int g527a;
extern int g54b4[];
extern int g56ee[];
extern int g57de[];
extern int g5856[];
fa69b(p4, p6)
{
	int l2;
	int l4;
	l2 = g54b4[p6];
	l4 = g5856[l2];
	if (*(long *)((char *)g43fc + (432 * p4)) >= *(long *)((char *)g57de + (l2 << 2))) goto La6f3;
	fa645(1503);
	return;
La6f3:
	if (f6a80(p4, l4, g56ee[l2]) != -1) goto La719;
	fa645(1505);
	goto La76d;
La719:
	;
#asm
la719:
	db 08bh,046h,0feh,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,08bh,087h,0deh,057h,08bh,097h,0e0h
	db 057h,050h,052h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,05ah,058h,029h,087h,0fch
	db 043h,019h,097h,0feh,043h,08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,0c7h,087h,056h,058h
	db 000h,000h
#endasm
	f5078(p4, g527a);
	f7f76(p4, 4, l4, 0, 0);
La76d:
	return;
}
