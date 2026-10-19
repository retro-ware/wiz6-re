extern int g43d0[];
f5190(p4)
{
	int l2;
	int l4;
	int l6;
	l2 = 0;
L519b:
	l6 = 0;
	l4 = 0;
	goto L51bf;
L51a7:
	if (g43d0[l4] != l2) goto L51bc;
	l6 = 1;
L51bc:
	l4++;
L51bf:
	if (l4 < p4) goto L51a7;
	if (l6) goto L51d4;
	return l2;
L51d4:
	l2++;
	if (l2 < 6) goto L519b;
	return 0;
}
