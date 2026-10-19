extern int g56ca;
f9778()
{
	f32be(g56ca, 32, 3, 0);
	f2b19(g56ca);
	f030b(g56ca, 12, 1);
	f083f(1110, g56ca, 18);
L97ba:
	if (!f0c42()) goto L97c2;
	return;
L97c2:
	if (f2643(1) != 1) goto L97dd;
	if ((char)f2724(1) != 13) goto L97dd;
	return;
L97dd:
	goto L97ba;
#asm
	db 0ebh,0e0h
#endasm
}
