roll_dice(p4, p6)
struct { char b0, b1; } p6;
{
	int l2;
	l2 = p4;
L9f02:
	if ((unsigned)p6.b0 <= 0) goto L9f1e;
	l2 = ((random((unsigned char)p6.b1) + l2) + 1);
	p6.b0--;
	goto L9f02;
L9f1e:
	return l2;
}
