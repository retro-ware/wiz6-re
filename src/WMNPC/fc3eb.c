fc3eb(p4)
char *p4;
{
	int l2;
	char l162[160];
	int l164;
	int l166;
	int l168;
	strcpy(((char *)l162 + 80), p4);
	l168 = 0;
	l164 = 0;
Lc40c:
	;
#asm
lc40c:
	db 08bh,09eh,05ch,0ffh,003h,0ddh,080h,07fh,0aeh,020h,075h,006h
#endasm
	l164++;
	goto Lc40c;
	if ((l166 = fc282(((char *)l162 + 80), l164)) == -1) goto Lc4aa;
	strncpy(l162, (l164 + ((char *)l162 + 80)), (l166 - l164));
	l162[(l166 - l164)] = 32;
	l162[((l166 - l164) + 1)] = 0;
	fc2bf(l162);
	l2 = 0;
#asm
	db 0ebh,01ah
#endasm
Lc475:
	*(p4 + (l168 + l2)) = l162[l2];
	l2++;
Lc48f:
	if (strlen(l162) > l2) goto Lc475;
	l168 += strlen(l162);
Lc4aa:
	l164 = l166;
	if (l164 != -1) goto Lc40c;
	*(p4 + l168) = 0;
}
