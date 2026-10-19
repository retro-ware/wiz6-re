extern int g363a;
extern int g43ce;
extern int g4fa8;
extern int g4faa;
extern int g4fb0;
extern int g4fb6;
extern int g4fb8;
extern int g4fba;
f7345()
{
	if (!g4fa8) goto L7354;
	free(g4fa8);
L7354:
	if (!g4faa) goto L7363;
	free(g4faa);
L7363:
	f02d2(g4fb0, 0);
	f32be(g4fba, 32, 3, 0);
	f32be(g4fb8, 32, 3, 0);
	f32be(g4fb6, 26, 3, 0);
	g43ce = 0;
	g363a = 4;
}
