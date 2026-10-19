#asm
	extrn drv_op_c6_:near
	extrn fe2e4_:near
#endasm
extern int g6c7e;
fe90b(p4, p6, p8, p10, p12, p14, p16, p18, p20, p22)
{
	if ((p4 == 3) && (p6)) goto Le927;
#asm
le91a:
	db 08bh,046h,006h,03dh,002h,000h,074h,005h,03dh,007h,000h,07ch,031h
#endasm
Le927:
	drv_op_c6((g6c7e ? (p14 + p4) : (p12 + p4)), 1, (g6c7e != 0 ? (p12 + p4) : -1));
Le958:
	if (p4 >= 3) goto Leaf6;
#asm
le961:
	db 08bh,046h,006h,0e9h,082h,001h
#endasm
	drv_op_c6((g6c7e ? (p18 + p4) : (p16 + p4)), 1, (g6c7e != 0 ? (p16 + p4) : -1));
	if (p6 != 3) goto Le9be;
	drv_op_c6((p20 + p4), (p4 < 3 ? 0 : 1), -1);
	goto Le9e2;
Le9be:
	if (p6 != 4) goto Le9e2;
	drv_op_c6((p22 + p4), (p4 < 3 ? 0 : 1), -1);
Le9e2:
	goto Leaf6;
#asm
	db 0b8h,0ffh,0ffh,083h,03eh,07eh,06ch,000h,074h,006h,08bh,046h,018h,003h,046h,004h
le9f5:
	db 050h,0b8h,001h,000h,050h,083h,03eh,07eh,06ch,000h,074h,008h,08bh,046h,01ah,003h
	db 046h,004h,0ebh,006h
lea09:
	db 08bh,046h,018h,003h,046h,004h
lea0f:
	db 050h
	call drv_op_c6_
	db 083h,0c4h,006h,0e9h,0ddh,000h,0b8h,0ffh,0ffh,083h,03eh,07eh,06ch,000h,074h,006h
	db 08bh,046h,01ch,003h,046h,004h
lea29:
	db 050h,0b8h,000h,000h,050h,083h,03eh,07eh,06ch,000h,074h,008h,08bh,046h,01eh,003h
	db 046h,004h,0ebh,006h
lea3d:
	db 08bh,046h,01ch,003h,046h,004h
lea43:
	db 050h
	call drv_op_c6_
	db 083h,0c4h,006h,0e9h,0a9h,000h,0ffh,076h,004h,0b8h,0f8h,000h,050h,0b8h,048h,000h
	db 050h,08bh,046h,004h,0d1h,0e0h,003h,046h,008h,003h,006h,046h,036h,050h,0b8h,000h
	db 000h,050h,050h,0b8h,001h,000h,050h
	call fe2e4_
	db 083h,0c4h,00eh,0e9h,07fh,000h,0ffh,076h,004h,0b8h,0f8h,000h,050h,0b8h,048h,000h
	db 050h,08bh,046h,004h,003h,046h,00ah,050h,0b8h,000h,000h,050h,050h,0b8h,002h,000h
	db 050h
	call fe2e4_
	db 083h,0c4h,00eh,0ebh,05ch,0b8h,0ffh,0ffh,083h,03eh,07eh,06ch,000h,074h,006h,08bh
	db 046h,020h,003h,046h,004h
leaaa:
	db 050h,0b8h,000h,000h,050h,083h,03eh,07eh,06ch,000h,074h,008h,08bh,046h,022h,003h
	db 046h,004h,0ebh,006h
leabe:
	db 08bh,046h,020h,003h,046h,004h
leac4:
	db 050h
	call drv_op_c6_
	db 083h,0c4h,006h,0ebh,029h,0f6h,0eah,067h,0e9h,0f6h,0eah,067h,0e9h,067h,0e9h,0e5h
	db 0e9h,0e5h,0e9h,019h,0eah,04dh,0eah,077h,0eah,09ah,0eah,09ah,0eah,09ah,0eah,09ah
	db 0eah
leae9:
	db 03dh,00eh,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,0cdh,0eah
#endasm
Leaf6:
	;
}
