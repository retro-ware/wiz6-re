#asm
	extrn $ldv:near
#endasm
f4cd5(p4, p6, p8, p10, p12, p14)
{
	int l2;
	char l5[3];
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
L4d09:
	if (p10) goto L4d14;
	l2 = 0;
L4d14:
	l5[0] = (char)(p14 + 9);
	l5[1] = (char)(p14 + 4);
	l5[2] = *(char *)&p14;
	if (l2 > 3) goto L4d3d;
	l5[2] = (char)(p14 + l2);
	goto L4d77;
L4d3d:
	l5[2] = (char)(p14 + 3);
	l2 += -3;
	if (l2 > 4) goto L4d5e;
	l5[1] = (char)((p14 + l2) + 4);
	goto L4d77;
L4d5e:
	l5[1] = (char)(p14 + 8);
	l2 += -4;
	l5[0] = (char)((p14 + l2) + 9);
L4d77:
	l2 = 0;
L4d7c:
	f030b(p4, p6, (p8 + l2));
	f23e3(p4, (unsigned char)l5[l2], 1);
	l2++;
	if (l2 < 3) goto L4d7c;
}
