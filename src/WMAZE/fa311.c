#asm
	public do_teleport_event_
	extrn play_sound_:near
	extrn show_maze_message_:near
	extrn teleport_party_:near
	extrn wait_animating_m_:near
do_teleport_event_:
	db 055h,08bh,0ech,083h,0c4h,0feh,056h,0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh
	db 0a8h,04fh,08bh,000h,089h,046h,0feh,0ebh,049h
	call teleport_party_
	db 0ebh,051h,0b8h,004h,008h,050h
	call show_maze_message_
	db 059h,0b8h,008h,000h,050h
	call play_sound_
	db 059h,0a1h,0cah,04fh,0b9h,004h,000h,099h,0f7h,0f9h,050h
	call wait_animating_m_
	db 059h,0c7h,006h,03eh,050h,001h,000h
	call teleport_party_
	db 0ebh,028h,0b8h,008h,000h,050h
	call play_sound_
	db 059h
	call teleport_party_
	db 0ebh,01bh,02ah,0a3h,02ah,0a3h,02fh,0a3h,080h,0a3h,058h,0a3h,058h,0a3h,058h,0a3h
la373:
	db 03dh,007h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,065h,0a3h
la380:
	db 05eh,08bh,0e5h,05dh,0c3h
#endasm
