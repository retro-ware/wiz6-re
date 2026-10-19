extern char g4514[];
extern int g57e0[];
fa1a7(p4, p6, p8)
char *p8;
{
	char x0[2];
	register int rsi;
	g57e0[p6] = 1;
	rsi = 0;
La1be:
	if ((unsigned char)g4514[((432 * p4) + rsi)] >= (*(p8 + rsi) + -65)) goto La1ee;
	g57e0[p6] = 0;
La1ee:
	rsi++;
	if (rsi < 7) goto La1be;
}
