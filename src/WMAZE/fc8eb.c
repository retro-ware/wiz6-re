#asm
	extrn f9e51_:near
	extrn fa385_:near
	extrn fa386_:near
	extrn fa5cd_:near
	extrn fa68d_:near
	extrn fa6a8_:near
	extrn fa88c_:near
	extrn fae49_:near
	extrn fb123_:near
	extrn fb1c6_:near
	extrn fb252_:near
	extrn fb53d_:near
	extrn fb9a2_:near
	extrn fbaed_:near
	extrn fbc93_:near
	extrn fc0bf_:near
	extrn fc182_:near
	extrn fc363_:near
	extrn fc477_:near
#endasm
extern int g363a;
extern int g4ee8;
extern int g4f8a;
extern int g4f9c;
extern int g4f9e;
extern int g4fa0;
extern int g5034;
extern int g5230;
extern int g5232;
fc8eb()
{
	register int rsi;
	g4f8a = -1;
	g5230 = 0;
Lc8f8:
	g4ee8 = f7bd2(g4fa0, g4f9e, g4f9c, g4ee8);
	if (g4ee8 == -1) goto Lca26;
	g5232 = 1;
#asm
	db 08bh,01eh,0a8h,04fh,08bh,0f0h,08ah,080h,060h,003h,02ah,0e4h,0e9h,0d4h,000h
#endasm
	fa311();
	goto Lca0f;
	if (!g5034) goto Lc93e;
	f9f8c();
Lc93e:
	goto Lca0f;
#asm
	call fa386_
	db 0e9h,0c8h,000h
	call fb1c6_
	db 0e9h,0c2h,000h
	call fb252_
	db 0e9h,0bch,000h
	call fc0bf_
	db 0e9h,0b6h,000h
	call fa5cd_
	db 0e9h,0b0h,000h,0a1h,0e8h,04eh,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,083h,038h
	db 000h,07eh,00eh,0b8h,000h,000h,050h,0ffh,030h
	call f9e51_
	db 083h,0c4h,004h,0ebh,003h
#endasm
Lc97d:
	fa4f5();
Lc980:
	;
#asm
lc980:
	db 0e9h,08ch,000h
	call fae49_
	db 0e9h,086h,000h
	call fa6a8_
	db 0e9h,080h,000h
	call fa88c_
	db 0e9h,07ah,000h
	call fbc93_
	db 0e9h,074h,000h
	call fc182_
	db 0ebh,06fh,0ebh,06dh
	call fb123_
	db 0ebh,068h
	call fa68d_
	db 0ebh,063h
	call fa385_
	db 0ebh,05eh,0ebh,05ch,0ebh,05ah
	call fb53d_
	db 0ebh,055h
	call fb9a2_
	db 0ebh,050h
	call fbaed_
	db 0ebh,04bh
	call fc363_
	db 0ebh,046h
	call fc477_
	db 0ebh,041h,00fh,0cah,02eh,0c9h,034h,0c9h,041h,0c9h,047h,0c9h,04dh,0c9h,053h,0c9h
	db 059h,0c9h,05fh,0c9h,083h,0c9h,089h,0c9h,08fh,0c9h,095h,0c9h,09bh,0c9h,0a0h,0c9h
	db 0a0h,0c9h,0a2h,0c9h,0a7h,0c9h,0ach,0c9h,0b1h,0c9h,0b3h,0c9h,0b5h,0c9h,0bah,0c9h
	db 0bfh,0c9h,0c4h,0c9h,0c9h,0c9h
lca02:
	db 03dh,01ah,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,0ceh,0c9h
#endasm
Lca0f:
	if (g363a == 5) goto Lca18;
	return;
Lca18:
	if (g5232 != 1) goto Lca23;
	g4ee8++;
Lca23:
	goto Lc8f8;
Lca26:
	if (g5230 != 1) goto Lca30;
	f2a63();
Lca30:
	return;
}
