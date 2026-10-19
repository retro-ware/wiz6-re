#asm
	extrn add_view_object_:near
	extrn drv_op_c6_:near
#endasm
extern int g5254;
draw_side_walls(p4, p6, p8, p10, p12, p14, p16, p18, p20, p22)
{
	if (p4 != 3) goto L9cb5;
	if (p6) goto L9cc2;
L9cb5:
	;
#asm
l9cb5:
	db 08bh,046h,006h,03dh,002h,000h,074h,005h,03dh,007h,000h,07ch,031h
#endasm
L9cc2:
	drv_op_c6((g5254 ? (p14 + p4) : (p12 + p4)), 1, (g5254 != 0 ? (p12 + p4) : -1));
L9cf3:
	if (p4 >= 3) goto L9e91;
#asm
l9cfc:
	db 08bh,046h,006h,0e9h,082h,001h
#endasm
	drv_op_c6((g5254 ? (p18 + p4) : (p16 + p4)), 1, (g5254 != 0 ? (p16 + p4) : -1));
	if (p6 != 3) goto L9d59;
	drv_op_c6((p20 + p4), (p4 < 3 ? 0 : 1), -1);
	goto L9d7d;
L9d59:
	if (p6 != 4) goto L9d7d;
	drv_op_c6((p22 + p4), (p4 < 3 ? 0 : 1), -1);
L9d7d:
	;
#asm
l9d7d:
	db 0e9h,011h,001h,0b8h,0ffh,0ffh,083h,03eh,054h,052h,000h,074h,006h,08bh,046h,018h
	db 003h,046h,004h
l9d90:
	db 050h,0b8h,001h,000h,050h,083h,03eh,054h,052h,000h,074h,008h,08bh,046h,01ah,003h
	db 046h,004h,0ebh,006h
l9da4:
	db 08bh,046h,018h,003h,046h,004h
l9daa:
	db 050h
	call drv_op_c6_
	db 083h,0c4h,006h,0e9h,0ddh,000h,0b8h,0ffh,0ffh,083h,03eh,054h,052h,000h,074h,006h
	db 08bh,046h,01ch,003h,046h,004h
l9dc4:
	db 050h,0b8h,000h,000h,050h,083h,03eh,054h,052h,000h,074h,008h,08bh,046h,01eh,003h
	db 046h,004h,0ebh,006h
l9dd8:
	db 08bh,046h,01ch,003h,046h,004h
l9dde:
	db 050h
	call drv_op_c6_
	db 083h,0c4h,006h,0e9h,0a9h,000h,0ffh,076h,004h,0b8h,0f8h,000h,050h,0b8h,048h,000h
	db 050h,08bh,046h,004h,0d1h,0e0h,003h,046h,008h,003h,006h,046h,036h,050h,0b8h,000h
	db 000h,050h,050h,0b8h,001h,000h,050h
	call add_view_object_
	db 083h,0c4h,00eh,0e9h,07fh,000h,0ffh,076h,004h,0b8h,0f8h,000h,050h,0b8h,048h,000h
	db 050h,08bh,046h,004h,003h,046h,00ah,050h,0b8h,000h,000h,050h,050h,0b8h,002h,000h
	db 050h
	call add_view_object_
	db 083h,0c4h,00eh,0ebh,05ch,0b8h,0ffh,0ffh,083h,03eh,054h,052h,000h,074h,006h,08bh
	db 046h,020h,003h,046h,004h
l9e45:
	db 050h,0b8h,000h,000h,050h,083h,03eh,054h,052h,000h,074h,008h,08bh,046h,022h,003h
	db 046h,004h,0ebh,006h
l9e59:
	db 08bh,046h,020h,003h,046h,004h
l9e5f:
	db 050h
	call drv_op_c6_
	db 083h,0c4h,006h,0ebh,029h,091h,09eh,002h,09dh,091h,09eh,002h,09dh,002h,09dh,080h
	db 09dh,080h,09dh,0b4h,09dh,0e8h,09dh,012h,09eh,035h,09eh,035h,09eh,035h,09eh,035h
	db 09eh
l9e84:
	db 03dh,00eh,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,068h,09eh
#endasm
L9e91:
	;
}
