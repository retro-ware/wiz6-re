extern char g4591[];
extern char g4592[];
extern int pc_carried[];
extern int pc_max_load[];
extern int pc_stamina_max[];
struct r7 { int w[7]; };
struct r7 get_load_category(p4)
{
	struct r7 sr;
	long l18;
	sr.w[0] = 0;
	sr.w[1] = 0;
	sr.w[2] = 0;
	sr.w[3] = (unsigned char)g4591[(432 * p4)];
	sr.w[4] = (unsigned char)g4592[(432 * p4)];
	sr.w[5] = 0;
	sr.w[6] = 9;
	l18 = (((long)*(int *)((char *)pc_carried + (432 * p4)) * 100) / (long)*(int *)((char *)pc_max_load + (432 * p4)));
	if (l18 > 50L) goto L5201;
	goto L52f9;
L5201:
	if (l18 > 66L) goto L5232;
	sr.w[1] = 5;
	sr.w[2] = 10;
	if (sr.w[3] > 3) {
	sr.w[3] = 3;
	}
	if (sr.w[4] > 3) {
	sr.w[4] = 3;
	}
	goto L52f9;
L5232:
	if (l18 > 75L) goto L5281;
	sr.w[0] = 1;
	sr.w[1] = 10;
	sr.w[2] = 20;
	if (sr.w[3] > 2) {
	sr.w[3] = 2;
	}
	if (sr.w[4] > 2) {
	sr.w[4] = 2;
	}
	sr.w[5] = (*(int *)((char *)pc_stamina_max + (432 * p4)) / 100);
	sr.w[6] = -7;
	goto L52f9;
L5281:
	if (l18 > 90L) goto L52c6;
	sr.w[0] = 2;
	sr.w[1] = 20;
	sr.w[2] = 40;
	sr.w[3] = 1;
	sr.w[4] = 1;
	sr.w[5] = (*(int *)((char *)pc_stamina_max + (432 * p4)) / 50);
	sr.w[6] = -5;
	goto L52f9;
L52c6:
	sr.w[0] = 4;
	sr.w[1] = 40;
	sr.w[2] = 80;
	sr.w[3] = 1;
	sr.w[4] = 1;
	sr.w[5] = (*(int *)((char *)pc_stamina_max + (432 * p4)) / 25);
	sr.w[6] = -4;
L52f9:
	return sr;
}
