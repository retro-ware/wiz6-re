extern char g0092[];
extern char g019d[];
extern char g5043[];
extern int monster_groups[];
extern int view_pos_group[];
pick_target_monster(attacker, group)
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	register int rsi;
	l10 = 1;
	l6 = 0;
	goto L5def;
L5dce:
	rsi = (44 * l6);
#asm
	db 08bh,046h,006h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,080h,078h,02ah,0ffh,074h
	db 005h
#endasm
	l10 = 0;
L5dec:
	l6++;
L5def:
	if ((unsigned char)g019d[monster_groups[group]] > l6) goto L5dce;
	if (l10 != 1) goto L5e61;
	l8 = 0;
L5e10:
	l6 = 0;
	goto L5e49;
L5e17:
	if (!g5043[((group * 9) + l6)]) goto L5e36;
	if (l8 != attacker) goto L5e43;
L5e36:
	g5043[((group * 9) + l6)] = 1;
	return l6;
L5e43:
	l8++;
	l6++;
L5e49:
	if ((unsigned char)g019d[monster_groups[group]] > l6) goto L5e17;
	goto L5e10;
L5e61:
	l8 = 0;
	l10 = 0;
L5e6b:
	if (l10 >= 10) goto L5f74;
	l10++;
	l2 = 0;
L5e7c:
	l4 = 0;
L5e81:
	if (*(int *)((char *)view_pos_group + ((l2 * 10) + ((unsigned char)g0092[((attacker * 5) + l4)] << 1))) != group) goto L5f55;
	l6 = 0;
#asm
	db 0e9h,078h,000h
#endasm
L5ec4:
	;
#asm
l5ec4:
	db 08bh,046h,0feh,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,050h,08bh,046h
	db 004h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,003h,046h,0fch,08bh,0d8h,08ah,087h
	db 092h,000h,02ah,0e4h,08bh,0c8h,058h,003h,0c1h,050h,0b8h,02ch,000h,0f7h,06eh,0fah
	db 08bh,0f0h,08bh,046h,006h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,08ah,040h,02ah
	db 098h,08bh,0c8h,058h,03bh,0c1h,075h,02dh
#endasm
	if (!g5043[((group * 9) + l6)]) goto L5f2b;
	if (l8 != attacker) goto L5f36;
L5f2b:
	g5043[((group * 9) + l6)] = 1;
	return l6;
L5f36:
	l8++;
L5f39:
	l6++;
L5f3c:
	if ((unsigned char)g019d[monster_groups[group]] > l6) goto L5ec4;
L5f55:
	l4++;
	if (l4 < 5) goto L5e81;
	l2++;
	if (l2 < 2) goto L5e7c;
	goto L5e6b;
L5f74:
	play_sound(0);
	goto L5f74;
#asm
	db 0b8h,000h,000h,0e9h,0bah,0feh
#endasm
}
