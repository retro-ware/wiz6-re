#asm
	extrn drv_op_c6_:near
	extrn queue_view_glyph_dopt_:near
#endasm
extern int g55ec;
f90d0(p4, p6, p8, p10, p12, p14, p16, p18, p20, p22)
{
	if (p4 != 3) goto L90df;
	if (p6) goto L90ec;
L90df:
	;
#asm
l90df:
	db 08bh,046h,006h,03dh,002h,000h,074h,005h,03dh,007h,000h,07ch,031h
#endasm
L90ec:
	drv_op_c6((g55ec ? (p14 + p4) : (p12 + p4)), 1, (g55ec != 0 ? (p12 + p4) : -1));
L911d:
	if (p4 >= 3) goto L92bb;
#asm
l9126:
	db 08bh,046h,006h,0e9h,082h,001h
#endasm
	drv_op_c6((g55ec ? (p18 + p4) : (p16 + p4)), 1, (g55ec != 0 ? (p16 + p4) : -1));
	if (p6 != 3) goto L9183;
	drv_op_c6((p20 + p4), (p4 < 3 ? 0 : 1), -1);
	goto L91a7;
L9183:
	if (p6 != 4) goto L91a7;
	drv_op_c6((p22 + p4), (p4 < 3 ? 0 : 1), -1);
L91a7:
	;
#asm
l91a7:
	db 0e9h,011h,001h,0b8h,0ffh,0ffh,083h,03eh,0ech,055h,000h,074h,006h,08bh,046h,018h
	db 003h,046h,004h
l91ba:
	db 050h,0b8h,001h,000h,050h,083h,03eh,0ech,055h,000h,074h,008h,08bh,046h,01ah,003h
	db 046h,004h,0ebh,006h
l91ce:
	db 08bh,046h,018h,003h,046h,004h
l91d4:
	db 050h
	call drv_op_c6_
	db 083h,0c4h,006h,0e9h,0ddh,000h,0b8h,0ffh,0ffh,083h,03eh,0ech,055h,000h,074h,006h
	db 08bh,046h,01ch,003h,046h,004h
l91ee:
	db 050h,0b8h,000h,000h,050h,083h,03eh,0ech,055h,000h,074h,008h,08bh,046h,01eh,003h
	db 046h,004h,0ebh,006h
l9202:
	db 08bh,046h,01ch,003h,046h,004h
l9208:
	db 050h
	call drv_op_c6_
	db 083h,0c4h,006h,0e9h,0a9h,000h,0ffh,076h,004h,0b8h,0f8h,000h,050h,0b8h,048h,000h
	db 050h,08bh,046h,004h,0d1h,0e0h,003h,046h,008h,003h,006h,046h,036h,050h,0b8h,000h
	db 000h,050h,050h,0b8h,001h,000h,050h
	call queue_view_glyph_dopt_
	db 083h,0c4h,00eh,0e9h,07fh,000h,0ffh,076h,004h,0b8h,0f8h,000h,050h,0b8h,048h,000h
	db 050h,08bh,046h,004h,003h,046h,00ah,050h,0b8h,000h,000h,050h,050h,0b8h,002h,000h
	db 050h
	call queue_view_glyph_dopt_
	db 083h,0c4h,00eh,0ebh,05ch,0b8h,0ffh,0ffh,083h,03eh,0ech,055h,000h,074h,006h,08bh
	db 046h,020h,003h,046h,004h
l926f:
	db 050h,0b8h,000h,000h,050h,083h,03eh,0ech,055h,000h,074h,008h,08bh,046h,022h,003h
	db 046h,004h,0ebh,006h
l9283:
	db 08bh,046h,020h,003h,046h,004h
l9289:
	db 050h
	call drv_op_c6_
	db 083h,0c4h,006h,0ebh,029h,0bbh,092h,02ch,091h,0bbh,092h,02ch,091h,02ch,091h,0aah
	db 091h,0aah,091h,0deh,091h,012h,092h,03ch,092h,05fh,092h,05fh,092h,05fh,092h,05fh
	db 092h
l92ae:
	db 03dh,00eh,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,092h,092h
#endasm
L92bb:
	;
}
