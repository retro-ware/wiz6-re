#asm
	extrn delay_tick_:near
#endasm
extern char g36e4[];
extern char g3717[];
extern char pic_slot_monster[];
extern int sprite_list[];
f4c09(p4)
{
	int l2;
	int l4;
	char x4[2];
	int l8;
	char l9;
	char x9[1];
	register int rsi;
	register int rdi;
	if ((unsigned char)(*(char **)((char *)sprite_list + (p4 << 1)))[20] != 255) goto L4c2f;
	delay_tick();
#asm
	call delay_tick_
	db 0e9h,0bah,001h
#endasm
L4c2f:
	;
#asm
l4c2f:
	db 08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,090h,043h,08ah,047h,015h,02ah,0e4h
	db 08bh,0d8h,08ah,087h,02ch,043h,03ch,014h,074h,00fh,03ch,023h,074h,00bh,03ch,036h
	db 074h,007h,03ch,039h,074h,003h
#endasm
	goto L4db5;
L4c58:
	;
#asm
l4c58:
	db 08bh,0fbh,0c6h,046h,0f9h,000h
#endasm
	l9 = (*(char **)((char *)sprite_list + (p4 << 1)))[8];
	rsi = 0;
	goto L4d9f;
L4c75:
	*(char *)&l8 = ((char *)sprite_list[p4] + rsi)[8];
	if (pic_slot_monster[(unsigned char)(*(char **)((char *)sprite_list + (p4 << 1)))[21]] != 54) goto L4caa;
	if (*(char *)&l8 != 8) goto L4caa;
	((char *)sprite_list[p4] + rsi)[8] = 9;
	rsi--;
L4caa:
	l2 = ((*(int *)(*(char **)((char *)sprite_list + (p4 << 1))) - (unsigned char)g36e4[(((314 * rdi) + ((unsigned char)(*(char **)((char *)sprite_list + (p4 << 1)))[22] % 2)) + ((unsigned char)l9 << 1))]) + (unsigned char)g36e4[(((314 * rdi) + ((unsigned char)(*(char **)((char *)sprite_list + (p4 << 1)))[22] % 2)) + ((unsigned char)*(char *)&l8 << 1))]);
	l4 = ((*(int *)((*(char **)((char *)sprite_list + (p4 << 1))) + 2) - (unsigned char)g3717[((314 * rdi) + (unsigned char)l9)]) + (unsigned char)g3717[((314 * rdi) + (unsigned char)*(char *)&l8)]);
	drv_draw_text(rdi, l2, l4, *(int *)((*(char **)((char *)sprite_list + (p4 << 1))) + 4), *(int *)((*(char **)((char *)sprite_list + (p4 << 1))) + 6), (unsigned char)(*(char **)((char *)sprite_list + (p4 << 1)))[22], 0, &l8);
	rsi++;
L4d9f:
	if (((char *)sprite_list[p4] + rsi)[8]) goto L4c75;
#asm
l4db3:
	db 0ebh,034h
#endasm
L4db5:
	drv_draw_text((unsigned char)(*(char **)((char *)sprite_list + (p4 << 1)))[21], *(int *)(*(char **)((char *)sprite_list + (p4 << 1))), *(int *)((*(char **)((char *)sprite_list + (p4 << 1))) + 2), *(int *)((*(char **)((char *)sprite_list + (p4 << 1))) + 4), *(int *)((*(char **)((char *)sprite_list + (p4 << 1))) + 6), (unsigned char)(*(char **)((char *)sprite_list + (p4 << 1)))[22], 0, (sprite_list[p4] + 8));
L4de9:
	;
}
