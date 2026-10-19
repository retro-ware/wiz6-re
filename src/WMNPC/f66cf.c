f66cf(p4, p6)
struct { char b0, b1; } p6;
{
	int l2;
	l2 = p4;
L66db:
	if ((unsigned)p6.b0 <= 0) goto L66f7;
	l2 = ((random((unsigned char)p6.b1) + l2) + 1);
	p6.b0--;
	goto L66db;
L66f7:
	return l2;
}
