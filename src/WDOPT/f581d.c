extern int g50fe[];
extern int g5132[];
extern int g5178;
extern int g517a[];
/* Choose the corner glyph of overhead map cell col, row. */
set_map_corner(col, row)
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	l2 = -1;
	l4 = 1;
	l6 = 2;
	if (*(int *)((char *)g50fe + ((col * 10) + (row << 1))) == -1) goto L5855;
	l2 = g5178;
L5855:
	;
#asm
l5855:
	db 083h,0bfh,032h,051h,0ffh,074h,00bh
#endasm
	l2 = g5178;
	l6 = 0;
L5867:
	l8 = (col - 1);
#asm
	db 03dh,000h,000h,07ch,025h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh
	db 04eh,006h,0d1h,0e1h,003h,0c1h,08bh,0d8h,083h,0bfh,0feh,050h,0ffh,074h,00bh
#endasm
	l2 = g5178;
	l4 = 0;
	if ((l10 = (row - 1)) < 0) goto L58c7;
	if (*(int *)((char *)g5132 + ((col * 10) + (l10 << 1))) == -1) goto L58c7;
	l2 = g5178;
L58c7:
	if (l2 == -1) goto L58f4;
	*(int *)((char *)g517a + ((col * 10) + (row << 1))) = ((l2 + l4) + l6);
L58f4:
	;
}
