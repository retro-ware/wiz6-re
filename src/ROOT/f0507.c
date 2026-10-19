#asm
	extrn f251d_:near
	extrn strlen_:near
#endasm
f0507(p4, p6, p8, p10, p12)
{
	char l80[80];
	f0453(p6, p8, l80);
L051d:
	if ((strlen(l80) - p10) >= 0) goto L055b;
	if (p12 < 16) goto L0546;
	f23e3(p4, 32, (p12 + -15));
	goto L0556;
L0546:
	f22b7(p4, 32, p12);
L0556:
	p10--;
	goto L051d;
L055b:
	if (p12 < 16) goto L0584;
#asm
	db 08bh,046h,00ch,005h,0f1h,0ffh,050h,08dh,046h,0b0h,050h
	call strlen_
	db 059h,02bh,046h,00ah,08dh,04eh,0b0h,003h,0c1h,050h,0ffh,076h,004h
	call f251d_
	db 083h,0c4h,006h,0ebh,01dh
#endasm
L0584:
	f24e9(p4, ((strlen(l80) - p10) + l80), p12);
L05a1:
	;
}
