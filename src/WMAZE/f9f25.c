extern int g501c;
format_dice(p4, p6, p8)
char p4;
char p6;
{
	char l2[2];
	int l4;
	register int rsi;
	register int rdi;
	l2[0] = p4;
	l2[(0 + 1)] = p6;
	l4 = p8;
#asm
	db 08bh,046h,0fch,0a3h,01ah,050h
#endasm
	g501c = *(int *)(l2 + 0);
	return 20506;
}
