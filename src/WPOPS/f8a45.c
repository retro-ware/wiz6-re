extern char g019d[];
extern char g43ce;
extern int g4360;
extern int g43a8;
extern int g43b4;
extern int g43b6[];
f8a45()
{
	int l2;
	g019d[g43a8] = g43ce;
	l2 = 1;
	goto L8aa6;
L8a5d:
	if ((unsigned)g019d[g43b4] <= 0) goto L8a87;
	if (f09e2(4) != 1) goto L8a87;
	if ((*(char **)((char *)g43b6 + (l2 << 1)))[208] != 22) goto L8a96;
L8a87:
	f8480(l2, 0);
	goto L8aa3;
L8a96:
	f8480(l2, 6);
L8aa3:
	l2++;
L8aa6:
	if (l2 <= g4360) goto L8a5d;
	if ((unsigned)g019d[g43b4] <= 0) goto L8ae6;
	l2 = 1;
L8abf:
	if (l2 >= g4360) goto L8ad9;
	if (f09e2(3)) goto L8ad9;
	l2++;
	goto L8abf;
L8ad9:
	f8480(6, l2);
L8ae6:
	;
}
