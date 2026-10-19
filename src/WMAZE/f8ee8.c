extern char g5066[];
extern char g5073[];
extern char g5084[];
f8ee8(p4, p6)
{
	if (p6 == 2) goto L8f09;
	if (p6 >= 5) goto L8f09;
	if (g5066[(p4 * 3)] != 1) goto L8f16;
L8f09:
	g5073[p4] = 0;
	g5084[p4] = 0;
L8f16:
	;
}
