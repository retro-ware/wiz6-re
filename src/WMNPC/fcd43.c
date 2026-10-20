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
	fc95b(1616, &l160);
	goto Lcdac;
Lcd7c:
	if (l80[0] != 36) goto Lcd9f;
	if (f7038(g6a9c, (unsigned char)l80[(0 + 1)]) == 1) {
	g58c2 = 1;
	}
	goto Lcdac;
Lcd9f:
	fc95b(p4, 20530);
Lcdac:
	;
}
