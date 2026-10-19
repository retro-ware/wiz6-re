extern char g442e[];
f5f53(p4, p6)
{
	if ((unsigned)g442e[((432 * p4) + (p6 << 3))] <= 0) goto L5f82;
	g442e[((432 * p4) + (p6 << 3))]--;
#asm
	db 075h,00ch
#endasm
	f5d5b(p4, p6);
L5f82:
	;
}
