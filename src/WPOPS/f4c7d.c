extern char g00b0[];
extern char g019b[];
extern char g36e4[];
extern char g3717[];
extern char g3759[];
extern char g37fa[];
extern char g37fb[];
extern char g3810[];
extern char g3814[];
extern char g3815[];
extern char g433e[];
extern char g4348[];
extern int monster_groups[];
extern int view_pos_group[];
extern int view_rows_open;
queue_monster_sprite(row, col)
{
	int group;
	int l4;
	int l6;
	int l8;
	int l10;
	char frames[12];
	int l24;
	int l26;
	int l28;
	int l30;
	frames[0] = 0;
	group = *(int *)((char *)view_pos_group + ((row * 10) + (col << 1)));
	if (!group) goto L4cb3;
	if (row <= view_rows_open) goto L4cb7;
L4cb3:
	return;
L4cb7:
	l4 = (unsigned char)g019b[monster_groups[group]];
	l8 = 72;
	l10 = 248;
	if (!row) {
	build_monster_anim_frames(group, col, frames);
	} else {
	frames[0] = g3810[(314 * l4)];
	frames[(0 + 1)] = 0;
	}
	if (frames[0]) goto L4d08;
	return;
L4d08:
	l6 = (col % 2);
	if (random(10) == 9) {
	g4348[((row * 5) + col)] = (char)random((unsigned char)g3814[(314 * l4)]);
	g433e[((row * 5) + col)] = (char)random((unsigned char)g3815[(314 * l4)]);
	}
	l24 = (unsigned char)frames[0];
	l28 = (unsigned char)g36e4[(((314 * l4) + (l6 % 2)) + (l24 << 1))];
	l26 = (unsigned char)g3759[((314 * l4) + (l24 << 2))];
	if (!l26) {
	l26 = ((unsigned char)g00b0[((row * 5) + col)] - group);
	}
	if ((l30 = ((g37fa[(((314 * l4) + (row * 10)) + (col << 1))] + (unsigned char)g4348[((row * 5) + col)]) + l28)) >= 0) goto L4e37;
	l30 = 0;
	goto L4e42;
L4e37:
	if (l30 >= l10) goto L4cb3;
L4e42:
	insert_sprite(l26, l4, l30, ((g37fb[(((314 * l4) + (row * 10)) + (col << 1))] + (unsigned char)g433e[((row * 5) + col)]) + (unsigned char)g3717[((314 * l4) + l24)]), l8, l10, l6, frames);
	return;
}
