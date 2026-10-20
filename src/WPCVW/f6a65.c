/* Sum of p6 random rolls (p4 is the start value). */
roll_dice(base, count)
struct { char b0, b1; } count;
{
	int sum;
	sum = base;
L6a71:
	if ((unsigned)count.b0 <= 0) goto L6a8d;
	sum = ((random((unsigned char)count.b1) + sum) + 1);
	count.b0--;
	goto L6a71;
L6a8d:
	return sum;
}
