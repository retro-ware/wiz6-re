#asm
	extrn drv_op_c6_:near
	extrn queue_view_glyph_:near
#endasm
extern int g52f2;
/* Draw the front wall pieces of one depth row. */
draw_front_walls(p4, p6, p8, p10, p12, p14, p16, p18, p20, p22)
{
	if ((p4 == 3) && (p6)) goto L8545;
#asm
l8538:
	db 08bh,046h,006h,03dh,002h,000h,074h,005h,03dh,007h,000h,07ch,031h
#endasm
L8545:
	drv_op_c6((g52f2 ? (p14 + p4) : (p12 + p4)), 1, (g52f2 != 0 ? (p12 + p4) : -1));
L8576:
	if (p4 >= 3) goto L8714;
#asm
l857f:
	db 08bh,046h,006h,0e9h,082h,001h
#endasm
	drv_op_c6((g52f2 ? (p18 + p4) : (p16 + p4)), 1, (g52f2 != 0 ? (p16 + p4) : -1));
	if (p6 != 3) goto L85dc;
	drv_op_c6((p20 + p4), (p4 < 3 ? 0 : 1), -1);
	goto L8600;
L85dc:
	if (p6 != 4) goto L8600;
	drv_op_c6((p22 + p4), (p4 < 3 ? 0 : 1), -1);
L8600:
	goto L8714;
#asm
	db 0b8h,0ffh,0ffh,083h,03eh,0f2h,052h,000h,074h,006h,08bh,046h,018h,003h,046h,004h
l8613:
	db 050h,0b8h,001h,000h,050h,083h,03eh,0f2h,052h,000h,074h,008h,08bh,046h,01ah,003h
	db 046h,004h,0ebh,006h
l8627:
	db 08bh,046h,018h,003h,046h,004h
l862d:
	db 050h
	call drv_op_c6_
	db 083h,0c4h,006h,0e9h,0ddh,000h,0b8h,0ffh,0ffh,083h,03eh,0f2h,052h,000h,074h,006h
	db 08bh,046h,01ch,003h,046h,004h
l8647:
	db 050h,0b8h,000h,000h,050h,083h,03eh,0f2h,052h,000h,074h,008h,08bh,046h,01eh,003h
	db 046h,004h,0ebh,006h
l865b:
	db 08bh,046h,01ch,003h,046h,004h
l8661:
	db 050h
	call drv_op_c6_
	db 083h,0c4h,006h,0e9h,0a9h,000h,0ffh,076h,004h,0b8h,0f8h,000h,050h,0b8h,048h,000h
	db 050h,08bh,046h,004h,0d1h,0e0h,003h,046h,008h,003h,006h,046h,036h,050h,0b8h,000h
	db 000h,050h,050h,0b8h,001h,000h,050h
	call queue_view_glyph_
	db 083h,0c4h,00eh,0e9h,07fh,000h,0ffh,076h,004h,0b8h,0f8h,000h,050h,0b8h,048h,000h
	db 050h,08bh,046h,004h,003h,046h,00ah,050h,0b8h,000h,000h,050h,050h,0b8h,002h,000h
	db 050h
	call queue_view_glyph_
	db 083h,0c4h,00eh,0ebh,05ch,0b8h,0ffh,0ffh,083h,03eh,0f2h,052h,000h,074h,006h,08bh
	db 046h,020h,003h,046h,004h
l86c8:
	db 050h,0b8h,000h,000h,050h,083h,03eh,0f2h,052h,000h,074h,008h,08bh,046h,022h,003h
	db 046h,004h,0ebh,006h
l86dc:
	db 08bh,046h,020h,003h,046h,004h
l86e2:
	db 050h
	call drv_op_c6_
	db 083h,0c4h,006h,0ebh,029h,014h,087h,085h,085h,014h,087h,085h,085h,085h,085h,003h
	db 086h,003h,086h,037h,086h,06bh,086h,095h,086h,0b8h,086h,0b8h,086h,0b8h,086h,0b8h
	db 086h
l8707:
	db 03dh,00eh,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,0ebh,086h
#endasm
L8714:
	;
}
