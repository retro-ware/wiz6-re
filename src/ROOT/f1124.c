/* Make sure the disk needed for an action is inserted. */
#asm
	public ensure_disk_for_
	extrn copy_through_char_:near
	extrn prompt_insert_disk_:near
	extrn refresh_all_windows_:near
ensure_disk_for_:
	db 055h,08bh,0ech,083h,0c4h,0e8h,0c7h,046h,0eah,000h,000h,0a0h,092h,035h,02ah,0e4h
	db 0e9h,09fh,001h,0c7h,046h,0eah,000h,000h,0e9h,0a4h,001h,08bh,046h,004h,0ebh,021h
l1144:
	db 0b8h,000h,000h,083h,07eh,006h,000h,07ch,00ch,0b8h,002h,000h,083h,07eh,006h,008h
	db 07dh,003h,0b8h,001h,000h
l1159:
	db 089h,046h,0eah,0ebh,01bh
l115e:
	db 0c7h,046h,0eah,000h,000h,0ebh,014h
l1165:
	db 03dh,000h,000h,074h,0dah,03dh,001h,000h,074h,0efh,03dh,002h,000h,074h,0d0h,03dh
	db 003h,000h,074h,0e5h
l1179:
	db 0e9h,067h,001h,08bh,046h,004h,0ebh,039h
l1181:
	db 0b8h,000h,000h,08bh,04eh,006h,083h,0f9h,000h,07ch,022h,0b8h,001h,000h,083h,0f9h
	db 008h,07ch,01ah,0b8h,002h,000h,083h,0f9h,00ah,07ch,012h,083h,0f9h,00ah,074h,005h
	db 083h,0f9h,00ch,075h,005h
l11a6:
	db 0b8h,003h,000h,0ebh,003h
l11ab:
	db 0b8h,004h,000h
l11ae:
	db 089h,046h,0eah,0ebh,01bh
l11b3:
	db 0c7h,046h,0eah,000h,000h,0ebh,014h
l11ba:
	db 03dh,000h,000h,074h,0c2h,03dh,001h,000h,074h,0efh,03dh,002h,000h,074h,0b8h,03dh
	db 003h,000h,074h,0e5h
l11ce:
	db 0e9h,012h,001h,08bh,046h,004h,0e9h,060h,000h
l11d7:
	db 0b8h,000h,000h,08bh,04eh,006h,083h,0f9h,000h,07ch,049h,083h,0f9h,004h,07ch,005h
	db 083h,0f9h,006h,075h,005h
l11ec:
	db 0b8h,001h,000h,0ebh,03ah
l11f1:
	db 083h,0f9h,006h,07ch,005h,083h,0f9h,007h,075h,005h
l11fb:
	db 0b8h,002h,000h,0ebh,02bh
l1200:
	db 0b8h,003h,000h,083h,0f9h,008h,074h,023h,0b8h,004h,000h,083h,0f9h,009h,074h,01bh
	db 0b8h,005h,000h,083h,0f9h,00ah,074h,013h,0b8h,006h,000h,083h,0f9h,00ch,074h,00bh
	db 0b8h,008h,000h,083h,0f9h,00bh,075h,003h,0b8h,007h,000h
l122b:
	db 089h,046h,0eah,0ebh,01bh
l1230:
	db 0c7h,046h,0eah,000h,000h,0ebh,014h
l1237:
	db 03dh,000h,000h,074h,09bh,03dh,001h,000h,074h,0efh,03dh,002h,000h,074h,091h,03dh
	db 003h,000h,074h,0e5h
l124b:
	db 0e9h,095h,000h,08bh,046h,004h,0e9h,060h,000h
l1254:
	db 0b8h,000h,000h,08bh,04eh,006h,083h,0f9h,000h,07ch,049h,083h,0f9h,004h,07ch,005h
	db 083h,0f9h,006h,075h,005h
l1269:
	db 0b8h,003h,000h,0ebh,03ah
l126e:
	db 083h,0f9h,006h,07ch,005h,083h,0f9h,007h,075h,005h
l1278:
	db 0b8h,004h,000h,0ebh,02bh
l127d:
	db 0b8h,005h,000h,083h,0f9h,008h,074h,023h,0b8h,006h,000h,083h,0f9h,009h,074h,01bh
	db 0b8h,007h,000h,083h,0f9h,00ah,074h,013h,0b8h,008h,000h,083h,0f9h,00ch,074h,00bh
	db 0b8h,00ah,000h,083h,0f9h,00bh,075h,003h,0b8h,009h,000h
l12a8:
	db 089h,046h,0eah,0ebh,01bh
l12ad:
	db 0c7h,046h,0eah,000h,000h,0ebh,014h
l12b4:
	db 03dh,000h,000h,074h,09bh,03dh,001h,000h,074h,0efh,03dh,002h,000h,074h,091h,03dh
	db 003h,000h,074h,0e5h
l12c8:
	db 0ebh,019h,037h,011h,037h,011h,03fh,011h,07ch,011h,0d1h,011h,04eh,012h
l12d6:
	db 03dh,006h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,0cah,012h
l12e3:
	db 080h,03eh,092h,035h,005h,075h,00ch,08bh,046h,0eah,03dh,000h,000h,07eh,004h,048h
	db 048h,0ebh,003h
l12f6:
	db 08bh,046h,0eah
l12f9:
	db 089h,046h,0e8h,03bh,006h,044h,030h,074h,027h,0b8h,03ah,000h,050h,0b8h,040h,035h
	db 050h,08dh,046h,0ech,050h
	call copy_through_char_
	db 083h,0c4h,006h,0b8h,001h,000h,050h,050h,0ffh,076h,0eah,08dh,046h,0ech,050h
	call prompt_insert_disk_
	db 083h,0c4h,008h
	call refresh_all_windows_
l1329:
	db 08bh,0e5h,05dh,0c3h
#endasm
