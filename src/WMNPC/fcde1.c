extern int g51b6;
extern int g5894;
extern int g5896;
extern int g58a4;
extern int g58a6;
extern int g58a8;
extern int g58aa;
extern int g58ac;
extern int g58ae;
extern int g58b0;
extern int g58b4;
extern int g58b6;
extern int g58ca;
extern int g58d8[];
fcde1()
{
	int l2;
	int l4;
	char x4[78];
	int l84;
	l2 = g5894;
	if (*(int *)((char *)g58d8 + (l2 * 20)) >= 0) goto Lce09;
	l2 += *(int *)((char *)g58d8 + (l2 * 20));
Lce09:
	l4 = fcdb0(l2);
#asm
	db 0a1h,098h,058h,0e9h,068h,004h
#endasm
	if (((g58b4 != 1) || (l2)) || ((g58a4 != 1) && (g58a6 != 1))) goto Lce6b;
	if (g51b6 <= 0) goto Lce59;
	fc16d(&l84, 0);
	fc95b(1617, &l84);
	goto Lce67;
Lce59:
	fc95b(1638, 20531);
Lce67:
	return;
Lce6b:
	if ((g58b4) || (g58b6)) goto Lce85;
	g58b4 = 1;
	g58a6 = 1;
Lce85:
	if ((g58b4 != 1) || ((g58b0 != 1) && (g58a6 != 1))) goto Lcead;
	fcd43((l4 + 3), 1625);
	return;
Lcead:
	if (g58b4 != 1) goto Lcff2;
	if (((((((g58a4) || (g58a6)) || (g58a8)) || (g58aa)) || (g58ac)) || (g58ae)) || (g58b0)) goto Lceee;
	g58a6 = 1;
Lceee:
	if (g58a4 != 1) goto Lcf42;
	if (!*(int *)((char *)g58d8 + (l2 * 20))) goto Lcf30;
	fbe7a(g5894, g5896, &l84);
	fc95b(1618, &l84);
	return;
Lcf30:
	fcd43((l4 + 1), 1619);
	return;
Lcf42:
	if (g58a6 != 1) goto Lcf5c;
	fcd43((l4 + 2), 1620);
	return;
Lcf5c:
	if (g58a8 != 1) goto Lcf74;
	fc95b(1621, 20532);
	return;
Lcf74:
	if (g58aa != 1) goto Lcf8f;
	fcd43((l4 + 4), 1622);
	return;
Lcf8f:
	if (g58ac != 1) goto Lcfa7;
	fc95b(1623, 20533);
	return;
Lcfa7:
	if (g58ae != 1) goto Lcfc1;
	fcd43((l4 + 2), 1624);
	return;
Lcfc1:
	if (g58b0 != 1) goto Lcff0;
	if (l2) goto Lcfdf;
	fc95b(1626, 20534);
	return;
Lcfdf:
	fc95b(1627, 20535);
	return;
Lcff0:
	goto Ld01a;
Lcff2:
	if (l2) goto Ld009;
	fc95b(1628, 20536);
	return;
Ld009:
	fc95b(1635, 20537);
	return;
Ld01a:
	;
#asm
ld01a:
	db 0e9h,071h,002h
#endasm
	if (g58b4 != 1) goto Ld064;
	if (g58ca) goto Ld053;
	if (g58a6 != 1) goto Ld042;
	fc95b(1639, 20538);
	goto Ld050;
Ld042:
	fc95b(1631, 20539);
Ld050:
	return;
Ld053:
	fc95b(1627, 20540);
	return;
Ld064:
	if (l2) goto Ld07b;
	fc95b(1632, 20541);
	return;
Ld07b:
	fc95b(1627, 20542);
	return;
	if (g58b4 != 1) goto Ld0d3;
	if (g58ca) goto Ld0c2;
	if (g58a6 != 1) goto Ld0b1;
	fc95b(1640, 20543);
	goto Ld0bf;
Ld0b1:
	fc95b(1631, 20544);
Ld0bf:
	return;
Ld0c2:
	fc95b(1627, 20545);
	return;
Ld0d3:
	if (g58ca <= 0) goto Ld0ee;
	fcd43((l4 + 3), 1625);
	return;
Ld0ee:
	fc95b(1636, 20546);
	return;
	if (g58b4 != 1) goto Ld117;
	fc95b(1631, 20547);
	return;
Ld117:
	fc95b(1637, 20548);
	return;
	if (g58b4 != 1) goto Ld1c3;
	if (g58a4 != 1) goto Ld14a;
	fc95b(1630, 20549);
	return;
Ld14a:
	if (g58a6 != 1) goto Ld164;
	fcd43((l4 + 2), 1620);
	return;
Ld164:
	if (g58aa != 1) goto Ld17f;
	fcd43((l4 + 4), 1622);
	return;
Ld17f:
	if (g58ac != 1) goto Ld197;
	fc95b(1623, 20550);
	return;
Ld197:
	if (g58a8 != 1) goto Ld1af;
	fc95b(1621, 20551);
	return;
Ld1af:
	fcd43((l4 + 3), 1625);
	return;
Ld1c3:
	fc95b(1633, 20552);
	return;
	if (g58b4 != 1) goto Ld25c;
	if ((g58a4 != 1) && (g58ac != 1)) goto Ld1fd;
	fc95b(1630, 20553);
	return;
Ld1fd:
	if (g58a6 != 1) goto Ld215;
	fc95b(1634, 20554);
	return;
Ld215:
	if (g58aa != 1) goto Ld230;
	fcd43((l4 + 4), 1622);
	return;
Ld230:
	if (g58a8 != 1) goto Ld248;
	fc95b(1621, 20555);
	return;
Ld248:
	fcd43((l4 + 3), 1625);
	return;
Ld25c:
	fc95b(1635, 20556);
	return;
#asm
	db 019h,0ceh,0adh,0ceh,0adh,0ceh,0adh,0ceh,01dh,0d0h,08ch,0d0h,0ffh,0d0h,0ffh,0d0h
	db 028h,0d1h,0d4h,0d1h
ld281:
	db 03dh,00ah,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,06dh,0d2h
#endasm
Ld28e:
	return;
}
