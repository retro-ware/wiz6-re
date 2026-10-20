extern char g3648[];
extern char g3649[];
extern char g364a[];
extern char g3732[];
extern char g373c[];
extern char g3746[];
extern char g3750[];
extern char g375b[];
extern char g375c[];
extern char g3813[];
extern char g3816[];
extern char pic_slot_monster[];
/* Pick animation frames for the members of group g shown at view position pos. */
choose_monster_frames(g, pos)
{
	int frame;
	int step;
	register int pic;
	register int i;
#asm
	db 08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,087h,09bh,001h,02ah
	db 0e4h,08bh,0f0h,0bfh,000h,000h,0e9h,029h,001h
#endasm
L4f23:
	if (((((unsigned)g3813[(314 * pic)] <= 0) || ((unsigned char)g3813[(314 * pic)] == 255)) || (pic_slot_monster[pic] == 46)) || (pic_slot_monster[pic] == 36)) goto L4f6d;
	frame = ((unsigned char)g3813[(314 * pic)] / 25);
	step = ((unsigned char)g3813[(314 * pic)] % 25);
	if ((pic_slot_monster[pic] != 54) || (i)) goto L4f6b;
	frame = 0;
	step = 0;
L4f6b:
	goto L4fc4;
L4f6d:
	frame = (random((unsigned char)g373c[((314 * pic) + i)]) + (unsigned char)g3732[((314 * pic) + i)]);
	step = (random((unsigned char)g3750[((314 * pic) + frame)]) + (unsigned char)g3746[((314 * pic) + frame)]);
L4fc4:
	g3648[((pos * 30) + (i * 3))] = *(char *)&frame;
	g3649[((pos * 30) + (i * 3))] = *(char *)&step;
	g364a[((pos * 30) + (i * 3))] = (char)(random((unsigned char)g375c[((314 * pic) + (step << 2))]) + (unsigned char)g375b[((314 * pic) + (step << 2))]);
	i++;
L504c:
	if ((unsigned char)g3816[(314 * pic)] > i) goto L4f23;
}
