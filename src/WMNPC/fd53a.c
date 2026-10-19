extern char *g5264;
fd53a(p4, p6, p8)
{
	char l50[50];
	char *l52;
	char x52[18];
	int l72;
	char l152[80];
	int l154;
	int l156;
	int l158;
	f075b(p6, l152);
	f075b(1513, &l72);
	f05c1(&l72, ((432 * p4) + 17384), 94);
	l156 = (37 - strlen(&l72));
Ld588:
	fc999((p6 + 2));
	f24e9(g5264, &l72, 1);
	g5264[6]++;
	f57ac(g5264, l50, l156, 6, 0);
	f4f73(g5264);
	l154 = strlen(l50);
	l50[l154] = 32;
	l50[(l154 + 1)] = 0;
	fc3eb(l50);
	l154 = 0;
	l158 = f3350((l154 + ((char *)l152 + 1)), 47);
	l52 = l50;
Ld612:
	if (!*l52) goto Ld649;
	if (strncmp(l52, (l154 + ((char *)l152 + 1)), l158)) goto Ld644;
	return (unsigned char)l152[l154];
Ld644:
	l52++;
	goto Ld612;
Ld649:
	l154 = ((l154 + l158) + 2);
#asm
	db 08bh,09eh,066h,0ffh,003h,0ddh,080h,0bfh,068h,0ffh,000h,075h,08fh
#endasm
	if (p8 != 1) goto Ld66f;
	return 1;
Ld66f:
	goto Ld588;
#asm
	db 0ebh,0cch
#endasm
}
