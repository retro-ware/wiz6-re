/* Decode Huffman-compressed text into a zero-terminated string. */
#asm
	public decode_text_
	extrn f2a18_:near
decode_text_:
	db 055h,08bh,0ech,083h,0ech,004h,01eh,006h,056h,057h,08bh,076h,004h,08bh,07eh,006h
	db 02eh,0a1h,080h,01bh,08eh,0c0h,0ach,032h,0e4h,089h,046h,0fch,0c7h,046h,0feh,008h
	db 000h,0ach
l29fb:
	db 083h,07eh,0fch,000h,074h,00bh
	call f2a18_
	db 088h,01dh,047h,0ffh,04eh,0fch,0ebh,0efh
l2a0c:
	db 0c7h,005h,000h,000h,05fh,05eh,007h,01fh,08bh,0e5h,05dh,0c3h
#endasm
