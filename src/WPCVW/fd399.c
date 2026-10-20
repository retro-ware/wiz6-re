#asm
	extrn $ldv:near
#endasm
extern char g44dc[];
extern char g44e2[];
extern char g44e4[];
extern char g44e6[];
extern char g44e7[];
extern char g450a[];
extern char g4517[];
extern char g4539[];
extern char g453a[];
extern char g4548[];
extern char g4549[];
extern char g458a[];
extern char g458b[];
extern char g4591[];
extern char pc_class[];
extern char pc_equipped[];
extern char pc_item_count[];
extern char pc_item_flags[];
extern char pc_item_icon[];
extern char pc_stats[];
extern int g44d8[];
extern int g44da[];
extern int g4fb8;
extern int g4fba;
extern int menu_clicked;
extern int mouse_present;
extern int pc_age_days[];
extern int pc_hp[];
extern int pc_hp_max[];
extern int pc_item_id[];
extern int pc_stamina[];
extern int pc_stamina_max[];
/* Equip menu: choose weapons and armor for each slot and recompute combat values. */
do_equip_items(p4, p6, p8)
char *p4;
char *p6;
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	int l48[18];
	char x48[78];
	int l128;
	char x128[78];
	int l208;
	char x208[8];
	int l218;
	int l220;
	int l222;
	char x222[1];
	char l224;
	char l225;
	char l226;
	char x226[1];
	char l228;
	char l229;
	char l230;
	char l231;
	char x231[4];
	char l236;
	char l264[28];
	char x264[4];
	int l270;
	int l272;
	char x272[22];
	int l296;
	int l298;
	int l300;
	int l302;
	int l304;
	register int rsi;
	register int rdi;
	for (l2 = 0; l2 < 8; l2++) {
	pc_equipped[((432 * p8) + l2)] = -1;
	l48[l2] = 0;
	}
	l2 = 0;
	goto Ld3fa;
Ld3d7:
	pc_item_flags[((432 * p8) + (l2 << 3))] = (char)((unsigned char)pc_item_flags[((432 * p8) + (l2 << 3))] & -2);
	l2++;
Ld3fa:
	if ((unsigned char)pc_item_count[(432 * p8)] > l2) goto Ld3d7;
#asm
	db 0b8h,0b0h,001h,0f7h,06eh,008h,08bh,0d8h,0c6h,087h,08ah,045h,000h,0c6h,087h,08bh
	db 045h,000h
#endasm
	for (l2 = 0; l2 < 14; l2++) {
	g453a[((432 * p8) + l2)] = 0;
	}
	l298 = (!(p8 % 2) ? g4fba : g4fb8);
	set_cursor(l298, 3, (((p8 / 2) << 2) + 1));
	put_char_hi(l298, 37, 4);
	put_char_hi(l298, 38, 4);
	fcdb3(p8);
	draw_inventory_panel(p4, p8);
	get_message(359, &l218);
	l2 = 0;
Ld4bf:
	l12 = can_equip_item(p8, l2, ((char *)l48 + 16));
	if (l12 <= 0) goto Ldac2;
	fill_window(p6, 32, 3, 0);
	refresh_window(p6);
	get_message(350, &l128);
	get_message((l2 + 351), &l208);
	replace_char_with_string(&l128, &l208, 36);
	set_cursor(p6, 2, 1);
	print_string_hi(p6, &l128, 3);
	p6[6]++;
	l220 = (unsigned char)p6[6];
	l222 = (unsigned char)p6[7];
	if (mouse_present == 1) {
	print_string_hi(p6, &l218, 3);
	} else {
	print_string(p6, &l218, -5);
	}
	for (l4 = 0; l4 < l12; l4++) {
	set_cursor(p4, 21, (l48[(l4 + 8)] + 9));
	put_char(p4, 100, 5);
	print_string(p4, ((l48[(l4 + 8)] << 4) + 21982), 4);
	set_click_region(l4, ((unsigned char)p4[2] + 21), (((unsigned char)p4[3] + l48[(l4 + 8)]) + 9), ((unsigned char)p4[2] + 36), (((unsigned char)p4[3] + l48[(l4 + 8)]) + 9));
	}
	set_click_region(l12, ((unsigned char)p6[2] + l220), ((unsigned char)p6[3] + l222), (((strlen(&l218) + (unsigned char)p6[2]) + l220) - 1), ((unsigned char)p6[3] + l222));
	set_click_region((l12 + 1), 255, 0, 0, 0);
	l10 = -1;
Ld695:
	if (mouse_present) goto Ld706;
	if (l10 != -1) goto Ld6c7;
	set_cursor(p6, l220, l222);
	print_string(p6, &l218, -5);
	goto Ld706;
Ld6c7:
	set_cursor(p4, 22, (l48[(l10 + 8)] + 9));
	print_string(p4, ((l48[(l10 + 8)] << 4) + 21982), -5);
Ld706:
	l6 = get_menu_input(21822, 13720);
	if (menu_clicked != 1) goto Ld736;
	l10 = (l6 < l12 ? l6 : -1);
	l6 = 5;
	goto Ld80a;
Ld736:
	switch (l6) {
case 2:
	if (l10 != -1) goto Ld76c;
	set_cursor(p6, l220, l222);
	print_string_hi(p6, &l218, 3);
	l10 = 0;
	goto Ld799;
Ld76c:
	unhighlight_item_row(p4, l48[(l10 + 8)], 4, 0);
	if ((l10 - 1) < 0) goto Ld794;
	l10--;
	goto Ld799;
Ld794:
	l10 = -1;
Ld799:
	goto Ld80a;
case 4:
	if (l10 != -1) goto Ld7cb;
	set_cursor(p6, l220, l222);
	print_string_hi(p6, &l218, 3);
	l10 = 0;
	goto Ld7fb;
Ld7cb:
	unhighlight_item_row(p4, l48[(l10 + 8)], 4, 0);
	if ((l10 + 1) >= l12) goto Ld7f6;
	l10++;
	goto Ld7fb;
Ld7f6:
	l10 = -1;
Ld7fb:
	goto Ld80a;
	}
Ld80a:
	if (l6 != 5) goto Ld695;
	if (l10 == -1) goto Ldab6;
	l8 = l48[(l10 + 8)];
	pc_equipped[((432 * p8) + l2)] = *(char *)&l8;
	pc_item_flags[((432 * p8) + (l8 << 3))] |= 1;
	access_scenario_record(1, &l296, *(int *)((char *)pc_item_id + ((432 * p8) + (l8 << 3))), 0);
	l48[l2] = (unsigned char)l228;
	if ((l2) && (l2 != 1)) goto Lda1d;
	g4549[(432 * p8)] -= l226;
#asm
	db 08ah,086h,018h,0ffh,08bh,076h,0feh,0b9h,004h,000h,0d3h,0e6h,08bh,0ceh,003h,0d9h
	db 088h,087h,0e5h,044h
#endasm
	for (l4 = 0; l4 < 8; l4++) {
	g44dc[(((432 * p8) + (l2 << 4)) + l4)] = l264[(l4 + 14)];
	}
	l4 = ((unsigned char)g4539[(432 * p8)] / 5);
	if ((pc_class[(432 * p8)] != 12) && (pc_class[(432 * p8)] != 13)) goto Ld934;
	g44e2[((432 * p8) + (l2 << 4))] = (char)(((unsigned char)g44e2[((432 * p8) + (l2 << 4))] + l4) + 5);
	goto Ld95b;
Ld934:
	if (l4 <= 0) goto Ld95b;
	g44e2[((432 * p8) + (l2 << 4))] = (char)((unsigned char)g44e2[((432 * p8) + (l2 << 4))] + l4);
Ld95b:
	g44e4[((432 * p8) + (l2 << 4))] = l231;
	if (l236 == 4) {
	g44e6[((432 * p8) + (l2 << 4))] = (char)(0 - (l225 * 5));
	} else {
	g44e6[((432 * p8) + (l2 << 4))] = (char)(g44e6[((432 * p8) + (l2 << 4))] - (l225 * 5));
	}
	*(int *)((char *)g44d8 + ((432 * p8) + (l2 << 4))) = l272;
	*(int *)((char *)g44da + ((432 * p8) + (l2 << 4))) = l270;
	g44e7[((432 * p8) + (l2 << 4))] = l224;
	set_cursor(l298, (l2 + 3), (((p8 / 2) << 2) + 1));
	put_char_hi(l298, (unsigned char)(((unsigned char)pc_item_icon[((432 * p8) + (l8 << 3))] + 1)), 4);
	goto Lda34;
Lda1d:
	g4548[((432 * p8) + l2)] -= l226;
Lda34:
	for (l4 = 1; l4 < 14; l4++) {
	add_skill_bonus(p8, l4, (unsigned char)l264[l4]);
	}
	g458a[(432 * p8)] = (char)((unsigned)g458a[(432 * p8)] < l230 ? l230 : g458a[(432 * p8)]);
	g458b[(432 * p8)] = (char)((unsigned)g458b[(432 * p8)] < l229 ? l229 : g458b[(432 * p8)]);
	if ((l2) || (!((unsigned char)pc_item_flags[((432 * p8) + (l8 << 3))] & 8))) goto Ldaaf;
	l2++;
Ldaaf:
	fc726(p8);
Ldab6:
	draw_inventory_panel(p4, p8);
Ldac2:
	l2++;
	if (l2 < 8) goto Ld4bf;
	l2 = 0;
Ldad5:
	if (l48[l2] <= 0) goto Ldd7f;
	fill_window(p6, 32, 3, 0);
	refresh_window(p6);
	get_message(380, 21902);
	set_cursor(p6, (20 - ((strlen(21902) + 1) / 2)), 1);
	print_string_hi(p6, 21902, 3);
	set_cursor(p6, (20 - ((strlen((((unsigned char)pc_equipped[((432 * p8) + l2)] << 4) + 21982)) + 11) / 2)), 2);
	print_string_hi(p6, (((unsigned char)pc_equipped[((432 * p8) + l2)] << 4) + 21982), 3);
	p6[6]++;
	put_char_hi(p6, 63, 3);
	p6[6] += 2;
	l304 = 1;
	l302 = 1;
	l300 = -1;
	l10 = run_menu(p6, 381, &l304, (unsigned char)p6[6], 2, 3, 1, 5, 0);
	if (l10 != 1) goto Ldd7f;
	if (l48[l2] >= 9) goto Ldc46;
	l4 = (l48[l2] - 1);
	if ((unsigned)pc_stats[((432 * p8) + l4)] < 20) {
	pc_stats[((432 * p8) + l4)]++;
	}
	goto Ldd55;
Ldc46:
	;
#asm
ldc46:
	db 08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,003h,0ddh,08bh,047h,0d0h,0e9h,0f0h,000h
#endasm
	if ((unsigned)g4591[(432 * p8)] < 4) {
	g4591[(432 * p8)] = 4;
	}
	goto Ldd55;
#asm
	db 0b8h,0b0h,001h,0f7h,06eh,008h,08bh,0d8h,080h,0bfh,092h,045h,004h,073h,005h,0c6h
	db 087h,092h,045h,004h
#endasm
Ldc80:
	goto Ldd55;
#asm
	db 0b8h,0b0h,001h,0f7h,06eh,008h,08bh,0d8h,0c6h,087h,089h,045h,000h
#endasm
	for (l4 = 0; l4 < 10; l4++) {
	g450a[((432 * p8) + l4)] = 0;
	}
	*(int *)((char *)pc_hp + (432 * p8)) = *(int *)((char *)pc_hp_max + (432 * p8));
	*(int *)((char *)pc_stamina + (432 * p8)) = *(int *)((char *)pc_stamina_max + (432 * p8));
	goto Ldd55;
#asm
	db 0b8h,0b0h,001h,0f7h,06eh,008h,08bh,0d8h,08bh,087h,0f0h,043h,08bh,097h,0f2h,043h
	db 0b9h,06dh,001h,0bbh,000h,000h
	call $ldv
	db 083h,0fah,000h,07ch,007h,075h,007h,03dh,012h,000h,077h,002h
#endasm
Ldcf0:
	goto Ldd05;
Ldcf2:
	*(long *)((char *)pc_age_days + (432 * p8)) += -365L;
Ldd05:
	if ((unsigned)g4517[(432 * p8)] < 18) {
	g4517[(432 * p8)]++;
	}
	goto Ldd55;
	l4 = (random(5) + 2);
	*(int *)((char *)pc_hp_max + (432 * p8)) += l4;
	*(int *)((char *)pc_hp + (432 * p8)) += l4;
#asm
	db 0ebh,01ah,055h,0dch,06ch,0dch,083h,0dch,0cbh,0dch,01ah,0ddh
ldd45:
	db 02dh,009h,000h,03dh,005h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,03bh,0ddh
#endasm
Ldd55:
	use_item_charge(p8, (unsigned char)pc_equipped[((432 * p8) + l2)]);
	draw_sheet(p4, p6, p8);
Ldd7f:
	l2++;
	if (l2 < 8) goto Ldad5;
}
