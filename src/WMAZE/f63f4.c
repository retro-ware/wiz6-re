#asm
	extrn $ldv:near
#endasm
extern char cfg_level;
extern char g450c[];
extern char g458c[];
extern char g458e[];
extern char g458f[];
extern int g5038;
extern int game_state;
extern int party_count;
extern long g4f78;
extern long g4f7c;
extern long g4f80;
/* Rest the party, regenerating hp and stamina; returns 1 if interrupted by an encounter. */
rest_party()
{
	int l2;
	char x2[4];
	int l8;
	int l10;
	int l12;
	int l14;
	show_maze_message(2036);
	g5038 = 0;
	l8 = 8;
	*(int *)&g4f78 += (int)(g4f80 - g4f7c);
#asm
	db 011h,016h,07ah,04fh,0a1h,078h,04fh,08bh,016h,07ah,04fh,0b9h,03ch,000h,0bbh,000h
	db 000h
	call $ldv
	db 089h,046h,0f6h
#endasm
	l12 = 0;
L643c:
	if (l10 < 4) goto L6456;
	l12++;
	l10 += -4;
	g4f78 += -240L;
	goto L643c;
L6456:
	;
#asm
l6456:
	db 0a1h,080h,04fh,08bh,016h,082h,04fh,089h,016h,07eh,04fh,0a3h,07ch,04fh
#endasm
L6464:
	if (((l8 <= 0) || (g5038)) || (game_state != 5)) goto L658a;
	l2 = 0;
	goto L649f;
L6488:
	g450c[(432 * l2)] = 10;
	draw_member_status_m(l2);
	l2++;
L649f:
	if (l2 < party_count) goto L6488;
	wait_animating_m(10);
	l8--;
	g4f80 += 60L;
	tick_effect_timers(60);
	l2 = 0;
	goto L6521;
L64cc:
	heal_member(l2, (l12 > 0 ? ((unsigned char)g458e[(432 * l2)] + 1) : 0), (unsigned char)g458f[(432 * l2)], 6, 1);
	g450c[(432 * l2)] = (char)random(5);
	if ((unsigned)g458c[(432 * l2)] <= 0) goto L651e;
	g458c[(432 * l2)]--;
L651e:
	l2++;
L6521:
	if (l2 < party_count) goto L64cc;
	l12--;
	g450c[(random(party_count) * 432)] = 0;
	l14 = (cfg_level == 1 ? 990 : 975);
	if (random(1000) < l14) goto L6569;
	return 1;
L6569:
	if ((!key_available(1)) || ((char)get_key(1) != 13)) goto L6587;
	g5038 = 1;
L6587:
	goto L6464;
L658a:
	l2 = 0;
	goto L65db;
L6591:
	;
#asm
l6591:
	db 0b8h,0b0h,001h,0f7h,06eh,0feh,08bh,0d8h,08bh,087h,004h,044h,099h,052h,050h,08bh
	db 087h,006h,044h,0bbh,003h,000h,0f7h,0ebh,0b9h,004h,000h,0bbh,000h,000h
	call $ldv
	db 08bh,0c8h,08bh,0dah,058h,05ah,03bh,0d3h,07ch,006h,075h,006h,03bh,0c1h,077h,002h
#endasm
L65c2:
	goto L65d1;
L65c4:
	g450c[(432 * l2)] = 0;
L65d1:
	draw_member_status_m(l2);
	l2++;
L65db:
	if (l2 < party_count) goto L6591;
	return 0;
}
