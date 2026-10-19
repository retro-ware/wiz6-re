#asm
	extrn fc95b_:near
#endasm
extern int g58c2;
extern int g6a9c;
fcd43(p4, p6)
{
	char l80[80];
	char x80[78];
	int l160;
	get_message(p4, l80);
	get_message(p6, &l160);
	if (l80[0]) goto Lcd7c;
#asm
	db 08dh,086h,060h,0ffh,050h,0b8h,050h,006h,050h
	call fc95b_
	db 083h,0c4h,004h,0ebh,030h
#endasm
Lcd7c:
	if (l80[0] != 36) goto Lcd9f;
	if (f7038(g6a9c, (unsigned char)l80[(0 + 1)]) != 1) goto Lcd9d;
	g58c2 = 1;
Lcd9d:
	;
#asm
lcd9d:
	db 0ebh,00dh
#endasm
Lcd9f:
	fc95b(p4, 20530);
Lcdac:
	;
}
