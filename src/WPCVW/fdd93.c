extern char g4526[];
extern char g452d[];
extern char g4532[];
extern char pc_skills[];
extern int g57fe[];
extern int g5812[];
extern int g5820[];
extern int g582a[];
fdd93(p4, p6, p8, p10, p12)
char *p6;
char *p8;
char *p10;
char *p12;
{
	int l2;
	for (l2 = 0; strlen(p6) > l2; l2++) {
	g57fe[l2] = ((*(p6 + l2) == 49) || ((unsigned)pc_skills[((432 * p4) + l2)] > 0) ? 1 : 0);
	}
	for (l2 = 0; strlen(p8) > l2; l2++) {
	g5812[l2] = ((*(p8 + l2) == 49) || ((unsigned)g4526[((432 * p4) + l2)] > 0) ? 1 : 0);
	}
	for (l2 = 0; strlen(p10) > l2; l2++) {
	g5820[l2] = ((*(p10 + l2) == 49) || ((unsigned)g452d[((432 * p4) + l2)] > 0) ? 1 : 0);
	}
	for (l2 = 0; strlen(p12) > l2; l2++) {
	g582a[l2] = ((*(p12 + l2) == 49) || ((unsigned)g4532[((432 * p4) + l2)] > 0) ? 1 : 0);
	}
}
