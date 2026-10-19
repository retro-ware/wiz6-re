extern int g363e;
extern int g4f9a;
extern int g4f9c;
extern int g4f9e;
extern int g4fa0;
extern int g4fa2;
extern int g4fa4;
extern int g4fca;
extern int g5034;
extern int g503a;
f5949(p4)
{
	int l2;
	int l4;
	g503a = 2020;
	l4 = (((g4f9a + p4) + 4) % 4);
	l2 = f548e(l4, g4f9c, g4fa0, g4f9e, g4fa4, g4fa2);
#asm
	db 08bh,046h,0fch,0d1h,0e0h,08bh,0d8h,08bh,087h,0e0h,04eh,0e9h,0f0h,000h
#endasm
	if (l2 >= 2) goto L59aa;
	if (!f56f4(l4)) goto L59a8;
L59a4:
	return;
L59a8:
	goto L59fe;
L59aa:
	if (l2 != 3) goto L59fe;
	if (l4 != g4f9a) goto L59fe;
	f0aaa(4);
	g363e = 1;
	f98cb();
	f0aaa(13);
	f09a3(2);
	g363e = 2;
	f98cb();
	f09a3(2);
	g363e = 0;
	if (!f56f4(l4)) goto L59fe;
	return;
L59fe:
	if (g5034) goto L5a22;
	f567c(g503a, (g503a == 2020 ? 2 : 0), 2);
L5a22:
	;
#asm
l5a22:
	db 0e9h,075h,000h
#endasm
	if (l2 != 3) goto L5a4b;
	if (l4 != g4f9a) goto L5a4b;
	f567c(2021, 2, (g4fca / 2));
	goto L5a5a;
L5a4b:
	f567c(g503a, 2, 2);
L5a5a:
	;
#asm
l5a5a:
	db 0ebh,03eh
#endasm
	if (l2 != 2) goto L5a72;
	if (f56f4(l4)) goto L59a4;
	goto L5a81;
L5a72:
	f567c(g503a, 2, 2);
L5a81:
	;
#asm
l5a81:
	db 0ebh,017h
#endasm
L5a83:
	;
#asm
l5a83:
	db 03dh,000h,000h,075h,003h,0e9h,008h,0ffh
l5a8b:
	db 03dh,001h,000h,074h,095h,03dh,002h,000h,074h,090h,03dh,003h,000h,074h,0c2h
#endasm
L5a9a:
	return;
}
