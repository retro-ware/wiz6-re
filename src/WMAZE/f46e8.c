#asm
	public f46e8_
	extrn f09e2_:near
	extrn f2925_:near
f46e8_:
	db 055h,08bh,0ech,083h,0c4h,0feh,056h,0b8h,064h,000h,050h
	call f09e2_
	db 059h,050h,08bh,01eh,0aah,04fh,08bh,076h,004h,08ah,080h,036h,005h,02ah,0e4h,08bh
	db 0c8h,058h,03bh,0c1h,07dh,005h,0b8h,000h,000h,0ebh,003h
l4711:
	db 0b8h,001h,000h
l4714:
	db 089h,046h,0feh,0b8h,004h,000h,050h,0d1h,0e6h,08bh,0c6h,003h,046h,0feh,050h,081h
	db 0c3h,02ah,005h,08bh,0c3h,050h
	call f2925_
	db 083h,0c4h,006h,05eh,08bh,0e5h,05dh,0c3h
#endasm
