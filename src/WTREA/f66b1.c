extern int g5192;
f66b1(p4)
{
	int l2;
	int l4;
	g5192 = 0;
	l2 = (f09e2(100) + 1);
	l4 = 0;
L66ce:
	if (l2 <= 0) goto L670a;
	if (l4 >= 100) goto L670a;
	g5192++;
	if (g5192 <= 15) goto L66ef;
	g5192 = 0;
	l4++;
L66ef:
	if (f28af((p4 + 36), g5192) != 1) goto L6708;
	l2--;
L6708:
	goto L66ce;
L670a:
	f075b((g5192 + 5300), 20682);
	strcpy(20702, 20682);
}
