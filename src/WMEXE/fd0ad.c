extern int g3644;
extern int g435e;
extern int g4fc8;
extern int g50fe[];
fd0ad(p4, p6)
{
	f6d0b(p4, p6, 0);
	if (!g435e) goto Ld0f7;
#asm
	db 0a1h,05eh,043h,03dh,006h,000h,074h,028h
#endasm
	g3644 = 0;
	g50fe[((g435e < 3 ? 0 : 1) * 5)] = 1;
	f773a();
Ld0f7:
	f774b((g4fc8 / 4));
}
