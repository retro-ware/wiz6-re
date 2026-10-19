#asm
	extrn random_:near
#endasm
extern char pc_sex[];
extern int group_monster_rec;
extern int monster_groups[];
do_damage_effect(p4, p6, p8, p10, p12, p14, p16, p18, p20, p22)
{
	int l2;
	register int rsi;
	rsi = (44 * p6);
	if ((unsigned char)((char *)monster_groups[p4] + rsi)[34] >= p12) goto L7b83;
	if (!((char *)monster_groups[p4] + rsi)[43]) goto L7b88;
L7b83:
	return;
L7b88:
	if (p4) goto L7ba9;
	movmem(((432 * p6) + 17722), (group_monster_rec + 148), 14);
L7ba9:
	l2 = 0;
	if (!p10) goto L7bdd;
#asm
	db 0b8h,064h,000h,050h
	call random_
	db 059h,050h,08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08bh,076h,00ah
	db 08ah,080h,094h,000h,02ah,0e4h,08bh,0c8h,02bh,046h,00eh,08bh,0c8h,058h,03bh,0c1h
	db 07eh,05fh
#endasm
L7bdd:
	;
#asm
l7bdd:
	db 08ah,046h,00ch,050h,0b8h,02ch,000h,0f7h,06eh,006h,08bh,0f0h,08bh,046h,004h,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,088h,040h,022h
#endasm
	if (p12 < 3) goto L7c24;
	kill_combatant(p4, p6);
	if (p4) goto L7c24;
	l2 = ((unsigned char)pc_sex[(432 * p6)] + 8);
L7c24:
	f7a16(p4, p6, p8, 1, l2);
	goto L7c57;
L7c3c:
	if (p22 != 1) goto L7c57;
	f7a16(p4, p6, 3471, 0, 0);
L7c57:
	return;
}
