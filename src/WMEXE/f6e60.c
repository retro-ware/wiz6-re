extern char g4594[];
extern char g4595[];
extern int g4408[];
f6e60(p4)
{
	int l2;
	*(int *)((char *)g4408 + (432 * p4)) = 0;
	l2 = 0;
	goto L6e98;
L6e7b:
	*(int *)((char *)g4408 + (432 * p4)) += f6e01(l2, p4);
	l2++;
L6e98:
	if ((unsigned char)g4594[(432 * p4)] > l2) goto L6e7b;
	l2 = 0;
	goto L6ed3;
L6eb2:
	*(int *)((char *)g4408 + (432 * p4)) += f6e01((l2 + 10), p4);
	l2++;
L6ed3:
	if ((unsigned char)g4595[(432 * p4)] > l2) goto L6eb2;
}
