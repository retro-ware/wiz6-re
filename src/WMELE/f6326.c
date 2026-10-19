extern char g019b[];
extern char g019d[];
extern char g3648[];
extern char g3649[];
extern char g364a[];
extern char g3732[];
extern char g373c[];
extern char g3746[];
extern char g375a[];
extern char g375b[];
extern char g375c[];
extern char g3816[];
extern char pic_slot_monster[];
extern int monster_groups[];
/* Build the animation char string for group g at view position pos. */
get_monster_anim_chars(g, pos, out)
char *out;
{
	int l2;
	int l4;
	int l6;
	int l8;
	int member;
	int len;
	register int pic;
	register int i;
	pic = (unsigned char)g019b[monster_groups[g]];
	member = 0;
	l8 = 0;
	goto L6376;
L634d:
	if (((char *)monster_groups[g] + (44 * l8))[42] != pos) goto L6373;
	member = l8;
L6373:
	l8++;
L6376:
	if ((unsigned char)g019d[monster_groups[g]] > l8) goto L634d;
	len = 0;
	i = 0;
	goto L659a;
L6397:
	if (((((char *)monster_groups[g] + (44 * member))[34] != 2) && ((unsigned)((char *)monster_groups[g] + (44 * member))[17] <= 0)) && ((unsigned)((char *)monster_groups[g] + (44 * member))[16] <= 0)) goto L6400;
	l2 = (unsigned char)g3648[((pos * 30) + (i * 3))];
	l4 = (unsigned char)g3746[((314 * pic) + l2)];
	goto L6554;
L6400:
	l4 = (unsigned char)g3649[((pos * 30) + (i * 3))];
	l6 = (unsigned char)g364a[((pos * 30) + (i * 3))];
	l6--;
#asm
	db 07eh,003h
#endasm
	goto L652e;
L6437:
	;
#asm
l6437:
	db 08ah,087h,048h,036h,02ah,0e4h,089h,046h,0feh
#endasm
	l4++;
#asm
	db 0b8h,03ah,001h,0f7h,0eeh,08bh,0c8h,08bh,046h,0feh,003h,0c8h,08bh,0d9h,08ah,087h
	db 046h,037h,02ah,0e4h,050h,08ah,087h,050h,037h,02ah,0e4h,08bh,0c8h,058h,003h,0c1h
	db 048h,03bh,046h,0fch,07dh,065h
#endasm
	l2 = (random((unsigned char)g373c[((314 * pic) + i)]) + (unsigned char)g3732[((314 * pic) + i)]);
	g3648[((pos * 30) + (i * 3))] = *(char *)&l2;
	l4 = (unsigned char)g3746[((314 * pic) + l2)];
L64ce:
	g3649[((pos * 30) + (i * 3))] = *(char *)&l4;
	l6 = (random((unsigned char)g375c[((314 * pic) + (l4 << 2))]) + (unsigned char)g375b[((314 * pic) + (l4 << 2))]);
L652e:
	g364a[((pos * 30) + (i * 3))] = *(char *)&l6;
L6554:
	*(out + len) = g375a[((314 * pic) + (l4 << 2))];
	if ((pic_slot_monster[pic] != 40) || (i != 4)) goto L6589;
	*(out + len) = 0;
L6589:
	if (!*(out + len)) goto L6599;
	len++;
L6599:
	i++;
L659a:
	if ((unsigned char)g3816[(314 * pic)] > i) goto L6397;
	*(out + len) = 0;
}
