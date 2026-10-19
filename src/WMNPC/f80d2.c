f80d2(p4, p6)
char *p4;
char *p6;
{
L80d5:
	*p6 = *p4;
#asm
	db 084h,0c0h,074h,018h,08bh,05eh,006h,080h,03fh,041h,072h,008h,080h,03fh,05ah,077h
	db 003h,080h,007h,020h
#endasm
L80f3:
	p4++;
	p6++;
	goto L80d5;
L80fb:
	;
}
