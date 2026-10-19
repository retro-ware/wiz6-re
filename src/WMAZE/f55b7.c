extern int g4ec8[];
extern int g4eca[];
tick_effect_timers(p4)
{
	register int rsi;
	rsi = 0;
L55be:
	*(int *)((char *)g4ec8 + (rsi << 2)) -= p4;
	if (*(int *)((char *)g4ec8 + (rsi << 2)) > 0) goto L55e4;
	*(int *)((char *)g4ec8 + (rsi << 2)) = 0;
	if (!rsi) goto L55e4;
	*(int *)((char *)g4eca + (rsi << 2)) = 0;
L55e4:
	rsi++;
	if (rsi < 6) goto L55be;
}
