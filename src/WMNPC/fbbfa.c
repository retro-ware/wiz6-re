#asm
	public fbbfa_
	extrn char_index_:near
	extrn strncpy_:near
fbbfa_:
	db 055h,08bh,0ech,083h,0c4h,0feh,056h,0b8h,025h,000h,050h,08bh,046h,004h,08bh,0d0h
	db 0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,0d1h,0e0h,005h,0dah,058h,050h
	call char_index_
	db 083h,0c4h,004h,089h,046h,0feh,03dh,000h,000h,07ch,029h,050h,08bh,046h,004h,08bh
	db 0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,0d1h,0e0h,005h,0dah,058h,050h,0ffh
	db 076h,006h
	call strncpy_
	db 083h,0c4h,006h,08bh,05eh,006h,08bh,076h,0feh,0c6h,000h,000h,0e9h,098h,000h
lbc4f:
	db 0b8h,040h,000h,050h,08bh,046h,004h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h
	db 0e0h,0d1h,0e0h,005h,0dah,058h,050h
	call char_index_
	db 083h,0c4h,004h,089h,046h,0feh,03dh,000h,000h,07ch,028h,050h,08bh,046h,004h,08bh
	db 0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,0d1h,0e0h,005h,0dah,058h,050h,0ffh
	db 076h,006h
	call strncpy_
	db 083h,0c4h,006h,08bh,05eh,006h,08bh,076h,0feh,0c6h,000h,000h,0ebh,04bh
lbc9c:
	db 0b8h,05eh,000h,050h,08bh,046h,004h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h
	db 0e0h,0d1h,0e0h,005h,0dah,058h,050h
	call char_index_
	db 083h,0c4h,004h,089h,046h,0feh,03dh,000h,000h,07ch,026h,050h,08bh,046h,004h,08bh
	db 0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,0d1h,0e0h,005h,0dah,058h,050h,0ffh
	db 076h,006h
	call strncpy_
	db 083h,0c4h,006h,08bh,05eh,006h,08bh,076h,0feh,0c6h,000h,000h
lbce7:
	db 05eh,08bh,0e5h,05dh,0c3h
#endasm
