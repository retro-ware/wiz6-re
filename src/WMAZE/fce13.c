extern int party_facing;
fce13()
{
	int l2;
	char *l4;
#asm
	db 08bh,04eh,004h,0d1h,0e1h,0a1h,0a8h,04fh,003h,0c1h,005h,040h,002h,089h,046h,0fch
#endasm
	l2 = (party_facing << 1);
	*(l4 + (l2 / 8)) = (char)(*(l4 + (l2 / 8)) & ~(1 << (l2 % 8)));
#asm
	db 08bh,046h,0feh,040h,0b9h,008h,000h,099h,0f7h,0f9h,08bh,0f0h,08ah,000h,098h,050h
	db 08bh,046h,0feh,040h,099h,0f7h,0f9h,08bh,0cah,0bah,001h,000h,0d3h,0e2h,08bh,0cah
	db 058h,00bh,0c1h,088h,000h
#endasm
}
