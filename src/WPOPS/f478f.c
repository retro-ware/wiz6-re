#asm
	extrn print_string_:near
#endasm
extern char *g43b4;
extern char *g4fae;
draw_ally_group()
{
	char x0[2];
	int l4;
	defer_window_draw(g4fae);
	fill_window(g4fae, 28, 3, 0);
	set_cursor(g4fae, 4, 0);
	print_message(3516, g4fae, 18);
	clear_window_area(g4fae, 0, 1, 21, 1);
	g43b4[414] = 0;
	l4 = 0;
	goto L4827;
L4802:
	if ((unsigned)(g43b4 + (44 * l4))[34] >= 2) goto L4824;
	if ((g43b4 + (44 * l4))[17]) goto L4824;
	if ((g43b4 + (44 * l4))[16]) goto L4824;
	g43b4[414]++;
L4824:
	l4++;
L4827:
	if ((unsigned char)g43b4[413] > l4) goto L4802;
	set_cursor(g4fae, 1, 1);
	put_char(g4fae, (unsigned char)(((unsigned char)g43b4[413] + 48)), 4);
	g4fae[6]++;
#asm
	db 0b8h,00ch,000h,050h,08bh,01eh,0b4h,043h,080h,0bfh,09dh,001h,001h,075h,005h,0b8h
	db 000h,000h,0ebh,003h
#endasm
L487e:
	;
#asm
l487e:
	db 0b8h,001h,000h
#endasm
L4881:
	;
#asm
l4881:
	db 0b9h,004h,000h,0d3h,0e0h,08bh,0c8h,051h,08ah,087h,09ch,001h,02ah,0e4h,0b9h,005h
	db 000h,0d3h,0e0h,059h,003h,0c8h,0a1h,0c2h,043h,003h,0c1h,050h,0ffh,036h,0aeh,04fh
	call print_string_
	db 083h,0c4h,006h
#endasm
	set_cursor(g4fae, 20, 1);
	put_char(g4fae, (unsigned char)(((unsigned char)g43b4[414] + 48)), 9);
	resume_window_draw(g4fae);
}
