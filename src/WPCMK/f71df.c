extern char char_stats[];
raise_stats_to_minimum(p4)
char *p4;
{
	register int rsi;
	rsi = 0;
L71e6:
	if ((unsigned char)char_stats[rsi] >= (*(p4 + rsi) + -65)) goto L7207;
	char_stats[rsi] = (char)(*(p4 + rsi) + -65);
L7207:
	rsi++;
	if (rsi < 8) goto L71e6;
}
