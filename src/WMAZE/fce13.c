extern char *g4fa8;
extern int party_facing;
fce13(p4)
{
	int l2;
	char *l4;
	l4 = ((g4fa8 + (p4 << 1)) + 576);
	l2 = (party_facing << 1);
	*(l4 + (l2 / 8)) = (char)(*(l4 + (l2 / 8)) & ~(1 << (l2 % 8)));
#asm
	db 08bh,046h,0feh,040h,0b9h,008h,000h,099h,0f7h,0f9h,08bh,0f0h,08ah,000h,098h,050h
	db 08bh,046h,0feh,040h,099h,0f7h,0f9h,08bh,0cah,0bah,001h,000h,0d3h,0e2h,08bh,0cah
	db 058h,00bh,0c1h,088h,000h
#endasm
}
