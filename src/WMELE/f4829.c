/* Return base plus count random rolls. */
#asm
	public roll_dice_
	extrn random_:near
roll_dice_:
	db 055h,08bh,0ech,083h,0c4h,0feh,08bh,046h,004h,089h,046h,0feh
l4835:
	db 080h,07eh,006h,000h,076h,016h,08ah,046h,007h,02ah,0e4h,050h
	call random_
	db 059h,003h,046h,0feh,040h,089h,046h,0feh,0feh,04eh,006h,0ebh,0e4h
l4851:
	db 08bh,046h,0feh,08bh,0e5h,05dh,0c3h
#endasm
