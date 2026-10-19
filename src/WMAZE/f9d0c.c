#asm
	extrn char_index_:near
	extrn end_text_page_m_:near
	extrn wait_animating_m_:near
#endasm
extern int cur_sound;
extern int g0002;
extern int g522a;
extern int g522c;
extern int g522e;
print_text_line_m(p4)
char *p4;
{
	int l2;
	char x2[2];
#asm
l9d12:
	db 08bh,05eh,004h,08ah,007h,02ah,0e4h,050h,0b8h,008h,050h,050h
	call char_index_
	db 083h,0c4h,004h,089h,046h,0fch,03dh,000h,000h,07dh,003h
#endasm
	goto L9dd2;
L9d2f:
	;
#asm
l9d2f:
	db 0e9h,090h,000h
#endasm
	p4++;
	g522c++;
#asm
	db 0e9h,093h,000h
#endasm
	p4++;
#asm
	db 0ffh,036h,0cah,04fh
	call wait_animating_m_
	db 059h,0e9h,085h,000h,0ffh,046h,004h
#endasm
	p4++;
#asm
	db 0e9h,07ch,000h
#endasm
	p4++;
#asm
	db 0e9h,076h,000h
#endasm
	p4++;
	clear_window(g522a, 1);
	g522c = 0;
#asm
	db 0ebh,05dh
#endasm
	p4++;
#asm
	db 0b8h,000h,000h,050h
	call end_text_page_m_
	db 059h,0ebh,050h
#endasm
	p4++;
	if ((unsigned)*p4 < 14) goto L9da3;
	if ((unsigned char)*p4 == cur_sound) goto L9d99;
	load_sound_bank((unsigned char)*p4);
L9d99:
	play_sound(14);
	goto L9daf;
L9da3:
	play_sound((unsigned char)*p4);
L9daf:
	p4++;
#asm
	db 0ebh,01bh,032h,09dh,03ch,09dh,04ah,09dh,053h,09dh,059h,09dh,072h,09dh,07fh,09dh
l9dc2:
	db 03dh,007h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,0b4h,09dh
l9dcf:
	db 0e9h,040h,0ffh
#endasm
L9dd2:
	if (g522c <= 4) goto L9de1;
	end_text_page_m(0);
L9de1:
	l2 = (20 - ((strlen(p4) + 1) / 2));
	switch ((unsigned char)*p4) {
case 36:
	p4++;
	l2 = 0;
	goto L9e21;
case 94:
	p4++;
	l2 = g522e;
	goto L9e21;
	}
L9e21:
	set_cursor(g522a, l2, g522c);
	g522e = l2;
	g522c++;
	print_string(g522a, p4, g0002);
}
