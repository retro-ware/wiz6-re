f6216(p4)
{
	register int rsi;
	f3118(p4);
	f32be(p4, 0, 1, 0);
	f4bed(p4, 0, 0, 14);
	f4bed(p4, 19, 0, 10);
	f4bed(p4, 0, 2, 21);
	f4bed(p4, 19, 2, 8);
	rsi = 1;
L628a:
	f4bed(p4, rsi, 0, 12);
	f4bed(p4, rsi, 2, 7);
	rsi++;
	if (rsi < 19) goto L628a;
	f4bed(p4, 0, 1, 13);
	f4bed(p4, 19, 1, 5);
	f030b(p4, 1, 1);
	f083f(700, p4, 18);
	f50a8(p4, 2, 1, 34);
	f50a8(p4, 17, 1, 34);
	rsi = 3;
L632a:
	f4bed(p4, 0, rsi, 5);
	rsi++;
	if (rsi < 9) goto L632a;
	f4bed(p4, 0, 9, 10);
	f4bed(p4, 0, 10, 5);
	f4bed(p4, 0, 11, 22);
	f4bed(p4, 0, 12, 13);
	f4bed(p4, 0, 13, 23);
	f4bed(p4, 0, 14, 5);
	f4bed(p4, 0, 15, 8);
	f4bed(p4, 1, 11, 18);
	f4bed(p4, 1, 13, 7);
	f4bed(p4, 2, 11, 34);
	f4bed(p4, 2, 12, 13);
	f4bed(p4, 2, 13, 11);
	rsi = 3;
L6441:
	f4bed(p4, rsi, 11, 18);
	f4bed(p4, rsi, 13, 7);
	rsi++;
	if (rsi < 6) goto L6441;
	rsi = 6;
L646e:
	f4bed(p4, rsi, 11, 18);
	f4bed(p4, rsi, 13, 12);
	f4bed(p4, rsi, 15, 7);
	rsi++;
	if (rsi < 9) goto L646e;
	rsi = 11;
L64ad:
	f4bed(p4, rsi, 11, 18);
	f4bed(p4, rsi, 13, 7);
	rsi++;
	if (rsi < 19) goto L64ad;
	f4bed(p4, 5, 13, 24);
	f4bed(p4, 5, 14, 4);
	f4bed(p4, 5, 15, 6);
	f4bed(p4, 9, 11, 19);
	f4bed(p4, 9, 12, 5);
	f4bed(p4, 9, 13, 10);
	f4bed(p4, 9, 14, 5);
	f4bed(p4, 9, 15, 8);
	f4bed(p4, 10, 11, 17);
	f4bed(p4, 10, 12, 4);
	f4bed(p4, 10, 13, 6);
	f4bed(p4, 19, 11, 19);
	f4bed(p4, 19, 12, 5);
	f4bed(p4, 19, 13, 8);
	f507f(p4, 1, 12, 34);
	rsi = 0;
L6615:
	f611b(p4, (rsi + 3), 12, (rsi + 24));
	rsi++;
	if (rsi < 6) goto L6615;
	f030b(p4, 1, 14);
	f083f(3957, p4, 18);
	f030b(p4, 10, 14);
	rsi = 0;
L666a:
	f23e3(p4, 32, 3);
	rsi++;
	if (rsi < 10) goto L666a;
	f030b(p4, 1, 15);
	rsi = 0;
L6695:
	f23e3(p4, 32, 3);
	rsi++;
	if (rsi < 4) goto L6695;
	f030b(p4, 10, 15);
	rsi = 0;
L66c0:
	f23e3(p4, 32, 3);
	rsi++;
	if (rsi < 10) goto L66c0;
	f31d1(p4);
	f2b19(p4);
}
