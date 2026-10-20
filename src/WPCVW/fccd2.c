extern char g4518[];
extern char g4519[];
extern char g4591[];
extern char g4592[];
extern char g4593[];
extern char g4597[];
extern int pc_level[];
fccd2(p4, p6, p8, p10, p12, p14)
{
	int l2;
	if (*(int *)((char *)pc_level + (432 * p4)) < (unsigned char)g4597[(432 * p4)]) {
	l2 = ((unsigned)g4597[(432 * p4)] <= 20 ? (unsigned char)g4597[(432 * p4)] : 20);
	} else {
	l2 = (*(int *)((char *)pc_level + (432 * p4)) > 20 ? 20 : *(int *)((char *)pc_level + (432 * p4)));
	}
	if ((unsigned)(g4591[(432 * p4)] = (char)((((unsigned char)g4518[(432 * p4)] / 6) + (((l2 + p8) - p10) / p8)) - 1)) < 1) {
	g4591[(432 * p4)] = 1;
	}
	g4591[(432 * p4)] = (char)((unsigned char)g4591[(432 * p4)] > p6 ? p6 : (unsigned char)g4591[(432 * p4)]);
	if ((unsigned)(g4592[(432 * p4)] = (char)((((unsigned char)g4519[(432 * p4)] / 6) + (((l2 + p12) - p14) / p12)) - 1)) < 1) {
	g4592[(432 * p4)] = 1;
	}
	g4592[(432 * p4)] = (char)((unsigned char)g4592[(432 * p4)] > p6 ? p6 : (unsigned char)g4592[(432 * p4)]);
	g4593[(432 * p4)] = (char)((unsigned char)g4519[(432 * p4)] + l2);
}
