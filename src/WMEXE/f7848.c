extern char g433e[];
extern char g4348[];
extern int anim_cycle;
extern int g435c;
extern int g435e;
extern int g50fe[];
extern int group_monster_rec[];
extern int monster_groups[];
extern int party_count;
extern int view_pos_group[];
/* Mark a combatant dead and remove its sprite. */
kill_combatant(p4, p6)
{
	int l2;
	int l4;
	register int rsi;
	if (!p4) goto L7936;
	if (g435e) goto L7880;
	if (g435c < 0) goto L7880;
	if (g435c >= party_count) goto L7880;
#asm
	db 0b9h,0b0h,001h,0f7h,0e9h,08bh,0d8h,083h,087h,0f8h,043h,001h,083h,097h,0fah,043h
	db 000h
#endasm
L7880:
	if (!((unsigned char)(*(char **)((char *)group_monster_rec + (p4 << 1)))[220] & 1)) goto L78ab;
	set_bit(13464, (unsigned char)(*(char **)((char *)group_monster_rec + (p4 << 1)))[218], 1);
L78ab:
	rsi = (44 * p6);
	if (((char *)monster_groups[p4] + rsi)[42] == -1) goto L7936;
	l2 = (((char *)monster_groups[p4] + rsi)[42] / 10);
	l4 = (((char *)monster_groups[p4] + rsi)[42] % 10);
	anim_cycle = 0;
	*(int *)((char *)g50fe + ((l2 * 10) + (l4 << 1))) = 0;
	reset_animation();
	*(int *)((char *)view_pos_group + ((l2 * 10) + (l4 << 1))) = 0;
	g4348[((l2 * 5) + l4)] = 0;
	g433e[((l2 * 5) + l4)] = 0;
L7936:
	rsi = (44 * p6);
	((char *)monster_groups[p4] + rsi)[42] = 255;
	rsi = (44 * p6);
	((char *)monster_groups[p4] + rsi)[34] = 3;
	rsi = (44 * p6);
	*(int *)(((char *)monster_groups[p4] + rsi) + 2) = 0;
	rsi = (44 * p6);
	*(int *)(((char *)monster_groups[p4] + rsi) + 6) = 0;
	rsi = (44 * p6);
	((char *)monster_groups[p4] + rsi)[36] = 0;
	rsi = (44 * p6);
	((char *)monster_groups[p4] + rsi)[37] = 0;
	l2 = 0;
L79c7:
	;
#asm
l79c7:
	db 0b8h,02ch,000h,0f7h,06eh,006h,003h,046h,0feh,08bh,0f0h,08bh,046h,004h,0d1h,0e0h
	db 08bh,0d8h,08bh,09fh,0a8h,043h,0c6h,040h,018h,000h
#endasm
	l2++;
	if (l2 < 4) goto L79c7;
	if (p4 < 1) goto L7a11;
	if (p4 > 5) goto L7a11;
#asm
	db 08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08bh,047h,040h,08bh,057h
	db 042h,001h,006h,0c6h,043h,011h,016h,0c8h,043h
#endasm
L7a11:
	;
}
