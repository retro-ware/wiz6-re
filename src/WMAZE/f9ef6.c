#asm
	extrn random_:near
#endasm
roll_dice(p4, p6)
char p6;
{
	int l2;
	l2 = p4;
L9f02:
	if ((unsigned)p6 <= 0) goto L9f1e;
#asm
	db 08ah,046h,007h,02ah,0e4h,050h
	call random_
	db 059h,003h,046h,0feh,040h,089h,046h,0feh
#endasm
	p6--;
	goto L9f02;
L9f1e:
	return l2;
}
