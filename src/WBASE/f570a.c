#asm
	extrn copy_far_:near
	extrn lseek_:near
#endasm
extern char cfg_delay;
extern char cfg_gmode;
extern char cfg_input;
extern char cfg_level;
extern char g3592;
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
	register int rsi;
	register int rdi;
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
	if ((strcmp(&l4156, &l4176)) && (g3592 != 5)) goto L5805;
	l4134 = 1;
L5805:
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
	if (!l4134) goto L58f4;
	prompt_insert_disk(&l4156, l4136, l4338, 1);
L58f4:
	return -1;
L58fd:
	erase_window(main_window, 0);
	refresh_all_windows();
	if (resume) goto L5926;
	animate_and_show_two_lines(&entering_text, &title_text);
	goto L592f;
L5926:
	show_status_text(&loading_text);
L592f:
	rsi = 13304;
	rdi = &l4132;
#asm
	db 08ch,0d9h,08eh,0c1h,0b9h,0cfh,000h,0f3h,0a5h,0b8h,000h,000h,050h,0b8h,000h,000h
	db 0bah,000h,000h,052h,050h,0ffh,076h,0fah
	call lseek_
	db 083h,0c4h,008h
#endasm
	if ((l506 = read(fd, 13304, 414)) > 0) goto L59a8;
	show_error_text(&disk_error_text, 0);
	close(fd);
	if (!l4134) goto L59a2;
	prompt_insert_disk(&l4156, l4136, l4338, 1);
L59a2:
	return -1;
L59a8:
	l4 = 0;
L59ad:
	strcpy(((l4 * 20) + 13632), ((l4 * 20) + l3804));
	l4++;
	if (l4 < 4) goto L59ad;
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
	if (!l4134) goto L5a70;
	prompt_insert_disk(&l4156, l4136, l4338, 1);
L5a70:
	return -1;
L5a76:
	if ((l506 = read(fd, &l3718, g3306)) > 0) goto L5acb;
	show_error_text(&disk_error_text, 0);
	close(fd);
	if (!l4134) goto L5ac5;
	prompt_insert_disk(&l4156, l4136, l4338, 1);
L5ac5:
	return -1;
L5acb:
	if (l4 >= 14) goto L5b13;
#asm
	db 0b8h,042h,005h,050h,08bh,046h,0fch,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,0ffh,0b7h,0d4h
	db 007h,0ffh,0b7h,0d2h,007h,016h,08dh,086h,046h,0f8h,050h
	call copy_far_
	db 083h,0c4h,00ah,0b8h,0cch,006h,050h,08bh,046h,0fch,0d1h,0e0h,0d1h,0e0h,08bh,0d8h
	db 0ffh,0b7h,00ch,008h,0ffh,0b7h,00ah,008h,016h,08dh,086h,07ah,0f1h,050h
	call copy_far_
	db 083h,0c4h,00ah
#endasm
L5b13:
	l4++;
L5b16:
	if (l4 < g3318) goto L5a21;
	if ((l506 = read(fd, &l72, 66)) > 0) goto L5b76;
	show_error_text(&disk_error_text, 0);
	close(fd);
	if (!l4134) goto L5b70;
	prompt_insert_disk(&l4156, l4136, l4338, 1);
L5b70:
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
	l2 = 0;
L5bcf:
	*(int *)((char *)g4ec8 + (l2 << 2)) = *(int *)(l32 + (l2 << 2));
	*(int *)((char *)g4eca + (l2 << 2)) = *(int *)(l32 + ((l2 << 2) + 2));
	l2++;
	if (l2 < 6) goto L5bcf;
	g4f80 = l44;
	g4f7c = l40;
	g4f78 = l36;
	if (resume != 1) goto L5cd4;
	party_count = 0;
	l2 = 0;
	goto L5cc9;
L5c3e:
	if ((l506 = read(fd, &l504, 432)) > 0) goto L5c93;
	show_error_text(&disk_error_text, 0);
	close(fd);
	if (!l4134) goto L5c8d;
	prompt_insert_disk(&l4156, l4136, l4338, 1);
L5c8d:
	return -1;
L5c93:
	member_portrait[party_count] = find_free_portrait_slot(party_count);
	rsi = &l504;
	rdi = ((432 * party_count) + 17384);
#asm
	db 08ch,0d9h,08eh,0c1h,0b9h,0d8h,000h,0f3h,0a5h,0ffh,006h,0ceh,043h
#endasm
	l2++;
L5cc9:
	if (l2 < l8) goto L5c3e;
L5cd4:
	close(fd);
	if (!l4134) goto L5cf9;
	prompt_insert_disk(&l4156, l4136, l4338, 1);
L5cf9:
	l2 = 0;
	goto L5d2a;
L5d00:
	load_portrait((unsigned char)pc_portrait[(432 * l2)], member_portrait[l2]);
	draw_member_panel(l2);
	l2++;
L5d2a:
	if (l2 < party_count) goto L5d00;
	return 0;
}
