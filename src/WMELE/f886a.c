extern char g513f[];
extern char g514b[];
extern char g5152[];
extern char g515c[];
/* Mark cells behind a closed left wall as hidden. */
hide_far_left(p4, p6)
{
	if ((!p6) && (g513f[(p4 * 3)] != 1)) goto L8897;
	g5152[p4] = 0;
	g514b[p4] = 0;
	g515c[p4] = 0;
L8897:
	;
}
