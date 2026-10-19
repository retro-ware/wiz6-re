extern int g50c6[];
f5357(p4, p6, p8, p10)
{
	switch (p4) {
case 0:
	p10--;
	goto L5387;
case 1:
	p8++;
	goto L5387;
case 2:
	p10++;
	goto L5387;
case 3:
	p8--;
	goto L5387;
	}
L5387:
	if (p8 < 0) goto L53c0;
	if (p8 >= 5) goto L53c0;
	if (p10 < 0) goto L53c0;
	if (p10 >= 5) goto L53c0;
	*(int *)((char *)g50c6 + ((p8 * 10) + (p10 << 1))) = p6;
L53c0:
	;
}
