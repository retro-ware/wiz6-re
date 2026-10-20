extern char g5158[];
extern char g5159[];
extern char g515b[];
extern char pclist_pcindex[];
extern int g5156[];
extern int g52ce;
extern long g52cc;
f7f76(p4, p6, p8, p10, p12)
char p6;
char p10;
char p12;
{
	int l2;
	long l6;
	if (p6 == 2) {
	l6 = (((long)p8 << 8) + (long)(unsigned char)p10);
	g52cc += l6;
	}
	l2 = 0;
L7fba:
	if (pclist_pcindex[(l2 * 6)] != p6) goto L80be;
	if (p6 != 2) goto L8050;
	l6 = (((long)g5156[(l2 * 3)] << 8) + (long)(unsigned char)g5158[(l2 * 6)]);
	if (l6 > g52cc) goto L804d;
	g52ce = 0;
	*(int *)&g52cc = 0;
	p8 = f7038(p4, (unsigned char)g515b[(l2 * 6)]);
	return;
L804d:
	goto L80be;
L8050:
	if ((p6 == 1) && (!g5156[(l2 * 3)])) {
	p8 = 0;
	}
	if ((((g5156[(l2 * 3)] != p8) && (p8)) || ((g5158[(l2 * 6)] != p10) && (p10))) || ((g5159[(l2 * 6)] != p12) && (p12))) goto L80be;
	p8 = f7038(p4, (unsigned char)g515b[(l2 * 6)]);
	return;
L80be:
	l2++;
	if (l2 < 8) goto L7fba;
	return 0;
}
