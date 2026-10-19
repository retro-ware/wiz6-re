#asm
	extrn f02d2_:near
#endasm
extern int g3342;
extern int g4f84;
extern int g4fc0;
f543f()
{
	char *l2;
	char x2[40];
	int l44;
	char x44[38];
	int l84;
	int l86;
	int l88;
	int l90;
	int l92;
	int l94;
	int l96;
	if (g4fc0 != 1) goto L5453;
	return 0;
L5453:
	f09fb(g3342, 0);
	l2 = f011a(0, 19, 40, 5, 10, -1, 0, 0);
	f32be(l2, 32, 3, 0);
	f3118(l2);
	f075b(1050, &l44);
	f0b7e(l2, &l44, 1, 18);
	f5416(l2, 7, 2, 17);
	f5416(l2, 33, 2, 19);
	f5416(l2, 7, 4, 6);
	f5416(l2, 33, 4, 8);
	l86 = 8;
L551f:
	f5416(l2, l86, 2, 18);
	f5416(l2, l86, 4, 7);
	l86++;
	if (l86 < 33) goto L551f;
	f5416(l2, 7, 3, 4);
	f5416(l2, 33, 3, 5);
	l88 = 0;
	f3118(l2);
	f033f(l2, 8, 3, 32, 3);
	l90 = f09e2(8);
	l94 = f09e2(8);
	l92 = (f09e2(4) + ((l94 / 4) << 2));
	f030b(l2, 10, 3);
	f22b7(l2, (unsigned char)((l90 + 104)), 4);
	l2[6]++;
	f22b7(l2, (unsigned char)((l92 + 112)), 5);
	l2[6]++;
	f22b7(l2, (unsigned char)((l94 + 120)), 2);
	l96 = ((unsigned char)l2[6] + 2);
	f31d1(l2);
	f2a63();
	l88++;
	f033f(l2, 16, 3, 32, 3);
	f030b(l2, l96, 3);
	f075b((((((l92 << 3) + (l94 << 6)) + l90) % 79) + 4000), &l84);
	f529e(l2, &l84, 15, 5, 0);
	g4f84 = 17210;
#asm
	db 0fch,056h,057h,08dh,076h,0ach,08dh,07eh,0d4h
#endasm
#asm
l56cd:
	db 036h,0ach,036h,0aah,03ch,000h,075h,0f8h,05fh,05eh,090h,090h,0b8h,000h,000h,050h
	db 0ffh,076h,0feh
	call f02d2_
	db 083h,0c4h,004h
#endasm
	if (!strcmp(&l44, &l84)) goto L56fe;
	return -1;
L56fe:
	g4fc0 = 1;
	return 0;
}
