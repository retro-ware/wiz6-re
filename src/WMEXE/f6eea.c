/* Pick an index 0..7 by percent weights from a byte table. */
pick_weighted(weights)
char *weights;
{
	int roll;
	register int i;
	roll = random(100);
	for (i = 0; i < 8; i++) {
	if ((unsigned char)*(weights + i) <= roll) goto L6f12;
	return i;
L6f12:
	roll -= (unsigned char)*(weights + i);
	}
	return 4;
}
