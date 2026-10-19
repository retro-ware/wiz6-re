extern int g501c;
extern int g5034;
extern int g5036;
extern int g5038;
extern int g503a[];
f4bb5()
{
	f030b(g5038, g5036, g5034);
	if (g503a[g501c] < 16) goto L4bfa;
	f251d(g5038, ((g501c * 24) + 20542), (g503a[g501c] + -15));
	goto L4c20;
L4bfa:
	f24e9(g5038, ((g501c * 24) + 20542), g503a[g501c]);
L4c20:
	g501c = ((g501c + 1) % 2);
}
