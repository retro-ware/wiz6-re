#asm
	extrn f36ac_:near
#endasm
extern char g6aa6[];
extern char g6b0e[];
extern int g0052[];
extern int g363e;
extern int g3646;
extern int g6c7e;
extern int g6c80;
fe3c3(p4, p6, p8, p10, p12, p14, p16, p18, p20, p22, p24, p26, p28, p30, p32, p34, p36, p38, p40, p42, p44, p46, p48, p50, p52, p54, p56, p58, p60, p62, p64, p66, p68, p70, p72)
{
	if (g6aa6[((p4 * 3) + p8)]) goto Le40c;
	f36ac((g6c7e ? (p16 + p4) : (p14 + p4)), 1, (g6c7e != 0 ? (p14 + p4) : -1));
Le40c:
	if (p4 >= 3) goto Le820;
	if (p6 == 2) goto Le421;
	if (p6 < 7) goto Le452;
Le421:
	f36ac((g6c80 ? (p20 + p4) : (p18 + p4)), 1, (g6c80 != 0 ? (p18 + p4) : -1));
Le452:
	switch (p6) {
case 1:
case 3:
case 4:
	if (p6 != 3) goto Le4ee;
	if (p8 != 1) goto Le4c5;
	if (p4) goto Le495;
	if (g363e <= 0) goto Le495;
	fe2e4(2, 0, 0, (g363e + 15), p10, p12, p4);
	goto Le4c3;
Le495:
	if (p4 > 0) goto Le4a2;
	if (g363e) goto Le4c3;
Le4a2:
	fe2e4(255, (p22 + p4), -1, 0, -1, -1, p4);
Le4c3:
	goto Le4ec;
Le4c5:
	if (p4 <= 0) goto Le4ec;
	fe2e4(255, (p22 + p4), -1, 0, -1, -1, p4);
Le4ec:
	goto Le536;
Le4ee:
	if (p6 != 4) goto Le536;
	if (p4 > 0) goto Le500;
	if (p8 != 1) goto Le536;
Le500:
	fe2e4(2, *(int *)((char *)g0052 + ((p4 * 6) + (p8 << 1))), 0, (p4 + 10), p10, p12, p4);
Le536:
	fe2e4(255, (p24 + p4), (p28 + p4), 0, (p26 + p4), (p30 + p4), p4);
	fe2e4(255, (p32 + p4), (p36 + p4), 0, (p34 + p4), (p38 + p4), p4);
	if (p4 > 0) goto Le59f;
	if (p8 != 1) goto Le5d4;
Le59f:
	fe2e4(2, *(int *)((char *)g0052 + ((p4 * 6) + (p8 << 1))), 0, (p4 + 13), p10, p12, (p4 + 1));
Le5d4:
	goto Le820;
case 5:
	f36ac((g6c80 ? (p42 + p4) : (p40 + p4)), 1, (g6c80 != 0 ? (p40 + p4) : -1));
	goto Le820;
case 6:
	f36ac((g6c80 ? (p46 + p4) : (p44 + p4)), 1, (g6c80 != 0 ? (p44 + p4) : -1));
	goto Le820;
case 7:
	f36ac((g6c80 ? (p50 + p4) : (p48 + p4)), 0, -1);
	goto Le820;
case 8:
	if (p4 > 0) goto Le672;
	if (p8 != 1) goto Le6c5;
Le672:
	fe2e4(1, *(int *)((char *)g0052 + ((p4 * 6) + (p8 << 1))), 0, (((((g6c80) && (p4 < 2) ? 18 : 0) + (p4 << 1)) + g3646) + 1), p10, p12, p4);
Le6c5:
	goto Le820;
case 9:
	if (p4 > 0) goto Le6d4;
	if (p8 != 1) goto Le708;
Le6d4:
	fe2e4(2, *(int *)((char *)g0052 + ((p4 * 6) + (p8 << 1))), 0, (p4 + 1), p10, p12, p4);
Le708:
	goto Le820;
case 10:
case 11:
case 12:
case 13:
	f36ac((g6c80 ? (p54 + p4) : (p52 + p4)), 0, (g6c80 != 0 ? (p52 + p4) : -1));
	if (p6 != 11) goto Le775;
	f36ac((g6c80 ? (p58 + p4) : (p56 + p4)), 0, (g6c80 != 0 ? (p56 + p4) : -1));
	goto Le7c9;
Le775:
	if (p6 != 12) goto Le7ae;
	f36ac((g6c80 ? (p62 + p4) : (p60 + p4)), 0, (g6c80 != 0 ? (p60 + p4) : -1));
	goto Le7c9;
Le7ae:
	if (p6 != 13) goto Le7c9;
	f36ac((p64 + p4), 0, -1);
Le7c9:
	goto Le820;
case 14:
	if (p4) goto Le7f3;
	if (p8 != 1) goto Le7f3;
	f36ac(344, 0, (g6c80 != 0 ? 344 : -1));
Le7f3:
	goto Le820;
	}
Le820:
	if (g6b0e[((p4 * 3) + p8)]) goto Le907;
#asm
le838:
	db 08bh,046h,004h,08bh,0d0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh,04eh,008h,0d1h,0e1h
	db 003h,0c1h,08bh,0d8h,083h,0bfh,0b2h,06ah,000h,074h,003h,0e9h,075h,000h
#endasm
Le856:
	;
#asm
le856:
	db 0b8h,0ffh,0ffh,083h,03eh,07eh,06ch,000h,074h,006h,08bh,046h,042h,003h,046h,004h
le866:
	db 050h,0b8h,001h,000h,050h,083h,03eh,07eh,06ch,000h,074h,008h,08bh,046h,044h,003h
	db 046h,004h,0ebh,006h
le87a:
	db 08bh,046h,042h,003h,046h,004h
le880:
	db 050h
	call f36ac_
	db 083h,0c4h,006h,08bh,046h,004h,03dh,001h,000h,075h,03ah
#endasm
	if (p8 != 1) goto Le8c9;
#asm
	db 08bh,0d0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh,04eh,008h,0d1h,0e1h,003h,0c1h,08bh
	db 0d8h,083h,0bfh,01ah,06bh,001h,075h,01ch
#endasm
	f36ac(345, 0, (g6c7e != 0 ? 345 : -1));
Le8c9:
	;
#asm
le8c9:
	db 0ebh,03ch
#endasm
Le8cb:
	f36ac((((g6c7e + g3646) % 2) ? (p72 + p4) : (p70 + p4)), 1, (((g6c7e + g3646) % 2) ? (p70 + p4) : -1));
Le907:
	;
}
