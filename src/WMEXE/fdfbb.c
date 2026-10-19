#asm
	extrn drv_op_c6_:near
#endasm
extern char g511c[];
extern char g5184[];
extern int anim_phase;
extern int g0052[];
extern int g363e;
extern int g52f4;
extern int g52f6;
fdfbb(p4, p6, p8, p10, p12, p14, p16, p18, p20, p22, p24, p26, p28, p30, p32, p34, p36, p38, p40, p42, p44, p46, p48, p50, p52, p54, p56, p58, p60, p62, p64, p66, p68, p70, p72)
{
	if (g511c[((p4 * 3) + p8)]) goto Le004;
	drv_op_c6((g52f4 ? (p16 + p4) : (p14 + p4)), 1, (g52f4 != 0 ? (p14 + p4) : -1));
Le004:
	if (p4 >= 3) goto Le418;
	if (p6 == 2) goto Le019;
	if (p6 < 7) goto Le04a;
Le019:
	drv_op_c6((g52f6 ? (p20 + p4) : (p18 + p4)), 1, (g52f6 != 0 ? (p18 + p4) : -1));
Le04a:
	switch (p6) {
case 1:
case 3:
case 4:
	if (p6 != 3) goto Le0e6;
	if (p8 != 1) goto Le0bd;
	if (p4) goto Le08d;
	if (g363e <= 0) goto Le08d;
	fdedc(2, 0, 0, (g363e + 15), p10, p12, p4);
	goto Le0bb;
Le08d:
	if (p4 > 0) goto Le09a;
	if (g363e) goto Le0bb;
Le09a:
	fdedc(255, (p22 + p4), -1, 0, -1, -1, p4);
Le0bb:
	goto Le0e4;
Le0bd:
	if (p4 <= 0) goto Le0e4;
	fdedc(255, (p22 + p4), -1, 0, -1, -1, p4);
Le0e4:
	goto Le12e;
Le0e6:
	if (p6 != 4) goto Le12e;
	if (p4 > 0) goto Le0f8;
	if (p8 != 1) goto Le12e;
Le0f8:
	fdedc(2, *(int *)((char *)g0052 + ((p4 * 6) + (p8 << 1))), 0, (p4 + 10), p10, p12, p4);
Le12e:
	fdedc(255, (p24 + p4), (p28 + p4), 0, (p26 + p4), (p30 + p4), p4);
	fdedc(255, (p32 + p4), (p36 + p4), 0, (p34 + p4), (p38 + p4), p4);
	if (p4 > 0) goto Le197;
	if (p8 != 1) goto Le1cc;
Le197:
	fdedc(2, *(int *)((char *)g0052 + ((p4 * 6) + (p8 << 1))), 0, (p4 + 13), p10, p12, (p4 + 1));
Le1cc:
	goto Le418;
case 5:
	drv_op_c6((g52f6 ? (p42 + p4) : (p40 + p4)), 1, (g52f6 != 0 ? (p40 + p4) : -1));
	goto Le418;
case 6:
	drv_op_c6((g52f6 ? (p46 + p4) : (p44 + p4)), 1, (g52f6 != 0 ? (p44 + p4) : -1));
	goto Le418;
case 7:
	drv_op_c6((g52f6 ? (p50 + p4) : (p48 + p4)), 0, -1);
	goto Le418;
case 8:
	if (p4 > 0) goto Le26a;
	if (p8 != 1) goto Le2bd;
Le26a:
	fdedc(1, *(int *)((char *)g0052 + ((p4 * 6) + (p8 << 1))), 0, (((((g52f6) && (p4 < 2) ? 18 : 0) + (p4 << 1)) + anim_phase) + 1), p10, p12, p4);
Le2bd:
	goto Le418;
case 9:
	if (p4 > 0) goto Le2cc;
	if (p8 != 1) goto Le300;
Le2cc:
	fdedc(2, *(int *)((char *)g0052 + ((p4 * 6) + (p8 << 1))), 0, (p4 + 1), p10, p12, p4);
Le300:
	goto Le418;
case 10:
case 11:
case 12:
case 13:
	drv_op_c6((g52f6 ? (p54 + p4) : (p52 + p4)), 0, (g52f6 != 0 ? (p52 + p4) : -1));
	if (p6 != 11) goto Le36d;
	drv_op_c6((g52f6 ? (p58 + p4) : (p56 + p4)), 0, (g52f6 != 0 ? (p56 + p4) : -1));
	goto Le3c1;
Le36d:
	if (p6 != 12) goto Le3a6;
	drv_op_c6((g52f6 ? (p62 + p4) : (p60 + p4)), 0, (g52f6 != 0 ? (p60 + p4) : -1));
	goto Le3c1;
Le3a6:
	if (p6 != 13) goto Le3c1;
	drv_op_c6((p64 + p4), 0, -1);
Le3c1:
	goto Le418;
case 14:
	if (p4) goto Le3eb;
	if (p8 != 1) goto Le3eb;
	drv_op_c6(344, 0, (g52f6 != 0 ? 344 : -1));
Le3eb:
	goto Le418;
	}
Le418:
	if (g5184[((p4 * 3) + p8)]) goto Le4ff;
#asm
le430:
	db 08bh,046h,004h,08bh,0d0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh,04eh,008h,0d1h,0e1h
	db 003h,0c1h,08bh,0d8h,083h,0bfh,028h,051h,000h,074h,003h,0e9h,075h,000h
#endasm
Le44e:
	;
#asm
le44e:
	db 0b8h,0ffh,0ffh,083h,03eh,0f4h,052h,000h,074h,006h,08bh,046h,042h,003h,046h,004h
le45e:
	db 050h,0b8h,001h,000h,050h,083h,03eh,0f4h,052h,000h,074h,008h,08bh,046h,044h,003h
	db 046h,004h,0ebh,006h
le472:
	db 08bh,046h,042h,003h,046h,004h
le478:
	db 050h
	call drv_op_c6_
	db 083h,0c4h,006h,08bh,046h,004h,03dh,001h,000h,075h,03ah
#endasm
	if (p8 != 1) goto Le4c1;
#asm
	db 08bh,0d0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh,04eh,008h,0d1h,0e1h,003h,0c1h,08bh
	db 0d8h,083h,0bfh,090h,051h,001h,075h,01ch
#endasm
	drv_op_c6(345, 0, (g52f4 != 0 ? 345 : -1));
Le4c1:
	goto Le4ff;
Le4c3:
	drv_op_c6((((g52f4 + anim_phase) % 2) ? (p72 + p4) : (p70 + p4)), 1, (((g52f4 + anim_phase) % 2) ? (p70 + p4) : -1));
Le4ff:
	;
}
