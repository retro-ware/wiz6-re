#asm
	extrn clear_window_area_:near
#endasm
extern char g00cc[];
extern char g44fa[];
extern char g4548[];
extern char g4549[];
extern char g454a[];
extern char pc_equipped[];
extern char pc_item_count[];
extern char pc_item_icon[];
extern char pc_item_qty[];
extern char pc_item_type[];
extern int g57fc;
extern int item_row_color[];
extern int pc_item_id[];
struct s14 { int w[7]; };
/* Draw armor class, equipped slots and the inventory list of member p6. */
draw_inventory_panel(p4, p6)
char *p4;
{
	int l2;
	int l4;
	int l6;
	int l8;
	char x8[80];
	int l90;
	char x90[72];
	int l164;
	char x164[12];
	int l178;
	int l180;
	*(struct s14 *)(char *)(&l178) = *(struct s14 *)(char *)(get_load_category(p6));
	l180 = (g4549[(432 * p6)] + l178);
	set_cursor(p4, 21, 5);
	print_msg2(217, p4, 15);
	p4[6]++;
	print_int(p4, (g4548[(432 * p6)] + l180), 2, 4);
	print_string(p4, 20882, 15);
	if (l180 < 0) goto Lb2b0;
	l90 = (l180 == 0 ? 9 : 4);
	put_char(p4, 43, l90);
	print_int(p4, l180, 1, l90);
	goto Lb2c5;
Lb2b0:
	print_int(p4, l180, 2, 6);
Lb2c5:
	put_char(p4, 41, 15);
	set_cursor(p4, 21, 6);
	l2 = 0;
Lb2ec:
	put_char_hi(p4, 32, 3);
	if ((unsigned char)g44fa[((432 * p6) + l2)] == 255) goto Lb33a;
	l6 = (unsigned char)pc_item_icon[((432 * p6) + ((unsigned char)g44fa[((432 * p6) + l2)] << 3))];
	goto Lb34c;
Lb33a:
	l6 = (l2 != 0 ? (l2 + 120) : 120);
Lb34c:
	put_char_hi(p4, (unsigned char)((l6 + 1)), 4);
	if (l2 >= 5) goto Lb379;
	put_char_hi(p4, 28, 1);
	goto Lb38a;
Lb379:
	put_char_hi(p4, 32, 3);
Lb38a:
	l2++;
	if (l2 < 6) goto Lb2ec;
	l90 = 11;
	for (l2 = 0; l2 < 6; l2++) {
	l8 = (l2 != 0 ? (g454a[(432 * p6)] + l180) : 0);
	set_cursor(p4, ((l2 * 3) + 21), 7);
	print_int(p4, (g454a[((432 * p6) + l2)] + l8), 3, ((l90 + 8) % 16));
	l90 = 15;
	}
	l2 = 0;
	goto Lb5c8;
Lb421:
	if (g57fc) goto Lb469;
	access_scenario_record(1, &l164, *(int *)((char *)pc_item_id + ((432 * p6) + (l2 << 3))), 0);
	strcpy(((l2 << 4) + 21982), &l164);
Lb469:
	l6 = 32;
	l90 = 9;
	l4 = 0;
Lb478:
	if ((unsigned char)pc_equipped[((432 * p6) + l4)] != l2) goto Lb4ac;
	l6 = 23;
	l90 = (l4 >= 2 ? (l4 == 2 ? 3 : 7) : 6);
Lb4ac:
	l4++;
	if (l4 < 8) goto Lb478;
	set_cursor(p4, 21, (l2 + 9));
	put_char(p4, (unsigned char)*(char *)&l6, 4);
	item_row_color[l2] = l90;
	print_string(p4, ((l2 << 4) + 21982), item_row_color[l2]);
	pad_to_column(p4, 34, 0);
	if (g00cc[(unsigned char)pc_item_type[((432 * p6) + (l2 << 3))]] != 1) goto Lb576;
	set_cursor(p4, 34, (l2 + 9));
	print_int(p4, (unsigned char)pc_item_qty[((432 * p6) + (l2 << 3))], 3, 1);
	goto Lb587;
Lb576:
	pad_to_column(p4, 37, 0);
Lb587:
	set_cursor(p4, 38, (l2 + 9));
	put_char_hi(p4, (unsigned char)(((unsigned char)pc_item_icon[((432 * p6) + (l2 << 3))] + 1)), 4);
	l2++;
Lb5c8:
	if ((unsigned char)pc_item_count[(432 * p6)] > l2) goto Lb421;
#asm
lb5de:
	db 0b8h,0b0h,001h,0f7h,06eh,006h,08bh,0d8h,080h,0bfh,094h,045h,00ah,073h,01fh,0b8h
	db 012h,000h,050h,0b8h,024h,000h,050h,08ah,087h,094h,045h,02ah,0e4h,005h,009h,000h
	db 050h,0b8h,015h,000h,050h,0ffh,076h,004h
	call clear_window_area_
	db 083h,0c4h,00ah
#endasm
Lb60c:
	for (l2 = (unsigned char)pc_item_count[(432 * p6)]; l2 < 10; l2++) {
	set_cursor(p4, 38, (l2 + 9));
	put_char_hi(p4, 32, 3);
	}
	g57fc = 1;
}
