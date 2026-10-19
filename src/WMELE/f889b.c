extern char g513f[];
extern char g516a[];
extern char g5173[];
extern char g517c[];
/* Mark cells behind a closed right wall as hidden. */
hide_far_right(p4, p6)
{
	if (p6) goto L88b6;
	if (g513f[(p4 * 3)] != 1) goto L88c8;
L88b6:
	g516a[p4] = 0;
	g5173[p4] = 0;
	g517c[p4] = 0;
L88c8:
	;
}
