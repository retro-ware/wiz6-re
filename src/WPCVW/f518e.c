#asm
	extrn $ldv:near
#endasm
extern char g4591[];
extern char g4592[];
extern int pc_stamina_max[];
get_load_category(p4)
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
L51fc:
	goto L5201;
L51fe:
	goto L52f9;
L5201:
	;
#asm
l5201:
	db 083h,0fah,000h,07fh,007h,075h,007h,03dh,042h,000h,076h,002h
#endasm
L520d:
	goto L5232;
L520f:
	l12 = 5;
	l10 = 10;
	if (l8 <= 3) goto L5224;
	l8 = 3;
L5224:
	if (l6 <= 3) goto L522f;
	l6 = 3;
L522f:
	goto L52f9;
L5232:
	;
#asm
l5232:
	db 083h,0fah,000h,07fh,007h,075h,007h,03dh,04bh,000h,076h,002h
#endasm
L523e:
	goto L5281;
L5240:
	l14 = 1;
	l12 = 10;
	l10 = 20;
	if (l8 <= 2) goto L525a;
	l8 = 2;
L525a:
	if (l6 <= 2) goto L5265;
	l6 = 2;
L5265:
	l4 = (*(int *)((char *)pc_stamina_max + (432 * p4)) / 100);
	l2 = -7;
	goto L52f9;
L5281:
	if (l18 > 90L) goto L52c6;
	l14 = 2;
	l12 = 20;
	l10 = 40;
	l8 = 1;
	l6 = 1;
	l4 = (*(int *)((char *)pc_stamina_max + (432 * p4)) / 50);
	l2 = -5;
	goto L52f9;
L52c6:
	l14 = 4;
	l12 = 40;
	l10 = 80;
	l8 = 1;
	l6 = 1;
	l4 = (*(int *)((char *)pc_stamina_max + (432 * p4)) / 25);
	l2 = -4;
L52f9:
	rsi = &l14;
	rdi = 21802;
#asm
	db 08ch,0d9h,08eh,0c1h,0b9h,007h,000h,0f3h,0a5h,0b8h,02ah,055h
#endasm
}
