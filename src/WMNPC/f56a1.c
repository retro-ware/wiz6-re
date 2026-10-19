#asm
	extrn f49db_:near
#endasm
extern int g5224;
extern int main_window;
extern int view_anim_state;
f56a1(p4)
{
	int l2;
	int l4;
	char x4[2];
	int l8;
	if (p4) goto L56df;
	get_message(2025, 20948);
	erase_window(main_window, 1);
	print_centered(main_window, 20948, 0, 18);
L56df:
	l8 = random(2);
	l4 = random(4);
	l2 = 0;
L56fa:
	if (!random(8)) goto L570e;
	if (l2 != l4) goto L571d;
L570e:
	if (g5224 <= 0) goto L571d;
	play_sound(g5224);
L571d:
	view_anim_state = -2;
	f55dc();
	if (l8) goto L5749;
#asm
	db 0b8h,000h,000h,050h,08bh,046h,004h,0d1h,0e0h,0d1h,0e0h,003h,046h,0feh,08bh,0d8h
	db 08ah,087h,0c4h,000h,02ah,0e4h,08bh,0c8h,058h,02bh,0c1h,0ebh,012h
#endasm
L5749:
	;
#asm
l5749:
	db 08bh,046h,004h,0d1h,0e0h,0d1h,0e0h,003h,046h,0feh,08bh,0d8h,08ah,087h,0c4h,000h
	db 02ah,0e4h
#endasm
L575b:
	;
#asm
l575b:
	db 089h,046h,0fah,050h,0b8h,000h,000h,050h,050h
	call f49db_
	db 083h,0c4h,006h
#endasm
	view_anim_state = 0;
L5770:
	f55dc();
	if (view_anim_state != -2) goto L5770;
	l2++;
#asm
	db 08bh,046h,0feh,03dh,004h,000h,07dh,003h
#endasm
	goto L56fa;
L5788:
	;
}
