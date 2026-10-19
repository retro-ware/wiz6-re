#asm
	extrn f2858_:near
#endasm
f45b8()
{
	if (f09e2(40) <= 0) goto L45cd;
	f2858();
#asm
	call f2858_
	db 0ebh,010h
#endasm
L45cd:
	f0aaa((f09e2(3) + 10));
L45dd:
	;
}
