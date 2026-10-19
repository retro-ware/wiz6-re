#asm
	extrn add_skill_bonus_:near
#endasm
extern char g453a[];
extern char g4597[];
extern int pc_level[];
fcc36(p4)
{
	int l2;
	int l4;
	register int rsi;
	l2 = 0;
Lcc42:
	g453a[((432 * p4) + l2)] = 0;
	if (*(int *)((char *)pc_level + (432 * p4)) >= (unsigned char)g4597[(432 * p4)]) goto Lcc7e;
	l4 = ((unsigned)g4597[(432 * p4)] <= 16 ? ((unsigned char)g4597[(432 * p4)] - 1) : 16);
	goto Lcc90;
Lcc7e:
	l4 = (*(int *)((char *)pc_level + (432 * p4)) <= 16 ? (*(int *)((char *)pc_level + (432 * p4)) - 1) : 16);
Lcc90:
	;
#asm
lcc90:
	db 08bh,05eh,008h,08bh,076h,0feh,08ah,000h,098h,005h,0d0h,0ffh,0f7h,06eh,0fch,050h
	db 08bh,05eh,006h,08ah,000h,098h,08bh,0c8h,0d1h,0e0h,0d1h,0e0h,08bh,0c8h,058h,003h
	db 0c1h,005h,0fch,0feh,050h,056h,0ffh,076h,004h
	call add_skill_bonus_
	db 083h,0c4h,006h
#endasm
	l2++;
	if (l2 < 14) goto Lcc42;
}
