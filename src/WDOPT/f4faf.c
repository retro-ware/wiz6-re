extern char g442e[];
f4faf(p4, p6)
{
	if ((unsigned)g442e[((432 * p4) + (p6 << 3))] <= 0) goto L4fde;
	g442e[((432 * p4) + (p6 << 3))]--;
#asm
	db 075h,00ch
#endasm
	f4e09(p4, p6);
L4fde:
	;
}
