extern int g4fc6;
f5072(p4, p6)
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
	if (!(g4fc6 & 1)) goto L5096;
	strcpy(&l22, 20483);
	l24 = 32;
	goto L50f1;
L5096:
	if (!(g4fc6 & 2)) goto L50b3;
	strcpy(&l22, 20494);
	l24 = 16;
	goto L50f1;
L50b3:
	if (!(g4fc6 & 4)) goto L50d0;
	strcpy(&l22, 20505);
	l24 = 16;
	goto L50f1;
L50d0:
	if (!(g4fc6 & 8)) goto L50ed;
	strcpy(&l22, 20516);
	l24 = 32;
	goto L50f1;
L50ed:
	return;
L50f1:
	l17 = (char)((p4 / 14) + 49);
	p4 = (p4 % 14);
	f3640();
	l2 = open(f0cd6(&l22, 0), 0);
	if (l2 != -1) goto L512c;
	f00d5(14);
L512c:
	lseek(l2, (long)((p4 * l24) * 9), 0);
	read(l2, &l313, (l24 * 9));
	close(l2);
	f2256(&l313, 2, ((p6 * 9) + 72), 9);
	return;
}
