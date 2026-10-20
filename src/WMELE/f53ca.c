extern char g019d[];
extern int group_monster_rec[];
extern int monster_groups[];
/* Update every combatant of group g for the end of a round. */
update_group(g)
{
	int l2;
	int i;
	register int rsi;
	register int rdi;
	l2 = 0;
	i = 0;
	goto L5462;
L53df:
	if (((unsigned)((rsi = (44 * i), (*(char **)((char *)monster_groups + (g << 1)))) + rsi)[34] >= 3) || (update_combatant(g, i, (unsigned char)(*(char **)((char *)group_monster_rec + (g << 1)))[215], 0) != 1)) goto L541f;
L541f:
	if ((unsigned)((rsi = (44 * i), (*(char **)((char *)monster_groups + (g << 1)))) + rsi)[34] >= 3) goto L545f;
#asm
	db 003h,0deh,08bh,0f3h,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0c8h,08bh,046h,004h,0d1h
	db 0e0h,08bh,0d8h,08bh,087h,0a8h,043h,003h,0c1h,08bh,0f8h,08ch,0d9h,08eh,0c1h,0b9h
	db 016h,000h,0f3h,0a5h,0ffh,046h,0feh
#endasm
L545f:
	i++;
L5462:
	if ((unsigned char)g019d[monster_groups[g]] > i) goto L53df;
#asm
l547b:
	db 08ah,046h,0feh,08bh,04eh,004h,0d1h,0e1h,08bh,0d9h,08bh,09fh,0a8h,043h,088h,087h
	db 09dh,001h
#endasm
}
