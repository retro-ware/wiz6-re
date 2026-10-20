#asm
	public feff8_
	extrn fccd2_:near
	extrn random_:near
feff8_:
	db 055h,08bh,0ech,083h,0c4h,0f6h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,083h,0bfh
	db 00ch,044h,014h,07eh,004h
lf00d:
	db 08bh,0e5h,05dh,0c3h
lf011:
	db 08ah,087h,018h,045h,02ah,0e4h,089h,046h,0fah,0c7h,046h,0fch,000h,000h,08ah,087h
	db 087h,045h,02ah,0e4h,0ebh,057h,0b8h,004h,000h,050h
	call random_
	db 059h,040h,040h,089h,046h,0fch,0ebh,055h,0b8h,003h,000h,050h
	call random_
	db 059h,040h,089h,046h,0fch,0ebh,047h,0b8h,004h,000h,050h
	call random_
	db 059h,040h,089h,046h,0fch,0ebh,039h,0b8h,004h,000h,050h
	call random_
	db 059h,040h,040h,040h,089h,046h,0fch,0ebh,029h,027h,0f0h,036h,0f0h,044h,0f0h,044h
	db 0f0h,027h,0f0h,036h,0f0h,044h,0f0h,036h,0f0h,027h,0f0h,036h,0f0h,027h,0f0h,052h
	db 0f0h,027h,0f0h,052h,0f0h
lf07e:
	db 03dh,00eh,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,062h,0f0h
lf08b:
	db 083h,07eh,0fah,008h,07dh,003h,0ffh,04eh,0fch
lf094:
	db 0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,08bh,087h,00ch,044h,050h,08ah,087h,097h
	db 045h,02ah,0e4h,08bh,0c8h,058h,03bh,0c1h,07dh,005h,0c7h,046h,0fch,000h,000h
lf0b3:
	db 08ah,087h,096h,045h,098h,02bh,046h,0fch,088h,087h,096h,045h,080h,0bfh,096h,045h
	db 000h,07dh,005h,0c6h,087h,096h,045h,000h
lf0cb:
	db 08ah,087h,087h,045h,02ah,0e4h,0ebh,073h,0b8h,003h,000h,050h,0b8h,006h,000h,050h
	db 0b8h,005h,000h,050h,0b8h,007h,000h,050h,0b8h,004h,000h,050h,0ffh,076h,004h
	call fccd2_
	db 083h,0c4h,00ch,0ebh,061h,0b8h,007h,000h,050h,050h,0b8h,00ch,000h,050h,050h,0b8h
	db 002h,000h,050h,0ffh,076h,004h
	call fccd2_
	db 083h,0c4h,00ch,0ebh,048h,0b8h,005h,000h,050h,0b8h,007h,000h,050h,0b8h,008h,000h
	db 050h,0b8h,00ah,000h,050h,0b8h,003h,000h,050h,0ffh,076h,004h
	call fccd2_
	db 083h,0c4h,00ch,0ebh,029h,0d3h,0f0h,0f2h,0f0h,00bh,0f1h,00bh,0f1h,0d3h,0f0h,0f2h
	db 0f0h,00bh,0f1h,0f2h,0f0h,0d3h,0f0h,0f2h,0f0h,0d3h,0f0h,0d3h,0f0h,0d3h,0f0h,0d3h
	db 0f0h
lf146:
	db 03dh,00eh,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,02ah,0f1h
lf153:
	db 0c7h,046h,0f8h,00ah,000h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,080h,0bfh,019h
	db 045h,00fh,076h,003h,0ffh,04eh,0f8h
lf16a:
	db 080h,0bfh,019h,045h,011h,076h,003h,0ffh,04eh,0f8h
lf174:
	db 080h,0bfh,085h,045h,005h,075h,006h,0ffh,04eh,0f8h,0ffh,04eh,0f8h
lf181:
	db 080h,0bfh,087h,045h,00dh,074h,007h,080h,0bfh,087h,045h,00ch,075h,02ch
lf18f:
	db 0b8h,014h,000h,083h,0bfh,00ch,044h,014h,07fh,00ah,08bh,087h,00ch,044h,0b9h,002h
	db 000h,099h,0f7h,0f9h
lf1a3:
	db 089h,046h,0feh,08ah,087h,02ch,045h,02ah,0e4h,0b9h,00ah,000h,099h,0f7h,0f9h,001h
	db 046h,0feh,08bh,046h,0feh,029h,046h,0f8h
lf1bb:
	db 08ah,087h,048h,045h,098h,08bh,0c8h,08bh,046h,0f8h,02bh,0c1h,089h,046h,0f6h,083h
	db 07eh,0f6h,000h,074h,02eh,08ah,046h,0f8h,088h,087h,048h,045h,0c7h,046h,0feh,003h
	db 000h
lf1dc:
	db 0b8h,0b0h,001h,0f7h,06eh,004h,003h,046h,0feh,08bh,0d8h,08ah,087h,048h,045h,098h
	db 003h,046h,0f6h,088h,087h,048h,045h,0ffh,046h,0feh,08bh,046h,0feh,03dh,008h,000h
	db 07ch,0deh
lf1fe:
	db 0e9h,00ch,0feh
#endasm
