#asm
	extrn drv_draw_text_:near
#endasm
extern int anim_phase;
extern int g0022[];
extern int g002a[];
extern int picture_win;
animate_door(p4, p6, p8, p10)
{
	int l2;
	int l4;
	int l6;
	char x6[8];
	char l15;
	char l16;
	int l18;
	int l20;
	if (p4 == 1) {
	l18 = 0;
	l20 = (0 - g0022[p8]);
	} else {
	l18 = g002a[p8];
	l20 = g0022[p8];
	}
	l2 = 0;
Lb3ec:
	anim_phase = ((anim_phase + 1) % 2);
	draw_maze_view_m();
	l4 = 2;
	l6 = (p8 + 10);
	l16 = *(char *)&l6;
	l15 = 0;
	if ((p8 <= 0) && (p6 != 1)) goto Lb4d9;
#asm
lb424:
	db 08dh,046h,0f0h,050h,0b8h,000h,000h,050h,050h,08bh,046h,008h,08bh,0d0h,0d1h,0e0h
	db 003h,0c2h,0d1h,0e0h,08bh,04eh,006h,0d1h,0e1h,003h,0c1h,08bh,0d8h,08bh,087h,052h
	db 000h,08bh,04eh,008h,0d1h,0e1h,0d1h,0e1h,08bh,0d9h,08bh,08fh,034h,000h,003h,0c1h
	db 050h,08bh,046h,008h,08bh,0d0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh,04eh,006h,0d1h
	db 0e1h,003h,0c1h,08bh,0d8h,08bh,087h,052h,000h,08bh,04eh,008h,0d1h,0e1h,0d1h,0e1h
	db 08bh,0d9h,003h,087h,032h,000h,050h,0b8h,03ah,001h,0f7h,06eh,0fch,003h,046h,0fah
	db 08bh,0d8h,08ah,087h,017h,037h,02ah,0e4h,050h,08bh,046h,008h,08bh,0d0h,0d1h,0e0h
	db 003h,0c2h,0d1h,0e0h,08bh,04eh,006h,0d1h,0e1h,003h,0c1h,08bh,0d8h,08bh,087h,052h
	db 000h,050h,0b8h,03ah,001h,0f7h,06eh,0fch,08bh,04eh,0fah,0d1h,0e1h,003h,0c1h,08bh
	db 0d8h,08ah,087h,0e4h,036h,02ah,0e4h,08bh,0c8h,058h,003h,0c1h,050h,08bh,046h,0feh
	db 0f7h,06eh,0ech,08bh,0c8h,058h,003h,0c1h,02bh,046h,0eeh,050h,0ffh,076h,0fch
	call drv_draw_text_
	db 083h,0c4h,010h
#endasm
Lb4d9:
	drv_op_c2(picture_win);
	if (p10 > 0) {
	play_sound(p10);
	}
	l2++;
	if (l2 < 7) goto Lb3ec;
}
