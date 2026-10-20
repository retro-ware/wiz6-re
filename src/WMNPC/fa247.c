extern char g00cc[];
extern char g56d0[];
extern char g572a[];
extern char g5748[];
extern char g5784[];
extern char g57c0[];
extern int g51b8;
extern int g54b2;
extern int g54b4[];
extern int g56ee[];
extern int g57de[];
extern int g5856[];
fa247()
{
	int l2;
	char x2[12];
	char l15;
	char l16;
	char x16[1];
	char l18;
	char l22[4];
	char x22[30];
	char l53;
	char l54;
	int l56;
	long l60;
	char x60[14];
	int l76;
	int l78;
	int l80;
	for (l78 = 0; l78 < g54b2; l78++) {
	l80 = g54b4[l78];
	access_scenario_record(1, &l76, g5856[l80], 0);
	strcpy(((l80 << 4) + 21744), &l76);
	g56d0[l80] = l16;
	g56ee[l80] = (((unsigned char)l54 * (unsigned char)l53) + l56);
	if (g00cc[(unsigned char)l16] == 1) {
	l60 = ((long)g56ee[l80] * l60);
	}
	*(long *)((char *)g57de + (l80 << 2)) = (((long)g51b8 * l60) / 100L);
	g572a[l80] = l15;
	for (l2 = 0; l2 < 2; l2++) {
	g5748[((l80 << 1) + l2)] = l22[l2];
	g5784[((l80 << 1) + l2)] = l22[(l2 + 2)];
	}
	g57c0[l80] = l18;
	}
}
