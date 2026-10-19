fc115(p4)
{
	int l2;
	l2 = 0;
Lc120:
	if (strcmp(p4, ((l2 * 20) + 25086))) goto Lc160;
	strcpy(p4, ((l2 * 20) + 25096));
	return;
Lc160:
	l2++;
	if (l2 < 5) goto Lc120;
	return;
}
