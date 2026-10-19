extern int sprite_count[];
extern int sprite_list[];
/* Insert a sprite into the depth-sorted view sprite list. */
add_view_sprite(depth, pic, x, y, lo, hi, p16, chars)
char pic;
char p16;
{
	int pos;
	int l4;
	register int rsi;
	register int rdi;
	pos = 0;
L65cc:
	if ((pos >= sprite_count[0]) || ((unsigned char)(*(char **)((char *)sprite_list + (pos << 1)))[20] > depth)) goto L65ec;
	pos++;
	goto L65cc;
L65ec:
	l4 = sprite_count[0];
	goto L660f;
L65f4:
	rsi = sprite_count[l4];
	rdi = sprite_list[l4];
#asm
	db 08ch,0d9h,08eh,0c1h,0b9h,00ch,000h,0f3h,0a5h,0ffh,04eh,0fch
#endasm
L660f:
	if (l4 > pos) goto L65f4;
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
