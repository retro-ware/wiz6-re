#asm
dataseg segment word public 'data'
	public g0002_
g0002_ label byte
	db 005h,000h
	public realm_colors_
realm_colors_ label byte
	db 004h,000h,002h,000h,003h,000h,006h,000h,007h,000h,005h,000h,006h,000h,006h,000h
	db 003h,000h,007h,000h,007h,000h,007h,000h,007h,000h,007h,000h,009h,000h
	public g0022_
g0022_ label byte
	db 008h,000h,005h,000h,003h,000h,000h,000h
	public g002a_
g002a_ label byte
	db 030h,000h,01eh,000h,012h,000h,000h,000h,088h,000h,0b8h,000h,092h,000h,0aeh,000h
	db 099h,000h,0a7h,000h,000h,000h,000h,000h
	public g0042_
g0042_ label byte
	db 000h,000h,068h,000h,080h,000h,090h,000h
	public g004a_
g004a_ label byte
	db 000h,000h,0d8h,000h,0c0h,000h,0b0h,000h
	public g0052_
g0052_ label byte
	db 000h,000h,000h,000h,000h,000h,0c0h,0ffh,000h,000h,040h,000h,0e0h,0ffh,000h,000h
	db 020h,000h,0f0h,0ffh,000h,000h,010h,000h
	public g006a_
g006a_ label byte
	db 000h,000h,0e0h,0ffh,020h,000h,0f0h,0ffh,010h,000h,000h,000h,0ech,0ffh,014h,000h
	db 0f6h,0ffh,00ah,000h
	public g007e_
g007e_ label byte
	db 0fdh,0ffh,000h,000h,000h,000h,0fah,0ffh,0fah,0ffh,0feh,0ffh,000h,000h,000h,000h
	db 0fch,0ffh,0fch,0ffh
	public g0092_
g0092_ label byte
	db 001h,000h,003h,002h,004h,002h,000h,004h,001h,003h,000h,001h,002h,003h,004h,004h
	db 000h,002h,003h,001h,003h,000h,001h,004h,002h,000h,002h,001h,004h,003h
	public g00b0_
g00b0_ label byte
	db 019h,01eh,01eh,014h,014h,00ah,00fh,00fh,005h,005h
	public g00ba_
g00ba_ label byte
	db 000h,001h,002h,001h,002h,00ch,001h,002h,003h,004h,058h,02ch,016h,00bh,00bh,016h
	db 02ch,058h
	public g00cc_
g00cc_ label byte
	db 000h,000h,001h,000h,001h,000h,000h,000h,000h,000h,000h,000h,001h,000h,000h,001h
	db 001h,000h
	public spell_table_
spell_table_ label byte
	db 000h
	public g00df_
g00df_ label byte
	db 001h
	public g00e0_
g00e0_ label byte
	db 002h
	public g00e1_
g00e1_ label byte
	db 003h
	public g00e2_
g00e2_ label byte
	db 002h
	public g00e3_
g00e3_ label byte
	db 008h,000h,002h,003h,002h,002h,001h,000h,003h,006h,003h,002h,008h,000h,003h,008h
	db 001h,000h,008h,000h,004h,008h,003h,002h,001h,000h,005h,008h,003h,002h,004h,000h
	db 005h,009h,003h,002h,008h,000h,006h,00ch,003h,002h,008h,000h,007h,010h,003h,000h
	db 008h,001h,001h,002h,003h,002h,008h,001h,001h,002h,001h,001h,007h,001h,001h,003h
	db 003h,002h,00ah,001h,002h,004h,003h,002h,00ah,001h,002h,004h,003h,002h,006h,001h
	db 003h,005h,001h,000h,006h,001h,003h,006h,001h,001h,007h,001h,003h,008h,001h,000h
	db 008h,001h,004h,008h,003h,002h,008h,001h,004h,005h,003h,002h,006h,001h,005h,006h
	db 003h,002h,008h,002h,001h,002h,003h,002h,001h,002h,002h,005h,001h,000h,008h,002h
	db 003h,004h,003h,002h,009h,002h,003h,008h,001h,003h,009h,002h,003h,004h,003h,002h
	db 006h,002h,004h,007h,003h,002h,001h,002h,004h,008h,001h,001h,005h,002h,004h,008h
	db 003h,002h,004h,002h,005h,00ah,001h,000h,005h
	public g018c_
g018c_ label byte
	db 002h,005h
	public g018e_
g018e_ label byte
	db 008h
	public g018f_
g018f_ label byte
	db 003h
	public g0190_
g0190_ label byte
	db 002h
	public g0191_
g0191_ label byte
	db 001h
	public g0192_
g0192_ label byte
	db 002h
	public g0193_
g0193_ label byte
	db 005h
	public g0194_
g0194_ label byte
	db 00ch
	public g0195_
g0195_ label byte
	db 001h,000h,008h,002h,006h
	public g019a_
g019a_ label byte
	db 008h
	public g019b_
g019b_ label byte
	db 003h
	public g019c_
g019c_ label byte
	db 002h
	public g019d_
g019d_ label byte
	db 001h
	public g019e_
g019e_ label byte
	db 002h,006h,00ah,003h,002h,009h,002h,006h,00ch,003h,000h,009h,002h,007h,010h,003h
	db 000h,001h,003h,001h,002h,002h,002h,001h,003h,001h,002h,002h,002h,001h,003h,001h
	db 002h,001h,001h,008h,003h,001h,003h,001h,000h,008h,003h,002h,006h,001h,000h,00ah
	db 003h,003h,006h,003h,002h,006h,003h,003h,006h,001h,000h,004h,003h,003h,007h,003h
	db 002h,009h,003h,004h,008h,003h,002h,001h,003h,004h,008h,003h,002h,00ah,003h,005h
	db 00ah,001h,000h,001h,003h,006h,012h,001h,001h,005h,004h,001h,003h,001h,002h,002h
	db 004h,001h,003h,003h,002h,00bh,004h,001h,004h,001h,000h,006h,004h,001h,005h,003h
	db 002h,007h,004h,002h,004h,001h,001h,007h,004h,002h,004h,001h,000h,006h,004h,002h
	db 005h,001h,000h,00ah,004h,002h,008h,001h,000h,006h,004h,003h,006h,003h,002h,006h
	db 004h,003h,008h,001h,002h,002h,004h,003h,00ah,001h,001h,006h,004h,004h,008h,003h
	db 002h,002h,004h,004h,00ah,001h,000h,002h,004h,004h,00ah,001h,000h,00ah,004h,005h
	db 00ah,003h,002h,006h,004h,006h,008h,001h,000h,006h,004h,007h,012h,003h,000h,002h
	db 005h,001h,004h,001h,001h,007h,005h,001h,003h,003h,002h,004h,005h,002h,004h,003h
	db 002h,008h,005h,002h,007h,001h,002h,004h,005h,002h,004h,001h,000h,004h,005h,003h
	db 007h,001h,000h,00ah,005h,004h,008h,001h,000h,008h,005h,004h,00ah,001h,000h,00ch
	db 005h,005h,007h,001h,002h,008h,005h,005h,00ah,001h,001h,004h,005h,006h,00ch,001h
	db 002h,006h,005h,006h,008h,001h,002h,00ch,005h,007h,012h,003h,000h,004h,005h,007h
	db 014h,001h,001h,00eh,005h,007h,014h,003h,000h,004h,005h,000h,000h,000h,002h,000h
	db 005h,000h,000h,000h,000h,000h,005h,000h,000h,000h,000h,000h
	public g02ca_
g02ca_ label byte
	db 000h
	public g02cb_
g02cb_ label byte
	db 000h
	public g02cc_
g02cc_ label byte
	db 001h
	public g02cd_
g02cd_ label byte
	db 000h,015h,000h,003h,000h,000h,006h,006h,000h,015h,006h,008h,000h,001h,000h,002h
	db 00ch,001h,006h,007h,00ch,00dh,000h,002h,015h,00fh,002h,00ch,015h,012h,004h,00ch
	db 015h,012h,006h,007h,015h,000h,001h,004h,086h,015h,001h,005h,086h,001h,002h,00ch
	db 00ch,001h,004h,00ch,00ch,002h,001h,00dh,086h,006h,001h,00dh,086h,008h,001h,00dh
	db 086h,00ch,001h,00dh,084h,00ch,004h,005h,086h,011h,005h,004h,000h,011h,006h,006h
	db 000h,000h,002h,009h,000h,000h,004h,009h,000h,015h,002h,00ah,000h,015h,004h,00ah
	db 000h,002h,000h,019h,000h,006h,000h,019h,000h,008h,000h,019h,000h,00ch,000h,019h
	db 000h,002h,006h,00bh,000h,006h,006h,00bh,000h,008h,006h,00bh,000h,00ch,006h,008h
	db 000h,002h,002h,010h,000h,002h,004h,010h,000h,006h,002h,010h,000h,006h,004h,010h
	db 000h,008h,002h,010h,000h,008h,004h,010h,000h,00ch,002h,010h,000h,00ch,004h,017h
	db 000h,00dh,002h,00ch,000h,00dh,004h,007h,000h,00eh,002h,00eh,000h,00eh,003h,00dh
	db 000h,00eh,004h,00bh,000h,00fh,004h,007h,000h,010h,004h,007h,000h,011h,004h,018h
	db 000h
	public g038e_
g038e_ label byte
	db 050h
	public g038f_
g038f_ label byte
	db 03dh,066h,03eh,079h,040h,0d0h,03dh,0bah,03eh,0afh,040h,078h,040h,061h,03eh,04fh
	db 03dh,0b0h,040h,0bfh,03eh,0d2h,03dh,04bh,03bh,05dh,03ah,076h,03eh,0d5h,03bh,0c3h
	db 03ah,0b1h,03eh,07ah,03eh,06bh,03ah,054h,03bh,0aeh,03eh,0b6h,03ah,0ceh,03bh,049h
	db 048h,061h,048h,076h,048h,0d7h,048h,0beh,048h,0b3h,048h,077h,048h,065h,048h,04eh
	db 048h,0afh,048h,0bch,048h,0d2h,048h,054h,03dh,06bh,03fh,07dh,040h,0d4h,03dh,0beh
	db 03fh,0b3h,040h,07ch,040h,066h,03fh,053h,03dh,0b3h,040h,0c1h,03fh,0d6h,03dh,059h
	db 03eh,069h,040h,07dh,041h,0d3h,03eh,0c0h,040h,0b1h,041h,07ch,041h,067h,040h,058h
	db 03eh,0b4h,041h,0bfh,040h,0d3h,03eh,056h,03fh,06ch,040h,07bh,041h,0d2h,03fh,0c4h
	db 040h,0b5h,041h,000h,000h,000h,000h,000h,000h,000h,000h,000h,000h,000h,000h,000h
	db 000h,000h,000h,000h,000h,000h,000h,000h,000h,000h,000h,07ch,040h,068h,03fh,04dh
	db 03eh,0b4h,040h,0c8h,03fh,0dch,03eh,051h,044h,069h,044h,07dh,045h,0d7h,044h,0bfh
	db 044h,0b3h,045h,000h,000h,000h,000h,000h,000h,000h,000h,000h,000h,000h,000h,000h
	db 000h,000h,000h,000h,000h,000h,000h,000h,000h,000h,000h,07dh,045h,06ah,044h,04fh
	db 044h,0b3h,045h,0bdh,044h,0d9h,044h,054h,044h,074h,043h,083h,043h,0d4h,044h,0bch
	db 043h,0b5h,043h,082h,043h,06bh,043h,04dh,044h,0b6h,043h,0c5h,043h,0dbh,044h,05ah
	db 03fh,06ch,042h,080h,03bh,0d6h,03fh,0c3h,042h,0b0h,03bh,080h,03bh,06ch,042h,059h
	db 03fh,0b0h,03bh,0c4h,042h,0d8h,03fh,056h,03eh,06eh,041h,07fh,03bh,0dah,03eh,0c4h
	db 041h,0b1h,03bh,07fh,03bh,06eh,041h,053h,03eh,0b1h,03bh,0c3h,041h,0dch,03eh,055h
	db 03bh,072h,03dh,07fh,040h,0dbh,03bh,0beh,03dh,0b1h,040h,07fh,040h,072h,03dh,054h
	db 03bh,0b1h,040h,0beh,03dh,0dbh,03bh,05bh,03ch,06ah,042h,080h,03ch,0d6h,03ch,0beh
	db 042h,0b0h,03ch,080h,03ch,06ah,042h,05bh,03ch,0b0h,03ch,0beh,042h,0d6h,03ch,055h
	db 040h,06dh,040h,07ch,044h,0d2h,040h,0c3h,040h,0b4h,044h,07fh,044h,06bh,040h,051h
	db 040h,0b2h,044h,0c5h,040h,0d7h,040h,051h,03ch,066h,03fh,07ch,041h,0d0h,03ch,0bah
	db 03fh,0ach,041h,07ch,041h,066h,03fh,04fh,03ch,0ach,041h,0bah,03fh,0d2h,03ch,051h
	db 03dh,06ah,03fh,080h,043h,0d0h,03dh,0beh,03fh,0b0h,043h,07ch,043h,06ah,03fh,04eh
	db 03dh,0b5h,043h,0bfh,03fh,0d3h,03dh
	public g0526_
g0526_ label byte
	db 000h,000h,001h,000h,003h,000h,004h,000h,004h,000h,000h,000h
	public g0532_
g0532_ label byte
	db 0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh
	public g053a_
g053a_ label byte
	db 006h,000h
	public g053c_
g053c_ label byte
	db 007h,000h,008h,000h,008h,000h,007h,000h
	public g0544_
g0544_ label byte
	db 005h,000h
	public g0546_
g0546_ label byte
	db 086h,001h
	public g0548_
g0548_ label byte
	db 08ch,001h
	public g054a_
g054a_ label byte
	db 08dh,001h,097h,001h,097h,001h,098h,001h,098h,001h,098h,001h,099h,001h,089h,001h
	db 0b8h,001h,0bah,001h,089h,001h,0b9h,001h,0bbh,001h,0bah,001h,0b9h,001h,0bch,001h
	db 0bbh,001h,0b8h,001h,0bch,001h,0beh,001h,0bfh,001h,0c0h,001h,095h,001h,0e0h,001h
	db 096h,001h,057h,04dh,041h,05ah,045h,02eh,04fh,056h,052h,000h,049h,04eh,053h,045h
	db 052h,054h,020h,053h,041h,056h,045h,047h,041h,04dh,045h,020h,044h,049h,053h,04bh
	db 000h,049h,04eh,053h,045h,052h,054h,020h,044h,049h,053h,04bh,020h,028h,05eh,029h
	db 000h,049h,04eh,054h,04fh,020h,044h,052h,049h,056h,045h,020h,05eh,000h,050h,052h
	db 045h,053h,053h,020h,058h,000h,043h,052h,045h,044h,049h,054h,053h,02eh,050h,049h
	db 043h,000h,057h,04dh,041h,05ah,045h,02eh,04fh,056h,052h,000h,044h,049h,053h,04bh
	db 02eh,048h,044h,052h,000h,04dh,053h,047h,02eh,044h,042h,053h,000h,053h,043h,045h
	db 04eh,041h,052h,049h,04fh,02eh,044h,042h,053h,000h,057h,049h,04eh,049h,054h,000h
	db 057h,042h,041h,053h,045h,000h,057h,04dh,041h,05ah,045h,000h,057h,04dh,045h,04ch
	db 045h,000h,057h,050h,04fh,050h,053h,000h,057h,04dh,045h,058h,045h,000h,057h,054h
	db 052h,045h,041h,000h,057h,050h,043h,04dh,04bh,000h,057h,050h,043h,056h,057h,000h
	db 057h,04dh,04eh,050h,043h,000h,057h,044h,04fh,050h,054h,000h
dataseg ends
#endasm
