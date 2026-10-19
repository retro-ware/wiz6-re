#asm
	extrn f030b_:near
	extrn f05a5_:near
	extrn f24e9_:near
	extrn f251d_:near
#endasm
extern char g442d[];
extern char g4594[];
f7017(p4, p6, p8, p10)
char *p4;
{
	register int rsi;
	register int rdi;
	f6029(p4, 0);
	f3118(p4);
	rsi = -2;
L7033:
	if ((p8 + rsi) < 0) goto L71a1;
	if ((unsigned char)g4594[(432 * p6)] <= (p8 + rsi)) goto L71a1;
	f030b(p4, 2, (rsi + 2));
	if (p10 != 1) goto L7102;
	if (rsi) goto L7102;
#asm
l707b:
	db 0b8h,003h,000h,050h,08bh,046h,008h,003h,0c6h,0b9h,004h,000h,0d3h,0e0h,08bh,0c8h
	db 08bh,046h,00ch,003h,0c1h,050h,0ffh,076h,004h
	call f24e9_
	db 083h,0c4h,006h,08bh,046h,008h,003h,0c6h,0d1h,0e0h,08bh,0f8h,08bh,05eh,00eh,083h
	db 039h,000h,07eh,03bh
#endasm
L70ab:
	if ((unsigned)p4[6] >= 15) goto L70c5;
	f22b7(p4, 32, 3);
	goto L70ab;
L70c5:
	;
#asm
l70c5:
	db 0b8h,001h,000h,050h,0b8h,003h,000h,050h,08bh,046h,008h,003h,0c6h,0d1h,0e0h,08bh
	db 0f8h,08bh,05eh,00eh,0ffh,031h,0ffh,076h,004h
	call f05a5_
	db 083h,0c4h,008h
#endasm
	goto L7100;
L70e6:
	if ((unsigned)p4[6] >= 18) goto L7100;
	f22b7(p4, 32, 3);
	goto L70e6;
L7100:
	goto L7163;
L7102:
	;
#asm
l7102:
	db 0b8h,003h,000h,050h,08bh,046h,008h,003h,0c6h,0b9h,004h,000h,0d3h,0e0h,08bh,0c8h
	db 08bh,046h,00ch,003h,0c1h,050h,0ffh,076h,004h
	call f251d_
	db 083h,0c4h,006h,08bh,046h,008h,003h,0c6h,0d1h,0e0h,08bh,0f8h,08bh,05eh,00eh,083h
	db 039h,000h,07eh,031h,08bh,0c6h,040h,040h,050h,0b8h,00fh,000h,050h,0ffh,076h,004h
	call f030b_
	db 083h,0c4h,006h,0b8h,012h,000h,050h,0b8h,003h,000h,050h,08bh,046h,008h,003h,0c6h
	db 0d1h,0e0h,08bh,0f8h,08bh,05eh,00eh,0ffh,031h,0ffh,076h,004h
	call f05a5_
	db 083h,0c4h,008h
#endasm
L7163:
	f030b(p4, 18, (rsi + 2));
	f23e3(p4, (unsigned char)(((unsigned char)g442d[((432 * p6) + ((p8 + rsi) << 3))] + 1)), 4);
L71a1:
	rsi++;
	if (rsi <= 2) goto L7033;
	f31d1(p4);
	f2b19(p4);
}
