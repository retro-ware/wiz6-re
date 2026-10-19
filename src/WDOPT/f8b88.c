#asm
	extrn f36ac_:near
#endasm
extern char g5414[];
extern char g547c[];
extern int g0052[];
extern int g363e;
extern int g3646;
extern int g55ec;
extern int g55ee;
f8b88(p4, p6, p8, p10, p12, p14, p16, p18, p20, p22, p24, p26, p28, p30, p32, p34, p36, p38, p40, p42, p44, p46, p48, p50, p52, p54, p56, p58, p60, p62, p64, p66, p68, p70, p72)
{
	if (g5414[((p4 * 3) + p8)]) goto L8bd1;
	f36ac((g55ec ? (p16 + p4) : (p14 + p4)), 1, (g55ec != 0 ? (p14 + p4) : -1));
L8bd1:
	if (p4 >= 3) goto L8fe5;
	if (p6 == 2) goto L8be6;
	if (p6 < 7) goto L8c17;
L8be6:
	f36ac((g55ee ? (p20 + p4) : (p18 + p4)), 1, (g55ee != 0 ? (p18 + p4) : -1));
L8c17:
	switch (p6) {
case 1:
case 3:
case 4:
	if (p6 != 3) goto L8cb3;
	if (p8 != 1) goto L8c8a;
	if (p4) goto L8c5a;
	if (g363e <= 0) goto L8c5a;
	f8aa9(2, 0, 0, (g363e + 15), p10, p12, p4);
	goto L8c88;
L8c5a:
	if (p4 > 0) goto L8c67;
	if (g363e) goto L8c88;
L8c67:
	f8aa9(255, (p22 + p4), -1, 0, -1, -1, p4);
L8c88:
	goto L8cb1;
L8c8a:
	if (p4 <= 0) goto L8cb1;
	f8aa9(255, (p22 + p4), -1, 0, -1, -1, p4);
L8cb1:
	goto L8cfb;
L8cb3:
	if (p6 != 4) goto L8cfb;
	if (p4 > 0) goto L8cc5;
	if (p8 != 1) goto L8cfb;
L8cc5:
	f8aa9(2, *(int *)((char *)g0052 + ((p4 * 6) + (p8 << 1))), 0, (p4 + 10), p10, p12, p4);
L8cfb:
	f8aa9(255, (p24 + p4), (p28 + p4), 0, (p26 + p4), (p30 + p4), p4);
	f8aa9(255, (p32 + p4), (p36 + p4), 0, (p34 + p4), (p38 + p4), p4);
	if (p4 > 0) goto L8d64;
	if (p8 != 1) goto L8d99;
L8d64:
	f8aa9(2, *(int *)((char *)g0052 + ((p4 * 6) + (p8 << 1))), 0, (p4 + 13), p10, p12, (p4 + 1));
L8d99:
	goto L8fe5;
case 5:
	f36ac((g55ee ? (p42 + p4) : (p40 + p4)), 1, (g55ee != 0 ? (p40 + p4) : -1));
	goto L8fe5;
case 6:
	f36ac((g55ee ? (p46 + p4) : (p44 + p4)), 1, (g55ee != 0 ? (p44 + p4) : -1));
	goto L8fe5;
case 7:
	f36ac((g55ee ? (p50 + p4) : (p48 + p4)), 0, -1);
	goto L8fe5;
case 8:
	if (p4 > 0) goto L8e37;
	if (p8 != 1) goto L8e8a;
L8e37:
	f8aa9(1, *(int *)((char *)g0052 + ((p4 * 6) + (p8 << 1))), 0, (((((g55ee) && (p4 < 2) ? 18 : 0) + (p4 << 1)) + g3646) + 1), p10, p12, p4);
L8e8a:
	goto L8fe5;
case 9:
	if (p4 > 0) goto L8e99;
	if (p8 != 1) goto L8ecd;
L8e99:
	f8aa9(2, *(int *)((char *)g0052 + ((p4 * 6) + (p8 << 1))), 0, (p4 + 1), p10, p12, p4);
L8ecd:
	goto L8fe5;
case 10:
case 11:
case 12:
case 13:
	f36ac((g55ee ? (p54 + p4) : (p52 + p4)), 0, (g55ee != 0 ? (p52 + p4) : -1));
	if (p6 != 11) goto L8f3a;
	f36ac((g55ee ? (p58 + p4) : (p56 + p4)), 0, (g55ee != 0 ? (p56 + p4) : -1));
	goto L8f8e;
L8f3a:
	if (p6 != 12) goto L8f73;
	f36ac((g55ee ? (p62 + p4) : (p60 + p4)), 0, (g55ee != 0 ? (p60 + p4) : -1));
	goto L8f8e;
L8f73:
	if (p6 != 13) goto L8f8e;
	f36ac((p64 + p4), 0, -1);
L8f8e:
	goto L8fe5;
case 14:
	if (p4) goto L8fb8;
	if (p8 != 1) goto L8fb8;
	f36ac(344, 0, (g55ee != 0 ? 344 : -1));
L8fb8:
	goto L8fe5;
	}
L8fe5:
	if (g547c[((p4 * 3) + p8)]) goto L90cc;
#asm
l8ffd:
	db 08bh,046h,004h,08bh,0d0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh,04eh,008h,0d1h,0e1h
	db 003h,0c1h,08bh,0d8h,083h,0bfh,020h,054h,000h,074h,003h,0e9h,075h,000h
#endasm
L901b:
	;
#asm
l901b:
	db 0b8h,0ffh,0ffh,083h,03eh,0ech,055h,000h,074h,006h,08bh,046h,042h,003h,046h,004h
l902b:
	db 050h,0b8h,001h,000h,050h,083h,03eh,0ech,055h,000h,074h,008h,08bh,046h,044h,003h
	db 046h,004h,0ebh,006h
l903f:
	db 08bh,046h,042h,003h,046h,004h
l9045:
	db 050h
	call f36ac_
	db 083h,0c4h,006h,08bh,046h,004h,03dh,001h,000h,075h,03ah
#endasm
	if (p8 != 1) goto L908e;
#asm
	db 08bh,0d0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh,04eh,008h,0d1h,0e1h,003h,0c1h,08bh
	db 0d8h,083h,0bfh,088h,054h,001h,075h,01ch
#endasm
	f36ac(345, 0, (g55ec != 0 ? 345 : -1));
L908e:
	;
#asm
l908e:
	db 0ebh,03ch
#endasm
L9090:
	f36ac((((g55ec + g3646) % 2) ? (p72 + p4) : (p70 + p4)), 1, (((g55ec + g3646) % 2) ? (p70 + p4) : -1));
L90cc:
	;
}
