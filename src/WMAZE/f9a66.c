extern int g3646;
extern int g5036;
f9a66(p4)
{
L9a69:
	if (f2643(p4)) goto L9aa1;
	if (g5036) goto L9a8e;
	g3646 = ((g3646 + 1) % 2);
	f98cb();
	goto L9a91;
L9a8e:
	f4655();
L9a91:
	g5036 = ((g5036 + 1) % 10);
	goto L9a69;
L9aa1:
	return (unsigned char)(f2724(p4));
}
