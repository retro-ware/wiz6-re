extern int g51d8[];
extern int g51e2[];
extern int g51e4[];
extern int g525a[];
extern int g525c[];
extern int g5268[];
extern int g526a[];
extern int g5274[];
extern int g5276[];
extern int loot_count;
extern int loot_item[];
remove_loot_entry(idx)
{
	int l2;
	loot_count--;
	for (l2 = idx; l2 < loot_count; l2++) {
	loot_item[l2] = g51d8[l2];
	strcpy(((l2 * 18) + 20974), ((l2 * 18) + 20992));
	g51e2[l2] = g51e4[l2];
	g5268[l2] = g526a[l2];
	g525a[l2] = g525c[l2];
	g5274[l2] = g5276[l2];
	}
}
