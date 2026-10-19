extern char g36e4[];
extern char g3717[];
extern char pic_slot_monster[];
extern int sprite_list[];
f4c09(p4)
{
	int l2;
	int l4;
	char l8[4];
	char l9;
	char x9[1];
	register int rsi;
	register int rdi;
	if ((unsigned char)(*(char **)((char *)sprite_list + (p4 << 1)))[20] != 255) goto L4c2f;
	delay_tick();
	delay_tick();
	goto L4de9;
L4c2f:
	if (((pic_slot_monster[(unsigned char)(*(char **)((char *)sprite_list + (p4 << 1)))[21]] == 20) || (pic_slot_monster[(unsigned char)(*(char **)((char *)sprite_list + (p4 << 1)))[21]] == 35)) || (pic_slot_monster[(unsigned char)(*(char **)((char *)sprite_list + (p4 << 1)))[21]] == 54)) goto L4c58;
	if (pic_slot_monster[(unsigned char)(*(char **)((char *)sprite_list + (p4 << 1)))[21]] != 57) goto L4db5;
L4c58:
	rdi = (unsigned char)(*(char **)((char *)sprite_list + (p4 << 1)))[21];
	l8[(0 + 1)] = 0;
	l9 = (*(char **)((char *)sprite_list + (p4 << 1)))[8];
	rsi = 0;
	goto L4d9f;
L4c75:
	l8[0] = ((char *)sprite_list[p4] + rsi)[8];
	if ((pic_slot_monster[(unsigned char)(*(char **)((char *)sprite_list + (p4 << 1)))[21]] != 54) || (l8[0] != 8)) goto L4caa;
	((char *)sprite_list[p4] + rsi)[8] = 9;
	rsi--;
L4caa:
	l2 = ((*(int *)(*(char **)((char *)sprite_list + (p4 << 1))) - (unsigned char)g36e4[(((314 * rdi) + ((unsigned char)(*(char **)((char *)sprite_list + (p4 << 1)))[22] % 2)) + ((unsigned char)l9 << 1))]) + (unsigned char)g36e4[(((314 * rdi) + ((unsigned char)(*(char **)((char *)sprite_list + (p4 << 1)))[22] % 2)) + ((unsigned char)l8[0] << 1))]);
	l4 = ((*(int *)((*(char **)((char *)sprite_list + (p4 << 1))) + 2) - (unsigned char)g3717[((314 * rdi) + (unsigned char)l9)]) + (unsigned char)g3717[((314 * rdi) + (unsigned char)l8[0])]);
	drv_draw_text(rdi, l2, l4, *(int *)((*(char **)((char *)sprite_list + (p4 << 1))) + 4), *(int *)((*(char **)((char *)sprite_list + (p4 << 1))) + 6), (unsigned char)(*(char **)((char *)sprite_list + (p4 << 1)))[22], 0, l8);
	rsi++;
L4d9f:
	if (((char *)sprite_list[p4] + rsi)[8]) goto L4c75;
	goto L4de9;
L4db5:
	drv_draw_text((unsigned char)(*(char **)((char *)sprite_list + (p4 << 1)))[21], *(int *)(*(char **)((char *)sprite_list + (p4 << 1))), *(int *)((*(char **)((char *)sprite_list + (p4 << 1))) + 2), *(int *)((*(char **)((char *)sprite_list + (p4 << 1))) + 4), *(int *)((*(char **)((char *)sprite_list + (p4 << 1))) + 6), (unsigned char)(*(char **)((char *)sprite_list + (p4 << 1)))[22], 0, (sprite_list[p4] + 8));
L4de9:
	;
}
