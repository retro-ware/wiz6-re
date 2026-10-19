extern char g00e2[];
extern int g5322;
extern int pc_item_id[];
f9e1e(p4, p6)
{
	int l2;
	int l4;
	int l6;
	char x6[44];
	int l52;
	char x52[26];
	int l80;
	l2 = npc_choose_member_item(p4, p6, 1516, 0);
	if (l2 == -1) goto L9ed7;
	access_scenario_record(1, &l80, *(int *)((char *)pc_item_id + ((432 * p6) + (l2 << 3))), 0);
	if (!l52) goto L9ed7;
	l6 = (l52 / 256);
	l4 = (l52 % 256);
	if (g00e2[(l4 * 6)] != 1) goto L9eb2;
	refresh_all_windows();
	g5322 = f62ee(2032, 1);
	if (g5322 != -1) goto L9eb2;
	l4 = -1;
L9eb2:
	if (l4 == -1) goto L9ed7;
	f69db(p6, l2);
	f817e(p6, l4, l6, g5322);
L9ed7:
	;
}
