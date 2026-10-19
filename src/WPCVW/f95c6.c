f95c6(p4, p6, p8)
char *p4;
{
	int l2;
	int l4;
	char l19[15];
	int l21;
	int l23;
	char x23[1];
	f32be(p4, 32, 3, 0);
	f3118(p4);
	f030b(p4, 2, 1);
	f083f(p6, p4, 18);
	l2 = (unsigned char)p4[6];
	l4 = (unsigned char)p4[7];
	setmem(l19, (p8 + 1), 32);
	l19[(p8 + 1)] = 0;
	f24e9(p4, l19, 1);
	f31d1(p4);
	f2a63();
	f030b(p4, l2, l4);
	f9459(p4, l19, p8, 5, 1);
	l21 = 0;
	l23 = 0;
	if (!l19[0]) goto L9698;
	atol(l19);
#asm
	db 089h,056h,0ebh,089h,046h,0e9h
#endasm
L9698:
	;
#asm
l9698:
	db 08bh,046h,0e9h,08bh,056h,0ebh
#endasm
}
