#asm
	extrn f36ac_:near
	extrn fa6a9_:near
#endasm
extern int g545c;
facd0(p4, p6, p8, p10, p12, p14, p16, p18, p20, p22)
{
	if (p4 != 3) goto Lacdf;
	if (p6) goto Lacec;
Lacdf:
	;
#asm
lacdf:
	db 08bh,046h,006h,03dh,002h,000h,074h,005h,03dh,007h,000h,07ch,031h
#endasm
Lacec:
	f36ac((g545c ? (p14 + p4) : (p12 + p4)), 1, (g545c != 0 ? (p12 + p4) : -1));
Lad1d:
	if (p4 >= 3) goto Laebb;
#asm
lad26:
	db 08bh,046h,006h,0e9h,082h,001h
#endasm
	f36ac((g545c ? (p18 + p4) : (p16 + p4)), 1, (g545c != 0 ? (p16 + p4) : -1));
	if (p6 != 3) goto Lad83;
	f36ac((p20 + p4), (p4 < 3 ? 0 : 1), -1);
	goto Lada7;
Lad83:
	if (p6 != 4) goto Lada7;
	f36ac((p22 + p4), (p4 < 3 ? 0 : 1), -1);
Lada7:
	;
#asm
lada7:
	db 0e9h,011h,001h,0b8h,0ffh,0ffh,083h,03eh,05ch,054h,000h,074h,006h,08bh,046h,018h
	db 003h,046h,004h
ladba:
	db 050h,0b8h,001h,000h,050h,083h,03eh,05ch,054h,000h,074h,008h,08bh,046h,01ah,003h
	db 046h,004h,0ebh,006h
ladce:
	db 08bh,046h,018h,003h,046h,004h
ladd4:
	db 050h
	call f36ac_
	db 083h,0c4h,006h,0e9h,0ddh,000h,0b8h,0ffh,0ffh,083h,03eh,05ch,054h,000h,074h,006h
	db 08bh,046h,01ch,003h,046h,004h
ladee:
	db 050h,0b8h,000h,000h,050h,083h,03eh,05ch,054h,000h,074h,008h,08bh,046h,01eh,003h
	db 046h,004h,0ebh,006h
lae02:
	db 08bh,046h,01ch,003h,046h,004h
lae08:
	db 050h
	call f36ac_
	db 083h,0c4h,006h,0e9h,0a9h,000h,0ffh,076h,004h,0b8h,0f8h,000h,050h,0b8h,048h,000h
	db 050h,08bh,046h,004h,0d1h,0e0h,003h,046h,008h,003h,006h,046h,036h,050h,0b8h,000h
	db 000h,050h,050h,0b8h,001h,000h,050h
	call fa6a9_
	db 083h,0c4h,00eh,0e9h,07fh,000h,0ffh,076h,004h,0b8h,0f8h,000h,050h,0b8h,048h,000h
	db 050h,08bh,046h,004h,003h,046h,00ah,050h,0b8h,000h,000h,050h,050h,0b8h,002h,000h
	db 050h
	call fa6a9_
	db 083h,0c4h,00eh,0ebh,05ch,0b8h,0ffh,0ffh,083h,03eh,05ch,054h,000h,074h,006h,08bh
	db 046h,020h,003h,046h,004h
lae6f:
	db 050h,0b8h,000h,000h,050h,083h,03eh,05ch,054h,000h,074h,008h,08bh,046h,022h,003h
	db 046h,004h,0ebh,006h
lae83:
	db 08bh,046h,020h,003h,046h,004h
lae89:
	db 050h
	call f36ac_
	db 083h,0c4h,006h,0ebh,029h,0bbh,0aeh,02ch,0adh,0bbh,0aeh,02ch,0adh,02ch,0adh,0aah
	db 0adh,0aah,0adh,0deh,0adh,012h,0aeh,03ch,0aeh,05fh,0aeh,05fh,0aeh,05fh,0aeh,05fh
	db 0aeh
laeae:
	db 03dh,00eh,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,092h,0aeh
#endasm
Laebb:
	;
}
