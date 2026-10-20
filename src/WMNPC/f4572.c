#asm
	extrn random_:near
#endasm
extern char g3648[];
extern char g3649[];
extern char g364a[];
extern char g375b[];
extern char g375c[];
extern char g3813[];
extern char g3816[];
extern char pic_slot_monster[];
f4572(p4, p6)
{
	int l2;
	register int rsi;
	register int rdi;
	rsi = 0;
	goto L469d;
L4580:
	if (((unsigned)g3813[(314 * p4)] <= 0) || ((unsigned char)g3813[(314 * p4)] == 255)) goto L45bd;
#asm
	db 0b9h,019h,000h,099h,0f7h,0f9h,08bh,0f8h,089h,056h,0feh
#endasm
	if ((pic_slot_monster[p4] != 54) || (rsi)) goto L45bb;
	rdi = 0;
	l2 = 0;
L45bb:
	goto L4614;
L45bd:
	;
#asm
l45bd:
	db 0b8h,03ah,001h,0f7h,06eh,004h,003h,0c6h,08bh,0d8h,08ah,087h,03ch,037h,02ah,0e4h
	db 050h
	call random_
	db 059h,08bh,0f8h,0b8h,03ah,001h,0f7h,06eh,004h,003h,0c6h,08bh,0d8h,08ah,087h,032h
	db 037h,02ah,0e4h,003h,0f8h,0b8h,03ah,001h,0f7h,06eh,004h,003h,0c7h,08bh,0d8h,08ah
	db 087h,050h,037h,02ah,0e4h,050h
	call random_
	db 059h,050h,0b8h,03ah,001h,0f7h,06eh,004h,003h,0c7h,08bh,0d8h,08ah,087h,046h,037h
	db 02ah,0e4h,08bh,0c8h,058h,003h,0c1h,089h,046h,0feh
#endasm
L4614:
	g3648[((p6 * 30) + (rsi * 3))] = rdi;
	g3649[((p6 * 30) + (rsi * 3))] = *(char *)&l2;
	g364a[((p6 * 30) + (rsi * 3))] = (char)(random((unsigned char)g375c[((314 * p4) + (l2 << 2))]) + (unsigned char)g375b[((314 * p4) + (l2 << 2))]);
	rsi++;
L469d:
	if ((unsigned char)g3816[(314 * p4)] > rsi) goto L4580;
}
