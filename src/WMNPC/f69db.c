extern char g442e[];
f69db(p4, p6)
{
	if ((unsigned)g442e[((432 * p4) + (p6 << 3))] <= 0) goto L6a0a;
	g442e[((432 * p4) + (p6 << 3))]--;
#asm
	db 075h,00ch
#endasm
	f6835(p4, p6);
L6a0a:
	;
}
