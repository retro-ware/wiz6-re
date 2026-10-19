extern int g4fc6;
fa78d(p4, p6)
{
	int l2;
	char x2[14];
	char l17;
	char x17[3];
	int l22;
	int l24;
	char x24[287];
	int l313;
	char x313[1];
	if (!(g4fc6 & 1)) goto La7b1;
	strcpy(&l22, 20837);
	l24 = 32;
	goto La80c;
La7b1:
	if (!(g4fc6 & 2)) goto La7ce;
	strcpy(&l22, 20848);
	l24 = 16;
	goto La80c;
La7ce:
	if (!(g4fc6 & 4)) goto La7eb;
	strcpy(&l22, 20859);
	l24 = 16;
	goto La80c;
La7eb:
	if (!(g4fc6 & 8)) goto La808;
	strcpy(&l22, 20870);
	l24 = 32;
	goto La80c;
La808:
	return;
La80c:
	l17 = (char)((p4 / 14) + 49);
	p4 = (p4 % 14);
	f3640();
	l2 = open(f0cd6(&l22, 0), 0);
	if (l2 != -1) goto La847;
	f00d5(14);
La847:
	lseek(l2, (long)((p4 * l24) * 9), 0);
	read(l2, &l313, (l24 * 9));
	close(l2);
	f2256(&l313, 2, ((p6 * 9) + 72), 9);
	return;
}
