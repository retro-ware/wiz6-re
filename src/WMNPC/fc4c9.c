extern int g5894;
extern int g5896;
extern int g5898;
extern int g589a;
extern int g589c;
extern int g589e;
extern int g58a2;
extern int g58b2;
extern int g58b4;
extern int g58b6;
extern int g58b8;
extern int g58ba;
extern int g58bc;
extern int g58be;
extern int g58c0;
extern int g58c2;
extern int g58c6;
extern int g58c8;
extern int g58ca;
extern int g58cc;
extern int g58ce;
extern int g58d0;
extern int g58d2;
extern int g58d4;
extern int g6a82;
fc4c9(p4)
{
	int l2;
	int l4;
	int l6;
	if ((l2 = fbf7f(p4, 2, 7)) == -1) goto Lc4ef;
	return 2;
Lc4ef:
	if ((l2 = fbf7f(p4, 3, 10)) == -1) goto Lc565;
	g589a = l2;
	switch (g589a) {
case 0:
	g58c0 = 1;
	goto Lc560;
case 1:
	g58c2 = 1;
	goto Lc560;
case 2:
	g58ba = 1;
	goto Lc560;
case 3:
	g58bc = 1;
	goto Lc560;
case 4:
	g58be = 1;
	goto Lc560;
case 5:
	g58c6 = 1;
	goto Lc560;
case 6:
	g58c8 = 1;
	goto Lc560;
	}
Lc560:
	return 3;
Lc565:
	if ((l2 = fbf7f(p4, 8, 7)) == -1) goto Lc59e;
	g58b4 = 1;
	g58a2 = l2;
	fbb28(g58a2);
	g5898 = -1;
	g58d4 = -1;
	return 8;
Lc59e:
	if ((l2 = fbf7f(p4, 4, 7)) == -1) goto Lc5e3;
	if ((g6a82 != 7) && (g6a82)) goto Lc5d1;
	g58b6 = 1;
	g58ca = g58ce;
Lc5d1:
	if (l2) goto Lc5dd;
	g58b2 = 1;
Lc5dd:
	return 4;
Lc5e3:
	if ((l2 = fc0d9(p4, 27268)) == -1) goto Lc604;
	g58b8 = 1;
	return 5;
Lc604:
	if ((l2 = fbf7f(p4, 1, 10)) == -1) goto Lc664;
	if (g6a82 != 6) goto Lc63c;
	g5898 = -1;
	l6 = g58ca;
	g58ca = g58cc;
	g58cc = l6;
Lc63c:
	if (g5898 == -1) goto Lc64b;
	g58d4 = l2;
	goto Lc651;
Lc64b:
	g5898 = l2;
Lc651:
	if (g6a82 != 7) goto Lc65e;
	g58ca = g58ce;
Lc65e:
	return 1;
Lc664:
	if ((l2 = fc0d9(p4, 27278)) == -1) goto Lc67f;
	return 6;
Lc67f:
	if ((l2 = fbf7f(p4, 9, 11)) == -1) goto Lc6d3;
	if ((g5894 != -1) && (g5894)) goto Lc6b4;
	g5894 = g589c;
	g5896 = g589e;
	goto Lc6cd;
Lc6b4:
	if ((g589c == g5894) || (!g589c)) goto Lc6cd;
	g58d0 = g589c;
	g58d2 = g589e;
Lc6cd:
	return 0;
Lc6d3:
	l2 = fbea1(p4, &l4);
	if (l2 == -1) goto Lc773;
	if (g6a82 != 4) goto Lc706;
	g58b4 = 1;
	if (l2) goto Lc704;
	g58ca = 0;
Lc704:
	goto Lc72e;
Lc706:
	if (g6a82 != 1) goto Lc71b;
	if (l2) goto Lc719;
	g58cc = 0;
Lc719:
	goto Lc72e;
Lc71b:
	if ((g6a82 != 6) || (l2)) goto Lc72e;
	g58cc = 0;
Lc72e:
	if (l2) goto Lc737;
#asm
	db 0a3h,0ceh,058h
#endasm
Lc737:
	if ((g5894 != -1) && (g5894)) goto Lc753;
	g5894 = l2;
	g5896 = l4;
	goto Lc76d;
Lc753:
	if ((g5894 == l2) || (!l2)) goto Lc76d;
	g58d0 = l2;
	g58d2 = l4;
Lc76d:
	return 0;
Lc773:
	if ((l2 = fbf7f(p4, 7, 5)) == -1) goto Lc7c6;
	if (g6a82 != 4) goto Lc79e;
	g58b4 = 1;
	g58ca = l2;
	goto Lc7ba;
Lc79e:
	if (g6a82 != 1) goto Lc7ad;
	g58cc = l2;
	goto Lc7ba;
Lc7ad:
	if (g6a82 != 6) goto Lc7ba;
	g58cc = l2;
Lc7ba:
	g58ce = l2;
	return 7;
Lc7c6:
	if (g6a82 != 6) goto Lc7d3;
	g5898 = -1;
Lc7d3:
	return 10;
}
