#asm
	public f72d1_
	extrn f011a_:near
	extrn f02f0_:near
	extrn f030b_:near
	extrn f075b_:near
	extrn f0aaa_:near
	extrn f24e9_:near
	extrn f2a63_:near
	extrn f3118_:near
	extrn f45a6_:near
	extrn f5c7a_:near
	extrn f62ce_:near
	extrn malloc_:near
	extrn strcpy_:near
	extrn strlen_:near
f72d1_:
	db 055h,08bh,0ech,081h,0c4h,066h,0fdh,0c7h,006h,012h,050h,001h,000h,0c7h,006h,052h
	db 043h,000h,000h,0c7h,046h,0feh,000h,000h
l72e9:
	db 0b8h,0deh,000h,050h
	call malloc_
	db 059h,08bh,04eh,0feh,0d1h,0e1h,08bh,0d9h,089h,087h,0b6h,043h,0b8h,0a0h,001h,050h
	call malloc_
	db 059h,08bh,04eh,0feh,0d1h,0e1h,08bh,0d9h,089h,087h,0a8h,043h,0ffh,046h,0feh,08bh
	db 046h,0feh,03dh,007h,000h,07ch,0cfh,0c7h,046h,0feh,000h,000h
l731f:
	db 0b8h,018h,000h,050h
	call malloc_
	db 059h,08bh,04eh,0feh,0d1h,0e1h,08bh,0d9h,089h,087h,090h,043h,08bh,0d8h,0c6h,047h
	db 014h,0ffh,0ffh,046h,0feh,08bh,046h,0feh,03dh,00ch,000h,07ch,0dch,0c7h,046h,0feh
	db 000h,000h
l7348:
	db 08bh,05eh,0feh,0c6h,087h,026h,043h,000h,0ffh,046h,0feh,08bh,046h,0feh,03dh,003h
	db 000h,07ch,0edh,0c7h,046h,0feh,000h,000h
l7360:
	db 0c7h,046h,0fch,000h,000h
l7365:
	db 08bh,046h,0feh,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,003h,046h,0fch,08bh,0d8h
	db 0c6h,087h,048h,043h,000h,0c6h,087h,03eh,043h,000h,0ffh,046h,0fch,08bh,046h,0fch
	db 03dh,005h,000h,07ch,0dbh,0ffh,046h,0feh,08bh,046h,0feh,03dh,001h,000h,07ch,0cbh
	db 0ffh,036h,0b0h,04fh
	call f3118_
	db 059h,0b8h,000h,000h,050h,050h,0b8h,0fch,0ffh,050h,0b8h,00bh,000h,050h,0b8h,005h
	db 000h,050h,0b8h,013h,000h,050h,050h,0b8h,000h,000h,050h
	call f011a_
	db 083h,0c4h,010h,0a3h,08ah,043h,0b8h,000h,000h,050h,050h,0b8h,0ffh,0ffh,050h,0b8h
	db 00ah,000h,050h,0b8h,005h,000h,050h,0b8h,014h,000h,050h,0b8h,013h,000h,050h,0b8h
	db 014h,000h,050h
	call f011a_
	db 083h,0c4h,010h,0a3h,08ch,043h,0c7h,006h,0aeh,04fh,000h,000h,050h
	call f3118_
	db 059h,0ffh,036h,08ah,043h
	call f3118_
	db 059h,0b8h,000h,000h,050h,0ffh,036h,0b6h,04fh
	call f02f0_
	db 083h,0c4h,004h
	call f62ce_
	db 0b8h,001h,000h,083h,03eh,0ceh,04fh,012h,075h,003h,0b8h,000h,000h
l7417:
	db 0a3h,00eh,050h,0b8h,000h,000h,083h,03eh,0ceh,04fh,012h,075h,003h,0b8h,001h,000h
l7427:
	db 0a3h,010h,050h,083h,03eh,0ceh,04fh,012h,074h,003h,0e9h,0aeh,000h
l7434:
	db 083h,03eh,060h,043h,001h,07fh,003h,0e9h,0a4h,000h
l743e:
	db 0ffh,036h,042h,033h
	call f3118_
	db 059h,0ffh,036h,0b2h,04fh
	call f3118_
	db 059h,0b8h,000h,000h,050h,0ffh,036h,0b6h,04fh
	call f02f0_
	db 083h,0c4h,004h
	call f2a63_
	db 0b8h,001h,000h,050h
	call f45a6_
	db 059h,0ffh,036h,0b8h,043h,0b8h,014h,050h,050h
	call strcpy_
	db 083h,0c4h,004h,0b8h,064h,050h,050h,0b8h,0b8h,00dh,050h
	call f075b_
	db 083h,0c4h,004h,0b8h,000h,000h,050h,0b8h,014h,050h,050h
	call strlen_
	db 059h,050h,0b8h,064h,050h,050h
	call strlen_
	db 059h,08bh,0c8h,058h,003h,0c1h,040h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c8h,0b8h
	db 014h,000h,02bh,0c1h,050h,0ffh,036h,0b6h,04fh
	call f030b_
	db 083h,0c4h,006h,0b8h,006h,000h,050h,0b8h,014h,050h,050h,0ffh,036h,0b6h,04fh
	call f24e9_
	db 083h,0c4h,006h,0b8h,00eh,000h,050h,0b8h,064h,050h,050h,0ffh,036h,0b6h,04fh
	call f24e9_
	db 083h,0c4h,006h,0b8h,000h,000h,050h
	call f0aaa_
	db 059h
l74e2:
	call f5c7a_
	db 0c7h,006h,03ah,036h,00bh,000h,08bh,0e5h,05dh,0c3h
#endasm
