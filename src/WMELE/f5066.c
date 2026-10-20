/* Move the sprites of group g one row forward in the view and redraw. */
#asm
	public place_group_sprites_
	extrn choose_monster_frames_:near
	extrn random_:near
	extrn redraw_view_background_:near
	extrn wait_animating_view_:near
place_group_sprites_:
	db 055h,08bh,0ech,083h,0c4h,0f4h,056h,0c7h,046h,0feh,000h,000h,0e9h,052h,001h
l5075:
	db 0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh
	db 09fh,0a8h,043h,08ah,040h,02ah,098h,089h,046h,0fch,03dh,0ffh,0ffh,075h,003h,0e9h
	db 02dh,001h
l5097:
	db 0b9h,00ah,000h,099h,0f7h,0f9h,089h,046h,0fah,089h,056h,0f8h,08bh,0d0h,0d1h,0e0h
	db 0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh,04eh,0f8h,0d1h,0e1h,003h,0c1h,08bh,0d8h,0c7h
	db 087h,062h,043h,000h,000h,08bh,046h,0fah,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h
	db 003h,046h,0f8h,08bh,0d8h,0c6h,087h,048h,043h,000h,0c6h,087h,03eh,043h,000h,08bh
	db 046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,0c6h,040h,02ah,0ffh,08bh,046h
	db 0fah,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,003h,046h,0f8h,08bh,0d8h,08ah,087h
	db 0bah,000h,098h,0b9h,00ah,000h,099h,0f7h,0f9h,089h,046h,0f6h,089h,056h,0f4h,083h
	db 07eh,0fah,001h,075h,043h,083h,07eh,0f8h,000h,075h,03dh,0c7h,046h,0f6h,001h,000h
	db 0b8h,002h,000h,050h
	call random_
	db 059h,040h,089h,046h,0f4h,08bh,046h,0f6h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h
	db 0d1h,0e0h,08bh,04eh,0f4h,0d1h,0e1h,003h,0c1h,08bh,0d8h,083h,0bfh,062h,043h,000h
	db 074h,00fh,08bh,046h,0f4h,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c2h,040h,089h,046h
	db 0f4h
l514f:
	db 08bh,046h,0fah,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,003h,046h,0f8h,08bh,0d8h
	db 080h,0bfh,0bah,000h,0ffh,074h,05eh,08bh,046h,0f6h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h
	db 003h,0c2h,0d1h,0e0h,08bh,04eh,0f4h,0d1h,0e1h,003h,0c1h,08bh,0d8h,083h,0bfh,062h
	db 043h,000h,075h,041h,08bh,046h,004h,089h,087h,062h,043h,08bh,046h,0f6h,08bh,0d0h
	db 0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,003h,046h,0f4h,050h,0b8h,02ch,000h,0f7h
	db 06eh,0feh,08bh,0f0h,08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h
	db 088h,040h,02ah,083h,07eh,0f6h,000h,075h,00ch,0ffh,076h,0f4h,0ffh,076h,004h
	call choose_monster_frames_
	db 083h,0c4h,004h
l51c4:
	db 0ffh,046h,0feh
l51c7:
	db 08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,087h,09dh,001h,02ah
	db 0e4h,03bh,046h,0feh,07eh,003h,0e9h,095h,0feh
l51e0:
	call redraw_view_background_
	db 0b8h,004h,000h,050h
	call wait_animating_view_
	db 059h,05eh,08bh,0e5h,05dh,0c3h
#endasm
