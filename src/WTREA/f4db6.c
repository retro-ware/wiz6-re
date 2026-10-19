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
draw_member_status(member)
{
	int l2;
	int x;
	int y;
	char x6[80];
	int win;
	int l90;
	register int rsi;
	register int rdi;
	win = (!(member % 2) ? g4fba : g4fb8);
	x = 0;
	y = ((member / 2) << 2);
	set_cursor(win, x, y);
	print_string_hi(win, ((432 * member) + 17384), 3);
	for (rsi = strlen(((432 * member) + 17384)); rsi < 7; rsi++) {
	put_char_hi(win, 32, 3);
	}
	l90 = ((member_portrait[member] * 9) + 72);
	for (rsi = 0; rsi < 3; rsi++) {
	set_cursor(win, x, ((y + rsi) + 1));
	for (rdi = 0; rdi < 3; rdi++) {
	put_char_hi(win, (unsigned char)((((rsi * 3) + l90) + rdi)), 2);
	}
	}
	l2 = g0526[(unsigned char)pc_condition[(432 * member)]];
	l2 = ((!l2) && ((unsigned)g450c[(432 * member)] > 0) ? 1 : l2);
	l2 = ((l2 < 2) && ((unsigned)g450d[(432 * member)] > 0) ? 2 : l2);
	set_cursor(win, (x + 3), (y + 3));
	put_char_hi(win, (unsigned char)((l2 + 37)), 1);
	l2 = -1;
	rsi = 0;
L4f1f:
	if (((unsigned)g450a[((432 * member) + rsi)] <= 0) || (g0532[rsi] <= l2)) goto L4f42;
	l2 = g0532[rsi];
L4f42:
	rsi++;
	if (rsi < 10) goto L4f1f;
	if (l2 == -1) goto L4f66;
	put_char_hi(win, (unsigned char)((l2 + 37)), 1);
	goto L4f77;
L4f66:
	put_char_hi(win, 32, 3);
L4f77:
	set_cursor(win, (x + 3), (y + 2));
	for (rsi = 0; rsi < 2; rsi++) {
	put_char_hi(win, (unsigned char)(((((unsigned char)pc_class[(432 * member)] << 1) + rsi) + 58)), 1);
	}
	set_cursor(win, (x + 3), (y + 1));
	rsi = 0;
L4fd3:
	if (((unsigned char)pc_equipped[((432 * member) + rsi)] == 255) || (*(int *)((char *)pc_item_id + ((432 * member) + ((unsigned char)pc_equipped[((432 * member) + rsi)] << 3))) <= 0)) goto L5024;
	put_char_hi(win, (unsigned char)(((unsigned char)pc_item_icon[((432 * member) + ((unsigned char)pc_equipped[((432 * member) + rsi)] << 3))] + 1)), 4);
	goto L5039;
L5024:
	put_char_hi(win, (unsigned char)((rsi + 37)), 4);
L5039:
	rsi++;
	if (rsi < 2) goto L4fd3;
	draw_vital_bar(win, (x + 5), (y + 1), *(int *)((char *)pc_hp + (432 * member)), *(int *)((char *)pc_hp_max + (432 * member)), 86);
	draw_vital_bar(win, (x + 6), (y + 1), *(int *)((char *)pc_stamina + (432 * member)), *(int *)((char *)pc_stamina_max + (432 * member)), 99);
}
