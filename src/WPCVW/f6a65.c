#asm
	extrn random_:near
#endasm
/* Sum of p6 random rolls (p4 is the start value). */
roll_dice(base, count)
char count;
{
	int sum;
	sum = base;
L6a71:
	if ((unsigned)count <= 0) goto L6a8d;
#asm
	db 08ah,046h,007h,02ah,0e4h,050h
	call random_
	db 059h,003h,046h,0feh,040h,089h,046h,0feh
#endasm
	count--;
	goto L6a71;
L6a8d:
	return sum;
}
