npc_input_line(p4, p6, p8, p10, p12)
char *p4;
char *p6;
{
	int l2;
	int l4;
	int l6;
	int l8;
	register int rsi;
	l6 = (unsigned char)p4[6];
	l8 = (unsigned char)p4[7];
	l4 = 0;
	*p6 = 0;
	put_char(p4, 97, 1);
	flush_keys();
L57e5:
	l2 = f578c(1);
	if (l2 == 13) goto L58f5;
	set_cursor(p4, l6, l8);
	put_char(p4, 32, 1);
	set_cursor(p4, l6, l8);
	if (l2 != 8) goto L587d;
	if (l4 <= 0) goto L5873;
	l4--;
#asm
	db 08bh,05eh,006h,08bh,076h,0fch,0c6h,000h,000h
#endasm
	l6--;
	set_cursor(p4, l6, l8);
	put_char(p4, 32, 1);
	set_cursor(p4, l6, l8);
	goto L587b;
L5873:
	play_sound(0);
L587b:
	goto L58e1;
L587d:
	if (l4 < p8) goto L588f;
	play_sound(0);
	goto L58e1;
L588f:
	if (p12) goto L58a2;
#asm
	db 08bh,046h,0feh,03dh,020h,000h,07ch,005h,03dh,07fh,000h,07eh,013h
#endasm
L58a2:
	if (p12 != 1) goto L58e1;
#asm
	db 08bh,046h,0feh,03dh,030h,000h,07ch,031h,03dh,039h,000h,07fh,02ch
#endasm
L58b5:
	;
#asm
l58b5:
	db 08ah,046h,0feh,08bh,05eh,006h,08bh,076h,0fch,088h,000h
#endasm
	l4++;
#asm
	db 08bh,05eh,006h,08bh,076h,0fch,0c6h,000h,000h
#endasm
	put_char(p4, (unsigned char)*(char *)&l2, p10);
	l6++;
L58e1:
	put_char(p4, 97, 1);
	goto L57e5;
L58f5:
	set_cursor(p4, l6, l8);
	put_char(p4, 32, 1);
}
