/* Play a sound effect, honoring the sound setting. */
#asm
	public play_sound_
	extrn is_sound_10_to_12_:near
	extrn start_sound_:near
play_sound_:
	db 055h,08bh,0ech,083h,0c4h,0fch,08bh,046h,004h,08bh,0d0h,0d1h,0e0h,003h,0c2h,0d1h
	db 0e0h,0d1h,0e0h,08bh,0d8h,08ah,087h,04eh,033h,02ah,0e4h,089h,046h,0fch,0a0h,090h
	db 035h,02ah,0e4h,0ebh,061h,0ffh,076h,004h
	call is_sound_10_to_12_
	db 059h,085h,0c0h,074h,00ch,08bh,046h,0fch,0b9h,002h,000h,099h,0f7h,0f9h,089h,046h
	db 0fch
l0ae6:
	db 0ebh,055h,0ffh,076h,004h
	call is_sound_10_to_12_
	db 059h,085h,0c0h,074h,004h
l0af3:
	db 08bh,0e5h,05dh,0c3h
l0af7:
	db 0ebh,044h,08bh,046h,0fch,0b9h,002h,000h,099h,0f7h,0f9h,089h,046h,0fch,0ebh,036h
	db 08bh,046h,0fch,0b9h,002h,000h,099h,0f7h,0f9h,089h,046h,0fch,0ffh,076h,004h
	call is_sound_10_to_12_
	db 059h,085h,0c0h,074h,002h,0ebh,0d3h
l0b20:
	db 0ebh,01bh,0ebh,0cfh,03dh,00bh,0cfh,00ah,0e8h,00ah,0f9h,00ah,007h,00bh,022h,00bh
l0b30:
	db 03dh,006h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,024h,00bh
l0b3d:
	db 08bh,046h,004h,089h,046h,0feh,08bh,0d0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,0d1h,0e0h
	db 08bh,0d8h,083h,0bfh,04ah,033h,000h,075h,005h,083h,0bfh,048h,033h,000h
l0b5b:
	db 075h,007h,08bh,087h,044h,033h,089h,046h,0feh
l0b64:
	db 08ah,087h,04fh,033h,02ah,0e4h,050h,0ffh,076h,0fch,0ffh,0b7h,04ch,033h,0ffh,076h
	db 0feh
	call start_sound_
	db 083h,0c4h,008h,0e9h,075h,0ffh
#endasm
