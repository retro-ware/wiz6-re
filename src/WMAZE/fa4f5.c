extern char g450c[];
extern char g450d[];
extern char g4527[];
extern char g4589[];
extern int g363c;
extern int g43ce;
extern int g4ed0;
extern int g4ed2;
extern int g4f86;
fa4f5()
{
	int l2;
	int l4;
	int l16[6];
	if (g4ed0 <= 0) goto La516;
	if (f09e2(100) >= g4ed2) goto La516;
	g4f86 = 1;
La516:
	l2 = 0;
	goto La52e;
La51d:
	l16[l2] = 0;
	l2++;
La52e:
	if (l2 < g43ce) goto La51d;
	l2 = 0;
	goto La5bf;
La53f:
	l4 = f09e2(g43ce);
#asm
	db 08bh,046h,0fch,0d1h,0e0h,08bh,0d8h,003h,0ddh,083h,07fh,0f0h,000h,075h,0e6h,08bh
	db 046h,0fch,0d1h,0e0h,08bh,0d8h,003h,0ddh,0c7h,047h,0f0h,001h,000h
#endasm
	if (g4589[(432 * l4)]) goto La584;
	if (g450c[(432 * l4)]) goto La584;
	if (!g450d[(432 * l4)]) goto La586;
La584:
	goto La5bc;
La586:
	if (f09e2(((g363c * 10) + 110)) >= (unsigned char)g4527[(432 * l4)]) goto La5bc;
	fa421(l4);
	return;
La5bc:
	l2++;
La5bf:
	;
#asm
la5bf:
	db 08bh,046h,0feh,03bh,006h,0ceh,043h,07dh,003h
#endasm
	goto La53f;
La5cb:
	;
	return;
}
