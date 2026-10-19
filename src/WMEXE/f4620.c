#asm
	extrn $ldv:near
#endasm
extern char g4591[];
extern char g4592[];
extern int pc_stamina_max[];
get_load_category_x(p4)
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	int l14;
	long l18;
	register int rsi;
	register int rdi;
	l14 = 0;
	l12 = 0;
	l10 = 0;
	l8 = (unsigned char)g4591[(432 * p4)];
	l6 = (unsigned char)g4592[(432 * p4)];
	l4 = 0;
	l2 = 9;
#asm
	db 08bh,087h,008h,044h,0bbh,064h,000h,0f7h,0ebh,050h,052h,0b8h,0b0h,001h,0f7h,06eh
	db 004h,08bh,0d8h,08bh,087h,00ah,044h,099h,08bh,0c8h,08bh,0dah,05ah,058h
	call $ldv
	db 089h,056h,0f0h,089h,046h,0eeh,083h,0fah,000h,07fh,007h,075h,007h,03dh,032h,000h
	db 076h,002h
#endasm
L468e:
	goto L4693;
L4690:
	goto L478b;
L4693:
	;
#asm
l4693:
	db 083h,0fah,000h,07fh,007h,075h,007h,03dh,042h,000h,076h,002h
#endasm
L469f:
	goto L46c4;
L46a1:
	l12 = 5;
	l10 = 10;
	if (l8 <= 3) goto L46b6;
	l8 = 3;
L46b6:
	if (l6 <= 3) goto L46c1;
	l6 = 3;
L46c1:
	goto L478b;
L46c4:
	;
#asm
l46c4:
	db 083h,0fah,000h,07fh,007h,075h,007h,03dh,04bh,000h,076h,002h
#endasm
L46d0:
	goto L4713;
L46d2:
	l14 = 1;
	l12 = 10;
	l10 = 20;
	if (l8 <= 2) goto L46ec;
	l8 = 2;
L46ec:
	if (l6 <= 2) goto L46f7;
	l6 = 2;
L46f7:
	l4 = (*(int *)((char *)pc_stamina_max + (432 * p4)) / 100);
	l2 = -7;
	goto L478b;
L4713:
	if (l18 > 90L) goto L4758;
	l14 = 2;
	l12 = 20;
	l10 = 40;
	l8 = 1;
	l6 = 1;
	l4 = (*(int *)((char *)pc_stamina_max + (432 * p4)) / 50);
	l2 = -5;
	goto L478b;
L4758:
	l14 = 4;
	l12 = 40;
	l10 = 80;
	l8 = 1;
	l6 = 1;
	l4 = (*(int *)((char *)pc_stamina_max + (432 * p4)) / 25);
	l2 = -4;
L478b:
	rsi = &l14;
	rdi = 20472;
#asm
	db 08ch,0d9h,08eh,0c1h,0b9h,007h,000h,0f3h,0a5h,0b8h,0f8h,04fh
#endasm
}
