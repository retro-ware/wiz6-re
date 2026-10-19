extern char g4326[];
extern int sprite_list[];
extern int view_pos_group[];
fba00()
{
	int l2;
	int l4;
	int l6;
	for (l2 = 0; l2 < 12; l2++) {
	free(sprite_list[l2]);
	}
	for (l2 = 0; l2 < 3; l2++) {
	g4326[l2] = 0;
	}
	for (l4 = 0; l4 < 2; l4++) {
	for (l6 = 0; l6 < 5; l6++) {
	*(int *)((char *)view_pos_group + ((l4 * 10) + (l6 << 1))) = 0;
	}
	}
}
