/* Apply the effects of a sprung chest trap (damage, poison, stat loss, teleport...) to the party. */
#asm
	public spring_trap_
	extrn clear_window_:near
	extrn get_message_:near
	extrn inflict_condition_:near
	extrn inflict_status_:near
	extrn play_sound_:near
	extrn print_centered_:near
	extrn print_member_message_:near
	extrn random_:near
	extrn refresh_all_windows_:near
	extrn show_centered_line_:near
	extrn show_trap_effect_:near
	extrn trap_damage_member_:near
	extrn wait_animating_:near
spring_trap_:
	db 055h,08bh,0ech,083h,0c4h,0aeh,0b8h,000h,000h,050h,0ffh,036h,0b6h,04fh
	call clear_window_
	db 083h,0c4h,004h
	call refresh_all_windows_
	db 083h,07eh,004h,000h,075h,02ch,08dh,046h,0b0h,050h,0b8h,06ch,014h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,007h,000h,050h,0b8h,001h,000h,050h,08dh,046h,0b0h,050h,0ffh
	db 036h,0c8h,050h,0ffh,036h,0b6h,04fh
	call show_centered_line_
	db 083h,0c4h,00ah
l5f8e:
	db 08bh,0e5h,05dh,0c3h
l5f92:
	db 08bh,046h,004h,0e9h,009h,007h,0b8h,00fh,000h,050h,0b8h,000h,000h,050h
	call show_trap_effect_
	db 083h,0c4h,004h,0c7h,046h,0aeh,000h,000h,0ebh,015h
l5fad:
	db 0b8h,008h,000h,050h,0a1h,03ch,036h,040h,050h,0ffh,076h,0aeh
	call trap_damage_member_
	db 083h,0c4h,006h,0ffh,046h,0aeh
l5fc2:
	db 08bh,046h,0aeh,03bh,006h,0ceh,043h,07ch,0e2h,0e9h,0e0h,006h,0b8h,010h,000h,050h
	db 0b8h,000h,000h,050h
	call show_trap_effect_
	db 083h,0c4h,004h,0c7h,046h,0aeh,000h,000h,0ebh,021h
l5fe3:
	db 0b8h,032h,000h,050h,0b8h,00ah,000h,050h,050h,0b8h,003h,000h,050h,0b8h,00ah,000h
	db 050h,0b8h,085h,014h,050h,0ffh,076h,0aeh
	call inflict_status_
	db 083h,0c4h,00eh,0ffh,046h,0aeh
l6004:
	db 08bh,046h,0aeh,03bh,006h,0ceh,043h,07ch,0d6h,0e9h,09eh,006h,0b8h,0ffh,0ffh,050h
	db 0b8h,000h,000h,050h
	call show_trap_effect_
	db 083h,0c4h,004h,0e9h,08dh,006h,0b8h,006h,000h,050h,0ffh,076h,006h
	call show_trap_effect_
	db 083h,0c4h,004h,0b8h,006h,000h,050h,0b8h,001h,000h,050h,0ffh,076h,006h
	call trap_damage_member_
	db 083h,0c4h,006h,0b8h,032h,000h,050h,0b8h,00ah,000h,050h,0a1h,03ch,036h,040h,040h
	db 050h,0b8h,005h,000h,050h,0b8h,000h,000h,050h,0b8h,087h,014h,050h,0ffh,076h,006h
	call inflict_status_
	db 083h,0c4h,00eh,0e9h,049h,006h,0b8h,002h,000h,050h,0b8h,000h,000h,050h
	call show_trap_effect_
	db 083h,0c4h,004h,0c7h,046h,0aeh,000h,000h,0e9h,0ech,000h
l607b:
	db 0b8h,064h,000h,050h
	call random_
	db 059h,050h,0b8h,0b0h,001h,0f7h,06eh,0aeh,08bh,0d8h,08ah,087h,03ch,045h,02ah,0e4h
	db 08bh,0c8h,058h,03bh,0c1h,07fh,003h,0e9h,0c8h,000h
l609c:
	db 0b8h,006h,000h,050h
	call random_
	db 059h,0e9h,0b0h,000h,0b8h,008h,000h,050h,0a1h,03ch,036h,040h,050h,0ffh,076h,0aeh
	call trap_damage_member_
	db 083h,0c4h,006h,0e9h,0a8h,000h,0b8h,032h,000h,050h,0b8h,00ah,000h,050h,050h,0b8h
	db 004h,000h,050h,0b8h,002h,000h,050h,0b8h,086h,014h,050h,0ffh,076h,0aeh
	call inflict_status_
	db 083h,0c4h,00eh,0e9h,087h,000h,0b8h,032h,000h,050h,0b8h,00ah,000h,050h,050h,0b8h
	db 002h,000h,050h,0b8h,009h,000h,050h,0b8h,084h,014h,050h,0ffh,076h,0aeh
	call inflict_status_
	db 083h,0c4h,00eh,0ebh,067h,0b8h,032h,000h,050h,0b8h,00ah,000h,050h,050h,0b8h,003h
	db 000h,050h,0b8h,004h,000h,050h,0b8h,085h,014h,050h,0ffh,076h,0aeh
	call inflict_status_
	db 083h,0c4h,00eh,0ebh,047h,0b8h,003h,000h,050h,0b8h,00bh,000h,050h,0b8h,08ch,014h
	db 050h,0ffh,076h,0aeh
	call inflict_condition_
	db 083h,0c4h,008h,0ebh,030h,0b8h,002h,000h,050h,0b8h,00bh,000h,050h,0b8h,08fh,014h
	db 050h,0ffh,076h,0aeh
	call inflict_condition_
	db 083h,0c4h,008h,0ebh,019h,0a7h,060h,0bch,060h,0ddh,060h,0fdh,060h,01dh,061h,034h
	db 061h
l6157:
	db 03dh,006h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,04bh,061h
l6164:
	db 0ffh,046h,0aeh
l6167:
	db 08bh,046h,0aeh,03bh,006h,0ceh,043h,07dh,003h,0e9h,008h,0ffh
l6173:
	db 0e9h,038h,005h,0b8h,010h,000h,050h,0b8h,000h,000h,050h
	call show_trap_effect_
	db 083h,0c4h,004h,0c7h,046h,0aeh,000h,000h,0e9h,024h,001h
l618c:
	db 0b8h,032h,000h,050h,0b8h,00ah,000h,050h,050h,0b8h,009h,000h,050h,0b8h,00bh,000h
	db 050h,0b8h,091h,014h,050h,0ffh,076h,0aeh
	call inflict_status_
	db 083h,0c4h,00eh,0b8h,064h,000h,050h
	call random_
	db 059h,050h,0b8h,0b0h,001h,0f7h,06eh,0aeh,08bh,0d8h,08ah,087h,045h,045h,02ah,0e4h
	db 08bh,0c8h,005h,04bh,000h,08bh,0c8h,058h,03bh,0c1h,07eh,060h,080h,0bfh,014h,045h
	db 003h,076h,059h,080h,0bfh,089h,045h,003h,073h,052h,0feh,08fh,014h,045h,08dh,046h
	db 0b0h,050h,0b8h,092h,014h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,0f2h,050h,050h,0b8h,093h,014h,050h
	call get_message_
	db 083h,0c4h,004h,0c6h,006h,042h,051h,000h,0b8h,000h,000h,050h,0b8h,005h,000h,050h
	db 050h,0b8h,001h,000h,050h,0b8h,042h,051h,050h,0b8h,0f2h,050h,050h,08dh,046h,0b0h
	db 050h,0ffh,076h,0aeh
	call print_member_message_
	db 083h,0c4h,010h,0ffh,036h,0cah,04fh
	call wait_animating_
	db 059h,0e9h,080h,000h
l622d:
	db 0b8h,064h,000h,050h
	call random_
	db 059h,050h,0b8h,0b0h,001h,0f7h,06eh,0aeh,08bh,0d8h,08ah,087h,045h,045h,02ah,0e4h
	db 08bh,0c8h,005h,04bh,000h,08bh,0c8h,058h,03bh,0c1h,07eh,05dh,080h,0bfh,017h,045h
	db 003h,076h,056h,080h,0bfh,089h,045h,003h,073h,04fh,0feh,08fh,017h,045h,08dh,046h
	db 0b0h,050h,0b8h,092h,014h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,0f2h,050h,050h,0b8h,094h,014h,050h
	call get_message_
	db 083h,0c4h,004h,0c6h,006h,042h,051h,000h,0b8h,000h,000h,050h,0b8h,005h,000h,050h
	db 050h,0b8h,001h,000h,050h,0b8h,042h,051h,050h,0b8h,0f2h,050h,050h,08dh,046h,0b0h
	db 050h,0ffh,076h,0aeh
	call print_member_message_
	db 083h,0c4h,010h,0ffh,036h,0cah,04fh
	call wait_animating_
	db 059h
l62ad:
	db 0ffh,046h,0aeh
l62b0:
	db 08bh,046h,0aeh,03bh,006h,0ceh,043h,07dh,003h,0e9h,0d0h,0feh
l62bc:
	db 0e9h,0efh,003h,0b8h,010h,000h,050h,0b8h,000h,000h,050h
	call show_trap_effect_
	db 083h,0c4h,004h,0e9h,0deh,003h,0b8h,002h,000h,050h,0b8h,000h,000h,050h
	call show_trap_effect_
	db 083h,0c4h,004h,0c7h,046h,0aeh,000h,000h,0e9h,0b4h,000h
l62e6:
	db 0b8h,064h,000h,050h
	call random_
	db 059h,050h,0b8h,0b0h,001h,0f7h,06eh,0aeh,08bh,0d8h,08ah,087h,045h,045h,02ah,0e4h
	db 08bh,0c8h,005h,032h,000h,08bh,0c8h,058h,03bh,0c1h,07fh,003h,0e9h,08bh,000h
l630c:
	db 080h,0bfh,089h,045h,003h,072h,003h,0e9h,081h,000h
l6316:
	db 0b8h,004h,000h,050h
	call random_
	db 059h,040h,050h,0b8h,0b0h,001h,0f7h,06eh,0aeh,08bh,0d8h,058h,029h,087h,002h,044h
	db 083h,0bfh,002h,044h,001h,07dh,006h,0c7h,087h,002h,044h,001h,000h
l633a:
	db 08bh,087h,000h,044h,03bh,087h,002h,044h,07eh,008h,08bh,087h,002h,044h,089h,087h
	db 000h,044h
l634c:
	db 08dh,046h,0b0h,050h,0b8h,092h,014h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,0f2h,050h,050h,0b8h,095h,014h,050h
	call get_message_
	db 083h,0c4h,004h,0c6h,006h,042h,051h,000h,0b8h,000h,000h,050h,0b8h,005h,000h,050h
	db 050h,0b8h,001h,000h,050h,0b8h,042h,051h,050h,0b8h,0f2h,050h,050h,08dh,046h,0b0h
	db 050h,0ffh,076h,0aeh
	call print_member_message_
	db 083h,0c4h,010h,0ffh,036h,0cah,04fh
	call wait_animating_
	db 059h
l6397:
	db 0ffh,046h,0aeh
l639a:
	db 08bh,046h,0aeh,03bh,006h,0ceh,043h,07dh,003h,0e9h,040h,0ffh
l63a6:
	db 0e9h,005h,003h,0b8h,0ffh,0ffh,050h,0b8h,000h,000h,050h
	call show_trap_effect_
	db 083h,0c4h,004h,0e9h,0f4h,002h,0b8h,010h,000h,050h,0b8h,000h,000h,050h
	call show_trap_effect_
	db 083h,0c4h,004h,0c7h,046h,0aeh,000h,000h,0ebh,018h
l63cf:
	db 0b8h,002h,000h,050h,0b8h,00bh,000h,050h,0b8h,08fh,014h,050h,0ffh,076h,0aeh
	call inflict_condition_
	db 083h,0c4h,008h,0ffh,046h,0aeh
l63e7:
	db 08bh,046h,0aeh,03bh,006h,0ceh,043h,07ch,0dfh,0e9h,0bbh,002h,0b8h,004h,000h,050h
	db 0b8h,000h,000h,050h
	call show_trap_effect_
	db 083h,0c4h,004h,0e9h,0aah,002h
l6404:
	db 0ffh,036h,0ceh,043h
	call random_
	db 059h,089h,046h,0aeh,0b8h,0b0h,001h,0f7h,06eh,0aeh,08bh,0d8h,080h,0bfh,089h,045h
	db 003h,073h,0e6h,0b8h,004h,000h,050h,0ffh,076h,0aeh
	call show_trap_effect_
	db 083h,0c4h,004h,08dh,046h,0b0h,050h,0b8h,096h,014h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,001h,000h,050h,0ffh,036h,0b6h,04fh
	call clear_window_
	db 083h,0c4h,004h,0b8h,005h,000h,050h,0ffh,036h,0c8h,050h,08dh,046h,0b0h,050h,0ffh
	db 036h,0b6h,04fh
	call print_centered_
	db 083h,0c4h,008h,0b8h,000h,000h,050h
	call play_sound_
	db 059h,0ffh,036h,0cah,04fh
	call wait_animating_
	db 059h,08dh,046h,0b0h,050h,0b8h,097h,014h,050h
	call get_message_
	db 083h,0c4h,004h,0c6h,006h,0f2h,050h,000h,0c6h,006h,042h,051h,000h,0b8h,000h,000h
	db 050h,050h,0b8h,006h,000h,050h,0b8h,001h,000h,050h,0b8h,042h,051h,050h,0b8h,0f2h
	db 050h,050h,08dh,046h,0b0h,050h,0ffh,076h,0aeh
	call print_member_message_
	db 083h,0c4h,010h,0ffh,036h,0cah,04fh
	call wait_animating_
	db 059h,0b8h,008h,000h,050h,0a1h,03ch,036h,040h,050h,0ffh,076h,0aeh
	call trap_damage_member_
	db 083h,0c4h,006h,0b8h,0b0h,001h,0f7h,06eh,0aeh,08bh,0d8h,080h,0bfh,089h,045h,003h
	db 072h,003h,0e9h,0abh,000h
l64d3:
	db 0b8h,015h,000h,050h
	call random_
	db 059h,050h,0b8h,0b0h,001h,0f7h,06eh,0aeh,08bh,0d8h,08ah,087h,01bh,045h,02ah,0e4h
	db 08bh,0c8h,058h,03bh,0c1h,07fh,003h,0e9h,08ah,000h
l64f4:
	db 08dh,046h,0b0h,050h,0b8h,098h,014h,050h
	call get_message_
	db 083h,0c4h,004h,0c6h,006h,0f2h,050h,000h,0c6h,006h,042h,051h,000h,0b8h,000h,000h
	db 050h,050h,0b8h,006h,000h,050h,0b8h,001h,000h,050h,0b8h,042h,051h,050h,0b8h,0f2h
	db 050h,050h,08dh,046h,0b0h,050h,0ffh,076h,0aeh
	call print_member_message_
	db 083h,0c4h,010h,0ffh,036h,0cah,04fh
	call wait_animating_
	db 059h,0b8h,008h,000h,050h,0a1h,03ch,036h,0d1h,0e0h,040h,040h,050h,0ffh,076h,0aeh
	call trap_damage_member_
	db 083h,0c4h,006h,0b8h,015h,000h,050h
	call random_
	db 059h,050h,0b8h,0b0h,001h,0f7h,06eh,0aeh,08bh,0d8h,08ah,087h,01bh,045h,02ah,0e4h
	db 08bh,0c8h,058h,03bh,0c1h,07eh,015h,0b8h,003h,000h,050h,0b8h,00bh,000h,050h,0b8h
	db 099h,014h,050h,0ffh,076h,0aeh
	call inflict_condition_
	db 083h,0c4h,008h
l657e:
	db 08dh,046h,0b0h,050h,0b8h,09ah,014h,050h
	call get_message_
	db 083h,0c4h,004h,0b8h,001h,000h,050h,0ffh,036h,0b6h,04fh
	call clear_window_
	db 083h,0c4h,004h,0b8h,005h,000h,050h,0ffh,036h,0c8h,050h,08dh,046h,0b0h,050h,0ffh
	db 036h,0b6h,04fh
	call print_centered_
	db 083h,0c4h,008h,0b8h,000h,000h,050h
	call play_sound_
	db 059h,0ffh,036h,0cah,04fh
	call wait_animating_
	db 059h,0e9h,0ebh,000h,0b8h,003h,000h,050h,0b8h,000h,000h,050h
	call show_trap_effect_
	db 083h,0c4h,004h,0c7h,046h,0aeh,000h,000h,0ebh,033h
l65d8:
	db 0b8h,008h,000h,050h,0a1h,03ch,036h,040h,050h,0ffh,076h,0aeh
	call trap_damage_member_
	db 083h,0c4h,006h,0b8h,032h,000h,050h,0b8h,00ah,000h,050h,050h,0b8h,008h,000h,050h
	db 0b8h,005h,000h,050h,0b8h,09bh,014h,050h,0ffh,076h,0aeh
	call inflict_status_
	db 083h,0c4h,00eh,0ffh,046h,0aeh
l660b:
	db 08bh,046h,0aeh,03bh,006h,0ceh,043h,07ch,0c4h,0e9h,097h,000h,0b8h,000h,000h,050h
	db 050h
	call show_trap_effect_
	db 083h,0c4h,004h,0c7h,046h,0aeh,000h,000h,0ebh,015h
l6629:
	db 0b8h,00ah,000h,050h,0a1h,03ch,036h,040h,050h,0ffh,076h,0aeh
	call trap_damage_member_
	db 083h,0c4h,006h,0ffh,046h,0aeh
l663e:
	db 08bh,046h,0aeh,03bh,006h,0ceh,043h,07ch,0e2h,0ebh,065h,0b8h,004h,000h,050h,0b8h
	db 000h,000h,050h
	call show_trap_effect_
	db 083h,0c4h,004h,0c7h,046h,0aeh,000h,000h,0ebh,018h
l665e:
	db 0b8h,003h,000h,050h,0b8h,00bh,000h,050h,0b8h,08ch,014h,050h,0ffh,076h,0aeh
	call inflict_condition_
	db 083h,0c4h,008h,0ffh,046h,0aeh
l6676:
	db 08bh,046h,0aeh,03bh,006h,0ceh,043h,07ch,0dfh,0ebh,02dh,0aeh,066h,098h,05fh,0ceh
	db 05fh,010h,060h,021h,060h,065h,060h,076h,061h,0bfh,062h,0d0h,062h,0a9h,063h,0bah
	db 063h,0f3h,063h,004h,064h,0c3h,065h,017h,066h,049h,066h
l66a1:
	db 03dh,010h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,081h,066h
l66ae:
	db 0e9h,0ddh,0f8h
#endasm
