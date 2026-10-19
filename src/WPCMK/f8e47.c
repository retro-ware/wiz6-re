#asm
	extrn f8de0_:near
#endasm
extern char g5588;
extern char g5589;
extern char g558a;
extern char g558b;
extern char g559f;
extern char g560d;
f8e47()
{
	int l2;
	int l4;
	l2 = (unsigned char)g559f;
	l4 = 0;
	if (l2 <= 15) goto L8e62;
	l4++;
L8e62:
	if (g560d != 5) goto L8e6c;
	l4++;
L8e6c:
	if (g560d != 6) goto L8e76;
	l4--;
L8e76:
	;
#asm
l8e76:
	db 0a0h,00fh,056h,02ah,0e4h,0e9h,06fh,001h,08bh,046h,0fch,040h,050h,050h,050h,050h
	db 050h,050h
	call f8de0_
	db 083h,0c4h,00ch,0e9h,069h,001h
#endasm
	g5588 = 2;
#asm
	db 08bh,046h,0fch,040h,040h,040h,050h,08bh,046h,0fch,040h,040h,050h,050h,050h,08bh
	db 046h,0fch,040h,040h,040h,050h,050h
	call f8de0_
	db 083h,0c4h,00ch,0e9h,044h,001h
#endasm
	g5589 = 2;
#asm
	db 08bh,046h,0fch,040h,040h,040h,050h,08bh,046h,0fch,040h,040h,050h,08bh,046h,0fch
	db 040h,040h,040h,050h,050h,08bh,046h,0fch,040h,040h,050h,050h
	call f8de0_
	db 083h,0c4h,00ch,0e9h,01ah,001h,08bh,046h,0fch,040h,050h,050h,050h,050h,050h,050h
	call f8de0_
	db 083h,0c4h,00ch,0e9h,007h,001h
#endasm
	g558a = 2;
#asm
	db 08bh,046h,0fch,040h,040h,050h,050h,08bh,046h,0fch,040h,040h,040h,050h,050h,08bh
	db 046h,0fch,040h,040h,050h,08bh,046h,0fch,040h,040h,040h,050h
	call f8de0_
	db 083h,0c4h,00ch,0e9h,0ddh,000h,08bh,046h,0fch,040h,050h,050h,050h,050h,050h,050h
	call f8de0_
	db 083h,0c4h,00ch,0e9h,0cah,000h
#endasm
	g558b = 2;
#asm
	db 08bh,046h,0fch,040h,040h,050h,08bh,046h,0fch,005h,004h,000h,050h,08bh,046h,0fch
	db 040h,040h,050h,050h,050h,050h
	call f8de0_
	db 083h,0c4h,00ch,0e9h,0a6h,000h,08bh,046h,0fch,040h,050h,050h,050h,050h,050h,050h
	call f8de0_
	db 083h,0c4h,00ch,0e9h,093h,000h
#endasm
	g5588 = 1;
	g5589 = 1;
#asm
	db 08bh,046h,0fch,040h,040h,040h,050h,050h,08bh,046h,0fch,040h,050h,050h,050h,050h
	call f8de0_
	db 083h,0c4h,00ch,0ebh,071h,08bh,046h,0fch,040h,050h,050h,050h,050h,050h,050h
	call f8de0_
	db 083h,0c4h,00ch,0ebh,05fh,08bh,046h,0fch,040h,050h,050h,050h,050h,050h,050h
	call f8de0_
	db 083h,0c4h,00ch,0ebh,04dh,08bh,046h,0fch,040h,050h,050h,050h,050h,050h,050h
	call f8de0_
	db 083h,0c4h,00ch,0ebh,03bh,08bh,046h,0fch,040h,050h,050h,050h,050h,050h,050h
	call f8de0_
	db 083h,0c4h,00ch,0ebh,029h,07eh,08eh,091h,08eh,0b6h,08eh,07eh,08eh,0e0h,08eh,0f3h
	db 08eh,01dh,08fh,030h,08fh,054h,08fh,067h,08fh,089h,08fh,09bh,08fh,0adh,08fh,0bfh
	db 08fh
l8fed:
	db 03dh,00eh,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,0d1h,08fh
#endasm
L8ffa:
	;
}
