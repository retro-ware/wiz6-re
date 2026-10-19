extern char g6acb[];
extern char g6af6[];
extern char g6aff[];
extern char g6b08[];
fec7d(p4, p6)
{
	if (p6) goto Lec98;
	if (g6acb[(p4 * 3)] != 1) goto Lecaa;
Lec98:
	g6af6[p4] = 0;
	g6aff[p4] = 0;
	g6b08[p4] = 0;
Lecaa:
	;
}
