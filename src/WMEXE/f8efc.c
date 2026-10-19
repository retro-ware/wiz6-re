extern int g435c;
extern int g435e;
extern int g50fc;
extern int monster_groups[];
extern int view_pos_group[];
extern int view_rows_open;
f8efc(p4, p6, p8, p10)
{
	int l2;
	register int rsi;
	register int rdi;
	if (g50fc != 1) goto L8f11;
	return;
L8f11:
	if (!p4) goto L8f1f;
#asm
	db 08bh,046h,004h,03dh,006h,000h,075h,03bh
#endasm
L8f1f:
	rdi = (44 * g435c);
	if (((char *)monster_groups[g435e] + rdi)[42] != -1) goto L8f4b;
	l2 = (g435e == 1 ? 0 : 1);
	goto L8f58;
L8f4b:
	l2 = (((char *)monster_groups[g435e] + rdi)[42] / 10);
L8f58:
	goto L8f7c;
L8f5a:
	l2 = 1;
	rsi = 0;
L8f62:
	if (view_pos_group[rsi] != p4) goto L8f76;
	l2 = 0;
L8f76:
	rsi++;
	if (rsi < 5) goto L8f62;
L8f7c:
	if (view_rows_open) goto L8f88;
	l2 = 0;
L8f88:
	play_spell_animation(g435e, g435c, p8, l2, p4, p6, p10);
	return;
}
