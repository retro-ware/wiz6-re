f7254(p4, p6)
char *p4;
{
	*(int *)(p4 + 6) -= p6;
	if (*(int *)(p4 + 6) >= 0) goto L726e;
	*(int *)(p4 + 6) = 0;
L726e:
	;
}
