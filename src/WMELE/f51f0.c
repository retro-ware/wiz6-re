#asm
	extrn $ldv:near
	extrn random_:near
#endasm
extern char g433e[];
extern char g4348[];
extern int group_monster_rec[];
extern int view_pos_group[];
/* Apply damage/regeneration to one combatant; return 1 if it died. */
update_combatant(g, i, p8, p10)
{
	char x0[2];
	char *c;
	int l6;
	int l8;
	int died;
	int l12;
	int l14;
#asm
	db 0b8h,02ch,000h,0f7h,06eh,006h,08bh,0c8h,08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh
	db 087h,0a8h,043h,003h,0c1h,089h,046h,0fch
#endasm
	died = 0;
#asm
	db 08bh,0d8h,080h,07fh,010h,000h,076h,033h,08bh,047h,008h,0bbh,005h,000h,0f7h,0ebh
	db 0b9h,064h,000h,0bbh,000h,000h
	call $ldv
	db 089h,046h,0feh,050h
	call random_
	db 059h,08bh,05eh,0fch,08bh,04fh,006h,003h,0c1h,040h,089h,047h,006h,08bh,047h,006h
	db 03bh,047h,008h,07eh,006h,08bh,047h,008h,089h,047h,006h
#endasm
L524f:
	if (*(int *)(c + 6) > 0) goto L526e;
	*(int *)(c + 6) = 0;
	c[16] = (char)(random(6) + 6);
L526e:
	l6 = ((p8 - p10) - (unsigned char)c[35]);
	*(int *)(c + 2) += l6;
	if (*(int *)(c + 2) <= *(int *)(c + 4)) goto L529b;
	*(int *)(c + 2) = *(int *)(c + 4);
L529b:
	if (*(int *)(c + 2) > 0) goto L5353;
	*(int *)(c + 2) = 0;
	*(int *)(c + 6) = 0;
	c[34] = 3;
	died = 1;
	if (!g) goto L5353;
	if (c[42] == -1) goto L5328;
	l12 = (c[42] / 10);
	l14 = (c[42] % 10);
	g4348[((l12 * 5) + l14)] = 0;
	g433e[((l12 * 5) + l14)] = 0;
	*(int *)((char *)view_pos_group + ((l12 * 10) + (l14 << 1))) = 0;
	c[42] = 255;
L5328:
	if (!((unsigned char)(*(char **)((char *)group_monster_rec + (g << 1)))[220] & 1)) goto L5353;
	set_bit(13464, (unsigned char)(*(char **)((char *)group_monster_rec + (g << 1)))[218], 1);
L5353:
	l8 = 0;
L5358:
	if (((unsigned)(c + l8)[14] <= 0) || ((unsigned char)(c + l8)[14] == 255)) goto L5371;
	(c + l8)[14]--;
L5371:
	l8++;
	if (l8 < 10) goto L5358;
	if (c[19]) goto L5389;
	c[35] = 0;
L5389:
	if ((l8 = c[41]) >= 0) goto L539b;
#asm
	db 040h,0ebh,00bh
#endasm
L539b:
	;
#asm
l539b:
	db 08bh,046h,0f8h,050h,03dh,000h,000h,058h,07eh,001h,048h
#endasm
L53a6:
	;
#asm
l53a6:
	db 088h,047h,029h
#endasm
	if ((unsigned)c[36] <= 0) goto L53b5;
	c[36]--;
L53b5:
	if (c[43] != 3) goto L53c2;
	c[43] = 0;
L53c2:
	return died;
}
