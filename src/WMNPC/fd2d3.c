extern int g3042;
extern int g58d8[];
extern int g60a8;
extern int g6a9e;
fd2d3(p4, p6)
{
	int l2;
	char l82[80];
	l2 = 0;
Ld2de:
	f075b(p4, l82);
	if (g3042) goto Ld329;
	*(int *)((char *)g58d8 + (l2 * 20)) = ((unsigned char)l82[0] + -32);
	strcpy(((l2 * 20) + 22746), ((char *)l82 + 1));
	p4 += 5;
	l2++;
Ld329:
	if (!g3042) goto Ld2de;
	g6a9e = l2;
Ld336:
	f075b(p6, l82);
	if (g3042) goto Ld381;
	*(int *)((char *)g58d8 + (l2 * 20)) = ((unsigned char)l82[0] + -32);
	strcpy(((l2 * 20) + 22746), ((char *)l82 + 1));
	p6 += 5;
	l2++;
Ld381:
	if (!g3042) goto Ld336;
	g60a8 = l2;
}
