#asm
	extrn f4858_:near
	extrn load_sound_mele_:near
	extrn random_:near
	extrn roll_dice_:near
#endasm
extern char cfg_level;
extern char g019a[];
extern char g019d[];
extern int cur_sound;
extern int g4338;
extern int game_state_arg;
extern int group_monster_rec[];
extern int monster_group_count;
extern int monster_groups[];
/* Read monster record mon into group n, roll its members and maybe chain a companion group. */
generate_monster_group(mon, n)
{
	int i;
	int l4;
	register int rsi;
	register int rdi;
	monster_group_count++;
	access_scenario_record(4, group_monster_rec[n], mon, 0);
	g019a[monster_groups[n]] = *(char *)&mon;
#asm
	db 08bh,046h,006h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08ah,087h,0d1h,000h,02ah
	db 0e4h,050h
	call f4858_
	db 059h,08bh,04eh,006h,0d1h,0e1h,08bh,0d9h,08bh,09fh,0a8h,043h,088h,087h,09bh,001h
#endasm
	if (n != 1) goto L49ef;
#asm
	db 08bh,046h,006h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,080h,0bfh,0d2h,000h,000h
	db 076h,00dh,08ah,087h,0d2h,000h,02ah,0e4h,050h
	call load_sound_mele_
	db 059h
#endasm
	goto L49ef;
L49e9:
	cur_sound = -1;
L49ef:
	switch ((unsigned char)cfg_level) {
case 1:
	if (*(int *)((*(char **)((char *)group_monster_rec + (n << 1))) + 116) <= 0) goto L4a0a;
	(*(int *)((*(char **)((char *)group_monster_rec + (n << 1))) + 116))--;
L4a0a:
	goto L4a26;
case 2:
	(*(int *)((*(char **)((char *)group_monster_rec + (n << 1))) + 116))++;
	goto L4a26;
	}
L4a26:
	;
#asm
l4a26:
	db 08bh,046h,006h,0d1h,0e0h,08bh,0d8h,08bh,08fh,0b6h,043h,083h,0c1h,074h,083h,0ech
	db 004h,08bh,0c4h,08ch,0d2h,08eh,0c2h,08bh,0f1h,08bh,0f8h,0a5h,0a5h
	call roll_dice_
	db 083h,0c4h,004h,08bh,04eh,006h,0d1h,0e1h,08bh,0d9h,08bh,09fh,0a8h,043h,088h,087h
	db 09dh,001h
#endasm
	if ((unsigned)g019d[monster_groups[n]] >= 1) goto L4a6f;
	g019d[monster_groups[n]] = 1;
L4a6f:
	;
#asm
l4a6f:
	db 08bh,046h,006h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,080h,0bfh,09dh,001h,009h
	db 076h,005h,0c6h,087h,09dh,001h,009h
#endasm
L4a86:
	;
#asm
l4a86:
	db 08bh,046h,006h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,0c6h,087h,09ch,001h,001h
#endasm
	i = 0;
L4a9b:
	;
#asm
l4a9b:
	db 08bh,046h,006h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08bh,076h,0feh,0c6h,080h
	db 08ch,001h,000h
#endasm
	i++;
	if (i < 6) goto L4a9b;
	i = 0;
L4abe:
	;
#asm
l4abe:
	db 08bh,046h,006h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08bh,076h,0feh,0c6h,080h
	db 092h,001h,000h
#endasm
	i++;
	if (i < 4) goto L4abe;
	if (cfg_level != 2) goto L4af1;
	(*(char **)((char *)group_monster_rec + (n << 1)))[122]++;
L4af1:
	i = 0;
	goto L4c85;
L4af9:
	;
#asm
l4af9:
	db 08bh,046h,006h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08ah,047h,07ah,02ah,0e4h
	db 050h,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,08bh,046h,006h,0d1h,0e0h,08bh,0d8h
	db 08bh,09fh,0a8h,043h,058h,089h,000h,08bh,046h,006h,0d1h,0e0h,08bh,0d8h,08bh,08fh
	db 0b6h,043h,083h,0c1h,078h,083h,0ech,004h,08bh,0c4h,08ch,0d2h,08eh,0c2h,08bh,0f1h
	db 08bh,0f8h,0a5h,0a5h
	call roll_dice_
	db 083h,0c4h,004h,050h,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,08bh,046h,006h,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,089h,040h,004h
#endasm
	rsi = (44 * i);
	*(int *)(((char *)monster_groups[n] + rsi) + 2) = *(int *)(((char *)monster_groups[n] + rsi) + 4);
#asm
	db 08bh,046h,006h,0d1h,0e0h,08bh,0d8h,08bh,08fh,0b6h,043h,083h,0c1h,07ch,083h,0ech
	db 004h,08bh,0c4h,08ch,0d2h,08eh,0c2h,08bh,0f1h,08bh,0f8h,0a5h,0a5h
	call roll_dice_
	db 083h,0c4h,004h,050h,0b8h,02ch,000h,0f7h,06eh,0feh,08bh,0f0h,08bh,046h,006h,0d1h
	db 0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,058h,089h,040h,008h
#endasm
	rsi = (44 * i);
	*(int *)(((char *)monster_groups[n] + rsi) + 6) = *(int *)(((char *)monster_groups[n] + rsi) + 8);
	rsi = (44 * i);
	((char *)monster_groups[n] + rsi)[42] = -1;
	switch ((unsigned char)cfg_level) {
case 1:
	rsi = (44 * i);
	((char *)monster_groups[n] + rsi)[38] = 2;
	rsi = (44 * i);
	((char *)monster_groups[n] + rsi)[39] = 2;
	rsi = (44 * i);
	((char *)monster_groups[n] + rsi)[41] = -5;
	goto L4c82;
case 2:
	rsi = (44 * i);
	((char *)monster_groups[n] + rsi)[38] = -2;
	rsi = (44 * i);
	((char *)monster_groups[n] + rsi)[39] = -2;
	rsi = (44 * i);
	((char *)monster_groups[n] + rsi)[41] = 5;
	goto L4c82;
	}
L4c82:
	i++;
L4c85:
	if ((unsigned char)g019d[monster_groups[n]] > i) goto L4af9;
	i = (((game_state_arg + 1) / 2) + 1);
	if (g4338 <= 0) goto L4cb6;
	i++;
L4cb6:
	i = (i < 5 ? i : 5);
	l4 = (cfg_level != 1 ? (cfg_level == 2 ? 75 : 100) : 150);
#asm
	db 08bh,046h,006h,03bh,046h,0feh,07dh,06eh
#endasm
	i = 0;
	mon = -1;
L4cf1:
	;
#asm
l4cf1:
	db 08bh,046h,006h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08bh,076h,0feh,080h,0b8h
	db 0a6h,000h,000h,076h,02ch,0ffh,076h,0fch
	call random_
	db 059h,050h,08bh,046h,006h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0b6h,043h,08bh,076h,0feh
	db 08ah,080h,0a6h,000h,02ah,0e4h,08bh,0c8h,058h,03bh,0c1h,07dh,009h,08ah,080h,0a4h
	db 000h,02ah,0e4h,089h,046h,004h
#endasm
L4d32:
	i++;
#asm
	db 083h,07eh,0feh,002h,07dh,006h
#endasm
	if (mon == -1) goto L4cf1;
L4d41:
	if (mon == -1) goto L4d55;
	generate_monster_group(mon, (n + 1));
L4d55:
	;
}
