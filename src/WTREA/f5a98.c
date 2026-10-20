roll_dice(p4, p6)
struct { char b0, b1; } p6;
{
	int l2;
	l2 = p4;
L5aa4:
	if ((unsigned)p6.b0 <= 0) goto L5ac0;
	l2 = ((random((unsigned char)p6.b1) + l2) + 1);
	p6.b0--;
	goto L5aa4;
L5ac0:
	return l2;
}
