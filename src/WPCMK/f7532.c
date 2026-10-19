#asm
	public apply_race_base_stats_
	extrn raise_stats_to_minimum_:near
apply_race_base_stats_:
	db 055h,08bh,0ech,08bh,046h,004h,0e9h,086h,000h,0b8h,0d9h,052h,050h
	call raise_stats_to_minimum_
	db 059h,0e9h,088h,000h,0b8h,0e2h,052h,050h
	call raise_stats_to_minimum_
	db 059h,0e9h,07dh,000h,0b8h,0ebh,052h,050h
	call raise_stats_to_minimum_
	db 059h,0ebh,073h,0b8h,0f4h,052h,050h
	call raise_stats_to_minimum_
	db 059h,0ebh,069h,0b8h,0fdh,052h,050h
	call raise_stats_to_minimum_
	db 059h,0ebh,05fh,0b8h,006h,053h,050h
	call raise_stats_to_minimum_
	db 059h,0ebh,055h,0b8h,00fh,053h,050h
	call raise_stats_to_minimum_
	db 059h,0ebh,04bh,0b8h,018h,053h,050h
	call raise_stats_to_minimum_
	db 059h,0ebh,041h,0b8h,021h,053h,050h
	call raise_stats_to_minimum_
	db 059h,0ebh,037h,0b8h,02ah,053h,050h
	call raise_stats_to_minimum_
	db 059h,0ebh,02dh,0b8h,033h,053h,050h
	call raise_stats_to_minimum_
	db 059h,0ebh,023h,03bh,075h,046h,075h,051h,075h,05bh,075h,065h,075h,06fh,075h,079h
	db 075h,083h,075h,08dh,075h,097h,075h,0a1h,075h
l75c1:
	db 03dh,00bh,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,0abh,075h
l75ce:
	db 08bh,0e5h,05dh,0c3h
#endasm
