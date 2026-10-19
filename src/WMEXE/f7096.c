extern char g442e[];
extern char g44f8[];
extern char g454a[];
extern char g4594[];
extern int g435c;
extern int g4428[];
f7096(p4)
{
	int l2;
	int l4;
	char x4[12];
	int l18;
	register int rsi;
	register int rdi;
	if ((unsigned)g442e[((432 * g435c) + (p4 << 3))] <= 0) goto L722a;
	g442e[((432 * g435c) + (p4 << 3))]--;
#asm
	db 074h,003h,0e9h,065h,001h
#endasm
L70c5:
	l4 = 0;
L70ca:
	if ((unsigned char)g44f8[((432 * g435c) + l4)] != p4) goto L7143;
#asm
	db 08bh,046h,0fch,0ebh,03fh
#endasm
	f6f24(l4);
	goto L7132;
	g454a[(432 * g435c)] = 0;
#asm
	db 0ebh,033h,0b8h,0b0h,001h,0f7h,02eh,05ch,043h,08bh,0d8h,08ah,087h,048h,045h,003h
	db 05eh,0fch,088h,087h,048h,045h,0ebh,01dh,0e6h,070h,0e6h,070h,0efh,070h,0ffh,070h
	db 0ffh,070h,0ffh,070h,0ffh,070h,0ffh,070h
l7125:
	db 03dh,008h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,015h,071h
#endasm
L7132:
	g44f8[((432 * g435c) + l4)] = 255;
L7143:
	l4++;
#asm
	db 08bh,046h,0fch,03dh,008h,000h,07dh,003h
#endasm
	goto L70ca;
L7151:
	*(int *)((char *)g4428 + ((432 * g435c) + (p4 << 3))) = 0;
	g4594[(432 * g435c)]--;
	l2 = p4;
	goto L71e6;
L7180:
	rsi = (((432 * g435c) + (l2 << 3)) + 17456);
	rdi = (((432 * g435c) + (l2 << 3)) + 17448);
#asm
	db 08ch,0d9h,08eh,0c1h,0b9h,004h,000h,0f3h,0a5h,0c7h,046h,0fch,000h,000h
#endasm
L71b7:
	if ((unsigned char)g44f8[((432 * g435c) + l4)] != (l2 + 1)) goto L71d8;
	g44f8[((432 * g435c) + l4)] = *(char *)&l2;
L71d8:
	l4++;
	if (l4 < 8) goto L71b7;
	l2++;
L71e6:
	if ((unsigned char)g4594[(432 * g435c)] > l2) goto L7180;
	f6e60(g435c);
	rsi = f4620(g435c);
	rdi = &l18;
#asm
	db 08ch,0d9h,08eh,0c1h,0b9h,007h,000h,0f3h,0a5h,08ah,046h,0f8h,050h,0b8h,0b0h,001h
	db 0f7h,02eh,05ch,043h,08bh,0d8h,058h,088h,087h,08dh,045h
#endasm
L722a:
	;
}
