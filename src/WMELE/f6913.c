extern char g36e4[];
extern char g3717[];
extern char pic_slot_monster[];
extern int sprite_list[];
/* Draw view sprite list entry i. */
draw_view_sprite(i)
{
	int l2;
	int l4;
	char l8[4];
	char l9;
	char x9[1];
	register int rsi;
	register int rdi;
	if ((unsigned char)(*(char **)((char *)sprite_list + (i << 1)))[20] != 255) goto L6939;
	delay_tick();
	delay_tick();
	goto L6af3;
L6939:
	if ((((pic_slot_monster[(unsigned char)(*(char **)((char *)sprite_list + (i << 1)))[21]] != 20) && (pic_slot_monster[(unsigned char)(*(char **)((char *)sprite_list + (i << 1)))[21]] != 35)) && (pic_slot_monster[(unsigned char)(*(char **)((char *)sprite_list + (i << 1)))[21]] != 54)) && (pic_slot_monster[(unsigned char)(*(char **)((char *)sprite_list + (i << 1)))[21]] != 57)) goto L6abf;
	rdi = (unsigned char)(*(char **)((char *)sprite_list + (i << 1)))[21];
	l8[(0 + 1)] = 0;
	l9 = (*(char **)((char *)sprite_list + (i << 1)))[8];
	rsi = 0;
	goto L6aa9;
L697f:
	l8[0] = ((char *)sprite_list[i] + rsi)[8];
	if ((pic_slot_monster[(unsigned char)(*(char **)((char *)sprite_list + (i << 1)))[21]] != 54) || (l8[0] != 8)) goto L69b4;
	((char *)sprite_list[i] + rsi)[8] = 9;
	rsi--;
L69b4:
	l2 = ((*(int *)(*(char **)((char *)sprite_list + (i << 1))) - (unsigned char)g36e4[(((314 * rdi) + ((unsigned char)(*(char **)((char *)sprite_list + (i << 1)))[22] % 2)) + ((unsigned char)l9 << 1))]) + (unsigned char)g36e4[(((314 * rdi) + ((unsigned char)(*(char **)((char *)sprite_list + (i << 1)))[22] % 2)) + ((unsigned char)l8[0] << 1))]);
	l4 = ((*(int *)((*(char **)((char *)sprite_list + (i << 1))) + 2) - (unsigned char)g3717[((314 * rdi) + (unsigned char)l9)]) + (unsigned char)g3717[((314 * rdi) + (unsigned char)l8[0])]);
	drv_draw_text(rdi, l2, l4, *(int *)((*(char **)((char *)sprite_list + (i << 1))) + 4), *(int *)((*(char **)((char *)sprite_list + (i << 1))) + 6), (unsigned char)(*(char **)((char *)sprite_list + (i << 1)))[22], 0, l8);
	rsi++;
L6aa9:
	if (((char *)sprite_list[i] + rsi)[8]) goto L697f;
	goto L6af3;
L6abf:
	drv_draw_text((unsigned char)(*(char **)((char *)sprite_list + (i << 1)))[21], *(int *)(*(char **)((char *)sprite_list + (i << 1))), *(int *)((*(char **)((char *)sprite_list + (i << 1))) + 2), *(int *)((*(char **)((char *)sprite_list + (i << 1))) + 4), *(int *)((*(char **)((char *)sprite_list + (i << 1))) + 6), (unsigned char)(*(char **)((char *)sprite_list + (i << 1)))[22], 0, (sprite_list[i] + 8));
L6af3:
	;
}
