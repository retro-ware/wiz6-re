extern int sprite_count[];
extern int sprite_list[];
struct s24 { int w[12]; };
/* Insert a sprite into the depth-sorted view sprite list. */
add_view_sprite(depth, pic, x, y, lo, hi, p16, chars)
char pic;
char p16;
{
	int pos;
	int l4;
	pos = 0;
L65cc:
	if ((pos >= sprite_count[0]) || ((unsigned char)(*(char **)((char *)sprite_list + (pos << 1)))[20] > depth)) goto L65ec;
	pos++;
	goto L65cc;
L65ec:
	for (l4 = sprite_count[0]; l4 > pos; l4--) {
	*(struct s24 *)(*(char **)((char *)sprite_list + (l4 << 1))) = *(struct s24 *)(*(char **)((char *)sprite_count + (l4 << 1)));
	}
	if (pos < 12) goto L6627;
L661d:
	play_sound(0);
	goto L661d;
L6627:
	(*(char **)((char *)sprite_list + (pos << 1)))[20] = *(char *)&depth;
	(*(char **)((char *)sprite_list + (pos << 1)))[21] = pic;
	*(int *)(*(char **)((char *)sprite_list + (pos << 1))) = x;
	*(int *)((*(char **)((char *)sprite_list + (pos << 1))) + 2) = y;
	*(int *)((*(char **)((char *)sprite_list + (pos << 1))) + 4) = lo;
	*(int *)((*(char **)((char *)sprite_list + (pos << 1))) + 6) = hi;
	(*(char **)((char *)sprite_list + (pos << 1)))[22] = p16;
	strcpy((sprite_list[pos] + 8), chars);
	sprite_count[0]++;
}
