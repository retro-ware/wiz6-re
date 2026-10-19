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
/* Draw party member i: name, portrait, condition and HP/stamina gauges. */
draw_member_panel(i)
{
	int state;
	int x;
	int y;
	char x6[80];
	int win;
	int portrait_glyph;
	register int rsi;
	register int rdi;
	win = (!(i % 2) ? g4fba : g4fb8);
	x = 0;
	y = ((i / 2) << 2);
	set_cursor(win, x, y);
	print_string_hi(win, ((432 * i) + 17384), 3);
	for (rsi = strlen(((432 * i) + 17384)); rsi < 7; rsi++) {
	put_char_hi(win, 32, 3);
	}
	portrait_glyph = ((member_portrait[i] * 9) + 72);
	for (rsi = 0; rsi < 3; rsi++) {
	set_cursor(win, x, ((y + rsi) + 1));
	for (rdi = 0; rdi < 3; rdi++) {
	put_char_hi(win, (unsigned char)((((rsi * 3) + portrait_glyph) + rdi)), 2);
	}
	}
	state = g0526[(unsigned char)pc_condition[(432 * i)]];
	state = ((!state) && ((unsigned)g450c[(432 * i)] > 0) ? 1 : state);
	state = ((state < 2) && ((unsigned)g450d[(432 * i)] > 0) ? 2 : state);
	set_cursor(win, (x + 3), (y + 3));
	put_char_hi(win, (unsigned char)((state + 37)), 1);
	state = -1;
	rsi = 0;
L61fa:
	if (((unsigned)g450a[((432 * i) + rsi)] <= 0) || (g0532[rsi] <= state)) goto L621d;
	state = g0532[rsi];
L621d:
	rsi++;
	if (rsi < 10) goto L61fa;
	if (state == -1) goto L6241;
	put_char_hi(win, (unsigned char)((state + 37)), 1);
	goto L6252;
L6241:
	put_char_hi(win, 32, 3);
L6252:
	set_cursor(win, (x + 3), (y + 2));
	for (rsi = 0; rsi < 2; rsi++) {
	put_char_hi(win, (unsigned char)(((((unsigned char)pc_class[(432 * i)] << 1) + rsi) + 58)), 1);
	}
	set_cursor(win, (x + 3), (y + 1));
	rsi = 0;
L62ae:
	if (((unsigned char)pc_equipped[((432 * i) + rsi)] == 255) || (*(int *)((char *)pc_item_id + ((432 * i) + ((unsigned char)pc_equipped[((432 * i) + rsi)] << 3))) <= 0)) goto L62ff;
	put_char_hi(win, (unsigned char)(((unsigned char)pc_item_icon[((432 * i) + ((unsigned char)pc_equipped[((432 * i) + rsi)] << 3))] + 1)), 4);
	goto L6314;
L62ff:
	put_char_hi(win, (unsigned char)((rsi + 37)), 4);
L6314:
	rsi++;
	if (rsi < 2) goto L62ae;
	draw_gauge(win, (x + 5), (y + 1), *(int *)((char *)pc_hp + (432 * i)), *(int *)((char *)pc_hp_max + (432 * i)), 86);
	draw_gauge(win, (x + 6), (y + 1), *(int *)((char *)pc_stamina + (432 * i)), *(int *)((char *)pc_stamina_max + (432 * i)), 99);
}
