#asm
	extrn f033f_:near
#endasm
extern int g5144;
f4ecb(p4)
char *p4;
{
	int l2;
	f3118(p4);
	l2 = 0;
	goto L4f1c;
L4edf:
	movmem(((p4 + ((l2 + 1) * ((unsigned char)*p4 << 1))) + 16), ((p4 + (((unsigned char)*p4 << 1) * l2)) + 16), ((unsigned char)*p4 << 1));
	l2++;
L4f1c:
	if (((unsigned char)p4[1] - 1) > l2) goto L4edf;
#asm
	db 08bh,05eh,004h,08ah,047h,001h,02ah,0e4h,048h,050h,08ah,007h,02ah,0e4h,048h,050h
	db 08ah,047h,001h,02ah,0e4h,048h,050h,0b8h,000h,000h,050h,053h
	call f033f_
	db 083h,0c4h,00ah
#endasm
	f31d1(p4);
	f2b19(p4);
	f030b(p4, g5144, ((unsigned char)p4[1] - 1));
}
