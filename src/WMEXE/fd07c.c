extern int g50fe[];
reset_effects()
{
	register int rsi;
	register int rdi;
	for (rsi = 0; rsi < 2; rsi++) {
	for (rdi = 0; rdi < 5; rdi++) {
	*(int *)((char *)g50fe + ((rsi * 10) + (rdi << 1))) = -1;
	}
	}
}
