struct dice { int n; char a, b; };
struct dice f6a94(p4, p6, p8)
char p4;
char p6;
{
	struct dice d;
	d.a = p4;
	d.b = p6;
	d.n = p8;
	return d;
}
