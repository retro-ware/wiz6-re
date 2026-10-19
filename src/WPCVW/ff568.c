extern char g4514[];
ff568(p4, p6, p8)
char *p4;
{
	int l2;
	int l4;
	int l20[8];
	l2 = 0;
Lf573:
	l20[l2] = 0;
	l2++;
	if (l2 < 8) goto Lf573;
Lf58c:
	l4 = 0;
Lf591:
	l2 = f09e2(7);
	l4++;
#asm
	db 0b8h,0b0h,001h,0f7h,06eh,008h,003h,046h,0feh,08bh,0d8h,080h,0bfh,014h,045h,012h
	db 073h,00fh,08bh,046h,0feh,0d1h,0e0h,08bh,0d8h,003h,0ddh,083h,07fh,0ech,000h,074h
	db 006h
#endasm
Lf5c0:
	if (l4 < 3) goto Lf591;
Lf5c6:
	;
#asm
lf5c6:
	db 0b8h,0b0h,001h,0f7h,06eh,008h,003h,046h,0feh,08bh,0d8h,080h,0bfh,014h,045h,012h
	db 072h,003h
#endasm
	goto Lf6d3;
Lf5db:
	if (l20[l2]) goto Lf6d3;
	l20[l2] = 1;
#asm
	db 0b8h,0b0h,001h,0f7h,06eh,008h,003h,046h,0feh,08bh,0d8h,0feh,087h,014h,045h
#endasm
	f075b(5014, 21902);
	f075b((l2 + 5050), 22416);
	f05c1(21902, 22416, 36);
	fb15f((l2 + 204), p4, 1, (l2 + 5), -5);
	p4[6]++;
	f05a5(p4, (unsigned char)g4514[((432 * p8) + l2)], 2, -1);
	fe8b6(p6, 21902, 1);
	fb15f((l2 + 204), p4, 1, (l2 + 5), 5);
	p4[6]++;
	f05a5(p4, (unsigned char)g4514[((432 * p8) + l2)], 2, 1);
Lf6d3:
	if (f09e2(2)) goto Lf58c;
}
