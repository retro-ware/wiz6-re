extern int group_monster_rec[];
extern int monster_groups[];
struct s44 { int w[22]; };
/* Update every combatant of group g for the end of a round. */
update_group(g)
{
	int l2;
	int i;
	l2 = 0;
	i = 0;
	goto L5462;
L53df:
	if (((unsigned)((char *)monster_groups[g] + (44 * i))[34] >= 3) || (update_combatant(g, i, (unsigned char)(*(char **)((char *)group_monster_rec + (g << 1)))[215], 0) != 1)) goto L541f;
L541f:
	if ((unsigned)((char *)monster_groups[g] + (44 * i))[34] < 3) {
	*(struct s44 *)((char *)monster_groups[g] + (44 * l2)) = *(struct s44 *)((char *)monster_groups[g] + (44 * i));
	l2++;
	}
	i++;
L5462:
	if ((unsigned char)(*(char **)((char *)monster_groups + (g << 1)))[413] > i) goto L53df;
#asm
l547b:
	db 08ah,046h,0feh,08bh,04eh,004h,0d1h,0e1h,08bh,0d9h,08bh,09fh,0a8h,043h,088h,087h
	db 09dh,001h
#endasm
}
