/* Return base plus count random rolls. */
roll_dice(base, count)
struct { char b0, b1; } count;
{
	int sum;
	sum = base;
L4835:
	if ((unsigned)count.b0 <= 0) goto L4851;
	sum = ((random((unsigned char)count.b1) + sum) + 1);
	count.b0--;
	goto L4835;
L4851:
	return sum;
}
