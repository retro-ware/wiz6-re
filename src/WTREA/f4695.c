extern char g038e[];
extern char g038f[];
extern char g3746[];
extern char g375a[];
f4695(p4, p6, p8)
{
	int l2;
	int l4;
	int l14[5];
	int l16;
	int l18;
	int l20;
	char l32[12];
	if (p8 != 3) goto L46a8;
	return -1;
L46a8:
	l16 = (p6 >= 5 ? (p6 < 13 ? 8 : 9) : 7);
#asm
	db 08bh,046h,006h,050h,03dh,005h,000h,058h,07ch,010h,03dh,00dh,000h,07dh,005h,005h
	db 0fbh,0ffh,0ebh,006h
#endasm
L46d4:
	;
#asm
l46d4:
	db 08bh,046h,006h,005h,0f3h,0ffh
#endasm
L46da:
	;
#asm
l46da:
	db 089h,046h,0f8h
#endasm
	l20 = 1;
	l14[0] = 0;
	l14[1] = 1;
	l14[2] = 2;
	if (p4 == -1) goto L4706;
	if ((p4 % 2)) goto L4734;
L4706:
	l18 = 0;
#asm
	db 08bh,046h,006h,03dh,006h,000h,074h,014h,03dh,008h,000h,074h,00fh,03dh,00ah,000h
	db 07ch,005h,03dh,00dh,000h,07eh,005h
#endasm
L4722:
	;
#asm
l4722:
	db 03dh,00fh,000h,075h,005h
#endasm
L4727:
	;
#asm
l4727:
	db 0b8h,000h,000h,0ebh,003h
#endasm
L472c:
	;
#asm
l472c:
	db 0b8h,001h,000h
#endasm
L472f:
	;
#asm
l472f:
	db 089h,046h,0fah
#endasm
	goto L4760;
L4734:
	l18 = 1;
#asm
	db 08bh,046h,006h,03dh,006h,000h,074h,014h,03dh,008h,000h,074h,00fh,03dh,00ah,000h
	db 07ch,005h,03dh,00dh,000h,07eh,005h
#endasm
L4750:
	;
#asm
l4750:
	db 03dh,00fh,000h,075h,005h
#endasm
L4755:
	;
#asm
l4755:
	db 0b8h,001h,000h,0ebh,003h
#endasm
L475a:
	;
#asm
l475a:
	db 0b8h,000h,000h
#endasm
L475d:
	;
#asm
l475d:
	db 089h,046h,0fah
#endasm
L4760:
	l2 = (unsigned char)g3746[((314 * l16) + l14[3])];
	l4 = ((unsigned char)g375a[((314 * l16) + (l2 << 2))] + l14[p8]);
	l32[0] = *(char *)&l4;
	l32[(0 + 1)] = 0;
	f3670(l16, (unsigned char)g038e[((((p6 * 24) + (l20 * 12)) + (l18 * 6)) + (p8 << 1))], (unsigned char)g038f[((((p6 * 24) + (l20 * 12)) + (l18 * 6)) + (p8 << 1))], 72, 248, l14[4], 0, l32);
	return (p8 + 1);
}
