extern int g5324;
extern int g5326[];
extern int pc_item_id[];
f99e6(p4, p6)
{
	char x0[72];
	int l74;
	access_scenario_record(1, &l74, *(int *)((char *)pc_item_id + ((432 * p4) + (p6 << 3))), 0);
	strcpy(((p6 << 4) + 21330), &l74);
	g5326[g5324] = p6;
	g5324++;
}
