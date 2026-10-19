extern int g5226;
extern int g5228;
extern int g522a;
extern int g522c;
extern int g522e[];
f591a()
{
	f030b(g522a, g5228, g5226);
	if (g522e[g522c] < 16) goto L595f;
	f251d(g522a, ((g522c * 24) + 21042), (g522e[g522c] + -15));
	goto L5985;
L595f:
	f24e9(g522a, ((g522c * 24) + 21042), g522e[g522c]);
L5985:
	g522c = ((g522c + 1) % 2);
}
