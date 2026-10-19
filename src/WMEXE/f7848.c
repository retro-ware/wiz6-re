extern char g433e[];
extern char g4348[];
extern int anim_cycle;
extern int g435c;
extern int g435e;
extern int g43f8[];
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
	if (!p4) goto L7936;
	if (((g435e) || (g435c < 0)) || (g435c >= party_count)) goto L7880;
	*(long *)((char *)g43f8 + (g435c * 432)) += 1L;
L7880:
	if (!((unsigned char)(*(char **)((char *)group_monster_rec + (p4 << 1)))[220] & 1)) goto L78ab;
	set_bit(13464, (unsigned char)(*(char **)((char *)group_monster_rec + (p4 << 1)))[218], 1);
L78ab:
	if (((char *)monster_groups[p4] + (44 * p6))[42] == -1) goto L7936;
	l2 = (((char *)monster_groups[p4] + (44 * p6))[42] / 10);
	l4 = (((char *)monster_groups[p4] + (44 * p6))[42] % 10);
	anim_cycle = 0;
	*(int *)((char *)g50fe + ((l2 * 10) + (l4 << 1))) = 0;
	reset_animation();
	*(int *)((char *)view_pos_group + ((l2 * 10) + (l4 << 1))) = 0;
	g4348[((l2 * 5) + l4)] = 0;
	g433e[((l2 * 5) + l4)] = 0;
L7936:
	((char *)monster_groups[p4] + (44 * p6))[42] = -1;
	((char *)monster_groups[p4] + (44 * p6))[34] = 3;
	*(int *)(((char *)monster_groups[p4] + (44 * p6)) + 2) = 0;
	*(int *)(((char *)monster_groups[p4] + (44 * p6)) + 6) = 0;
	((char *)monster_groups[p4] + (44 * p6))[36] = 0;
	((char *)monster_groups[p4] + (44 * p6))[37] = 0;
	for (l2 = 0; l2 < 4; l2++) {
	((char *)monster_groups[p4] + ((44 * p6) + l2))[24] = 0;
	}
	if ((p4 < 1) || (p4 > 5)) goto L7a11;
#asm
	db 08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08bh,047h,040h,08bh,057h
	db 042h,001h,006h,0c6h,043h,011h,016h,0c8h,043h
#endasm
L7a11:
	;
}
