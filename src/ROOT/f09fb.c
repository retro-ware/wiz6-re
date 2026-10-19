#asm
	extrn f32be_:near
#endasm
f09fb(p4, p6)
{
	if (p6) goto L0a0b;
	f3118(p4);
L0a0b:
	;
#asm
l0a0b:
	db 0b8h,000h,000h,050h,0b8h,003h,000h,050h,0b0h,01eh,08bh,04eh,004h,03bh,00eh,042h
	db 033h,075h,002h,0b0h,01ch
#endasm
L0a20:
	;
#asm
l0a20:
	db 02ah,0e4h,050h,051h
	call f32be_
	db 083h,0c4h,008h
#endasm
	f2b19(p4);
	if (p6) goto L0a3e;
	f31d1(p4);
L0a3e:
	;
}
