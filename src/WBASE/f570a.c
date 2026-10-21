extern long far_buffers_a[];
extern long far_buffers_b[];
extern char cfg_delay;
extern char cfg_gmode;
extern char cfg_input;
extern char cfg_level;
extern char g3592;
extern char party[];
extern char pc_portrait[];
extern char sound_mode;
extern int disk_header;
extern int g3304;
extern int g3306;
extern int g3318;
extern int g4ec8[];
extern int g4eca[];
extern int g4f8c;
extern int g4f8e;
extern int g4f90;
extern int g4f92;
extern int g4f94;
extern int g4f96;
extern int g4f98;
extern int g4fc8;
extern int game_state_arg;
extern int main_window;
extern int member_portrait[];
extern int party_cell_x;
extern int party_cell_y;
extern int party_count;
extern int party_facing;
extern int party_level;
extern int party_x;
extern int party_y;
extern long g4f78;
extern long g4f7c;
extern long g4f80;
struct s414 { int w[207]; };
struct s432 { int w[216]; };
/* Load NEWGAME.DBS (resume 0) or SAVEGAME.DBS: header, settings, maze state and party; -1 on error. */
load_game(resume)
{
	int l2;
	int l4;
	int fd;
	int l8;
	char l32[24];
	long l36;
	long l40;
	long l44;
	int l46;
	int l48;
	int l50;
	int l52;
	int l54;
	int l56;
	int l58;
	int l60;
	int l62;
	int l64;
	int l66;
	int l68;
	int l70;
	int l72;
	char x72[430];
	int l504;
	int l506;
	char x506[38];
	int path;
	char x546[1430];
	int l1978;
	char x1978[1738];
	int l3718;
	char l3719;
	char l3720;
	char l3721;
	char l3722;
	char l3723;
	char l3724;
	char l3804[80];
	char x3804[326];
	int l4132;
	int l4134;
	int l4136;
	char x4136[18];
	int l4156;
	char x4156[18];
	int l4176;
	char x4176[38];
	int disk_error_text;
	char x4216[38];
	int loading_text;
	char x4256[38];
	int entering_text;
	char x4296[38];
	int title_text;
	int l4338;
	l4134 = 0;
	l4136 = disk_header;
	l4136 = ((g3592 == 5) && (l4136 > 0) ? (l4136 + 2) : l4136);
	stop_sound();
	get_message(1212, &entering_text);
	get_message(1213, &title_text);
	get_message(2258, &disk_error_text);
	get_message(2259, &loading_text);
	l4338 = 1;
	if (resume) goto L57a0;
	strcpy(&path, make_data_path(20527, 1));
	goto L58b0;
L57a0:
	copy_through_char(&l4156, 13632, 58);
	copy_through_char(&l4176, 13692, 58);
	strcpy(&path, &l4156);
	if (strlen(&l4176) <= 0) goto L583e;
	if ((!strcmp(&l4156, &l4176)) || (g3592 == 5)) {
	l4134 = 1;
	}
	prompt_insert_disk(&l4176, -1, l4134, 0);
	l4338 = (l4134 != 0 ? 0 : 1);
	strcpy(&path, 13692);
	goto L58a1;
L583e:
	if ((unsigned)g3592 <= 1) goto L5885;
	l4134 = 1;
	prompt_insert_disk(&l4156, -1, l4134, 0);
	l4338 = (l4134 != 0 ? 0 : 1);
	strcpy(&path, &l4156);
	goto L58a1;
L5885:
	if (strlen(13692) <= 0) goto L58a1;
	strcpy(&path, 13692);
L58a1:
	strcat(&path, 20539);
L58b0:
	if ((fd = open(&path, 0)) != -1) goto L58fd;
	show_error_text(&disk_error_text, 1);
	if (l4134) {
	prompt_insert_disk(&l4156, l4136, l4338, 1);
	}
	return -1;
L58fd:
	erase_window(main_window, 0);
	refresh_all_windows();
	if (!resume) {
	animate_and_show_two_lines(&entering_text, &title_text);
	} else {
	show_status_text(&loading_text);
	}
	*(struct s414 *)(char *)(&l4132) = *(struct s414 *)(char *)(13304);
	lseek(fd, 0L, 0);
	if ((l506 = read(fd, 13304, 414)) > 0) goto L59a8;
	show_error_text(&disk_error_text, 0);
	close(fd);
	if (l4134) {
	prompt_insert_disk(&l4156, l4136, l4338, 1);
	}
	return -1;
L59a8:
	for (l4 = 0; l4 < 4; l4++) {
	strcpy(((l4 * 20) + 13632), ((l4 * 20) + l3804));
	}
	sound_mode = l3724;
	cfg_delay = l3723;
	g3592 = l3722;
	cfg_level = l3721;
	cfg_input = l3720;
	cfg_gmode = l3719;
	g4fc8 = (unsigned char)cfg_delay;
	l4 = 0;
	goto L5b16;
L5a21:
	if ((l506 = read(fd, &l1978, g3304)) > 0) goto L5a76;
	show_error_text(&disk_error_text, 0);
	close(fd);
	if (l4134) {
	prompt_insert_disk(&l4156, l4136, l4338, 1);
	}
	return -1;
L5a76:
	if ((l506 = read(fd, &l3718, g3306)) > 0) goto L5acb;
	show_error_text(&disk_error_text, 0);
	close(fd);
	if (l4134) {
	prompt_insert_disk(&l4156, l4136, l4338, 1);
	}
	return -1;
L5acb:
	if (l4 >= 14) goto L5b13;
	copy_far((char far *)&l1978, far_buffers_a[l4], 1346);
	copy_far((char far *)&l3718, far_buffers_b[l4], 1740);
L5b13:
	l4++;
L5b16:
	if (l4 < g3318) goto L5a21;
	if ((l506 = read(fd, &l72, 66)) > 0) goto L5b76;
	show_error_text(&disk_error_text, 0);
	close(fd);
	if (l4134) {
	prompt_insert_disk(&l4156, l4136, l4338, 1);
	}
	return -1;
L5b76:
	party_x = l70;
	party_y = l68;
	party_cell_x = l66;
	party_cell_y = l64;
	party_level = l62;
	party_facing = l60;
	game_state_arg = l72;
	g4f96 = l56;
	g4f94 = l54;
	g4f92 = l52;
	g4f90 = l50;
	g4f8e = l48;
	g4f8c = l46;
	g4f98 = l58;
	for (l2 = 0; l2 < 6; l2++) {
	*(int *)((char *)g4ec8 + (l2 << 2)) = *(int *)(l32 + (l2 << 2));
	*(int *)((char *)g4eca + (l2 << 2)) = *(int *)(l32 + ((l2 << 2) + 2));
	}
	g4f80 = l44;
	g4f7c = l40;
	g4f78 = l36;
	if (resume != 1) goto L5cd4;
	party_count = 0;
	for (l2 = 0; l2 < l8; l2++) {
	if ((l506 = read(fd, &l504, 432)) > 0) goto L5c93;
	show_error_text(&disk_error_text, 0);
	close(fd);
	if (l4134) {
	prompt_insert_disk(&l4156, l4136, l4338, 1);
	}
	return -1;
L5c93:
	member_portrait[party_count] = find_free_portrait_slot(party_count);
	*(struct s432 *)((char *)party + (432 * party_count)) = *(struct s432 *)(char *)(&l504);
	party_count++;
	}
L5cd4:
	close(fd);
	if (l4134) {
	prompt_insert_disk(&l4156, l4136, l4338, 1);
	}
	for (l2 = 0; l2 < party_count; l2++) {
	load_portrait((unsigned char)pc_portrait[(432 * l2)], member_portrait[l2]);
	draw_member_panel(l2);
	}
	return 0;
}
