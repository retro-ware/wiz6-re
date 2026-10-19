extern char g36e4[];
extern char g3717[];
extern char pic_slot_monster[];
extern int sprite_list[];
draw_sprite(idx)
{
	int l2;
	int l4;
	char l8[4];
	char l9;
	char x9[1];
	register int rsi;
	register int rdi;
	if ((unsigned char)(*(char **)((char *)sprite_list + (idx << 1)))[20] != 255) goto L4ee2;
	delay_tick();
	delay_tick();
	goto L509c;
L4ee2:
	if ((((pic_slot_monster[(unsigned char)(*(char **)((char *)sprite_list + (idx << 1)))[21]] != 20) && (pic_slot_monster[(unsigned char)(*(char **)((char *)sprite_list + (idx << 1)))[21]] != 35)) && (pic_slot_monster[(unsigned char)(*(char **)((char *)sprite_list + (idx << 1)))[21]] != 54)) && (pic_slot_monster[(unsigned char)(*(char **)((char *)sprite_list + (idx << 1)))[21]] != 57)) goto L5068;
	rdi = (unsigned char)(*(char **)((char *)sprite_list + (idx << 1)))[21];
	l8[(0 + 1)] = 0;
	l9 = (*(char **)((char *)sprite_list + (idx << 1)))[8];
	rsi = 0;
	goto L5052;
L4f28:
	l8[0] = ((char *)sprite_list[idx] + rsi)[8];
	if ((pic_slot_monster[(unsigned char)(*(char **)((char *)sprite_list + (idx << 1)))[21]] != 54) || (l8[0] != 8)) goto L4f5d;
	((char *)sprite_list[idx] + rsi)[8] = 9;
	rsi--;
L4f5d:
	l2 = ((*(int *)(*(char **)((char *)sprite_list + (idx << 1))) - (unsigned char)g36e4[(((314 * rdi) + ((unsigned char)(*(char **)((char *)sprite_list + (idx << 1)))[22] % 2)) + ((unsigned char)l9 << 1))]) + (unsigned char)g36e4[(((314 * rdi) + ((unsigned char)(*(char **)((char *)sprite_list + (idx << 1)))[22] % 2)) + ((unsigned char)l8[0] << 1))]);
	l4 = ((*(int *)((*(char **)((char *)sprite_list + (idx << 1))) + 2) - (unsigned char)g3717[((314 * rdi) + (unsigned char)l9)]) + (unsigned char)g3717[((314 * rdi) + (unsigned char)l8[0])]);
	drv_draw_text(rdi, l2, l4, *(int *)((*(char **)((char *)sprite_list + (idx << 1))) + 4), *(int *)((*(char **)((char *)sprite_list + (idx << 1))) + 6), (unsigned char)(*(char **)((char *)sprite_list + (idx << 1)))[22], 0, l8);
	rsi++;
L5052:
	if (((char *)sprite_list[idx] + rsi)[8]) goto L4f28;
	goto L509c;
L5068:
	drv_draw_text((unsigned char)(*(char **)((char *)sprite_list + (idx << 1)))[21], *(int *)(*(char **)((char *)sprite_list + (idx << 1))), *(int *)((*(char **)((char *)sprite_list + (idx << 1))) + 2), *(int *)((*(char **)((char *)sprite_list + (idx << 1))) + 4), *(int *)((*(char **)((char *)sprite_list + (idx << 1))) + 6), (unsigned char)(*(char **)((char *)sprite_list + (idx << 1)))[22], 0, (sprite_list[idx] + 8));
L509c:
	;
}
