extern int g43fe[];
extern int party_count;
extern int pc_gold[];
f5382(p4)
{
	char l4[4];
	int l6;
	*(int *)(l4 + (0 + 2)) = 0;
	*(int *)(l4 + 0) = 0;
	for (l6 = 0; l6 < party_count; l6++) {
	*(long *)(l4 + 0) += *(long *)((char *)pc_gold + (432 * l6));
	*(int *)((char *)g43fe + (432 * l6)) = 0;
	*(int *)((char *)pc_gold + (432 * l6)) = 0;
	}
	*(long *)((char *)pc_gold + (432 * p4)) = *(long *)(l4 + 0);
}
