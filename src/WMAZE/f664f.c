#asm
	extrn copy_far_:near
#endasm
extern char g3592;
extern char party[];
extern int bottom_line_win;
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
extern int g4fb0;
extern int game_state_arg;
extern int main_window;
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
struct s432 { int w[216]; };
save_game()
{
	int l2;
	int l4;
	int l6;
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
	char x504[1344];
	int l1850;
	char x1850[1738];
	int l3590;
	int l3592;
	char x3592[38];
	int l3632;
	char x3632[82];
	int l3716;
	int l3718;
	char x3718[18];
	int l3738;
	char x3738[18];
	int l3758;
	char x3758[38];
	int l3798;
	char x3798[38];
	int l3838;
	int l3840;
	l3716 = 0;
	l3718 = disk_header;
	l3718 = ((g3592 == 5) && (l3718 > 0) ? (l3718 + 2) : l3718);
	get_message(2257, &l3838);
	get_message(2258, &l3798);
	erase_window(main_window, 0);
	stop_sound();
	copy_through_char(&l3738, 13632, 58);
	copy_through_char(&l3758, 13692, 58);
	l3840 = 1;
	strcpy(&l3632, &l3738);
	if (strlen(&l3758) <= 0) goto L6750;
	if ((!strcmp(&l3738, &l3758)) || (g3592 == 5)) {
	l3716 = 1;
	}
	prompt_insert_disk(&l3758, -1, l3716, 0);
	l3840 = (l3716 != 0 ? 0 : 1);
	strcpy(&l3632, 13692);
	goto L67b3;
L6750:
	if ((unsigned)g3592 <= 1) goto L6797;
	l3716 = 1;
	prompt_insert_disk(&l3738, -1, l3716, 0);
	l3840 = (l3716 != 0 ? 0 : 1);
	strcpy(&l3632, &l3738);
	goto L67b3;
L6797:
	if (strlen(13692) <= 0) goto L67b3;
	strcpy(&l3632, 13692);
L67b3:
	strcat(&l3632, 20462);
	f0a42(bottom_line_win, 0);
	resume_window_draw(g4fb0);
	refresh_all_windows();
	if ((l6 = open(&l3632, 769)) != -1) goto L6822;
	show_error(&l3798);
	if (l3716) {
	prompt_insert_disk(&l3738, l3718, l3840, 1);
	}
	return -1;
L6822:
	lseek(l6, 0L, 0);
	show_maze_text(&l3838);
#asm
	db 0ffh,036h,004h,033h,0a1h,03ch,036h,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,0ffh,0b7h,0d4h
	db 007h,0ffh,0b7h,0d2h,007h,0a1h,0aah,04fh,08ch,0dah,052h,050h
	call copy_far_
	db 083h,0c4h,00ah,0ffh,036h,006h,033h,0a1h,03ch,036h,0d1h,0e0h,0d1h,0e0h,08bh,0d8h
	db 0ffh,0b7h,00ch,008h,0ffh,0b7h,00ah,008h,0a1h,0a8h,04fh,08ch,0dah,052h,050h
	call copy_far_
	db 083h,0c4h,00ah
#endasm
	movmem(((game_state_arg * 10) + 20204), ((game_state_arg * 10) + 13304), 10);
	if ((l3592 = write(l6, 13304, 414)) > 0) goto L68fe;
	show_error(&l3798);
	close(l6);
	if (l3716) {
	prompt_insert_disk(&l3738, l3718, l3840, 1);
	}
	return -1;
L68fe:
	l4 = 0;
	goto L6a17;
L6906:
	if (l4 >= 14) goto L6950;
#asm
	db 0ffh,036h,004h,033h,016h,08dh,086h,0c6h,0f8h,050h,08bh,046h,0fch,0d1h,0e0h,0d1h
	db 0e0h,08bh,0d8h,0ffh,0b7h,0d4h,007h,0ffh,0b7h,0d2h,007h
	call copy_far_
	db 083h,0c4h,00ah,0ffh,036h,006h,033h,016h,08dh,086h,0fah,0f1h,050h,08bh,046h,0fch
	db 0d1h,0e0h,0d1h,0e0h,08bh,0d8h,0ffh,0b7h,00ch,008h,0ffh,0b7h,00ah,008h
	call copy_far_
	db 083h,0c4h,00ah
#endasm
	goto L6976;
L6950:
	setmem(&l1850, 1346, 0);
	setmem(&l3590, 1740, 0);
L6976:
	if ((l3592 = write(l6, &l1850, g3304)) > 0) goto L69c5;
	show_error(&l3798);
	close(l6);
	if (l3716) {
	prompt_insert_disk(&l3738, l3718, l3840, 1);
	}
	return -1;
L69c5:
	if ((l3592 = write(l6, &l3590, g3306)) > 0) goto L6a14;
	show_error(&l3798);
	close(l6);
	if (l3716) {
	prompt_insert_disk(&l3738, l3718, l3840, 1);
	}
	return -1;
L6a14:
	l4++;
L6a17:
	if (l4 < g3318) goto L6906;
	l70 = party_x;
	l68 = party_y;
	l66 = party_cell_x;
	l64 = party_cell_y;
	l62 = party_level;
	l60 = party_facing;
	l72 = game_state_arg;
	l56 = g4f96;
	l54 = g4f94;
	l52 = g4f92;
	l50 = g4f90;
	l48 = g4f8e;
	l46 = g4f8c;
	l58 = g4f98;
	for (l2 = 0; l2 < 6; l2++) {
	*(int *)(l32 + (l2 << 2)) = *(int *)((char *)g4ec8 + (l2 << 2));
	*(int *)(l32 + ((l2 << 2) + 2)) = *(int *)((char *)g4eca + (l2 << 2));
	}
	l44 = g4f80;
	l40 = g4f7c;
	l36 = g4f78;
	l8 = party_count;
	if ((l3592 = write(l6, &l72, 66)) > 0) goto L6b26;
	show_error(&l3798);
	close(l6);
	if (l3716) {
	prompt_insert_disk(&l3738, l3718, l3840, 1);
	}
	return -1;
L6b26:
	l2 = 0;
	goto L6b99;
L6b2d:
	*(struct s432 *)(char *)(&l504) = *(struct s432 *)((char *)party + (432 * l2));
	if ((l3592 = write(l6, &l504, 432)) > 0) goto L6b96;
	show_error(&l3798);
	close(l6);
	if (l3716) {
	prompt_insert_disk(&l3738, l3718, l3840, 1);
	}
	return -1;
L6b96:
	l2++;
L6b99:
	if (l2 < party_count) goto L6b2d;
	close(l6);
	if (l3716) {
	prompt_insert_disk(&l3738, l3718, l3840, 1);
	}
	return 0;
}
