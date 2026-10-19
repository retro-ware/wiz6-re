extern char g4587[];
extern int g43f4[];
extern int g440c[];
extern int g4fb2;
extern int g57fc;
ff8c6(p4)
{
	long l4;
	char x4[62];
	int l68;
	int l70;
	char l72[2];
	int l74;
	*(int *)(l72 + 0) = f011a(0, 0, 40, 20, 20, -1, 0, 0);
	l74 = f011a(0, 20, 40, 4, 15, -1, 0, 0);
	f31d1(g4fb2);
	f09fb(g4fb2, 0);
	f0882(0, &l68, (unsigned char)g4587[(432 * p4)], 0);
	g57fc = 0;
Lf94f:
	if (*(int *)((char *)g440c + (432 * p4)) >= 16) goto Lf978;
	l4 = *(long *)(l72 + (*(int *)((char *)g440c + (432 * p4)) << 2));
	goto Lf9be;
Lf978:
	l70 = (*(int *)((char *)g440c + (432 * p4)) + -16);
#asm
	db 08bh,046h,0f8h,08bh,056h,0fah,02bh,046h,0f4h,01bh,056h,0f6h,050h,052h,08bh,046h
	db 0bah,099h,08bh,0c8h,08bh,0dah,05ah,058h,050h,052h,0f7h,0e3h,08bh,0d8h,058h,0f7h
	db 0e1h,003h,0d8h,058h,0f7h,0e1h,003h,0d3h,003h,046h,0f8h,013h,056h,0fah,089h,056h
	db 0feh,089h,046h,0fch
#endasm
Lf9be:
	if (*(long *)((char *)g43f4 + (432 * p4)) < l4) goto Lf9ed;
	ff784(*(int *)(l72 + 0), l74, p4);
	goto Lfa0b;
Lf9ed:
	f02d2(l74, 0);
	f02d2(*(int *)(l72 + 0), 0);
	return;
Lfa0b:
	goto Lf94f;
#asm
	db 0ebh,0f7h
#endasm
}
