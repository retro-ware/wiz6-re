extern char *g56ca;
extern char g559c[];
extern int g4fc4;
extern int g546e;
extern int g56ac;
f7969()
{
	int l2;
	int l4;
	int l20[8];
	f32be(g56ca, 32, 3, 0);
	f2b19(g56ca);
	f030b(g56ca, 7, 1);
	f083f(1120, g56ca, 18);
	f030b(g56ca, 1, 2);
	f083f(1108, g56ca, 18);
	g56ca[6]++;
#asm
	db 0feh,047h,006h
#endasm
	f083f(1109, g56ca, 18);
	setmem(l20, 16, 0);
	l4 = 0;
	f030b(g546e, 7, (l4 + 5));
	f22b7(g546e, 98, 7);
	f0c16(0, ((unsigned char)g56ca[2] + 1), ((unsigned char)g56ca[3] + 2), ((unsigned char)g56ca[2] + 1), ((unsigned char)g56ca[3] + 2));
	f0c16(1, ((unsigned char)g56ca[2] + 2), ((unsigned char)g56ca[3] + 2), ((unsigned char)g56ca[2] + 2), ((unsigned char)g56ca[3] + 2));
	f0c16(2, ((unsigned char)g56ca[2] + 21), ((unsigned char)g56ca[3] + 2), ((unsigned char)g56ca[2] + 21), ((unsigned char)g56ca[3] + 2));
	f0c16(3, ((unsigned char)g56ca[2] + 22), ((unsigned char)g56ca[3] + 2), ((unsigned char)g56ca[2] + 22), ((unsigned char)g56ca[3] + 2));
	f0c16(4, 255, 0, 0, 0);
L7afd:
	f030b(g56ca, 12, 3);
	if (g56ac) goto L7b70;
	f083f(1110, g56ca, 18);
	f0c16(4, ((unsigned char)g56ca[2] + 18), ((unsigned char)g56ca[3] + 3), ((unsigned char)g56ca[2] + 18), ((unsigned char)g56ca[3] + 3));
	f0c16(5, 255, 0, 0, 0);
	goto L7b9f;
L7b70:
	if ((unsigned)g56ca[6] >= 38) goto L7b8b;
	f23e3(g56ca, 32, 3);
	goto L7b70;
L7b8b:
	f0c16(4, 255, 0, 0, 0);
L7b9f:
	l2 = f45fc(21534, 13720);
	if (g4fc4 != 1) goto L7bf3;
#asm
	db 0ebh,02dh
#endasm
	l2 = 1;
	goto L7bf3;
	l2 = 3;
#asm
	db 0ebh,02ch
#endasm
	l2 = 2;
#asm
	db 0ebh,025h
#endasm
	l2 = 4;
#asm
	db 0ebh,01eh
#endasm
	l2 = 5;
#asm
	db 0ebh,017h,0b9h,07bh,0c0h,07bh,0c7h,07bh,0ceh,07bh,0d5h,07bh
l7be6:
	db 03dh,005h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,0dch,07bh
#endasm
L7bf3:
	switch (l2) {
case 1:
	if (l20[l4] <= 0) goto L7c27;
	g559c[l4]--;
	l20[l4]--;
	g56ac++;
	f0aaa(1);
	f7068();
	goto L7c2f;
L7c27:
	f0aaa(0);
L7c2f:
	goto L7d48;
case 2:
	f030b(g546e, 7, (l4 + 5));
	f22b7(g546e, 32, 7);
	if (l4 <= 0) goto L7c64;
	l4--;
	goto L7c69;
L7c64:
	l4 = 6;
L7c69:
	f030b(g546e, 7, (l4 + 5));
	f22b7(g546e, 98, 7);
	goto L7d48;
case 3:
	if ((unsigned)g559c[l4] >= 18) goto L7cc0;
	if (g56ac <= 0) goto L7cc0;
	g559c[l4]++;
	l20[l4]++;
	g56ac--;
	f0aaa(1);
	f7068();
	goto L7cc8;
L7cc0:
	f0aaa(0);
L7cc8:
	goto L7d48;
case 4:
	f030b(g546e, 7, (l4 + 5));
	f22b7(g546e, 32, 7);
	if (l4 >= 6) goto L7cfd;
	l4++;
	goto L7d02;
L7cfd:
	l4 = 0;
L7d02:
	f030b(g546e, 7, (l4 + 5));
	f22b7(g546e, 98, 7);
	goto L7d48;
	}
L7d48:
	if (l2 != 5) goto L7d5d;
	if (g56ac <= 0) goto L7d5d;
	f0aaa(0);
L7d5d:
	if (l2 != 5) goto L7afd;
	if (g56ac > 0) goto L7afd;
	f030b(g546e, 7, (l4 + 5));
	f22b7(g546e, 32, 7);
}
