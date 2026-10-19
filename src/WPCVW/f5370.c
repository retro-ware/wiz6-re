extern char g4594[];
extern char g4595[];
extern int g4408[];
f5370(p4)
{
	int l2;
	*(int *)((char *)g4408 + (432 * p4)) = 0;
	l2 = 0;
	goto L53a8;
L538b:
	*(int *)((char *)g4408 + (432 * p4)) += f5311(l2, p4);
	l2++;
L53a8:
	if ((unsigned char)g4594[(432 * p4)] > l2) goto L538b;
	l2 = 0;
	goto L53e3;
L53c2:
	*(int *)((char *)g4408 + (432 * p4)) += f5311((l2 + 10), p4);
	l2++;
L53e3:
	if ((unsigned char)g4595[(432 * p4)] > l2) goto L53c2;
}
