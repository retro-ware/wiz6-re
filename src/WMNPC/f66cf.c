#asm
	extrn f09e2_:near
#endasm
f66cf(p4, p6)
char p6;
{
	int l2;
	l2 = p4;
L66db:
	if ((unsigned)p6 <= 0) goto L66f7;
#asm
	db 08ah,046h,007h,02ah,0e4h,050h
	call f09e2_
	db 059h,003h,046h,0feh,040h,089h,046h,0feh
#endasm
	p6--;
	goto L66db;
L66f7:
	return l2;
}
