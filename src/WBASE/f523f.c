extern int g3646;
extern int g4fbc;
extern int g5060;
extern int g5062;
extern int g5064;
f523f(p4)
{
L5242:
	if (f2643(p4)) goto L5291;
	if (g5060) goto L527b;
	g3646 = ((g3646 + 1) % 2);
	f4d1b(g3646, g5064, g5062);
	f36a0(g4fbc);
	goto L5281;
L527b:
	f2858();
	f2858();
L5281:
	g5060 = ((g5060 + 1) % 10);
	goto L5242;
L5291:
	return (unsigned char)(f2724(p4));
}
