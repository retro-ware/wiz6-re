extern int sprite_count[];
extern int sprite_list[];
struct s24 { int w[12]; };
f48eb(p4, p6, p8, p10, p12, p14, p16, p18)
char p6;
char p16;
{
	int l2;
	int l4;
	l2 = 0;
L48f8:
	if ((l2 >= sprite_count[0]) || ((unsigned char)(*(char **)((char *)sprite_list + (l2 << 1)))[20] > p4)) goto L4918;
	l2++;
	goto L48f8;
L4918:
	for (l4 = sprite_count[0]; l4 > l2; l4--) {
	*(struct s24 *)(*(char **)((char *)sprite_list + (l4 << 1))) = *(struct s24 *)(*(char **)((char *)sprite_count + (l4 << 1)));
	}
	(*(char **)((char *)sprite_list + (l2 << 1)))[20] = *(char *)&p4;
	(*(char **)((char *)sprite_list + (l2 << 1)))[21] = p6;
	*(int *)(*(char **)((char *)sprite_list + (l2 << 1))) = p8;
	*(int *)((*(char **)((char *)sprite_list + (l2 << 1))) + 2) = p10;
	*(int *)((*(char **)((char *)sprite_list + (l2 << 1))) + 4) = p12;
	*(int *)((*(char **)((char *)sprite_list + (l2 << 1))) + 6) = p14;
	(*(char **)((char *)sprite_list + (l2 << 1)))[22] = p16;
	strcpy((sprite_list[l2] + 8), p18);
	sprite_count[0]++;
}
