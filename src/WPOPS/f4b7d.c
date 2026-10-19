extern int sprite_count[];
extern int sprite_list[];
struct s24 { int w[12]; };
insert_sprite(depth, pic, x, y, w, h, mirror, frames)
char pic;
char mirror;
{
	int pos;
	int l4;
	pos = 0;
L4b8a:
	if ((pos >= sprite_count[0]) || ((unsigned char)(*(char **)((char *)sprite_list + (pos << 1)))[20] > depth)) goto L4baa;
	pos++;
	goto L4b8a;
L4baa:
	for (l4 = sprite_count[0]; l4 > pos; l4--) {
	*(struct s24 *)(*(char **)((char *)sprite_list + (l4 << 1))) = *(struct s24 *)(*(char **)((char *)sprite_count + (l4 << 1)));
	}
	if (pos < 12) goto L4be5;
L4bdb:
	play_sound(0);
	goto L4bdb;
L4be5:
	(*(char **)((char *)sprite_list + (pos << 1)))[20] = *(char *)&depth;
	(*(char **)((char *)sprite_list + (pos << 1)))[21] = pic;
	*(int *)(*(char **)((char *)sprite_list + (pos << 1))) = x;
	*(int *)((*(char **)((char *)sprite_list + (pos << 1))) + 2) = y;
	*(int *)((*(char **)((char *)sprite_list + (pos << 1))) + 4) = w;
	*(int *)((*(char **)((char *)sprite_list + (pos << 1))) + 6) = h;
	(*(char **)((char *)sprite_list + (pos << 1)))[22] = mirror;
	strcpy((sprite_list[pos] + 8), frames);
	sprite_count[0]++;
}
