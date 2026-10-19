#asm
	extrn f533b_:near
#endasm
extern int g522a;
extern int g522c;
f9cde(p4)
{
	if (p4 != 1) goto L9cf1;
#asm
	db 0ffh,036h,0cah,04fh
	call f533b_
	db 059h,0ebh,017h
#endasm
L9cf1:
	f9c19();
	f02f0(g522a, 1);
	g522c = 0;
L9d08:
	;
}
