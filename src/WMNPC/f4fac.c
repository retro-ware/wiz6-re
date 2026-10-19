#asm
	extrn $ldv:near
#endasm
f4fac(p4, p6, p8, p10, p12, p14)
{
	char l3[3];
	char x3[1];
	register int rsi;
#asm
	db 08bh,046h,00ah,0bbh,064h,000h,0f7h,0ebh,050h,052h,08bh,046h,00ch,099h,08bh,0c8h
	db 08bh,0dah,05ah,058h
	call $ldv
	db 0b9h,00ah,000h,0bbh,000h,000h
	call $ldv
	db 08bh,0f0h,040h,08bh,0f0h,083h,0feh,00ah,07eh,003h
#endasm
	rsi = 10;
L4fe0:
	if (p10) goto L4fe9;
	rsi = 0;
L4fe9:
	l3[0] = (char)(p14 + 9);
	l3[1] = (char)(p14 + 4);
	l3[2] = *(char *)&p14;
	if (rsi > 3) goto L5010;
	l3[2] = (char)(p14 + rsi);
	goto L5045;
L5010:
	l3[2] = (char)(p14 + 3);
	rsi -= 3;
	if (rsi > 4) goto L502e;
	l3[1] = (char)((p14 + rsi) + 4);
	goto L5045;
L502e:
	l3[1] = (char)(p14 + 8);
	rsi = (rsi + -4);
	l3[0] = (char)((p14 + rsi) + 9);
L5045:
	rsi = 0;
L5048:
	f030b(p4, p6, (p8 + rsi));
	f23e3(p4, (unsigned char)*(char *)((l3 + rsi)), 1);
	rsi++;
	if (rsi < 3) goto L5048;
}
