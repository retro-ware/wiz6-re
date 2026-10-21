extern unsigned char g00c4[];
extern int g5224;
extern int main_window;
extern int view_anim_state;
f56a1(p4)
{
	int l2;
	int l4;
	int l6;
	int l8;
	if (!p4) {
	get_message(2025, 20948);
	erase_window(main_window, 1);
	print_centered(main_window, 20948, 0, 18);
	}
	l8 = random(2);
	l4 = random(4);
	l2 = 0;
L56fa:
	if (((!random(8)) || (l2 == l4)) && (g5224 > 0)) {
	play_sound(g5224);
	}
	view_anim_state = -2;
	f55dc();
	f49db(0, 0, l6 = (!l8 ? (0 - g00c4[((p4 * 4) + l2)]) : g00c4[((p4 * 4) + l2)]));
	view_anim_state = 0;
	do {
	f55dc();
	} while (view_anim_state != -2);
	l2++;
	if (l2 < 4) goto L56fa;
}
