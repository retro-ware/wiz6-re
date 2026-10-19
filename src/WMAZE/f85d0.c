#asm
	extrn drv_op_c6_:near
#endasm
extern char g5042[];
extern char g50aa[];
extern int anim_phase;
extern int g0052[];
extern int g363e;
extern int g521a;
extern int g521c;
f85d0(p4, p6, p8, p10, p12, p14, p16, p18, p20, p22, p24, p26, p28, p30, p32, p34, p36, p38, p40, p42, p44, p46, p48, p50, p52, p54, p56, p58, p60, p62, p64, p66, p68, p70, p72)
{
	if (g5042[((p4 * 3) + p8)]) goto L8619;
	drv_op_c6((g521a ? (p16 + p4) : (p14 + p4)), 1, (g521a != 0 ? (p14 + p4) : -1));
L8619:
	if (p4 >= 3) goto L8a2d;
	if (p6 == 2) goto L862e;
	if (p6 < 7) goto L865f;
L862e:
	drv_op_c6((g521c ? (p20 + p4) : (p18 + p4)), 1, (g521c != 0 ? (p18 + p4) : -1));
L865f:
	switch (p6) {
case 1:
case 3:
case 4:
	if (p6 != 3) goto L86fb;
	if (p8 != 1) goto L86d2;
	if (p4) goto L86a2;
	if (g363e <= 0) goto L86a2;
	add_view_object_m(2, 0, 0, (g363e + 15), p10, p12, p4);
	goto L86d0;
L86a2:
	if (p4 > 0) goto L86af;
	if (g363e) goto L86d0;
L86af:
	add_view_object_m(255, (p22 + p4), -1, 0, -1, -1, p4);
L86d0:
	goto L86f9;
L86d2:
	if (p4 <= 0) goto L86f9;
	add_view_object_m(255, (p22 + p4), -1, 0, -1, -1, p4);
L86f9:
	goto L8743;
L86fb:
	if (p6 != 4) goto L8743;
	if (p4 > 0) goto L870d;
	if (p8 != 1) goto L8743;
L870d:
	add_view_object_m(2, *(int *)((char *)g0052 + ((p4 * 6) + (p8 << 1))), 0, (p4 + 10), p10, p12, p4);
L8743:
	add_view_object_m(255, (p24 + p4), (p28 + p4), 0, (p26 + p4), (p30 + p4), p4);
	add_view_object_m(255, (p32 + p4), (p36 + p4), 0, (p34 + p4), (p38 + p4), p4);
	if (p4 > 0) goto L87ac;
	if (p8 != 1) goto L87e1;
L87ac:
	add_view_object_m(2, *(int *)((char *)g0052 + ((p4 * 6) + (p8 << 1))), 0, (p4 + 13), p10, p12, (p4 + 1));
L87e1:
	goto L8a2d;
case 5:
	drv_op_c6((g521c ? (p42 + p4) : (p40 + p4)), 1, (g521c != 0 ? (p40 + p4) : -1));
	goto L8a2d;
case 6:
	drv_op_c6((g521c ? (p46 + p4) : (p44 + p4)), 1, (g521c != 0 ? (p44 + p4) : -1));
	goto L8a2d;
case 7:
	drv_op_c6((g521c ? (p50 + p4) : (p48 + p4)), 0, -1);
	goto L8a2d;
case 8:
	if (p4 > 0) goto L887f;
	if (p8 != 1) goto L88d2;
L887f:
	add_view_object_m(1, *(int *)((char *)g0052 + ((p4 * 6) + (p8 << 1))), 0, (((((g521c) && (p4 < 2) ? 18 : 0) + (p4 << 1)) + anim_phase) + 1), p10, p12, p4);
L88d2:
	goto L8a2d;
case 9:
	if (p4 > 0) goto L88e1;
	if (p8 != 1) goto L8915;
L88e1:
	add_view_object_m(2, *(int *)((char *)g0052 + ((p4 * 6) + (p8 << 1))), 0, (p4 + 1), p10, p12, p4);
L8915:
	goto L8a2d;
case 10:
case 11:
case 12:
case 13:
	drv_op_c6((g521c ? (p54 + p4) : (p52 + p4)), 0, (g521c != 0 ? (p52 + p4) : -1));
	if (p6 != 11) goto L8982;
	drv_op_c6((g521c ? (p58 + p4) : (p56 + p4)), 0, (g521c != 0 ? (p56 + p4) : -1));
	goto L89d6;
L8982:
	if (p6 != 12) goto L89bb;
	drv_op_c6((g521c ? (p62 + p4) : (p60 + p4)), 0, (g521c != 0 ? (p60 + p4) : -1));
	goto L89d6;
L89bb:
	if (p6 != 13) goto L89d6;
	drv_op_c6((p64 + p4), 0, -1);
L89d6:
	goto L8a2d;
case 14:
	if (p4) goto L8a00;
	if (p8 != 1) goto L8a00;
	drv_op_c6(344, 0, (g521c != 0 ? 344 : -1));
L8a00:
	goto L8a2d;
	}
L8a2d:
	if (g50aa[((p4 * 3) + p8)]) goto L8b14;
#asm
l8a45:
	db 08bh,046h,004h,08bh,0d0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh,04eh,008h,0d1h,0e1h
	db 003h,0c1h,08bh,0d8h,083h,0bfh,04eh,050h,000h,074h,003h,0e9h,075h,000h
#endasm
L8a63:
	;
#asm
l8a63:
	db 0b8h,0ffh,0ffh,083h,03eh,01ah,052h,000h,074h,006h,08bh,046h,042h,003h,046h,004h
l8a73:
	db 050h,0b8h,001h,000h,050h,083h,03eh,01ah,052h,000h,074h,008h,08bh,046h,044h,003h
	db 046h,004h,0ebh,006h
l8a87:
	db 08bh,046h,042h,003h,046h,004h
l8a8d:
	db 050h
	call drv_op_c6_
	db 083h,0c4h,006h,08bh,046h,004h,03dh,001h,000h,075h,03ah
#endasm
	if (p8 != 1) goto L8ad6;
#asm
	db 08bh,0d0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh,04eh,008h,0d1h,0e1h,003h,0c1h,08bh
	db 0d8h,083h,0bfh,0b6h,050h,001h,075h,01ch
#endasm
	drv_op_c6(345, 0, (g521a != 0 ? 345 : -1));
L8ad6:
	;
#asm
l8ad6:
	db 0ebh,03ch
#endasm
L8ad8:
	drv_op_c6((((g521a + anim_phase) % 2) ? (p72 + p4) : (p70 + p4)), 1, (((g521a + anim_phase) % 2) ? (p70 + p4) : -1));
L8b14:
	;
}
