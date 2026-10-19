extern char g019d[];
extern char party_count;
extern int g43b4;
extern int group_monster_rec[];
extern int monster_group_count;
extern int monster_groups;
choose_monster_actions()
{
	int l2;
	g019d[monster_groups] = party_count;
	l2 = 1;
	goto L8aa6;
L8a5d:
	if ((((unsigned)g019d[g43b4] > 0) && (random(4) == 1)) && ((*(char **)((char *)group_monster_rec + (l2 << 1)))[208] != 22)) goto L8a96;
	choose_group_actions(l2, 0);
	goto L8aa3;
L8a96:
	choose_group_actions(l2, 6);
L8aa3:
	l2++;
L8aa6:
	if (l2 <= monster_group_count) goto L8a5d;
	if ((unsigned)g019d[g43b4] <= 0) goto L8ae6;
	l2 = 1;
L8abf:
	if ((l2 >= monster_group_count) || (random(3))) goto L8ad9;
	l2++;
	goto L8abf;
L8ad9:
	choose_group_actions(6, l2);
L8ae6:
	;
}
