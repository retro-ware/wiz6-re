#asm
	extrn set_cursor_:near
	extrn strlen_:near
#endasm
extern char g450a[];
extern char g450c[];
extern char g450d[];
extern char pc_class[];
extern char pc_condition[];
extern char pc_equipped[];
extern char pc_item_icon[];
extern int g0526[];
extern int g0532[];
extern int g4fb8;
extern int g4fba;
extern int member_portrait[];
extern int pc_hp[];
extern int pc_hp_max[];
extern int pc_item_id[];
extern int pc_stamina[];
extern int pc_stamina_max[];
draw_member_status(member)
{
	int l2;
	int x;
	int y;
	char x6[80];
	int win;
	int l90;
	register int rsi;
	register int rdi;
	win = (!(member % 2) ? g4fba : g4fb8);
	x = 0;
	y = ((member / 2) << 2);
	set_cursor(win, x, y);
	print_string_hi(win, ((432 * member) + 17384), 3);
#asm
	db 0b8h,0b0h,001h,0f7h,06eh,004h,005h,0e8h,043h,050h
	call strlen_
	db 059h,08bh,0f0h,0ebh,012h
#endasm
L4e20:
	put_char_hi(win, 32, 3);
	rsi++;
L4e32:
	if (rsi < 7) goto L4e20;
	l90 = ((member_portrait[member] * 9) + 72);
	rsi = 0;
L4e53:
	;
#asm
l4e53:
	db 08bh,046h,0fah,003h,0c6h,040h,050h,0ffh,076h,0fch,0ffh,076h,0a8h
	call set_cursor_
	db 083h,0c4h,006h,0bfh,000h,000h
#endasm
L4e69:
	put_char_hi(win, (unsigned char)((((rsi * 3) + l90) + rdi)), 2);
	rdi++;
	if (rdi < 3) goto L4e69;
	rsi++;
	if (rsi < 3) goto L4e53;
	l2 = g0526[(unsigned char)pc_condition[(432 * member)]];
	l2 = ((!l2) && ((unsigned)g450c[(432 * member)] > 0) ? 1 : l2);
	l2 = ((l2 < 2) && ((unsigned)g450d[(432 * member)] > 0) ? 2 : l2);
	set_cursor(win, (x + 3), (y + 3));
	put_char_hi(win, (unsigned char)((l2 + 37)), 1);
	l2 = -1;
	rsi = 0;
L4f1f:
	if (((unsigned)g450a[((432 * member) + rsi)] <= 0) || (g0532[rsi] <= l2)) goto L4f42;
	l2 = g0532[rsi];
L4f42:
	rsi++;
	if (rsi < 10) goto L4f1f;
	if (l2 != -1) {
	put_char_hi(win, (unsigned char)((l2 + 37)), 1);
	} else {
	put_char_hi(win, 32, 3);
	}
#asm
l4f77:
	db 08bh,046h,0fah,040h,040h,050h,08bh,046h,0fch,040h,040h,040h,050h,0ffh,076h,0a8h
	call set_cursor_
	db 083h,0c4h,006h,0beh,000h,000h
#endasm
L4f90:
	put_char_hi(win, (unsigned char)(((((unsigned char)pc_class[(432 * member)] << 1) + rsi) + 58)), 1);
	rsi++;
	if (rsi < 2) goto L4f90;
#asm
	db 08bh,046h,0fah,040h,050h,08bh,046h,0fch,040h,040h,040h,050h,0ffh,076h,0a8h
	call set_cursor_
	db 083h,0c4h,006h,0beh,000h,000h
#endasm
L4fd3:
	if (((unsigned char)pc_equipped[((432 * member) + rsi)] == 255) || (*(int *)((char *)pc_item_id + ((432 * member) + ((unsigned char)pc_equipped[((432 * member) + rsi)] << 3))) <= 0)) goto L5024;
	put_char_hi(win, (unsigned char)(((unsigned char)pc_item_icon[((432 * member) + ((unsigned char)pc_equipped[((432 * member) + rsi)] << 3))] + 1)), 4);
	goto L5039;
L5024:
	put_char_hi(win, (unsigned char)((rsi + 37)), 4);
L5039:
	rsi++;
	if (rsi < 2) goto L4fd3;
	draw_vital_bar(win, (x + 5), (y + 1), *(int *)((char *)pc_hp + (432 * member)), *(int *)((char *)pc_hp_max + (432 * member)), 86);
	draw_vital_bar(win, (x + 6), (y + 1), *(int *)((char *)pc_stamina + (432 * member)), *(int *)((char *)pc_stamina_max + (432 * member)), 99);
}
