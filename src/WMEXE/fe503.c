#asm
	extrn f36ac_:near
	extrn fdedc_:near
#endasm
extern int g52f4;
fe503(p4, p6, p8, p10, p12, p14, p16, p18, p20, p22)
{
	if (p4 != 3) goto Le512;
	if (p6) goto Le51f;
Le512:
	;
#asm
le512:
	db 08bh,046h,006h,03dh,002h,000h,074h,005h,03dh,007h,000h,07ch,031h
#endasm
Le51f:
	f36ac((g52f4 ? (p14 + p4) : (p12 + p4)), 1, (g52f4 != 0 ? (p12 + p4) : -1));
Le550:
	if (p4 >= 3) goto Le6ee;
#asm
le559:
	db 08bh,046h,006h,0e9h,082h,001h
#endasm
	f36ac((g52f4 ? (p18 + p4) : (p16 + p4)), 1, (g52f4 != 0 ? (p16 + p4) : -1));
	if (p6 != 3) goto Le5b6;
	f36ac((p20 + p4), (p4 < 3 ? 0 : 1), -1);
	goto Le5da;
Le5b6:
	if (p6 != 4) goto Le5da;
	f36ac((p22 + p4), (p4 < 3 ? 0 : 1), -1);
Le5da:
	;
#asm
le5da:
	db 0e9h,011h,001h,0b8h,0ffh,0ffh,083h,03eh,0f4h,052h,000h,074h,006h,08bh,046h,018h
	db 003h,046h,004h
le5ed:
	db 050h,0b8h,001h,000h,050h,083h,03eh,0f4h,052h,000h,074h,008h,08bh,046h,01ah,003h
	db 046h,004h,0ebh,006h
le601:
	db 08bh,046h,018h,003h,046h,004h
le607:
	db 050h
	call f36ac_
	db 083h,0c4h,006h,0e9h,0ddh,000h,0b8h,0ffh,0ffh,083h,03eh,0f4h,052h,000h,074h,006h
	db 08bh,046h,01ch,003h,046h,004h
le621:
	db 050h,0b8h,000h,000h,050h,083h,03eh,0f4h,052h,000h,074h,008h,08bh,046h,01eh,003h
	db 046h,004h,0ebh,006h
le635:
	db 08bh,046h,01ch,003h,046h,004h
le63b:
	db 050h
	call f36ac_
	db 083h,0c4h,006h,0e9h,0a9h,000h,0ffh,076h,004h,0b8h,0f8h,000h,050h,0b8h,048h,000h
	db 050h,08bh,046h,004h,0d1h,0e0h,003h,046h,008h,003h,006h,046h,036h,050h,0b8h,000h
	db 000h,050h,050h,0b8h,001h,000h,050h
	call fdedc_
	db 083h,0c4h,00eh,0e9h,07fh,000h,0ffh,076h,004h,0b8h,0f8h,000h,050h,0b8h,048h,000h
	db 050h,08bh,046h,004h,003h,046h,00ah,050h,0b8h,000h,000h,050h,050h,0b8h,002h,000h
	db 050h
	call fdedc_
	db 083h,0c4h,00eh,0ebh,05ch,0b8h,0ffh,0ffh,083h,03eh,0f4h,052h,000h,074h,006h,08bh
	db 046h,020h,003h,046h,004h
le6a2:
	db 050h,0b8h,000h,000h,050h,083h,03eh,0f4h,052h,000h,074h,008h,08bh,046h,022h,003h
	db 046h,004h,0ebh,006h
le6b6:
	db 08bh,046h,020h,003h,046h,004h
le6bc:
	db 050h
	call f36ac_
	db 083h,0c4h,006h,0ebh,029h,0eeh,0e6h,05fh,0e5h,0eeh,0e6h,05fh,0e5h,05fh,0e5h,0ddh
	db 0e5h,0ddh,0e5h,011h,0e6h,045h,0e6h,06fh,0e6h,092h,0e6h,092h,0e6h,092h,0e6h,092h
	db 0e6h
le6e1:
	db 03dh,00eh,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,0c5h,0e6h
#endasm
Le6ee:
	;
}
