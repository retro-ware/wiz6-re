extern char g4fd8[];
extern int g4fd2;
extern int g546e;
extern int g56ca;
extern int g56cc;
extern int g57b0[];
f9f44()
{
	int l2;
	int l4;
	int l6;
	int l8;
	char x8[16];
	int l26;
	int l38[6];
	f075b(1000, 21534);
	g546e = f011a(0, 0, 40, 20, 20, -1, 0, 0);
	g56ca = f011a(0, 20, 40, 5, 19, -1, 0, 0);
	g56cc = f011a(21, 7, 19, 13, 21, -1, 0, 0);
L9fc4:
	f95f7(g546e, g56ca);
	l2 = 0;
L9fd7:
	l38[l2] = 1;
	l2++;
	if (l2 <= 5) goto L9fd7;
	l26 = -1;
	if (f9558() != -1) goto La002;
	l38[0] = 0;
La002:
	l4 = 0;
	l2 = 0;
	goto La020;
La00e:
	if (g4fd8[l2] != 1) goto La01d;
	l4 = 1;
La01d:
	l2++;
La020:
	if (l2 < g4fd2) goto La00e;
	l38[1] = l4;
#asm
	db 089h,046h,0deh,089h,046h,0e0h,089h,046h,0e2h
#endasm
	l6 = f4800(g56ca, 1130, l38, 4, 1, 12, 2, 5, f47c1(l38, 5));
#asm
	db 0e9h,0b1h,000h
#endasm
	f9656();
	goto La131;
	l8 = f9c04(g56ca, g56cc, 1129);
	if (l8 == -1) goto La09f;
	f99c0(g57b0[l8]);
La09f:
	goto La131;
	l8 = f9c04(g56ca, g56cc, 1121);
	if (l8 == -1) goto La0c8;
	f97e1(g57b0[l8]);
La0c8:
	goto La131;
	l8 = f9c04(g56ca, g56cc, 1122);
	if (l8 == -1) goto La0f0;
	f989b(g57b0[l8]);
La0f0:
	goto La131;
	l8 = f9c04(g56ca, g56cc, 1123);
	if (l8 == -1) goto La118;
	f9986(g57b0[l8]);
La118:
	goto La131;
#asm
	db 073h,0a0h,079h,0a0h,0a2h,0a0h,0cah,0a0h,0f2h,0a0h
la124:
	db 03dh,005h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,01ah,0a1h
#endasm
La131:
	if (l6 != 5) goto L9fc4;
	f02d2(g56cc, 0);
	f02d2(g56ca, 0);
	f02d2(g546e, 0);
}
