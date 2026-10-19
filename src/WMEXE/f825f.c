extern char g019d[];
extern int g500a;
extern int monster_groups[];
f825f(p4, p6, p8, p10, p12, p14, p16, p18, p20, p22, p24, p26)
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	g500a = 2;
	if (p18 <= 0) goto L8285;
	l10 = f80cc(p4, p10, p18);
	goto L828b;
L8285:
	l10 = p18;
L828b:
	if (p20 <= 0) goto L82a5;
	l12 = f80cc(p4, p10, p20);
	goto L82ab;
L82a5:
	l12 = p20;
L82ab:
	if (l10 != p18) goto L82bb;
	if (l12 == p20) goto L82c3;
L82bb:
	show_combat_msg(3213);
L82c3:
	if (p6 < 0) goto L8336;
	if (p16 != 1) goto L82f7;
	do_damage_effect(p4, p6, p8, p10, p12, p14, p24, p26, 3402, 1);
	goto L8320;
L82f7:
	do_status_effect(p4, p6, p8, p10, p12, p14, l10, l12, p22, 3402, 1);
L8320:
	if (p4) goto L8333;
	draw_member_card_x(p6, 0);
L8333:
	goto L83ef;
L8336:
	l4 = (unsigned char)g019d[monster_groups[p4]];
#asm
	db 08bh,046h,006h,050h,03dh,000h,000h,058h,07dh,002h,0f7h,0d8h
#endasm
L8356:
	;
#asm
l8356:
	db 089h,046h,0fah,03bh,046h,0fch,07eh,006h,08bh,046h,0fch,089h,046h,0fah
#endasm
L8364:
	l8 = random((l4 - l6));
	l2 = l8;
	goto L83e4;
L8377:
	if (p16 != 1) goto L83a5;
	do_damage_effect(p4, l2, p8, p10, p12, p14, p24, p26, 3402, 1);
	goto L83ce;
L83a5:
	do_status_effect(p4, l2, p8, p10, p12, p14, l10, l12, p22, 3402, 1);
L83ce:
	if (p4) goto L83e1;
	draw_member_card_x(l2, 0);
L83e1:
	l2++;
L83e4:
	if ((l8 + l6) > l2) goto L8377;
L83ef:
	;
}
