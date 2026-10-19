#asm
	extrn f36ac_:near
#endasm
extern char g511a[];
extern char g5182[];
extern int g0052[];
extern int g363e;
extern int g3646;
extern int g52f2;
extern int g52f4;
f7fe1(p4, p6, p8, p10, p12, p14, p16, p18, p20, p22, p24, p26, p28, p30, p32, p34, p36, p38, p40, p42, p44, p46, p48, p50, p52, p54, p56, p58, p60, p62, p64, p66, p68, p70, p72)
{
	if (g511a[((p4 * 3) + p8)]) goto L802a;
	f36ac((g52f2 ? (p16 + p4) : (p14 + p4)), 1, (g52f2 != 0 ? (p14 + p4) : -1));
L802a:
	if (p4 >= 3) goto L843e;
	if (p6 == 2) goto L803f;
	if (p6 < 7) goto L8070;
L803f:
	f36ac((g52f4 ? (p20 + p4) : (p18 + p4)), 1, (g52f4 != 0 ? (p18 + p4) : -1));
L8070:
	switch (p6) {
case 1:
case 3:
case 4:
	if (p6 != 3) goto L810c;
	if (p8 != 1) goto L80e3;
	if (p4) goto L80b3;
	if (g363e <= 0) goto L80b3;
	f7f02(2, 0, 0, (g363e + 15), p10, p12, p4);
	goto L80e1;
L80b3:
	if (p4 > 0) goto L80c0;
	if (g363e) goto L80e1;
L80c0:
	f7f02(255, (p22 + p4), -1, 0, -1, -1, p4);
L80e1:
	goto L810a;
L80e3:
	if (p4 <= 0) goto L810a;
	f7f02(255, (p22 + p4), -1, 0, -1, -1, p4);
L810a:
	goto L8154;
L810c:
	if (p6 != 4) goto L8154;
	if (p4 > 0) goto L811e;
	if (p8 != 1) goto L8154;
L811e:
	f7f02(2, *(int *)((char *)g0052 + ((p4 * 6) + (p8 << 1))), 0, (p4 + 10), p10, p12, p4);
L8154:
	f7f02(255, (p24 + p4), (p28 + p4), 0, (p26 + p4), (p30 + p4), p4);
	f7f02(255, (p32 + p4), (p36 + p4), 0, (p34 + p4), (p38 + p4), p4);
	if (p4 > 0) goto L81bd;
	if (p8 != 1) goto L81f2;
L81bd:
	f7f02(2, *(int *)((char *)g0052 + ((p4 * 6) + (p8 << 1))), 0, (p4 + 13), p10, p12, (p4 + 1));
L81f2:
	goto L843e;
case 5:
	f36ac((g52f4 ? (p42 + p4) : (p40 + p4)), 1, (g52f4 != 0 ? (p40 + p4) : -1));
	goto L843e;
case 6:
	f36ac((g52f4 ? (p46 + p4) : (p44 + p4)), 1, (g52f4 != 0 ? (p44 + p4) : -1));
	goto L843e;
case 7:
	f36ac((g52f4 ? (p50 + p4) : (p48 + p4)), 0, -1);
	goto L843e;
case 8:
	if (p4 > 0) goto L8290;
	if (p8 != 1) goto L82e3;
L8290:
	f7f02(1, *(int *)((char *)g0052 + ((p4 * 6) + (p8 << 1))), 0, (((((g52f4) && (p4 < 2) ? 18 : 0) + (p4 << 1)) + g3646) + 1), p10, p12, p4);
L82e3:
	goto L843e;
case 9:
	if (p4 > 0) goto L82f2;
	if (p8 != 1) goto L8326;
L82f2:
	f7f02(2, *(int *)((char *)g0052 + ((p4 * 6) + (p8 << 1))), 0, (p4 + 1), p10, p12, p4);
L8326:
	goto L843e;
case 10:
case 11:
case 12:
case 13:
	f36ac((g52f4 ? (p54 + p4) : (p52 + p4)), 0, (g52f4 != 0 ? (p52 + p4) : -1));
	if (p6 != 11) goto L8393;
	f36ac((g52f4 ? (p58 + p4) : (p56 + p4)), 0, (g52f4 != 0 ? (p56 + p4) : -1));
	goto L83e7;
L8393:
	if (p6 != 12) goto L83cc;
	f36ac((g52f4 ? (p62 + p4) : (p60 + p4)), 0, (g52f4 != 0 ? (p60 + p4) : -1));
	goto L83e7;
L83cc:
	if (p6 != 13) goto L83e7;
	f36ac((p64 + p4), 0, -1);
L83e7:
	goto L843e;
case 14:
	if (p4) goto L8411;
	if (p8 != 1) goto L8411;
	f36ac(344, 0, (g52f4 != 0 ? 344 : -1));
L8411:
	goto L843e;
	}
L843e:
	if (g5182[((p4 * 3) + p8)]) goto L8525;
#asm
l8456:
	db 08bh,046h,004h,08bh,0d0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh,04eh,008h,0d1h,0e1h
	db 003h,0c1h,08bh,0d8h,083h,0bfh,026h,051h,000h,074h,003h,0e9h,075h,000h
#endasm
L8474:
	;
#asm
l8474:
	db 0b8h,0ffh,0ffh,083h,03eh,0f2h,052h,000h,074h,006h,08bh,046h,042h,003h,046h,004h
l8484:
	db 050h,0b8h,001h,000h,050h,083h,03eh,0f2h,052h,000h,074h,008h,08bh,046h,044h,003h
	db 046h,004h,0ebh,006h
l8498:
	db 08bh,046h,042h,003h,046h,004h
l849e:
	db 050h
	call f36ac_
	db 083h,0c4h,006h,08bh,046h,004h,03dh,001h,000h,075h,03ah
#endasm
	if (p8 != 1) goto L84e7;
#asm
	db 08bh,0d0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh,04eh,008h,0d1h,0e1h,003h,0c1h,08bh
	db 0d8h,083h,0bfh,08eh,051h,001h,075h,01ch
#endasm
	f36ac(345, 0, (g52f2 != 0 ? 345 : -1));
L84e7:
	;
#asm
l84e7:
	db 0ebh,03ch
#endasm
L84e9:
	f36ac((((g52f2 + g3646) % 2) ? (p72 + p4) : (p70 + p4)), 1, (((g52f2 + g3646) % 2) ? (p70 + p4) : -1));
L8525:
	;
}
