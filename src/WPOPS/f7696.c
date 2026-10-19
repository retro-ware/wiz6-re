pick_random_set_bit(bits)
{
	int l2;
	int l4;
	int l6;
	l2 = -1;
	l6 = 0;
	l4 = (random(8) + 1);
L76b2:
	l2 = ((l2 + 1) % 8);
	if (test_bit(bits, l2) != 1) goto L76d3;
	l4--;
	goto L76d6;
L76d3:
	l6++;
L76d6:
	if (l4 <= 0) goto L76e2;
	if (l6 < 100) goto L76b2;
L76e2:
	return l2;
}
