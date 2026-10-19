#asm
	extrn f06aa_:near
#endasm
extern char g1c3e[];
extern int g303e;
extern int g3042;
f075b(p4, p6)
{
	int l2;
	int l4;
	int l6;
	char *l8;
	int l10;
	char l265[255];
	char x265[1];
	l8 = f063a(p4);
#asm
	db 085h,0c0h,075h,00ah
#endasm
	g3042 = 1;
	return;
L077a:
	;
#asm
l077a:
	db 08bh,0d8h,08ah,047h,005h,02ah,0e4h,03bh,006h,03eh,030h,074h,005h,050h
	call f06aa_
	db 059h
#endasm
L078c:
	l2 = *(int *)(l8 + 2);
	l4 = *(int *)l8;
L079a:
	if (p4 == l4) goto L07b6;
	l2 = (((unsigned char)g1c3e[l2] + l2) + 1);
	l4++;
	goto L079a;
L07b6:
	l6 = (unsigned char)g1c3e[l2];
	l2++;
	l4 = l6;
	l10 = l265;
	if ((l2 + l4) <= 1024) goto L080b;
	movmem((l2 + 7230), l10, (1024 - l2));
	l4 -= (1024 - l2);
	l10 += (1024 - l2);
	f06aa((g303e + 1));
	l2 = 0;
L080b:
	movmem((l2 + 7230), l10, l4);
	l265[l6] = 0;
	f29d9(l265, p6);
	g3042 = 0;
	return;
}
