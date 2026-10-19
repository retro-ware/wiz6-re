#asm
	extrn f3664_:near
#endasm
f49ca()
{
	int l2;
	int l4;
	l4 = open(f0cd6(20496, 1), 0);
	if (l4 != -1) goto L49f9;
	f00d5(3);
L49f9:
	;
#asm
l49f9:
	db 0b8h,000h,000h,050h,0b8h,0aah,051h,0bah,000h,000h,052h,050h,0b8h,000h,000h,0bah
	db 000h,000h,052h,050h,0ffh,076h,0fch
	call f3664_
	db 083h,0c4h,00ch
#endasm
	close(l4);
	l2 = f011a(0, 0, 40, 25, 1, -1, 2, 0);
	f3694(l2, 0);
	f4ee0(10, 84, 52);
	f4ee0(11, 84, 84);
	f36a0(l2);
	f02d2(l2, 0);
}
