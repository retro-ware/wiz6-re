extern char g3592;
f45e5(p4)
{
	int l2;
	char x2[18];
	int l22;
	int l24;
	l24 = 0;
	if (g3592 != 3) goto L4623;
	f0c82(&l22, 13632, 58);
	f0d26(&l22, 1, 0, 0);
	l24 = 1;
	goto L464f;
L4623:
	if (g3592 != 5) goto L464f;
	f0c82(&l22, 13652, 58);
	f0d26(&l22, 1, 0, 0);
L464f:
	l2 = open(f0cd6(p4, 1), 0);
	if (l2 != -1) goto L4677;
	f00d5(4);
L4677:
	f3688(l2);
	close(l2);
	if (l24 != 1) goto L469b;
	f0d26(&l22, 0, 0, 0);
L469b:
	;
}
