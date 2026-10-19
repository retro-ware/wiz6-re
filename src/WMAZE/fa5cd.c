#asm
	extrn f2962_:near
	extrn f9e51_:near
#endasm
fa5cd()
{
	int l2;
	int l4;
	int l6;
	register int rsi;
#asm
	db 0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,083h,038h,000h,07eh,00ch
	db 0b8h,000h,000h,050h,0ffh,030h
	call f9e51_
	db 083h,0c4h,004h
#endasm
La5f0:
	l4 = 0;
	l2 = 0;
La5fa:
	;
#asm
la5fa:
	db 0b8h,002h,000h,050h,08bh,046h,0feh,0d1h,0e0h,050h,0a1h,0e8h,04eh,0d1h,0e0h,08bh
	db 0f0h,08bh,01eh,0a8h,04fh,0ffh,0b0h,040h,002h
	call f2962_
	db 083h,0c4h,006h,08bh,04eh,0feh,0d1h,0e1h,08bh,0d9h,089h,087h,0e0h,04eh,0b8h,002h
	db 000h,050h,083h,0c1h,008h,08bh,0c1h,050h,0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh
	db 01eh,0a8h,04fh,0ffh,0b0h,040h,002h
	call f2962_
	db 083h,0c4h,006h,03dh,002h,000h,075h,005h
#endasm
	l4 = 1;
La64d:
	l2++;
	if (l2 < 4) goto La5fa;
	if (!l4) goto La661;
	fa4f5();
La661:
	;
#asm
la661:
	db 08bh,01eh,0a8h,04fh,08bh,036h,0e8h,04eh,08ah,080h,030h,006h,02ah,0e4h,089h,046h
	db 0fah
#endasm
	fa1bc(f2962(l6, 5, 2));
}
