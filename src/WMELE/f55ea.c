#asm
	extrn place_group_sprites_:near
#endasm
extern char g019d[];
extern int combat_over;
extern int g4368;
extern int g436a;
extern int g436e;
extern int g4370;
extern int monster_group_count;
extern int monster_groups[];
extern int return_cmd;
/* Drop empty monster groups, renumber the rest; end combat when none are left. */
compact_monster_groups()
{
	int g;
	int i;
	int count;
	char x6[6];
	register int rsi;
	register int rdi;
	count = 0;
	g = 1;
	goto L5713;
L55ff:
	update_group(g);
	if ((unsigned)g019d[monster_groups[g]] <= 0) goto L5710;
	count++;
	if (count == g) goto L5672;
	rsi = monster_groups[g];
	rdi = monster_groups[count];
#asm
	db 08ch,0d9h,08eh,0c1h,0b9h,0d0h,000h,0f3h,0a5h,08bh,046h,0feh,0d1h,0e0h,08bh,0d8h
	db 08bh,0b7h,0b6h,043h,08bh,046h,0fah,0d1h,0e0h,08bh,0d8h,08bh,0bfh,0b6h,043h,08ch
	db 0d9h,08eh,0c1h,0b9h,06fh,000h,0f3h,0a5h,0ffh,076h,0fah
	call place_group_sprites_
	db 059h
#endasm
	g019d[monster_groups[g]] = 0;
	goto L5710;
L5672:
	i = 0;
	goto L56f7;
L567a:
	rsi = (44 * i);
	if ((((char *)monster_groups[count] + rsi)[42] != 11) || (g4368)) goto L56b7;
	g436e = 0;
	g4368 = count;
#asm
	db 0c6h,040h,02ah,003h
#endasm
	choose_monster_frames(count, 3);
L56b7:
	rsi = (44 * i);
	if ((((char *)monster_groups[count] + rsi)[42] != 12) || (g436a)) goto L56f4;
	g4370 = 0;
	g436a = count;
#asm
	db 0c6h,040h,02ah,004h
#endasm
	choose_monster_frames(count, 4);
L56f4:
	i++;
L56f7:
	if ((unsigned char)g019d[monster_groups[count]] > i) goto L567a;
L5710:
	g++;
L5713:
	if (g <= monster_group_count) goto L55ff;
	monster_group_count = count;
	if (monster_group_count) goto L573f;
	if (return_cmd != 8) {
	return_cmd = 15;
	}
	combat_over = 1;
L573f:
	load_group_pics();
	check_group_surprise();
}
