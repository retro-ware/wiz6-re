extern char g019d[];
extern int monster_groups[];
f8149(p4, p6, p8, p10, p12, p14, p16)
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	if (p8 <= 0) goto L8169;
	l10 = f80cc(p4, p14, p8);
	goto L816f;
L8169:
	l10 = p8;
L816f:
	if (p10 <= 0) goto L8189;
	l12 = f80cc(p4, p14, p10);
	goto L818f;
L8189:
	l12 = p10;
L818f:
	if ((l10 == p8) && (l12 == p10)) goto L81a7;
	show_combat_msg(3213);
L81a7:
	if (p6 < 0) goto L81de;
	f7ddc(p4, p6, l10, l12, p12, p14, p16);
	if (p4) goto L81db;
	draw_member_card_x(p6, 0);
L81db:
	goto L825b;
L81de:
	l4 = (unsigned char)g019d[monster_groups[p4]];
	l6 = (p6 < 0 ? -p6 : p6);
	if (l6 <= l4) goto L820c;
	l6 = l4;
L820c:
	l8 = random((l4 - l6));
	l2 = l8;
	goto L8250;
L821f:
	f7ddc(p4, l2, l10, l12, p12, p14, p16);
	if (p4) goto L824d;
	draw_member_card_x(l2, 0);
L824d:
	l2++;
L8250:
	if ((l8 + l6) > l2) goto L821f;
L825b:
	;
}
