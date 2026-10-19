#asm
	public use_item_charge_x_
	extrn calc_carried_weight_x_:near
	extrn clear_hand_attack_x_:near
	extrn get_load_category_x_:near
use_item_charge_x_:
	db 055h,08bh,0ech,083h,0c4h,0eeh,057h,056h,0b8h,0b0h,001h,0f7h,02eh,05ch,043h,08bh
	db 04eh,004h,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h,003h,0c1h,08bh,0d8h,080h,0bfh,02eh,044h
	db 000h,077h,003h,0e9h,06eh,001h
l70bc:
	db 0feh,08fh,02eh,044h,074h,003h,0e9h,065h,001h
l70c5:
	db 0c7h,046h,0fch,000h,000h
l70ca:
	db 0b8h,0b0h,001h,0f7h,02eh,05ch,043h,003h,046h,0fch,08bh,0d8h,08ah,087h,0f8h,044h
	db 02ah,0e4h,03bh,046h,004h,075h,062h,08bh,046h,0fch,0ebh,03fh,0ffh,076h,0fch
	call clear_hand_attack_x_
	db 059h,0ebh,043h,0b8h,0b0h,001h,0f7h,02eh,05ch,043h,08bh,0d8h,0c6h,087h,04ah,045h
	db 000h,0ebh,033h,0b8h,0b0h,001h,0f7h,02eh,05ch,043h,08bh,0d8h,08ah,087h,048h,045h
	db 003h,05eh,0fch,088h,087h,048h,045h,0ebh,01dh,0e6h,070h,0e6h,070h,0efh,070h,0ffh
	db 070h,0ffh,070h,0ffh,070h,0ffh,070h,0ffh,070h
l7125:
	db 03dh,008h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,015h,071h
l7132:
	db 0b8h,0b0h,001h,0f7h,02eh,05ch,043h,003h,046h,0fch,08bh,0d8h,0c6h,087h,0f8h,044h
	db 0ffh
l7143:
	db 0ffh,046h,0fch,08bh,046h,0fch,03dh,008h,000h,07dh,003h,0e9h,079h,0ffh
l7151:
	db 0b8h,0b0h,001h,0f7h,02eh,05ch,043h,08bh,04eh,004h,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h
	db 003h,0c1h,08bh,0d8h,0c7h,087h,028h,044h,000h,000h,0b8h,0b0h,001h,0f7h,02eh,05ch
	db 043h,08bh,0d8h,0feh,08fh,094h,045h,08bh,046h,004h,089h,046h,0feh,0ebh,066h
l7180:
	db 0b8h,0b0h,001h,0f7h,02eh,05ch,043h,08bh,04eh,0feh,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h
	db 003h,0c1h,08bh,0f0h,005h,030h,044h,08bh,0f0h,0b8h,0b0h,001h,0f7h,02eh,05ch,043h
	db 003h,0c1h,08bh,0f8h,005h,028h,044h,08bh,0f8h,08ch,0d9h,08eh,0c1h,0b9h,004h,000h
	db 0f3h,0a5h,0c7h,046h,0fch,000h,000h
l71b7:
	db 0b8h,0b0h,001h,0f7h,02eh,05ch,043h,003h,046h,0fch,08bh,0d8h,08ah,087h,0f8h,044h
	db 02ah,0e4h,08bh,04eh,0feh,041h,03bh,0c1h,075h,007h,08ah,046h,0feh,088h,087h,0f8h
	db 044h
l71d8:
	db 0ffh,046h,0fch,08bh,046h,0fch,03dh,008h,000h,07ch,0d4h,0ffh,046h,0feh
l71e6:
	db 0b8h,0b0h,001h,0f7h,02eh,05ch,043h,08bh,0d8h,08ah,087h,094h,045h,02ah,0e4h,03bh
	db 046h,0feh,07fh,086h,0ffh,036h,05ch,043h
	call calc_carried_weight_x_
	db 059h,0ffh,036h,05ch,043h
	call get_load_category_x_
	db 059h,08bh,0f0h,08dh,07eh,0eeh,08ch,0d9h,08eh,0c1h,0b9h,007h,000h,0f3h,0a5h,08ah
	db 046h,0f8h,050h,0b8h,0b0h,001h,0f7h,02eh,05ch,043h,08bh,0d8h,058h,088h,087h,08dh
	db 045h
l722a:
	db 05eh,05fh,08bh,0e5h,05dh,0c3h
#endasm
