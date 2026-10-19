#asm
	extrn f2858_:near
#endasm
f4655()
{
	if (f09e2(40) <= 0) goto L466a;
	f2858();
#asm
	call f2858_
	db 0ebh,010h
#endasm
L466a:
	f0aaa((f09e2(3) + 10));
L467a:
	;
}
