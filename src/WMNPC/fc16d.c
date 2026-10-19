#asm
	extrn strncpy_:near
#endasm
extern int g51b6;
extern int g5894;
fc16d(p4, p6)
{
	char l82[82];
	int l84;
	int l86;
	int l126[20];
	char x126[2];
	int l130;
	int l132;
	int l134;
	register int rsi;
	f075b(g51b6, ((char *)l82 + 2));
	l132 = (unsigned char)l82[(0 + 2)];
	l134 = (unsigned char)l82[3];
	l84 = 0;
	l86 = 2;
Lc19f:
	*(int *)(l82 + 0) = f3350((l86 + ((char *)l82 + 2)), 47);
	if (*(int *)(l82 + 0) == -1) goto Lc1d5;
	l126[l84] = l86;
	l86 = ((l86 + *(int *)(l82 + 0)) + 1);
	l84++;
	goto Lc19f;
Lc1d5:
	l126[l84] = l86;
	if (p6) goto Lc207;
	if (l84 <= l132) goto Lc1fa;
	l84 = l132;
Lc1fa:
	l130 = f09e2(l84);
	goto Lc221;
Lc207:
	l84 -= l134;
	l130 = (f09e2(l84) + l134);
Lc221:
	*(int *)(l82 + 0) = (l126[(l130 + 1)] - l126[l130]);
#asm
	db 050h,08bh,0c1h,08dh,04eh,0b0h,003h,0c1h,050h,0ffh,076h,004h
	call strncpy_
	db 083h,0c4h,006h,08bh,05eh,004h,08bh,076h,0aeh,0c6h,040h,0ffh,000h
#endasm
	strcpy(((char *)l82 + 2), p4);
	l82[(*(int *)(l82 + 0) + 1)] = 32;
	l82[(*(int *)(l82 + 0) + 2)] = 0;
	g5894 = fbea1(((char *)l82 + 2), 22678);
}
