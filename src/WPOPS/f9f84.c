extern char g50a1[];
extern char g50ae[];
extern char g50b5[];
extern char g50b6[];
extern char g50c5[];
extern char g50c6[];
extern char g50c7[];
extern char g50cd[];
extern char g50ce[];
extern char g50d6[];
extern int g5258;
hide_behind_front(p4, p6)
{
	if (p6 == 2) goto L9fa5;
	if (p6 >= 5) goto L9fa5;
	if (g50a1[(p4 * 3)] != 1) goto L9fe3;
L9fa5:
	g50c5[p4] = 0;
	g50c6[p4] = 0;
	g50c7[p4] = 0;
	g50b5[p4] = 0;
	g50cd[p4] = 0;
	g50ae[p4] = 0;
	g50b6[p4] = 0;
	g50ce[p4] = 0;
	g50d6[p4] = 0;
	if ((p4 + 3) >= g5258) goto L9fe3;
	g5258 = (p4 + 3);
L9fe3:
	;
}
