extern int g3342;
extern int g363a;
extern int g43ce;
extern int g4fa8;
extern int g4faa;
extern int g4fac;
extern int g4fb0;
extern int g4fb2;
extern int g4fb6;
extern int g4fb8;
extern int g4fba;
extern int g4fbc;
extern int g4fbe;
extern int g4fc6;
f535a()
{
	if (!g4fa8) goto L5369;
	free(g4fa8);
L5369:
	if (!g4faa) goto L5378;
	free(g4faa);
L5378:
	g43ce = 0;
	f02d2(g4fb0, 0);
	f02d2(g4fac, 0);
	f02d2(g4fbc, 0);
	f02d2(g4fbe, 0);
	f02d2(g4fb6, 0);
	f02d2(g4fba, 0);
	f02d2(g4fb8, 0);
	f02d2(g3342, 0);
	f02d2(g4fb2, 0);
	f48ee(34);
	if (!(g4fc6 & 1)) goto L541c;
	f4e5b(20858, 1);
	goto L546c;
L541c:
	if (!(g4fc6 & 2)) goto L5434;
	f4e5b(20871, 1);
	goto L546c;
L5434:
	if (!(g4fc6 & 4)) goto L544c;
	f4e5b(20884, 1);
	goto L546c;
L544c:
	if (!(g4fc6 & 8)) goto L5464;
	f4e5b(20897, 1);
	goto L546c;
L5464:
	f00d5(12);
L546c:
	f0aaa(14);
	f3640();
	f02d2(g4fbe, 0);
	g363a = 2;
	f280c();
L548e:
	if (f2643(1)) goto L54a3;
	if (f0c42()) goto L54a3;
	goto L548e;
L54a3:
	f280c();
}
