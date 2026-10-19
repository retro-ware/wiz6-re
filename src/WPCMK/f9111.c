extern char *g56ca;
extern char g560c;
extern int g4fc4;
extern int g546e;
extern int g56cc;
f9111()
{
	int l2;
	int l4;
	f32be(g56cc, 32, 3, 0);
	f2b19(g56cc);
	f32be(g56ca, 32, 3, 0);
	f2b19(g56ca);
	f030b(g56ca, 9, 1);
	f083f(1112, g56ca, 18);
	f030b(g56ca, 12, 2);
	f083f(1113, g56ca, 18);
	l4 = -1;
	f4b9c(1119);
	f0c16(0, ((unsigned char)g56ca[2] + 9), ((unsigned char)g56ca[3] + 1), ((unsigned char)g56ca[2] + 9), ((unsigned char)g56ca[3] + 1));
	f0c16(1, ((unsigned char)g56ca[2] + 10), ((unsigned char)g56ca[3] + 1), ((unsigned char)g56ca[2] + 10), ((unsigned char)g56ca[3] + 1));
	f0c16(2, ((unsigned char)g56ca[2] + 18), ((unsigned char)g56ca[3] + 2), ((unsigned char)g56ca[2] + 18), ((unsigned char)g56ca[3] + 2));
	f0c16(3, 255, 0, 0, 0);
L9248:
	if ((unsigned char)g560c == l4) goto L925f;
	f8ffe((unsigned char)g560c);
	l4 = (unsigned char)g560c;
L925f:
	f5176(g56cc, 8, 3);
	l2 = f45fc(21534, 13720);
	if (g4fc4 != 1) goto L92af;
	goto L92a0;
	l2 = 1;
#asm
	db 0ebh,01dh
#endasm
	l2 = 3;
#asm
	db 0ebh,016h
#endasm
	l2 = 5;
#asm
	db 0ebh,00fh
#endasm
L92a0:
	;
#asm
l92a0:
	db 03dh,000h,000h,074h,0e6h,03dh,001h,000h,074h,0e8h,03dh,002h,000h,074h,0eah
#endasm
L92af:
	switch (l2) {
case 1:
	g560c = (char)(((unsigned char)g560c + 41) % 42);
	goto L92e6;
case 3:
	g560c = (char)(((unsigned char)g560c + 1) % 42);
	goto L92e6;
	}
L92e6:
	if (l2 != 5) goto L9248;
	f4b6d();
	f32be(g56cc, 32, 3, 0);
	f2b19(g56cc);
	f32be(g56ca, 32, 3, 0);
	f2b19(g56ca);
	f5176(g546e, 1, 1);
}
