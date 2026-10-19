extern int g50fe[];
reset_effects()
{
	register int rsi;
	register int rdi;
	rsi = 0;
Ld081:
	rdi = 0;
Ld084:
	*(int *)((char *)g50fe + ((rsi * 10) + (rdi << 1))) = -1;
	rdi++;
	if (rdi < 5) goto Ld084;
	rsi++;
	if (rsi < 2) goto Ld081;
}
