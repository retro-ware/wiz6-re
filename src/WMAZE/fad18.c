extern char g450a[];
extern char g453a[];
extern char g458c[];
extern char pc_condition[];
extern int message_delay;
struct s4 { int w[2]; };
struct s4 format_dice();
inflict_status(p4, p6, p8, p10, p12, p14, p16)
{
	char x0[4];
	int l6;
	char x6[78];
	int l86;
	char x86[78];
	int l166;
	char x166[78];
	int l246;
	if ((unsigned)pc_condition[(432 * p4)] < 2) goto Lad36;
	return;
Lad36:
	l6 = roll_dice(format_dice(p12, p14, p16));
	if ((p8) && (random(100) <= ((unsigned char)g453a[((432 * p4) + p8)] - (p12 * 3)))) goto Lae46;
	if (p16 == 255) {
	g450a[((432 * p4) + p10)] = -1;
	} else {
	if (((unsigned char)g450a[((432 * p4) + p10)] + l6) > 250) {
	l6 = (250 - (unsigned char)g450a[((432 * p4) + p10)]);
	}
	g450a[((432 * p4) + p10)] = (char)((unsigned char)g450a[((432 * p4) + p10)] + l6);
	}
	if (p10 == 5) {
	g458c[(432 * p4)] = *(char *)&p12;
	}
	get_message(p6, &l86);
	*(char *)&l166 = 0;
	*(char *)&l246 = 0;
	print_member_message(p4, &l86, &l166, &l246, 1, 6, 0, 0);
	draw_member_status_m(p4);
	wait_animating_m(message_delay);
Lae46:
	return;
}
