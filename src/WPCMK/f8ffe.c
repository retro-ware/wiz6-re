extern int g4fc6;
f8ffe(p4)
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
	if (!(g4fc6 & 1)) goto L9022;
	strcpy(&l22, 21458);
	l24 = 32;
	goto L907d;
L9022:
	if (!(g4fc6 & 2)) goto L903f;
	strcpy(&l22, 21469);
	l24 = 16;
	goto L907d;
L903f:
	if (!(g4fc6 & 4)) goto L905c;
	strcpy(&l22, 21480);
	l24 = 16;
	goto L907d;
L905c:
	if (!(g4fc6 & 8)) goto L9079;
	strcpy(&l22, 21491);
	l24 = 32;
	goto L907d;
L9079:
	return;
L907d:
	l17 = (char)((p4 / 14) + 49);
	p4 = (p4 % 14);
	f3640();
	l2 = open(f0cd6(&l22, 0), 0);
	if (l2 != -1) goto L90b8;
	f00d5(14);
L90b8:
	lseek(l2, (long)((p4 * l24) * 9), 0);
	read(l2, &l313, (l24 * 9));
	close(l2);
	f2256(&l313, 2, 72, 9);
	return;
}
