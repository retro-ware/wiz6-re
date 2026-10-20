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
draw_member_status_m(p4)
{
	int l2;
	int l4;
	int l6;
	char x6[80];
	int l88;
	int l90;
	register int rsi;
	register int rdi;
	l88 = (!(p4 % 2) ? g4fba : g4fb8);
	l4 = 0;
	l6 = ((p4 / 2) << 2);
	set_cursor(l88, l4, l6);
	print_string_hi(l88, ((432 * p4) + 17384), 3);
	for (rsi = strlen(((432 * p4) + 17384)); rsi < 7; rsi++) {
	put_char_hi(l88, 32, 3);
	}
	l90 = ((member_portrait[p4] * 9) + 72);
	for (rsi = 0; rsi < 3; rsi++) {
	set_cursor(l88, l4, ((l6 + rsi) + 1));
	for (rdi = 0; rdi < 3; rdi++) {
	put_char_hi(l88, (unsigned char)((((rsi * 3) + l90) + rdi)), 2);
	}
	}
	l2 = g0526[(unsigned char)pc_condition[(432 * p4)]];
	l2 = ((!l2) && ((unsigned)g450c[(432 * p4)] > 0) ? 1 : l2);
	l2 = ((l2 < 2) && ((unsigned)g450d[(432 * p4)] > 0) ? 2 : l2);
	set_cursor(l88, (l4 + 3), (l6 + 3));
	put_char_hi(l88, (unsigned char)((l2 + 37)), 1);
	l2 = -1;
	rsi = 0;
L4d11:
	if (((unsigned)g450a[((432 * p4) + rsi)] > 0) && (g0532[rsi] > l2)) {
	l2 = g0532[rsi];
	}
	rsi++;
	if (rsi < 10) goto L4d11;
	if (l2 != -1) {
	put_char_hi(l88, (unsigned char)((l2 + 37)), 1);
	} else {
	put_char_hi(l88, 32, 3);
	}
	set_cursor(l88, (l4 + 3), (l6 + 2));
	for (rsi = 0; rsi < 2; rsi++) {
	put_char_hi(l88, (unsigned char)(((((unsigned char)pc_class[(432 * p4)] << 1) + rsi) + 58)), 1);
	}
	set_cursor(l88, (l4 + 3), (l6 + 1));
	rsi = 0;
L4dc5:
	if (((unsigned char)pc_equipped[((432 * p4) + rsi)] != 255) && (*(int *)((char *)pc_item_id + ((432 * p4) + ((unsigned char)pc_equipped[((432 * p4) + rsi)] << 3))) > 0)) {
	put_char_hi(l88, (unsigned char)(((unsigned char)pc_item_icon[((432 * p4) + ((unsigned char)pc_equipped[((432 * p4) + rsi)] << 3))] + 1)), 4);
	} else {
	put_char_hi(l88, (unsigned char)((rsi + 37)), 4);
	}
	rsi++;
	if (rsi < 2) goto L4dc5;
	draw_vital_bar_m(l88, (l4 + 5), (l6 + 1), *(int *)((char *)pc_hp + (432 * p4)), *(int *)((char *)pc_hp_max + (432 * p4)), 86);
	draw_vital_bar_m(l88, (l4 + 6), (l6 + 1), *(int *)((char *)pc_stamina + (432 * p4)), *(int *)((char *)pc_stamina_max + (432 * p4)), 99);
}
