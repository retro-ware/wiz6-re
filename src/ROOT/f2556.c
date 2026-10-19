f2556()
{
	register int rsi;
	register int rdi;
#asm
$20004 equ 1
#endasm
	f25b9();
#asm
	db 02eh,0a1h,03bh,01dh,033h,0d2h,0bbh,03dh,076h,0f7h,0f3h,0b8h,010h,027h,0f7h,0e2h
	db 0bbh,03dh,076h,0f7h,0f3h,025h,0ffh,07fh,08bh,0c8h,02eh,0a1h,03dh,01dh,033h,0d2h
	db 0bbh,063h,076h,0f7h,0f3h,0b8h,010h,027h,0f7h,0e2h,0bbh,063h,076h,0f7h,0f3h,025h
	db 0ffh,07fh,003h,0c8h,081h,0e1h,0ffh,07fh,02eh,0a1h,03fh,01dh,033h,0d2h,0bbh,073h
	db 076h,0f7h,0f3h,0b8h,010h,027h,0f7h,0e2h,0bbh,073h,076h,0f7h,0f3h,025h,0ffh,07fh
	db 003h,0c1h,025h,0ffh,07fh
#endasm
}
