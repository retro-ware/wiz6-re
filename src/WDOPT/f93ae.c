extern char g5439[];
extern char g5446[];
extern char g544d[];
extern char g544e[];
extern char g545d[];
extern char g545e[];
extern char g545f[];
extern char g5465[];
extern char g5466[];
extern char sheet_win[];
extern int g55f0;
f93ae(p4, p6)
{
	if (((p6 != 2) && (p6 < 5)) && (g5439[(p4 * 3)] != 1)) goto L940d;
	g545d[p4] = 0;
	g545e[p4] = 0;
	g545f[p4] = 0;
	g544d[p4] = 0;
	g5465[p4] = 0;
	g5446[p4] = 0;
	g544e[p4] = 0;
	g5466[p4] = 0;
	sheet_win[p4] = 0;
	if ((p4 + 3) >= g55f0) goto L940d;
	g55f0 = (p4 + 3);
L940d:
	;
}
