extern int party_facing;
fce13()
{
	int l2;
	char *l4;
#asm
	db 08bh,04eh,004h,0d1h,0e1h,0a1h,0a8h,04fh,003h,0c1h,005h,040h,002h,089h,046h,0fch
#endasm
	l2 = (party_facing << 1);
	*(l4 + (l2 / 8)) &= ~(1 << (l2 % 8));
	*(l4 + ((l2 + 1) / 8)) |= (1 << ((l2 + 1) % 8));
}
