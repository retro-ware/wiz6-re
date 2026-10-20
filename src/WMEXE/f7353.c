#asm
	extrn set_cursor_:near
	extrn strlen_:near
#endasm
extern char g450a[];
extern char g450c[];
extern char g450d[];
extern char pc_class[];
extern char pc_condition[];
extern char pc_equipped[];
extern char pc_item_icon[];
extern int g0526[];
extern int g0532[];
extern int g4fb8;
extern int g4fba;
extern int member_portrait[];
extern int pc_hp[];
extern int pc_hp_max[];
extern int pc_item_id[];
extern int pc_stamina[];
extern int pc_stamina_max[];
draw_member_card_x(p4, p6)
{
	int l2;
	int l4;
	int l6;
	char x6[80];
	int l88;
	int l90;
	register int rsi;
	register int rdi;
	f5f19(p4);
	l88 = (!(p4 % 2) ? g4fba : g4fb8);
	l4 = 0;
	l6 = ((p4 / 2) << 2);
	set_cursor(l88, l4, l6);
	if (!p6) {
	print_string_hi(l88, ((432 * p4) + 17384), 3);
	} else {
	print_string(l88, ((432 * p4) + 17384), -4);
	}
#asm
l73d1:
	db 0b8h,0b0h,001h,0f7h,06eh,004h,005h,0e8h,043h,050h
	call strlen_
	db 059h,08bh,0f0h,0ebh,012h
#endasm
L73e3:
	put_char_hi(l88, 32, 3);
	rsi++;
L73f5:
	if (rsi < 7) goto L73e3;
	l90 = ((member_portrait[p4] * 9) + 72);
	rsi = 0;
L7416:
	;
#asm
l7416:
	db 08bh,046h,0fah,003h,0c6h,040h,050h,0ffh,076h,0fch,0ffh,076h,0a8h
	call set_cursor_
	db 083h,0c4h,006h,0bfh,000h,000h
#endasm
L742c:
	put_char_hi(l88, (unsigned char)((((rsi * 3) + l90) + rdi)), 2);
	rdi++;
	if (rdi < 3) goto L742c;
	rsi++;
	if (rsi < 3) goto L7416;
	l2 = g0526[(unsigned char)pc_condition[(432 * p4)]];
	l2 = ((!l2) && ((unsigned)g450c[(432 * p4)] > 0) ? 1 : l2);
	l2 = ((l2 < 2) && ((unsigned)g450d[(432 * p4)] > 0) ? 2 : l2);
	set_cursor(l88, (l4 + 3), (l6 + 3));
	put_char_hi(l88, (unsigned char)((l2 + 37)), 1);
	l2 = -1;
	rsi = 0;
L74e2:
	if (((unsigned)g450a[((432 * p4) + rsi)] <= 0) || (g0532[rsi] <= l2)) goto L7505;
	l2 = g0532[rsi];
L7505:
	rsi++;
	if (rsi < 10) goto L74e2;
	if (l2 != -1) {
	put_char_hi(l88, (unsigned char)((l2 + 37)), 1);
	} else {
	put_char_hi(l88, 32, 3);
	}
#asm
l753a:
	db 08bh,046h,0fah,040h,040h,050h,08bh,046h,0fch,040h,040h,040h,050h,0ffh,076h,0a8h
	call set_cursor_
	db 083h,0c4h,006h,0beh,000h,000h
#endasm
L7553:
	put_char_hi(l88, (unsigned char)(((((unsigned char)pc_class[(432 * p4)] << 1) + rsi) + 58)), 1);
	rsi++;
	if (rsi < 2) goto L7553;
#asm
	db 08bh,046h,0fah,040h,050h,08bh,046h,0fch,040h,040h,040h,050h,0ffh,076h,0a8h
	call set_cursor_
	db 083h,0c4h,006h,0beh,000h,000h
#endasm
L7596:
	if (((unsigned char)pc_equipped[((432 * p4) + rsi)] == 255) || (*(int *)((char *)pc_item_id + ((432 * p4) + ((unsigned char)pc_equipped[((432 * p4) + rsi)] << 3))) <= 0)) goto L75e7;
	put_char_hi(l88, (unsigned char)(((unsigned char)pc_item_icon[((432 * p4) + ((unsigned char)pc_equipped[((432 * p4) + rsi)] << 3))] + 1)), 4);
	goto L75fc;
L75e7:
	put_char_hi(l88, (unsigned char)((rsi + 37)), 4);
L75fc:
	rsi++;
	if (rsi < 2) goto L7596;
	draw_gauge_x(l88, (l4 + 5), (l6 + 1), *(int *)((char *)pc_hp + (432 * p4)), *(int *)((char *)pc_hp_max + (432 * p4)), 86);
	draw_gauge_x(l88, (l4 + 6), (l6 + 1), *(int *)((char *)pc_stamina + (432 * p4)), *(int *)((char *)pc_stamina_max + (432 * p4)), 99);
}
