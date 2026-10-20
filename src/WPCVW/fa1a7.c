extern char pc_stats[];
extern int class_allowed[];
check_class_reqs(p4, p6, p8)
char *p8;
{
	char x0[2];
	register int rsi;
	class_allowed[p6] = 1;
	rsi = 0;
La1be:
	if ((unsigned char)pc_stats[((432 * p4) + rsi)] < (*(p8 + rsi) + -65)) {
	class_allowed[p6] = 0;
	}
	rsi++;
	if (rsi < 7) goto La1be;
}
