#asm
	extrn f02f0_:near
#endasm
extern char *g4fb6;
f5af6(p4, p6, p8, p10, p12, p14, p16, p18)
char *p6;
char *p8;
char *p10;
{
	int l2;
#asm
	db 0b8h,001h,000h,050h,0ffh,036h,0b6h,04fh
	call f02f0_
	db 083h,0c4h,004h,08bh,05eh,006h,080h,03fh,000h,074h,005h,0b8h,001h,000h,0ebh,003h
l5b17:
	db 0b8h,000h,000h
l5b1a:
	db 08bh,05eh,008h,080h,03fh,000h,074h,005h,0b9h,001h,000h,0ebh,003h
l5b27:
	db 0b9h,000h,000h
l5b2a:
	db 003h,0c1h,08bh,05eh,00ah,080h,03fh,000h,074h,005h,0b9h,001h,000h,0ebh,003h
#endasm
L5b39:
	;
#asm
l5b39:
	db 0b9h,000h,000h
#endasm
L5b3c:
	;
#asm
l5b3c:
	db 003h,0c1h,040h,089h,046h,0feh
#endasm
	f030b(g4fb6, (20 - (((((strlen(((432 * p4) + 17384)) + strlen(p6)) + strlen(p8)) + strlen(p10)) + l2) / 2)), 1);
	f24e9(g4fb6, ((432 * p4) + 17384), p12);
	g4fb6[6]++;
	if (!*p6) goto L5bd1;
	f24e9(g4fb6, p6, p14);
	g4fb6[6]++;
L5bd1:
	if (!*p8) goto L5bee;
	f24e9(g4fb6, p8, p16);
	g4fb6[6]++;
L5bee:
	if (!*p10) goto L5c0b;
	f24e9(g4fb6, p10, p18);
	g4fb6[6]++;
L5c0b:
	;
}
