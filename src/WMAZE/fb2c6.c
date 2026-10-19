extern int g4faa;
fb2c6(p4, p6, p8, p10, p12)
{
	int l2;
	int l4;
	int l6;
	int l8;
	if (f7b1b(&l4, &l6, &l8, p4, p6)) goto Lb3a8;
	l2 = (((l8 << 6) + (l6 << 3)) + l4);
	if (p10) goto Lb35b;
	if (p12 == 1) goto Lb329;
	if (f2925((g4faa + 504), l2, 4) != 7) goto Lb359;
Lb329:
	f28da((g4faa + 504), l2, 4, 0);
	f28da((g4faa + 888), l2, 2, 0);
Lb359:
	;
#asm
lb359:
	db 0ebh,04dh
#endasm
Lb35b:
	if (p12 == 1) goto Lb379;
	if (f2925((g4faa + 504), l2, 4)) goto Lb3a8;
Lb379:
	f28da((g4faa + 504), l2, 4, 7);
	f28da((g4faa + 888), l2, 2, p8);
Lb3a8:
	;
}
