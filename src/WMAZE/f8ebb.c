extern char g5066[];
extern char g5083[];
f8ebb(p4, p6)
{
	if (p6 == 2) goto L8edc;
	if (p6 >= 5) goto L8edc;
	if (g5066[(p4 * 3)] != 1) goto L8ee4;
L8edc:
	g5083[p4] = 0;
L8ee4:
	;
}
