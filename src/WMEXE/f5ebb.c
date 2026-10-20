roll_dice_x(p4, p6)
struct { char b0, b1; } p6;
{
	int l2;
	l2 = p4;
L5ec7:
	if ((unsigned)p6.b0 <= 0) goto L5ee3;
	l2 = ((random((unsigned char)p6.b1) + l2) + 1);
	p6.b0--;
	goto L5ec7;
L5ee3:
	return l2;
}
