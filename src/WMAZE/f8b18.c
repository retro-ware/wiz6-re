#asm
	extrn add_view_object_m_:near
	extrn drv_op_c6_:near
#endasm
extern int g521a;
f8b18(p4, p6, p8, p10, p12, p14, p16, p18, p20, p22)
{
	if ((p4 == 3) && (p6)) goto L8b34;
#asm
l8b27:
	db 08bh,046h,006h,03dh,002h,000h,074h,005h,03dh,007h,000h,07ch,031h
#endasm
L8b34:
	drv_op_c6((g521a ? (p14 + p4) : (p12 + p4)), 1, (g521a != 0 ? (p12 + p4) : -1));
L8b65:
	if (p4 >= 3) goto L8d03;
#asm
l8b6e:
	db 08bh,046h,006h,0e9h,082h,001h
#endasm
	drv_op_c6((g521a ? (p18 + p4) : (p16 + p4)), 1, (g521a != 0 ? (p16 + p4) : -1));
	if (p6 != 3) goto L8bcb;
	drv_op_c6((p20 + p4), (p4 < 3 ? 0 : 1), -1);
	goto L8bef;
L8bcb:
	if (p6 != 4) goto L8bef;
	drv_op_c6((p22 + p4), (p4 < 3 ? 0 : 1), -1);
L8bef:
	goto L8d03;
#asm
	db 0b8h,0ffh,0ffh,083h,03eh,01ah,052h,000h,074h,006h,08bh,046h,018h,003h,046h,004h
l8c02:
	db 050h,0b8h,001h,000h,050h,083h,03eh,01ah,052h,000h,074h,008h,08bh,046h,01ah,003h
	db 046h,004h,0ebh,006h
l8c16:
	db 08bh,046h,018h,003h,046h,004h
l8c1c:
	db 050h
	call drv_op_c6_
	db 083h,0c4h,006h,0e9h,0ddh,000h,0b8h,0ffh,0ffh,083h,03eh,01ah,052h,000h,074h,006h
	db 08bh,046h,01ch,003h,046h,004h
l8c36:
	db 050h,0b8h,000h,000h,050h,083h,03eh,01ah,052h,000h,074h,008h,08bh,046h,01eh,003h
	db 046h,004h,0ebh,006h
l8c4a:
	db 08bh,046h,01ch,003h,046h,004h
l8c50:
	db 050h
	call drv_op_c6_
	db 083h,0c4h,006h,0e9h,0a9h,000h,0ffh,076h,004h,0b8h,0f8h,000h,050h,0b8h,048h,000h
	db 050h,08bh,046h,004h,0d1h,0e0h,003h,046h,008h,003h,006h,046h,036h,050h,0b8h,000h
	db 000h,050h,050h,0b8h,001h,000h,050h
	call add_view_object_m_
	db 083h,0c4h,00eh,0e9h,07fh,000h,0ffh,076h,004h,0b8h,0f8h,000h,050h,0b8h,048h,000h
	db 050h,08bh,046h,004h,003h,046h,00ah,050h,0b8h,000h,000h,050h,050h,0b8h,002h,000h
	db 050h
	call add_view_object_m_
	db 083h,0c4h,00eh,0ebh,05ch,0b8h,0ffh,0ffh,083h,03eh,01ah,052h,000h,074h,006h,08bh
	db 046h,020h,003h,046h,004h
l8cb7:
	db 050h,0b8h,000h,000h,050h,083h,03eh,01ah,052h,000h,074h,008h,08bh,046h,022h,003h
	db 046h,004h,0ebh,006h
l8ccb:
	db 08bh,046h,020h,003h,046h,004h
l8cd1:
	db 050h
	call drv_op_c6_
	db 083h,0c4h,006h,0ebh,029h,003h,08dh,074h,08bh,003h,08dh,074h,08bh,074h,08bh,0f2h
	db 08bh,0f2h,08bh,026h,08ch,05ah,08ch,084h,08ch,0a7h,08ch,0a7h,08ch,0a7h,08ch,0a7h
	db 08ch
l8cf6:
	db 03dh,00eh,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,0dah,08ch
#endasm
L8d03:
	;
}
