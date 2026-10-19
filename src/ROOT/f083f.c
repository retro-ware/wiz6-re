#asm
	extrn f251d_:near
#endasm
f083f(p4, p6, p8)
{
	char x0[78];
	int l80;
	f075b(p4, &l80);
	if (p8 < 16) goto L086e;
#asm
	db 08bh,046h,008h,005h,0f1h,0ffh,050h,08dh,046h,0b0h,050h,0ffh,076h,006h
	call f251d_
	db 083h,0c4h,006h,0ebh,010h
#endasm
L086e:
	f24e9(p6, &l80, p8);
L087e:
	;
}
