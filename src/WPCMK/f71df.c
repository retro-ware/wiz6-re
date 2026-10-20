extern char char_stats[];
raise_stats_to_minimum(p4)
char *p4;
{
	register int rsi;
	rsi = 0;
	do {
	if ((unsigned char)char_stats[rsi] < (*(p4 + rsi) + -65)) {
	char_stats[rsi] = (char)(*(p4 + rsi) + -65);
	}
	rsi++;
	} while (rsi < 8);
}
