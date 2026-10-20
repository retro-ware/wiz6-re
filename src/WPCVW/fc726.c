#asm
	extrn strcpy_:near
#endasm
extern char pc_equipped[];
extern int g567c[];
extern int item_row_color[];
extern int pc_item_id[];
extern int pc_item_qty[];
extern int pc_item_type[];
extern int pc_item_weight[];
fc726(p4)
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	int l14;
	char x14[14];
	int l30;
	int l32;
	register int rsi;
	register int rdi;
	l10 = 0;
	l14 = 0;
Lc738:
	if (l10 >= 8) goto Lc8bc;
	rsi = (unsigned char)pc_equipped[((432 * p4) + l10)];
	if (rsi == 255) goto Lc8b6;
	l8 = *(int *)((char *)pc_item_id + ((432 * p4) + (rsi << 3)));
	l6 = *(int *)((char *)pc_item_weight + ((432 * p4) + (rsi << 3)));
	l4 = *(int *)((char *)pc_item_type + ((432 * p4) + (rsi << 3)));
	l2 = *(int *)((char *)pc_item_qty + ((432 * p4) + (rsi << 3)));
	strcpy(&l30, ((rsi << 4) + 21982));
	l32 = item_row_color[rsi];
	l12 = rsi;
	goto Lc83f;
Lc7b3:
	;
#asm
lc7b3:
	db 056h,057h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,04eh,0f4h,0d1h,0e1h,0d1h,0e1h,0d1h
	db 0e1h,003h,0c1h,08bh,0f0h,005h,020h,044h,08bh,0f0h,0b8h,0b0h,001h,0f7h,06eh,004h
	db 003h,0c1h,08bh,0f8h,005h,028h,044h,08bh,0f8h,08ch,0d9h,08eh,0c1h,0b9h,004h,000h
	db 0f3h,0a5h,05fh,05eh,08bh,046h,0f4h,0b9h,004h,000h,0d3h,0e0h,005h,0ceh,055h,050h
	db 08bh,046h,0f4h,0d3h,0e0h,005h,0deh,055h,050h
	call strcpy_
	db 083h,0c4h,004h
#endasm
	item_row_color[l12] = g567c[l12];
	rdi = l10;
	rdi++;
	goto Lc837;
Lc817:
	if ((unsigned char)pc_equipped[((432 * p4) + rdi)] == (l12 - 1)) {
	pc_equipped[((432 * p4) + rdi)] = *(char *)&l12;
	}
	rdi++;
Lc837:
	if (rdi < 8) goto Lc817;
	l12--;
Lc83f:
	if (l12 > l14) goto Lc7b3;
#asm
lc84a:
	db 0b8h,0b0h,001h,0f7h,06eh,004h,08bh,04eh,0f2h,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h,003h
	db 0c1h,08bh,0d8h,08bh,046h,0f8h,089h,087h,028h,044h,08bh,046h,0fah,089h,087h,02ah
	db 044h,08bh,046h,0fch,089h,087h,02ch,044h,08bh,046h,0feh,089h,087h,02eh,044h,08ah
	db 046h,0f2h,050h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0c8h,003h,046h,0f6h,08bh,0d8h
	db 058h,088h,087h,0f8h,044h
#endasm
	strcpy(((l14 << 4) + 21982), &l30);
	item_row_color[l14] = l32;
	l14++;
Lc8b6:
	l10++;
	goto Lc738;
Lc8bc:
	;
}
