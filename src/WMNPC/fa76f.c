extern int g4fb2;
fa76f(p4)
{
	int l2;
	int l4;
	l2 = f011a(0, 19, 40, 5, 25, -1, 0, 0);
	f32be(l2, 32, 3, 0);
	f09fb(g4fb2, 0);
	l4 = 0;
La7c3:
	l4 = fa378(l2, p4, l4);
	if (l4 == -1) goto La7e6;
	fa69b(p4, l4);
	goto La7c3;
La7e6:
	f0a42(g4fb2, 0);
	f02d2(l2, 0);
}
