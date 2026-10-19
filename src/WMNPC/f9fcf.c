extern char g00cc[];
extern char g56d0[];
extern char g572a[];
extern char pc_class[];
extern char pc_race[];
extern char pc_sex[];
extern int class_allowed[];
extern int g54b2;
extern int g54b4[];
extern int g56ee[];
extern int g57de[];
f9fcf(p4, p6, p8, p10)
char *p4;
{
	int l2;
	int l4;
	f88c7(p4, 0);
	defer_window_draw(p4);
	l2 = -2;
L9fee:
	if ((p8 + l2) < 0) goto La1e6;
	if ((p8 + l2) >= g54b2) goto La1e6;
	set_cursor(p4, 2, (l2 + 2));
	l4 = g54b4[(p8 + l2)];
	if (p10 != 1) goto La09f;
	if (l2) goto La09f;
	print_string(p4, ((l4 << 4) + 21744), 3);
	if (g00cc[(unsigned char)g56d0[l4]] != 1) goto La08c;
	pad_to_column(p4, 15, 3);
	print_int(p4, g56ee[l4], 3, 1);
	goto La09d;
La08c:
	pad_to_column(p4, 18, 3);
La09d:
	goto La0f9;
La09f:
	print_string_hi(p4, ((l4 << 4) + 21744), 3);
	if (g00cc[(unsigned char)g56d0[l4]] != 1) goto La0f9;
	set_cursor(p4, 15, (l2 + 2));
	print_int(p4, g56ee[l4], 3, 18);
La0f9:
	set_cursor(p4, 19, (l2 + 2));
	put_char_hi(p4, (unsigned char)(((unsigned char)g572a[l4] + 1)), 4);
	p4[6]++;
	if (!test_bit(((l4 << 1) + 22344), (unsigned char)pc_class[(432 * p6)])) goto La190;
	if (!test_bit(((l4 << 1) + 22404), (unsigned char)pc_race[(432 * p6)])) goto La190;
	if (test_bit((l4 + 22464), (unsigned char)pc_sex[(432 * p6)])) goto La1a3;
La190:
	print_message(1567, p4, 18);
	goto La1bd;
La1a3:
	print_message(((unsigned char)g56d0[l4] + 1550), p4, 18);
La1bd:
	p4[6] = 32;
	print_long(p4, *(int *)((char *)g57de + (l4 << 2)), *(int *)((char *)class_allowed + (l4 << 2)), 7, 18);
La1e6:
	l2++;
	if (l2 <= 2) goto L9fee;
	resume_window_draw(p4);
	refresh_window(p4);
}
