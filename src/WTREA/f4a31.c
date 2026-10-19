#asm
	extrn end_text_page_:near
	extrn wait_animating_:near
#endasm
extern int g0002;
extern int g502e;
extern int g5030;
extern int g5032;
print_text_line(text)
char *text;
{
	int x;
	int l4;
	if ((l4 = char_index(20462, (unsigned char)*text)) < 0) goto L4ab7;
#asm
	db 0ebh,055h
#endasm
	text++;
	g5030++;
#asm
	db 0ebh,059h
#endasm
	text++;
#asm
	db 0ffh,036h,0cah,04fh
	call wait_animating_
	db 059h,0ebh,04ch,0ffh,046h,004h
#endasm
	text++;
#asm
	db 0ebh,044h
#endasm
	text++;
#asm
	db 0ebh,03fh
#endasm
	text++;
	clear_window(g502e, 1);
	g5030 = 0;
#asm
	db 0ebh,026h
#endasm
	text++;
#asm
	db 0b8h,000h,000h,050h
	call end_text_page_
	db 059h,0ebh,019h,053h,04ah,05ch,04ah,069h,04ah,071h,04ah,076h,04ah,08fh,04ah
l4aa8:
	db 03dh,006h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,09ch,04ah
l4ab5:
	db 0ebh,080h
#endasm
L4ab7:
	if (g5030 <= 4) goto L4ac6;
	end_text_page(0);
L4ac6:
	x = (20 - ((strlen(text) + 1) / 2));
	switch ((unsigned char)*text) {
case 36:
	text++;
	x = 0;
	goto L4b06;
case 94:
	text++;
	x = g5032;
	goto L4b06;
	}
L4b06:
	set_cursor(g502e, x, g5030);
	g5032 = x;
	g5030++;
	print_string(g502e, text, g0002);
}
