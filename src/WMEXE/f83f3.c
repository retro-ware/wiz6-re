extern char g019d[];
extern int g500a;
extern int monster_groups[];
f83f3(p4, p6, p8, p10, p12, p14, p16, p18, p20, p22, p24, p26, p28, p30, p32)
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	int l14;
	int l16;
	g500a = 4;
	if (p16 <= 0) goto L8419;
	l10 = f80cc(p4, p10, p16);
	goto L841f;
L8419:
	l10 = p16;
L841f:
	if (p18 <= 0) goto L8439;
	l12 = f80cc(p4, p10, p18);
	goto L843f;
L8439:
	l12 = p18;
L843f:
	if (p24 <= 0) goto L8459;
	l14 = f80cc(p4, p10, p24);
	goto L845f;
L8459:
	l14 = p24;
L845f:
	if (p26 <= 0) goto L8479;
	l16 = f80cc(p4, p10, p26);
	goto L847f;
L8479:
	l16 = p26;
L847f:
	if (l10 != p16) goto L849f;
	if (l12 != p18) goto L849f;
	if (l14 != p24) goto L849f;
	if (l16 == p26) goto L84a7;
L849f:
	show_combat_msg(3213);
L84a7:
	if (p6 < 0) goto L853d;
	if (f7ddc(p4, p6, l10, l12, p12, p10, p14) <= 0) goto L8527;
	if (p22 != 1) goto L84fe;
	do_damage_effect(p4, p6, p8, p10, p20, p14, p30, p32, 3408, 0);
	goto L8527;
L84fe:
	do_status_effect(p4, p6, p8, p10, p20, p14, l14, l16, p28, 3408, 0);
L8527:
	if (p4) goto L853a;
	draw_member_card_x(p6, 0);
L853a:
	goto L861a;
L853d:
	l4 = (unsigned char)g019d[monster_groups[p4]];
#asm
	db 08bh,046h,006h,050h,03dh,000h,000h,058h,07dh,002h,0f7h,0d8h
#endasm
L855d:
	;
#asm
l855d:
	db 089h,046h,0fah,03bh,046h,0fch,07eh,006h,08bh,046h,0fch,089h,046h,0fah
#endasm
L856b:
	l8 = random((l4 - l6));
	l2 = l8;
	goto L860c;
L857f:
	if (f7ddc(p4, l2, l10, l12, p12, p10, p14) <= 0) goto L85f6;
	if (p22 != 1) goto L85cd;
	do_damage_effect(p4, l2, p8, p10, p20, p14, p30, p32, 3408, 0);
	goto L85f6;
L85cd:
	do_status_effect(p4, l2, p8, p10, p20, p14, l14, l16, p28, 3408, 0);
L85f6:
	if (p4) goto L8609;
	draw_member_card_x(l2, 0);
L8609:
	l2++;
L860c:
	if ((l8 + l6) > l2) goto L857f;
L861a:
	;
}
