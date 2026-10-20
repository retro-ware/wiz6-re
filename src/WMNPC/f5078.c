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
extern int g43fe[];
extern int g4fb8;
extern int g4fba;
extern int member_portrait[];
extern int pc_gold[];
extern int pc_hp[];
extern int pc_hp_max[];
extern int pc_item_id[];
extern int pc_stamina[];
extern int pc_stamina_max[];
f5078(p4, p6)
{
	int l2;
	int l4;
	int l6;
	char x6[80];
	int l88;
	int l90;
	register int rsi;
	register int rdi;
	l88 = (!(p4 % 2) ? g4fba : g4fb8);
	l4 = 0;
	l6 = ((p4 / 2) << 2);
	set_cursor(l88, l4, l6);
	if (p6) goto L5101;
	print_string_hi(l88, ((432 * p4) + 17384), 3);
#asm
	db 0b8h,0b0h,001h,0f7h,06eh,004h,005h,0e8h,043h,050h
	call strlen_
	db 059h,08bh,0f0h,0ebh,012h
#endasm
L50e8:
	put_char_hi(l88, 32, 3);
	rsi++;
L50fa:
	if (rsi < 7) goto L50e8;
	goto L5122;
L5101:
	print_long(l88, *(int *)((char *)pc_gold + (432 * p4)), *(int *)((char *)g43fe + (432 * p4)), 7, 5);
L5122:
	l90 = ((member_portrait[p4] * 9) + 72);
	rsi = 0;
L513e:
	;
#asm
l513e:
	db 08bh,046h,0fah,003h,0c6h,040h,050h,0ffh,076h,0fch,0ffh,076h,0a8h
	call set_cursor_
	db 083h,0c4h,006h,0bfh,000h,000h
#endasm
L5154:
	put_char_hi(l88, (unsigned char)((((rsi * 3) + l90) + rdi)), 2);
	rdi++;
	if (rdi < 3) goto L5154;
	rsi++;
	if (rsi < 3) goto L513e;
	l2 = g0526[(unsigned char)pc_condition[(432 * p4)]];
	l2 = ((!l2) && ((unsigned)g450c[(432 * p4)] > 0) ? 1 : l2);
	l2 = ((l2 < 2) && ((unsigned)g450d[(432 * p4)] > 0) ? 2 : l2);
	set_cursor(l88, (l4 + 3), (l6 + 3));
	put_char_hi(l88, (unsigned char)((l2 + 37)), 1);
	l2 = -1;
	rsi = 0;
L520a:
	if (((unsigned)g450a[((432 * p4) + rsi)] <= 0) || (g0532[rsi] <= l2)) goto L522d;
	l2 = g0532[rsi];
L522d:
	rsi++;
	if (rsi < 10) goto L520a;
	if (l2 != -1) {
	put_char_hi(l88, (unsigned char)((l2 + 37)), 1);
	} else {
	put_char_hi(l88, 32, 3);
	}
#asm
l5262:
	db 08bh,046h,0fah,040h,040h,050h,08bh,046h,0fch,040h,040h,040h,050h,0ffh,076h,0a8h
	call set_cursor_
	db 083h,0c4h,006h,0beh,000h,000h
#endasm
L527b:
	put_char_hi(l88, (unsigned char)(((((unsigned char)pc_class[(432 * p4)] << 1) + rsi) + 58)), 1);
	rsi++;
	if (rsi < 2) goto L527b;
#asm
	db 08bh,046h,0fah,040h,050h,08bh,046h,0fch,040h,040h,040h,050h,0ffh,076h,0a8h
	call set_cursor_
	db 083h,0c4h,006h,0beh,000h,000h
#endasm
L52be:
	if (((unsigned char)pc_equipped[((432 * p4) + rsi)] == 255) || (*(int *)((char *)pc_item_id + ((432 * p4) + ((unsigned char)pc_equipped[((432 * p4) + rsi)] << 3))) <= 0)) goto L530f;
	put_char_hi(l88, (unsigned char)(((unsigned char)pc_item_icon[((432 * p4) + ((unsigned char)pc_equipped[((432 * p4) + rsi)] << 3))] + 1)), 4);
	goto L5324;
L530f:
	put_char_hi(l88, (unsigned char)((rsi + 37)), 4);
L5324:
	rsi++;
	if (rsi < 2) goto L52be;
	f4fac(l88, (l4 + 5), (l6 + 1), *(int *)((char *)pc_hp + (432 * p4)), *(int *)((char *)pc_hp_max + (432 * p4)), 86);
	f4fac(l88, (l4 + 6), (l6 + 1), *(int *)((char *)pc_stamina + (432 * p4)), *(int *)((char *)pc_stamina_max + (432 * p4)), 99);
}
