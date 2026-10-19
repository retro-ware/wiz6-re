/* Load the display driver file (ega/cga/herc/tandy.drv). */
#asm
	public load_video_driver_
	extrn shutdown_video_:near
load_video_driver_:
	db 01eh,006h,0b4h,03dh,0b0h,000h,08ch,0cbh,08eh,0dbh,08bh,056h,0fch,0cdh,021h,072h
	db 055h,02eh,0a3h,03fh,01fh,08bh,0d8h,0b4h,03fh,0b9h,000h,024h,02eh,08bh,016h,084h
	db 01bh,08eh,0dah,0bah,000h,001h,0cdh,021h,0b4h,03eh,02eh,08bh,01eh,03fh,01fh,0cdh
	db 021h,08ch,0c8h,08eh,0c0h,0bfh,08ah,01bh,02eh,0a1h,084h,01bh,0b9h,011h,000h
l1f80:
	db 083h,0c7h,002h,0abh,0e2h,0fah,02eh,0a1h,084h,01bh,08eh,0c0h,02eh,08bh,03eh,0ceh
	db 01bh,08ch,0c8h,08eh,0d8h,0beh,056h,01bh,0b9h,086h,01bh,02bh,0ceh,0f3h,0a4h,02eh
	db 0a0h,051h,01bh,0aah,007h,01fh,0c3h
l1fa7:
	call shutdown_video_
	db 08ch,0c8h,08eh,0d8h,0bah,0bbh,01fh,0b4h,009h,0cdh,021h,0b8h,001h,04ch,0cdh,021h
	db 0c3h,00dh,00ah,007h,055h,06eh,061h,062h,06ch,065h,020h,074h,06fh,020h,06ch,06fh
	db 061h,064h,020h,064h,069h,073h,070h,06ch,061h,079h,020h,064h,072h,069h,076h,065h
	db 072h,000h,00ah,024h,090h,001h,000h,000h,028h,000h,000h,000h,090h,001h
#endasm
