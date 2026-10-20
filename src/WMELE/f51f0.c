extern char g433e[];
extern char g4348[];
extern int group_monster_rec[];
extern int monster_groups[];
extern int view_pos_group[];
/* Apply damage/regeneration to one combatant; return 1 if it died. */
update_combatant(g, i, p8, p10)
{
	int l2;
	char *c;
	int l6;
	int l8;
	int died;
	int l12;
	int l14;
	c = ((char *)monster_groups[g] + (44 * i));
	died = 0;
	if ((unsigned)c[16] <= 0) goto L524f;
	l2 = (int)(((long)*(int *)(c + 8) * 5) / 100L);
	*(int *)(c + 6) = ((random(l2) + *(int *)(c + 6)) + 1);
#asm
	db 08bh,047h,006h,03bh,047h,008h,07eh,006h,08bh,047h,008h,089h,047h,006h
#endasm
L524f:
	if (*(int *)(c + 6) <= 0) {
	*(int *)(c + 6) = 0;
	c[16] = (char)(random(6) + 6);
	}
	l6 = ((p8 - p10) - (unsigned char)c[35]);
	*(int *)(c + 2) += l6;
	if (*(int *)(c + 2) > *(int *)(c + 4)) {
	*(int *)(c + 2) = *(int *)(c + 4);
	}
	if (*(int *)(c + 2) > 0) goto L5353;
	*(int *)(c + 2) = 0;
	*(int *)(c + 6) = 0;
	c[34] = 3;
	died = 1;
	if (!g) goto L5353;
	if (c[42] != -1) {
	l12 = (c[42] / 10);
	l14 = (c[42] % 10);
	g4348[((l12 * 5) + l14)] = 0;
	g433e[((l12 * 5) + l14)] = 0;
	*(int *)((char *)view_pos_group + ((l12 * 10) + (l14 << 1))) = 0;
	c[42] = -1;
	}
	if (!((unsigned char)(*(char **)((char *)group_monster_rec + (g << 1)))[220] & 1)) goto L5353;
	set_bit(13464, (unsigned char)(*(char **)((char *)group_monster_rec + (g << 1)))[218], 1);
L5353:
	l8 = 0;
L5358:
	if (((unsigned)(c + l8)[14] > 0) && ((unsigned char)(c + l8)[14] != 255)) {
	(c + l8)[14]--;
	}
	l8++;
	if (l8 < 10) goto L5358;
	if (!c[19]) {
	c[35] = 0;
	}
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
	if ((unsigned)c[36] > 0) {
	c[36]--;
	}
	if (c[43] == 3) {
	c[43] = 0;
	}
	return died;
}
