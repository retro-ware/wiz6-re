#asm
	public fcb7f_
	extrn f09e2_:near
	extrn f5a1e_:near
	extrn fbb28_:near
	extrn fc95b_:near
fcb7f_:
	db 0c7h,006h,098h,058h,0ffh,0ffh,0c7h,006h,094h,058h,0ffh,0ffh,0c7h,006h,096h,058h
	db 000h,000h,0a1h,09ah,058h,0e9h,09eh,001h,0b8h,028h,050h,050h,0ffh,036h,098h,06ah
	call fc95b_
	db 083h,0c4h,004h,0e9h,09ah,001h,083h,03eh,09ah,06ah,000h,07eh,016h,0b8h,029h,050h
	db 050h,0ffh,036h,09ah,06ah
	call fc95b_
	db 083h,0c4h,004h,0ffh,036h,0cah,04fh
	call f5a1e_
	db 059h
lcbc5:
	db 0e9h,07ah,001h,0b8h,02ah,050h,050h,0b8h,048h,006h,050h
	call fc95b_
	db 083h,0c4h,004h,0a1h,0a0h,058h,0a3h,098h,058h,0a1h,09ch,058h,0a3h,094h,058h,0a1h
	db 09eh,058h,0a3h,096h,058h,0c7h,006h,0b4h,058h,001h,000h,0ffh,036h,0a2h,058h
	call fbb28_
	db 059h,0e9h,049h,001h,0b8h,02bh,050h,050h,0b8h,049h,006h,050h
	call fc95b_
	db 083h,0c4h,004h,0c7h,006h,0a2h,058h,0ffh,0ffh,0e9h,032h,001h,0b8h,02ch,050h,050h
	db 0b8h,04ah,006h,050h
	call fc95b_
	db 083h,0c4h,004h,0e9h,021h,001h,0b8h,02dh,050h,050h,0b8h,04bh,006h,050h
	call fc95b_
	db 083h,0c4h,004h,0e9h,010h,001h,0b8h,02eh,050h,050h,0b8h,04ch,006h,050h
	call fc95b_
	db 083h,0c4h,004h,0b8h,005h,000h,050h
	call f09e2_
	db 059h,08bh,0c8h,040h,08bh,0c8h,0b8h,0b0h,001h,0f7h,02eh,09ch,06ah,003h,006h,074h
	db 052h,08bh,0d8h,08ah,087h,050h,045h,098h,02bh,0c1h,088h,087h,050h,045h,0b8h,002h
	db 000h,050h
	call f09e2_
	db 059h,03dh,001h,000h,075h,006h,0c7h,006h,0c2h,058h,001h,000h
lcc78:
	db 0e9h,0c7h,000h,0b8h,02fh,050h,050h,0b8h,04dh,006h,050h
	call fc95b_
	db 083h,0c4h,004h,0c7h,006h,094h,058h,0ffh,0ffh,0c7h,006h,096h,058h,000h,000h,0c7h
	db 006h,098h,058h,0ffh,0ffh,0c7h,006h,09ch,058h,0ffh,0ffh,0c7h,006h,09eh,058h,000h
	db 000h,0c7h,006h,0a0h,058h,0ffh,0ffh,0c7h,006h,0a2h,058h,0ffh,0ffh,0e9h,08ch,000h
	db 0b8h,030h,050h,050h,0b8h,04eh,006h,050h
	call fc95b_
	db 083h,0c4h,004h,0e9h,07bh,000h,0b8h,031h,050h,050h,0b8h,04fh,006h,050h
	call fc95b_
	db 083h,0c4h,004h,0b8h,002h,000h,050h
	call f09e2_
	db 059h,03dh,001h,000h,075h,03dh,0b8h,0b0h,001h,0f7h,02eh,09ch,06ah,003h,006h,074h
	db 052h,08bh,0d8h,080h,0bfh,050h,045h,032h,07dh,029h,08ah,087h,050h,045h,098h,08bh
	db 0c8h,051h,0b8h,003h,000h,050h
	call f09e2_
	db 059h,059h,003h,0c1h,040h,050h,0b8h,0b0h,001h,0f7h,02eh,09ch,06ah,08bh,0c8h,003h
	db 006h,074h,052h,08bh,0d8h,058h,088h,087h,050h,045h
lcd1f:
	db 0ebh,021h,097h,0cbh,0a8h,0cbh,0c8h,0cbh,0f9h,0cbh,010h,0cch,021h,0cch,032h,0cch
	db 07bh,0cch,0b6h,0cch,0c7h,0cch
lcd35:
	db 03dh,00ah,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,021h,0cdh
lcd42:
	db 0c3h
#endasm
