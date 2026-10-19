extern char g54b6[];
extern char g561c;
extern int g5490;
extern int g54b2[];
f8050(p4)
{
	int l2;
	char x2[12];
	char l15;
	char l16;
	char l17;
	char x17[27];
	int l46;
	char x46[6];
	char l53;
	char l54;
	int l56;
	char x56[18];
	int l76;
	char *l78;
	int l80;
	f0882(1, &l76, p4, 0);
	l78 = (((unsigned char)g561c << 3) + 21680);
	g561c++;
	l78[6] = (char)(((unsigned char)l54 * (unsigned char)l53) + l56);
	*(int *)l78 = p4;
	l78[4] = l16;
	l78[5] = l15;
	*(int *)(l78 + 2) = l46;
	l78[7] = 0;
	if (!((unsigned char)l17 & 8)) goto L80d4;
	l78[7] |= 4;
L80d4:
	if (!((unsigned char)l17 & 4)) goto L80e5;
	l78[7] |= 8;
L80e5:
	if (!((unsigned char)l17 & 16)) goto L80f6;
	l78[7] |= 16;
L80f6:
	if (!((unsigned char)l17 & 32)) goto L8107;
	l78[7] |= 32;
L8107:
	if (!((unsigned char)l17 & 2)) goto L8118;
	l78[7] |= 64;
L8118:
	g5490 = 0;
	l2 = 0;
	goto L8151;
L8125:
	l80 = (unsigned char)g54b6[(l2 << 3)];
	if (l80 >= 1) goto L8143;
	l80 = 1;
L8143:
	g5490 += (*(int *)((char *)g54b2 + (l2 << 3)) * l80);
	l2++;
L8151:
	if ((unsigned char)g561c > l2) goto L8125;
}
