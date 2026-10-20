extern int g527a;
extern int g54b4[];
extern int g56ee[];
extern int g57de[];
extern int g5856[];
extern int pc_gold[];
fa69b(p4, p6)
{
	int l2;
	int l4;
	l2 = g54b4[p6];
	l4 = g5856[l2];
	if (*(long *)((char *)pc_gold + (432 * p4)) >= *(long *)((char *)g57de + (l2 << 2))) goto La6f3;
	fa645(1503);
	return;
La6f3:
	if (npc_give_item_to_member(p4, l4, g56ee[l2]) == -1) {
	fa645(1505);
	} else {
	*(long *)((char *)pc_gold + (432 * p4)) -= *(long *)((char *)g57de + (l2 << 2));
	g5856[l2] = 0;
	f5078(p4, g527a);
	f7f76(p4, 4, l4, 0, 0);
	}
	return;
}
