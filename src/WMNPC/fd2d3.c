extern int g58d8[];
extern int g60a8;
extern int g6a9e;
extern int msg_not_found;
fd2d3(p4, p6)
{
	int l2;
	char l82[80];
	l2 = 0;
Ld2de:
	get_message(p4, l82);
	if (!msg_not_found) {
	*(int *)((char *)g58d8 + (l2 * 20)) = ((unsigned char)l82[0] + -32);
	strcpy(((l2 * 20) + 22746), ((char *)l82 + 1));
	p4 += 5;
	l2++;
	}
	if (!msg_not_found) goto Ld2de;
	g6a9e = l2;
Ld336:
	get_message(p6, l82);
	if (!msg_not_found) {
	*(int *)((char *)g58d8 + (l2 * 20)) = ((unsigned char)l82[0] + -32);
	strcpy(((l2 * 20) + 22746), ((char *)l82 + 1));
	p6 += 5;
	l2++;
	}
	if (!msg_not_found) goto Ld336;
	g60a8 = l2;
}
