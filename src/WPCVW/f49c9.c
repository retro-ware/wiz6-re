extern char g450a[];
extern char g450c[];
extern char g450d[];
extern char pc_class[];
extern char pc_condition[];
extern char pc_equipped[];
extern char pc_item_icon[];
extern int g0526[];
extern int g0532[];
extern int member_portrait[];
extern int pc_hp[];
extern int pc_hp_max[];
extern int pc_item_id[];
extern int pc_stamina[];
extern int pc_stamina_max[];
/* Draw a party member's small card: name, portrait, status icons, HP and stamina gauges. */
draw_member_card(win, member)
{
	int l2;
	int l4;
	int l6;
	char x6[80];
	int l88;
	register int i;
	register int rdi;
	l4 = (((member % 2) * 9) + 2);
	l6 = (((member / 2) << 2) + 2);
	set_cursor(win, l4, l6);
	print_string_hi(win, ((432 * member) + 17384), 3);
	i = strlen(((432 * member) + 17384));
	goto L4a43;
L4a31:
	put_char_hi(win, 32, 3);
	i++;
L4a43:
	if (i < 7) goto L4a31;
	l88 = ((member_portrait[member] * 9) + 72);
	i = 0;
L4a64:
	set_cursor(win, l4, ((l6 + i) + 1));
	rdi = 0;
L4a7a:
	put_char_hi(win, (unsigned char)((((i * 3) + l88) + rdi)), 2);
	rdi++;
	if (rdi < 3) goto L4a7a;
	i++;
	if (i < 3) goto L4a64;
	l2 = g0526[(unsigned char)pc_condition[(432 * member)]];
	l2 = ((!l2) && ((unsigned)g450c[(432 * member)] > 0) ? 1 : l2);
	l2 = ((l2 < 2) && ((unsigned)g450d[(432 * member)] > 0) ? 2 : l2);
	set_cursor(win, (l4 + 3), (l6 + 3));
	put_char_hi(win, (unsigned char)((l2 + 37)), 1);
	l2 = -1;
	i = 0;
L4b30:
	if ((unsigned)g450a[((432 * member) + i)] <= 0) goto L4b53;
	if (g0532[i] <= l2) goto L4b53;
	l2 = g0532[i];
L4b53:
	i++;
	if (i < 10) goto L4b30;
	if (l2 == -1) goto L4b77;
	put_char_hi(win, (unsigned char)((l2 + 37)), 1);
	goto L4b88;
L4b77:
	put_char_hi(win, 32, 3);
L4b88:
	set_cursor(win, (l4 + 3), (l6 + 2));
	i = 0;
L4ba1:
	put_char_hi(win, (unsigned char)(((((unsigned char)pc_class[(432 * member)] << 1) + i) + 58)), 1);
	i++;
	if (i < 2) goto L4ba1;
	set_cursor(win, (l4 + 3), (l6 + 1));
	i = 0;
L4be4:
	if ((unsigned char)pc_equipped[((432 * member) + i)] == 255) goto L4c35;
	if (*(int *)((char *)pc_item_id + ((432 * member) + ((unsigned char)pc_equipped[((432 * member) + i)] << 3))) <= 0) goto L4c35;
	put_char_hi(win, (unsigned char)(((unsigned char)pc_item_icon[((432 * member) + ((unsigned char)pc_equipped[((432 * member) + i)] << 3))] + 1)), 4);
	goto L4c4a;
L4c35:
	put_char_hi(win, (unsigned char)((i + 37)), 4);
L4c4a:
	i++;
	if (i < 2) goto L4be4;
	draw_gauge(win, (l4 + 5), (l6 + 1), *(int *)((char *)pc_hp + (432 * member)), *(int *)((char *)pc_hp_max + (432 * member)), 86);
	draw_gauge(win, (l4 + 6), (l6 + 1), *(int *)((char *)pc_stamina + (432 * member)), *(int *)((char *)pc_stamina_max + (432 * member)), 99);
}
