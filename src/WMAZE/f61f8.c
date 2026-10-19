#asm
	extrn $ldv:near
	extrn f09e2_:near
#endasm
extern char g4504[];
extern char g450a[];
extern char g450c[];
extern char g450f[];
extern char g4586[];
extern char g4589[];
extern char g458a[];
extern char g458b[];
extern char g458c[];
extern int g4400[];
extern int g4402[];
extern int g4404[];
extern int g4410[];
extern int g4412[];
f61f8(p4, p6, p8, p10, p12)
{
	char x0[2];
	int l4;
	int l6;
	if ((unsigned)g4589[(432 * p4)] >= 3) goto L63f0;
	*(int *)((char *)g4400 + (432 * p4)) += (((f09e2(p6) + ((unsigned char)g458a[(432 * p4)] * p10)) - ((unsigned char)g458b[(432 * p4)] * p10)) - ((unsigned char)g458c[(432 * p4)] * p10));
	if (*(int *)((char *)g4400 + (432 * p4)) <= *(int *)((char *)g4402 + (432 * p4))) goto L6262;
	*(int *)((char *)g4400 + (432 * p4)) = *(int *)((char *)g4402 + (432 * p4));
L6262:
	if (*(int *)((char *)g4400 + (432 * p4)) > 0) goto L628b;
	*(int *)((char *)g4400 + (432 * p4)) = 0;
	*(int *)((char *)g4404 + (432 * p4)) = 0;
	g4589[(432 * p4)] = 3;
	f0aaa(((unsigned char)g4586[(432 * p4)] + 8));
	goto L63e9;
L628b:
	if (*(int *)((char *)g4404 + (432 * p4)) > 0) goto L62b9;
	*(int *)((char *)g4404 + (432 * p4)) = 0;
	g450c[(432 * p4)] = (char)(f09e2(6) + 6);
L62b9:
	if (p8 <= 0) goto L631f;
#asm
	db 0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,08bh,087h,006h,044h,08bh,04eh,008h,08bh
	db 0d9h,0f7h,0ebh,0b9h,064h,000h,0bbh,000h,000h
	call $ldv
	db 089h,046h,0fah,0b9h,002h,000h,099h,0f7h,0f9h,050h
	call f09e2_
	db 059h,050h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,08bh,08fh,004h,044h,058h,003h
	db 0c1h,050h,08bh,046h,0fah,0b9h,002h,000h,099h,0f7h,0f9h,08bh,0c8h,058h,003h,0c1h
	db 040h,089h,087h,004h,044h,08bh,087h,004h,044h,03bh,087h,006h,044h,07eh,008h,08bh
	db 087h,006h,044h,089h,087h,004h,044h
#endasm
L631f:
	l4 = 0;
L6324:
	l6 = (unsigned char)g450a[((432 * p4) + l4)];
	if (l6 <= 0) goto L635a;
	if (l6 == 255) goto L635a;
	l6 -= p10;
	if (l6 >= 0) goto L6353;
	l6 = 0;
L6353:
	g450a[((432 * p4) + l4)] = *(char *)&l6;
L635a:
	l4++;
	if (l4 < 10) goto L6324;
	if (!g450f[(432 * p4)]) goto L637b;
	if (g458c[(432 * p4)]) goto L6385;
L637b:
	g450f[(432 * p4)] = 0;
	g458c[(432 * p4)] = 0;
L6385:
	if (p12 <= 0) goto L63e9;
	l4 = 0;
L6390:
	if ((unsigned)g4504[((432 * p4) + l4)] >= 1) goto L63a7;
	g4504[((432 * p4) + l4)] = 1;
L63a7:
	*(int *)((char *)g4410 + ((432 * p4) + (l4 << 2))) += f09e2(((unsigned char)g4504[((432 * p4) + l4)] + 1));
	if (*(int *)((char *)g4410 + ((432 * p4) + (l4 << 2))) <= *(int *)((char *)g4412 + ((432 * p4) + (l4 << 2)))) goto L63de;
	*(int *)((char *)g4410 + ((432 * p4) + (l4 << 2))) = *(int *)((char *)g4412 + ((432 * p4) + (l4 << 2)));
L63de:
	l4++;
	if (l4 < 6) goto L6390;
L63e9:
	f4ba8(p4);
L63f0:
	;
}
