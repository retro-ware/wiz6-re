#asm
	extrn add_sprite_:near
#endasm
extern int anim_cycle;
extern int g50fe[];
extern int g5112;
queue_effect_sprite(p4, p6)
{
	int l2;
	int l4;
	char x4[10];
	char l15;
	char l16;
	int l18;
	int l20;
	if (*(int *)((char *)g50fe + ((p4 * 10) + (p6 << 1))) != -1) goto L6769;
	return;
L6769:
	if (anim_cycle != 1) goto L677d;
	if (*(int *)((char *)g50fe + ((p4 * 10) + (p6 << 1))) != 1) goto L677d;
	g5112 = 1;
L677d:
	l2 = 0;
	l18 = 1;
	l4 = 0;
	switch (((p4 * 10) + *(int *)((char *)g50fe + ((p4 * 10) + (p6 << 1))))) {
case 0:
	l18 = 5;
	goto L6835;
case 1:
	l18 = 3;
	goto L6835;
case 2:
	l18 = 3;
	l4 = 1;
	goto L6835;
case 3:
case 11:
	l18 = 2;
	goto L6835;
case 4:
case 12:
	l18 = 2;
	l4 = 1;
	goto L6835;
case 5:
case 13:
	l18 = 1;
	goto L6835;
case 6:
case 14:
	l18 = 1;
	l4 = 1;
	goto L6835;
case 7:
case 15:
	*(int *)((char *)g50fe + ((p4 * 10) + (p6 << 1))) = -1;
	return;
case 10:
	l18 = 4;
	goto L6835;
	}
L6835:
	l16 = *(char *)&l18;
	l15 = 0;
	l20 = 30;
	switch (((p4 * 10) + p6)) {
case 13:
case 14:
	l20 = 9;
	goto L68ab;
case 11:
case 12:
	l20 = 19;
	goto L68ab;
case 10:
	l20 = 14;
	goto L68ab;
case 3:
case 4:
	l20 = 24;
	goto L68ab;
case 1:
case 2:
	l20 = 50;
	goto L68ab;
case 0:
	l20 = 29;
	goto L68ab;
	}
L68ab:
	;
#asm
l68ab:
	db 08dh,046h,0f0h,050h,0ffh,076h,0fch,0b8h,0f8h,000h,050h,0b8h,048h,000h,050h,0b8h
	db 03ah,001h,0f7h,06eh,0feh,003h,046h,0eeh,08bh,0d8h,08ah,087h,017h,037h,02ah,0e4h
	db 050h,08bh,046h,004h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh,0c8h
	db 08bh,056h,006h,0d1h,0e2h,003h,0c2h,08bh,0d8h,08bh,08fh,07eh,000h,058h,003h,0c1h
	db 0b9h,000h,000h,083h,07eh,004h,001h,075h,003h,0b9h,008h,000h
#endasm
L68f7:
	;
#asm
l68f7:
	db 02bh,0c1h,050h,0b8h,03ah,001h,0f7h,06eh,0feh,08bh,04eh,0eeh,0d1h,0e1h,003h,0c1h
	db 08bh,0d8h,08ah,087h,0e4h,036h,02ah,0e4h,050h,08bh,046h,004h,08bh,0d0h,0d1h,0e0h
	db 0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh,0c8h,08bh,056h,006h,0d1h,0e2h,003h,0c2h,08bh
	db 0d8h,058h,003h,087h,06ah,000h,050h,0ffh,076h,0feh,0ffh,076h,0ech
	call add_sprite_
	db 083h,0c4h,010h
#endasm
	if (anim_cycle) goto L695b;
	(*(int *)((char *)g50fe + ((p4 * 10) + (p6 << 1))))++;
L695b:
	return;
}
