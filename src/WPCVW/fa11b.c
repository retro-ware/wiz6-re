extern char pc_stats[];
fa11b(p4, p6, p8)
char *p6;
{
	register int rsi;
	rsi = 0;
La122:
	if (p8 != 1) goto La163;
	if ((unsigned char)pc_stats[((432 * p4) + rsi)] <= (*(p6 + rsi) + -65)) goto La161;
	pc_stats[((432 * p4) + rsi)] = (char)(*(p6 + rsi) + -65);
La161:
	goto La19c;
La163:
	if ((unsigned char)pc_stats[((432 * p4) + rsi)] >= (*(p6 + rsi) + -65)) goto La19c;
	pc_stats[((432 * p4) + rsi)] = (char)(*(p6 + rsi) + -65);
La19c:
	rsi++;
	if (rsi < 7) goto La122;
}
