#asm
	extrn $ldv:near
#endasm
extern char g450c[];
extern char g4514[];
extern int g3342;
extern int g4404[];
extern int g4f9a;
extern int g4fca;
fced8(p4, p6)
{
	int l2;
	int l4;
	int l6;
	int l8;
	char x8[2];
	char *l12;
	char x12[38];
	int l52;
	int l54;
	int l56;
	int l58;
	int l60;
	int l62;
	register int rsi;
	f0bd1();
	l12 = f011a(20, 19, 20, 5, 20, -1, 0, 0);
	f32be(l12, 32, 1, 0);
	fceb2(l12, 0, 0, 17);
	fceb2(l12, 19, 0, 19);
	fceb2(l12, 0, 1, 4);
	fceb2(l12, 19, 1, 5);
	fceb2(l12, 0, 2, 9);
	fceb2(l12, 19, 2, 10);
	fceb2(l12, 0, 3, 4);
	fceb2(l12, 19, 3, 5);
	fceb2(l12, 0, 4, 6);
	fceb2(l12, 19, 4, 8);
	l2 = 1;
Lcff1:
	fceb2(l12, l2, 0, 18);
	fceb2(l12, l2, 2, 12);
	fceb2(l12, l2, 4, 7);
	l2++;
	if (l2 < 19) goto Lcff1;
#asm
	db 08bh,046h,006h,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,020h,001h,089h
	db 046h,0f6h
#endasm
	rsi = p6;
#asm
	db 08ah,080h,030h,006h,02ah,0e4h,089h,046h,0fch
#endasm
	l8 = f2962(l4, 0, 5);
	l60 = 0;
#asm
	db 08bh,046h,006h,0d1h,0e0h,08bh,0f0h,08bh,01eh,0a8h,04fh,08bh,080h,040h,002h,089h
	db 046h,0fch
#endasm
	if (f2962(l4, (g4f9a << 1), 2) != 2) goto Ld09e;
	l60 = 1;
Ld09e:
	f075b(2112, &l52);
	f030b(g3342, 21, 0);
	f251d(g3342, &l52, 3);
	l56 = ((18 - ((unsigned char)g4514[(432 * p4)] - l8)) + l8);
	if (l56 >= 1) goto Ld0fa;
	l56 = 1;
Ld0fa:
	if (l56 <= 18) goto Ld105;
	l56 = 18;
Ld105:
	if (!l60) goto Ld110;
	l56 = 18;
Ld110:
	f3118(l12);
	f030b(l12, 1, 3);
	l2 = 0;
	goto Ld143;
Ld12f:
	f22b7(l12, 97, 12);
	l2++;
Ld143:
	if (l2 < l56) goto Ld12f;
	f31d1(l12);
	l62 = 1;
Ld157:
	f3118(l12);
#asm
	db 0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,08bh,087h,004h,044h,0bbh,064h,000h,0f7h
	db 0ebh,050h,052h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,08bh,087h,006h,044h,099h
	db 08bh,0c8h,08bh,0dah,05ah,058h
	call $ldv
	db 050h,052h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,08ah,087h,014h,045h,02ah,0e4h
	db 099h,08bh,0c8h,08bh,0dah,05ah,058h,050h,052h,0f7h,0e3h,08bh,0d8h,058h,0f7h,0e1h
	db 003h,0d8h,058h,0f7h,0e1h,003h,0d3h,0b9h,064h,000h,0bbh,000h,000h
	call $ldv
	db 089h,046h,0fah,03dh,000h,000h,07eh,00ch
#endasm
	if (f09e2(50)) goto Ld227;
Ld1cb:
	;
#asm
ld1cb:
	db 0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,0ffh,08fh,004h,044h
#endasm
	if (l6 <= 0) goto Ld1e4;
#asm
	db 083h,0bfh,004h,044h,000h,07fh,03ch
#endasm
Ld1e4:
	g450c[(432 * p4)] = (char)(f09e2(6) + 6);
	*(int *)((char *)g4404 + (432 * p4)) = 0;
	f4ba8(p4);
	f02d2(l12, 0);
	return (l60 + 1);
Ld220:
	f4ba8(p4);
Ld227:
	l58 = ((((f09e2(l6) + f09e2(l6)) + f09e2(l6)) + f09e2(l6)) / 4);
	if (l58 >= 1) goto Ld268;
	l58 = 1;
Ld268:
	if (l58 <= 18) goto Ld273;
	l58 = 18;
Ld273:
	f030b(l12, 1, 1);
	l2 = 0;
	goto Ld2a5;
Ld288:
	f22b7(l12, 97, (l60 == 1 ? 4 : 6));
	l2++;
Ld2a5:
	if (l2 < l58) goto Ld288;
	f033f(l12, (unsigned char)l12[6], 1, 18, 1);
	f31d1(l12);
	f2b19(l12);
	if (!f2643(1)) goto Ld2f4;
	if ((char)f2724(1) != 13) goto Ld2f4;
	l62 = 0;
Ld2f4:
	if (l62 != 1) goto Ld304;
	if (!f0c42()) goto Ld157;
Ld304:
	l54 = (l58 >= l56 ? 0 : 1);
	if (!l60) goto Ld320;
	l54 = 2;
Ld320:
	if (!l54) goto Ld33b;
	if (f09e2(3)) goto Ld339;
	fce13(p6);
Ld339:
	goto Ld342;
Ld33b:
	fce81(p6);
Ld342:
	f09fb(g3342, 1);
	f075b((l54 + 2113), &l52);
	f030b(g3342, (20 - ((strlen(&l52) + 1) / 2)), 0);
	f251d(g3342, &l52, 3);
	f533b(g4fca);
	f02d2(l12, 0);
	return l54;
}
