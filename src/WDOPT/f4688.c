#asm
	extrn f2858_:near
#endasm
f4688()
{
	if (f09e2(40) <= 0) goto L469d;
	f2858();
#asm
	call f2858_
	db 0ebh,010h
#endasm
L469d:
	f0aaa((f09e2(3) + 10));
L46ad:
	;
}
