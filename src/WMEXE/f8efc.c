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
	if ((p4) && (p4 != 6)) goto L8f5a;
	if (((rdi = (44 * g435c), (*(char **)((char *)monster_groups + (g435e << 1)))) + rdi)[42] != -1) goto L8f4b;
	l2 = (g435e == 1 ? 0 : 1);
	goto L8f58;
L8f4b:
	;
#asm
l8f4b:
	db 08ah,041h,02ah,098h,0b9h,00ah,000h,099h,0f7h,0f9h,089h,046h,0feh
#endasm
L8f58:
	goto L8f7c;
L8f5a:
	l2 = 1;
	rsi = 0;
L8f62:
	if (view_pos_group[rsi] == p4) {
	l2 = 0;
	}
	rsi++;
	if (rsi < 5) goto L8f62;
L8f7c:
	if (!view_rows_open) {
	l2 = 0;
	}
	play_spell_animation(g435e, g435c, p8, l2, p4, p6, p10);
	return;
}
