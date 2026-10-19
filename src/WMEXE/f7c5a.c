#asm
	extrn f5eea_:near
	extrn f7af7_:near
	extrn random_:near
	extrn roll_dice_x_:near
#endasm
extern int group_monster_rec;
extern int monster_groups[];
do_status_effect(p4, p6, p8, p10, p12, p14, p16, p18, p20, p22, p24)
{
	char x0[6];
	register int rsi;
	register int rdi;
	rsi = (44 * p6);
	if ((unsigned)((char *)monster_groups[p4] + rsi)[34] >= 2) goto L7c81;
	if (!((char *)monster_groups[p4] + rsi)[43]) goto L7c87;
L7c81:
	return;
L7c87:
	if (p4) goto L7ca8;
	movmem(((432 * p6) + 17722), (group_monster_rec + 148), 14);
L7ca8:
	;
#asm
l7ca8:
	db 0ffh,076h,014h,0ffh,076h,012h,0ffh,076h,010h
	call f5eea_
	db 083h,0c4h,006h,08bh,0c8h,083h,0ech,004h,08bh,0c4h,08ch,0d2h,08eh,0c2h,08bh,0f1h
	db 08bh,0f8h,0a5h,0a5h
	call roll_dice_x_
	db 083h,0c4h,004h,089h,046h,0fah,0ffh,076h,00eh,0ffh,076h,00ah,050h,0ffh,076h,004h
	call f7af7_
	db 083h,0c4h,008h,089h,046h,0fah,03dh,000h,000h,07fh,003h
#endasm
	goto L7dbe;
L7cec:
	;
#asm
l7cec:
	db 0b8h,064h,000h,050h
	call random_
	db 059h,050h,08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08bh,076h,00ah
	db 08ah,080h,094h,000h,02ah,0e4h,08bh,0c8h,02bh,046h,00eh,08bh,0c8h,058h,03bh,0c1h
	db 07fh,003h
#endasm
	goto L7dbe;
L7d18:
	if (p20 != 255) goto L7d3b;
#asm
	db 0b8h,02ch,000h,0f7h,06eh,006h,003h,046h,00ch,08bh,0f0h,08bh,046h,004h,0d1h,0e0h
	db 08bh,0d8h,08bh,09fh,0a8h,043h,0c6h,040h,00eh,0ffh
#endasm
	goto L7d84;
L7d3b:
	;
#asm
l7d3b:
	db 0b8h,02ch,000h,0f7h,06eh,006h,003h,046h,00ch,08bh,0f0h,08bh,046h,004h,0d1h,0e0h
	db 08bh,0d8h,08bh,09fh,0a8h,043h,08ah,040h,00eh,02ah,0e4h,003h,046h,0fah,03dh,0fah
	db 000h,07eh,006h,0c6h,040h,00eh,0fah
#endasm
	goto L7d84;
L7d64:
	;
#asm
l7d64:
	db 08ah,046h,0fah,050h,0b8h,02ch,000h,0f7h,06eh,006h,08bh,0c8h,003h,046h,00ch,08bh
	db 0f0h,08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,000h,040h,00eh
#endasm
L7d84:
	if (p12 != 5) goto L7da5;
#asm
	db 08ah,046h,014h,050h,0b8h,02ch,000h,0f7h,06eh,006h,08bh,0f0h,08bh,046h,004h,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,088h,040h,023h
#endasm
L7da5:
	f7a16(p4, p6, p8, 1, 0);
	goto L7dd9;
L7dbe:
	if (p24 != 1) goto L7dd9;
	f7a16(p4, p6, 3471, 0, 0);
L7dd9:
	return;
}
