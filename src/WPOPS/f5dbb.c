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
	l10 = 1;
	l6 = 0;
	goto L5def;
L5dce:
	;
#asm
l5dce:
	db 0b8h,02ch,000h,0f7h,06eh,0fah,08bh,0f0h,08bh,046h,006h,0d1h,0e0h,08bh,0d8h,08bh
	db 09fh,0a8h,043h,080h,078h,02ah,0ffh,074h,005h
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
	goto L5f3c;
L5ec4:
	if (((l2 * 10) + (unsigned char)g0092[((attacker * 5) + l4)]) != ((char *)monster_groups[group] + (44 * l6))[42]) goto L5f39;
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
