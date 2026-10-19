extern int g5028;
/* Build a two-character text in a static buffer. */
make_two_char_text(p4, p6, p8)
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
	db 08bh,046h,0fch,0a3h,026h,050h
#endasm
	g5028 = *(int *)(l2 + 0);
	return 20518;
}
