extern char g00b0[];
extern char g019b[];
extern char g36e4[];
extern char g3717[];
extern char g3759[];
extern char g37fa[];
extern char g37fb[];
extern char g3810[];
extern char g3813[];
extern char g3814[];
extern char g3815[];
extern char g433e[];
extern char g4348[];
extern int monster_groups[];
extern int view_pos_group[];
extern int view_rows_open;
/* Queue the sprite of the monster at view row, col. */
queue_monster_sprite(row, col, dx)
{
	int g;
	int pic;
	int l6;
	int l8;
	int l10;
	char chars[12];
	int l24;
	int l26;
	int l28;
	int l30;
	chars[0] = 0;
	if ((g = *(int *)((char *)view_pos_group + ((row * 10) + (col << 1)))) < 1) goto L66f9;
	if (g > 3) goto L66f9;
	if (row <= view_rows_open) goto L66fd;
L66f9:
	return;
L66fd:
	pic = (unsigned char)g019b[monster_groups[g]];
	l8 = 72;
	l10 = 248;
	if (row) goto L6733;
	get_monster_anim_chars(g, col, chars);
	goto L6746;
L6733:
	chars[0] = g3810[(314 * pic)];
	chars[(0 + 1)] = 0;
L6746:
	if (chars[0]) goto L674e;
	return;
L674e:
	l6 = (col % 2);
	if (random(10) != 9) goto L67bd;
	g4348[((row * 5) + col)] = (char)random((unsigned char)g3814[(314 * pic)]);
	g433e[((row * 5) + col)] = (char)random((unsigned char)g3815[(314 * pic)]);
L67bd:
	l24 = (unsigned char)chars[0];
	l28 = (unsigned char)g36e4[(((314 * pic) + (l6 % 2)) + (l24 << 1))];
	if (!g3813[(314 * pic)]) goto L6800;
	dx = 0;
L6800:
	l26 = (unsigned char)g3759[((314 * pic) + (l24 << 2))];
	if (l26) goto L6836;
	l26 = ((unsigned char)g00b0[((row * 5) + col)] - g);
L6836:
	if ((l30 = (((g37fa[(((314 * pic) + (row * 10)) + (col << 1))] + (unsigned char)g4348[((row * 5) + col)]) + dx) + l28)) >= 0) goto L688e;
	l30 = 0;
	goto L6899;
L688e:
	if (l30 >= l10) goto L66f9;
L6899:
	add_view_sprite(l26, pic, l30, ((g37fb[(((314 * pic) + (row * 10)) + (col << 1))] + (unsigned char)g433e[((row * 5) + col)]) + (unsigned char)g3717[((314 * pic) + l24)]), l8, l10, l6, chars);
	return;
}
