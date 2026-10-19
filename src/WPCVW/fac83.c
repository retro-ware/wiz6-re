#asm
	extrn do_change_class_:near
	extrn do_choose_portrait_:near
	extrn do_rename_:near
#endasm
do_modify_menu(p4, p6, p8)
{
	int l2;
	int l4;
	char x4[8];
	int l14;
	char x14[2];
	int l18;
	int l24[3];
Lac89:
	fill_window(p6, 32, 3, 0);
	refresh_all_windows();
	l2 = 0;
Laca6:
	l24[l2] = 1;
	l2++;
	if (l2 <= 4) goto Laca6;
	l18 = 0;
	l14 = -1;
	l4 = run_menu(p6, 650, l24, 2, 1, 18, 2, 5, count_enabled_before(l24, 4));
	goto Lad2f;
#asm
lad02:
	db 0ffh,076h,008h,0ffh,076h,006h
	call do_rename_
	db 083h,0c4h,004h,0ebh,02eh
#endasm
#asm
lad10:
	db 0ffh,076h,008h,0ffh,076h,006h
	call do_choose_portrait_
	db 083h,0c4h,004h,0ebh,020h
#endasm
#asm
lad1e:
	db 0ffh,076h,008h,0ffh,076h,006h,0ffh,076h,004h
	call do_change_class_
	db 083h,0c4h,006h,0ebh,00fh
#endasm
Lad2f:
	;
#asm
lad2f:
	db 03dh,000h,000h,074h,0ceh,03dh,001h,000h,074h,0d7h,03dh,002h,000h,074h,0e0h
#endasm
Lad3e:
	draw_sheet(p4, p6, p8);
	if (l4 != 4) goto Lac89;
}
