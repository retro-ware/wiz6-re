extern char char_item_count;
extern char g5580[];
extern char g55a1;
extern char g5610;
extern char g5612;
extern char g5613;
extern char g5615;
extern char g5619;
extern char g561a;
extern char g561b;
extern char g561e;
extern int g5494;
extern int g5496;
init_new_character()
{
	int l2;
	g5619 = 1;
	g561a = 1;
	g561b = (char)(g55a1 + 1);
	g561e = 100;
	init_hp_stamina();
	init_class_ratings();
	g5612 = 0;
	g5613 = 0;
	g5615 = 0;
	g5610 = 0;
	g5494 = 1;
	g5496 = 1;
	char_item_count = 0;
	for (l2 = 0; l2 < 8; l2++) {
	g5580[l2] = 255;
	}
	init_class_race_modifiers();
	draw_stats();
}
