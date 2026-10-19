#asm
	extrn $ldv:near
#endasm
f5ed5(p4, p6, p8, p10, p12, p14)
{
	int l2;
	char l3;
	char l4;
	char l5;
	char x5[1];
#asm
	db 08bh,046h,00ah,0bbh,064h,000h,0f7h,0ebh,050h,052h,08bh,046h,00ch,099h,08bh,0c8h
	db 08bh,0dah,05ah,058h
	call $ldv
	db 0b9h,00ah,000h,0bbh,000h,000h
	call $ldv
	db 040h,089h,046h,0feh,03dh,00ah,000h,07eh,005h
#endasm
	l2 = 10;
L5f09:
	if (p10) goto L5f14;
	l2 = 0;
L5f14:
	l5 = (char)(p14 + 9);
	l4 = (char)(p14 + 4);
	l3 = *(char *)&p14;
	if (l2 > 3) goto L5f3d;
	l3 = (char)(p14 + l2);
	goto L5f77;
L5f3d:
	l3 = (char)(p14 + 3);
	l2 += -3;
	if (l2 > 4) goto L5f5e;
	l4 = (char)((p14 + l2) + 4);
	goto L5f77;
L5f5e:
	l4 = (char)(p14 + 8);
	l2 += -4;
	l5 = (char)((p14 + l2) + 9);
L5f77:
	f030b(p4, p6, p8);
	f23e3(p4, (unsigned char)l5, 1);
	f030b(p4, p6, (p8 + 1));
	f23e3(p4, (unsigned char)l4, 1);
	f030b(p4, p6, (p8 + 2));
	f23e3(p4, (unsigned char)l3, 1);
}
