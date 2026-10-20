/* Return base plus count random rolls. */
roll_dice_dopt(base, count)
struct { char b0, b1; } count;
{
	int sum;
	sum = base;
L4c82:
	if ((unsigned)count.b0 <= 0) goto L4c9e;
	sum = ((random((unsigned char)count.b1) + sum) + 1);
	count.b0--;
	goto L4c82;
L4c9e:
	return sum;
}
