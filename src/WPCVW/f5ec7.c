extern char g4430[];
extern char pc_item_id[];
extern char pc_swag_count[];
struct s8 { int w[4]; };
remove_swag_item(p4, p6)
{
	int l2;
	char x2[2];
	int l6;
	pc_swag_count[(432 * p4)]--;
	for (l2 = p6; (unsigned char)pc_swag_count[(432 * p4)] > l2; l2++) {
	l6 = (l2 + 10);
	*(struct s8 *)((char *)pc_item_id + ((432 * p4) + (l6 << 3))) = *(struct s8 *)((char *)g4430 + ((432 * p4) + (l6 << 3)));
	strcpy(((l2 << 4) + 22162), ((l2 << 4) + 22178));
	}
}
