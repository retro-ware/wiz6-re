extern int sprite_count[];
extern int sprite_list[];
/* Insert a sprite into the depth-sorted draw list g4390 (max 12). */
add_sprite(p4, p6, p8, p10, p12, p14, p16, p18)
char p6;
char p16;
{
	int l2;
	int l4;
	register int rsi;
	register int rdi;
	l2 = 0;
L6246:
	if ((l2 >= sprite_count[0]) || ((unsigned char)(*(char **)((char *)sprite_list + (l2 << 1)))[20] > p4)) goto L6266;
	l2++;
	goto L6246;
L6266:
	l4 = sprite_count[0];
	goto L6289;
L626e:
	rsi = sprite_count[l4];
	rdi = sprite_list[l4];
#asm
	db 08ch,0d9h,08eh,0c1h,0b9h,00ch,000h,0f3h,0a5h,0ffh,04eh,0fch
#endasm
L6289:
	if (l4 > l2) goto L626e;
	if (l2 < 12) goto L62a1;
L6297:
	play_sound(0);
	goto L6297;
L62a1:
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
