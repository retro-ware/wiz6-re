#asm
	extrn random_:near
#endasm
/* Return base plus count random rolls. */
roll_dice(base, count)
char count;
{
	int sum;
	sum = base;
L4835:
	if ((unsigned)count <= 0) goto L4851;
#asm
	db 08ah,046h,007h,02ah,0e4h,050h
	call random_
	db 059h,003h,046h,0feh,040h,089h,046h,0feh
#endasm
	count--;
	goto L4835;
L4851:
	return sum;
}
