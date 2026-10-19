#asm
	extrn lseek_:near
#endasm
extern char g3070[];
extern char g3080[];
extern char g30c0[];
extern char g31c0[];
extern char g32c0[];
extern char g3338[];
extern int g0842;
extern int g3300[];
f0882(p4, p6, p8, p10)
{
	char x0[253];
	int l255;
	char x255[1];
	switch (p4) {
case 2:
case 3:
	p8 = (unsigned char)g3070[p8];
	goto L08f2;
case 5:
	p8 = (unsigned char)g3080[p8];
	goto L08f2;
case 7:
	p8 = (unsigned char)g30c0[p8];
	goto L08f2;
case 4:
	p8 = (unsigned char)g31c0[p8];
	goto L08f2;
case 8:
	p8 = (unsigned char)g32c0[p8];
	goto L08f2;
	}
L08f2:
	f3640();
#asm
	db 0b8h,000h,000h,050h,08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,08fh,000h,033h,08bh
	db 046h,008h,08bh,0d9h,0f7h,0ebh,08bh,04eh,004h,0d1h,0e1h,0d1h,0e1h,08bh,0d9h,08bh
	db 08fh,048h,030h,08bh,09fh,04ah,030h,003h,0c1h,013h,0d3h,052h,050h,0ffh,036h,042h
	db 008h
	call lseek_
	db 083h,0c4h,008h
#endasm
	if (g3338[p4]) goto L0971;
	if (p10) goto L0951;
	read(g0842, p6, g3300[p4]);
	goto L096f;
L0951:
	if (p10 != 1) goto L096f;
	write(g0842, p6, g3300[p4]);
L096f:
	;
#asm
l096f:
	db 0ebh,02eh
#endasm
L0971:
	if (p10) goto L099f;
	read(g0842, &l255, g3300[p4]);
	f29d9(&l255, p6);
L099f:
	;
}
