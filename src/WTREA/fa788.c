#asm
	extrn f36ac_:near
#endasm
extern char g5284[];
extern char g52ec[];
extern int g0052[];
extern int g363e;
extern int g3646;
extern int g545c;
extern int g545e;
fa788(p4, p6, p8, p10, p12, p14, p16, p18, p20, p22, p24, p26, p28, p30, p32, p34, p36, p38, p40, p42, p44, p46, p48, p50, p52, p54, p56, p58, p60, p62, p64, p66, p68, p70, p72)
{
	if (g5284[((p4 * 3) + p8)]) goto La7d1;
	f36ac((g545c ? (p16 + p4) : (p14 + p4)), 1, (g545c != 0 ? (p14 + p4) : -1));
La7d1:
	if (p4 >= 3) goto Labe5;
	if (p6 == 2) goto La7e6;
	if (p6 < 7) goto La817;
La7e6:
	f36ac((g545e ? (p20 + p4) : (p18 + p4)), 1, (g545e != 0 ? (p18 + p4) : -1));
La817:
	switch (p6) {
case 1:
case 3:
case 4:
	if (p6 != 3) goto La8b3;
	if (p8 != 1) goto La88a;
	if (p4) goto La85a;
	if (g363e <= 0) goto La85a;
	fa6a9(2, 0, 0, (g363e + 15), p10, p12, p4);
	goto La888;
La85a:
	if (p4 > 0) goto La867;
	if (g363e) goto La888;
La867:
	fa6a9(255, (p22 + p4), -1, 0, -1, -1, p4);
La888:
	goto La8b1;
La88a:
	if (p4 <= 0) goto La8b1;
	fa6a9(255, (p22 + p4), -1, 0, -1, -1, p4);
La8b1:
	goto La8fb;
La8b3:
	if (p6 != 4) goto La8fb;
	if (p4 > 0) goto La8c5;
	if (p8 != 1) goto La8fb;
La8c5:
	fa6a9(2, *(int *)((char *)g0052 + ((p4 * 6) + (p8 << 1))), 0, (p4 + 10), p10, p12, p4);
La8fb:
	fa6a9(255, (p24 + p4), (p28 + p4), 0, (p26 + p4), (p30 + p4), p4);
	fa6a9(255, (p32 + p4), (p36 + p4), 0, (p34 + p4), (p38 + p4), p4);
	if (p4 > 0) goto La964;
	if (p8 != 1) goto La999;
La964:
	fa6a9(2, *(int *)((char *)g0052 + ((p4 * 6) + (p8 << 1))), 0, (p4 + 13), p10, p12, (p4 + 1));
La999:
	goto Labe5;
case 5:
	f36ac((g545e ? (p42 + p4) : (p40 + p4)), 1, (g545e != 0 ? (p40 + p4) : -1));
	goto Labe5;
case 6:
	f36ac((g545e ? (p46 + p4) : (p44 + p4)), 1, (g545e != 0 ? (p44 + p4) : -1));
	goto Labe5;
case 7:
	f36ac((g545e ? (p50 + p4) : (p48 + p4)), 0, -1);
	goto Labe5;
case 8:
	if (p4 > 0) goto Laa37;
	if (p8 != 1) goto Laa8a;
Laa37:
	fa6a9(1, *(int *)((char *)g0052 + ((p4 * 6) + (p8 << 1))), 0, (((((g545e) && (p4 < 2) ? 18 : 0) + (p4 << 1)) + g3646) + 1), p10, p12, p4);
Laa8a:
	goto Labe5;
case 9:
	if (p4 > 0) goto Laa99;
	if (p8 != 1) goto Laacd;
Laa99:
	fa6a9(2, *(int *)((char *)g0052 + ((p4 * 6) + (p8 << 1))), 0, (p4 + 1), p10, p12, p4);
Laacd:
	goto Labe5;
case 10:
case 11:
case 12:
case 13:
	f36ac((g545e ? (p54 + p4) : (p52 + p4)), 0, (g545e != 0 ? (p52 + p4) : -1));
	if (p6 != 11) goto Lab3a;
	f36ac((g545e ? (p58 + p4) : (p56 + p4)), 0, (g545e != 0 ? (p56 + p4) : -1));
	goto Lab8e;
Lab3a:
	if (p6 != 12) goto Lab73;
	f36ac((g545e ? (p62 + p4) : (p60 + p4)), 0, (g545e != 0 ? (p60 + p4) : -1));
	goto Lab8e;
Lab73:
	if (p6 != 13) goto Lab8e;
	f36ac((p64 + p4), 0, -1);
Lab8e:
	goto Labe5;
case 14:
	if (p4) goto Labb8;
	if (p8 != 1) goto Labb8;
	f36ac(344, 0, (g545e != 0 ? 344 : -1));
Labb8:
	goto Labe5;
	}
Labe5:
	if (g52ec[((p4 * 3) + p8)]) goto Laccc;
#asm
labfd:
	db 08bh,046h,004h,08bh,0d0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh,04eh,008h,0d1h,0e1h
	db 003h,0c1h,08bh,0d8h,083h,0bfh,090h,052h,000h,074h,003h,0e9h,075h,000h
#endasm
Lac1b:
	;
#asm
lac1b:
	db 0b8h,0ffh,0ffh,083h,03eh,05ch,054h,000h,074h,006h,08bh,046h,042h,003h,046h,004h
lac2b:
	db 050h,0b8h,001h,000h,050h,083h,03eh,05ch,054h,000h,074h,008h,08bh,046h,044h,003h
	db 046h,004h,0ebh,006h
lac3f:
	db 08bh,046h,042h,003h,046h,004h
lac45:
	db 050h
	call f36ac_
	db 083h,0c4h,006h,08bh,046h,004h,03dh,001h,000h,075h,03ah
#endasm
	if (p8 != 1) goto Lac8e;
#asm
	db 08bh,0d0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,08bh,04eh,008h,0d1h,0e1h,003h,0c1h,08bh
	db 0d8h,083h,0bfh,0f8h,052h,001h,075h,01ch
#endasm
	f36ac(345, 0, (g545c != 0 ? 345 : -1));
Lac8e:
	;
#asm
lac8e:
	db 0ebh,03ch
#endasm
Lac90:
	f36ac((((g545c + g3646) % 2) ? (p72 + p4) : (p70 + p4)), 1, (((g545c + g3646) % 2) ? (p70 + p4) : -1));
Laccc:
	;
}
