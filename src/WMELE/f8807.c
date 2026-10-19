extern char g513f[];
extern char g514c[];
extern char g5153[];
extern char g5154[];
extern char g5163[];
extern char g5164[];
extern char g5165[];
extern char g516b[];
extern char g516c[];
extern char g5174[];
extern int g52f6;
f8807(p4, p6)
{
	if (p6 == 2) goto L8828;
	if (p6 >= 5) goto L8828;
	if (g513f[(p4 * 3)] != 1) goto L8866;
L8828:
	g5163[p4] = 0;
	g5164[p4] = 0;
	g5165[p4] = 0;
	g5153[p4] = 0;
	g516b[p4] = 0;
	g514c[p4] = 0;
	g5154[p4] = 0;
	g516c[p4] = 0;
	g5174[p4] = 0;
	if ((p4 + 3) >= g52f6) goto L8866;
	g52f6 = (p4 + 3);
L8866:
	;
}
