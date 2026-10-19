extern int g502e;
extern int g5030;
extern int g5032;
extern int g5034;
extern int g5036[];
f46ae()
{
	f030b(g5034, g5032, g5030);
	if (g5036[g502e] < 16) goto L46f3;
	f251d(g5034, ((g502e * 24) + 20538), (g5036[g502e] + -15));
	goto L4719;
L46f3:
	f24e9(g5034, ((g502e * 24) + 20538), g5036[g502e]);
L4719:
	g502e = ((g502e + 1) % 2);
}
