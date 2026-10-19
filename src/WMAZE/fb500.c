extern int g3646;
fb500(p4, p6)
{
	int l2;
	l2 = 0;
	goto Lb531;
Lb50d:
	if (p6 <= 0) goto Lb52e;
	g3646 = ((g3646 + 1) % 2);
	f98cb();
	f0aaa(p6);
	f282f();
Lb52e:
	l2++;
Lb531:
	if (l2 < p4) goto Lb50d;
}
