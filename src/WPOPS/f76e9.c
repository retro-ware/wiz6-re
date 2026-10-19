#asm
	extrn f09e2_:near
	extrn f5dbb_:near
#endasm
extern char g442c[];
extern char g44e5[];
extern char g44f5[];
extern char g44f8[];
extern char g44f9[];
extern char g450c[];
extern char g450d[];
extern char g451a[];
extern char g4585[];
extern char g4589[];
extern char g4592[];
extern char g4594[];
extern int g438c;
extern int g43ce;
extern int g5016;
f76e9(p4)
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	char x10[6];
	int l18;
	int l20;
	int l22;
	int l24;
	char x24[2];
	int l28;
	int l40[6];
	char x40[12];
	int l54;
	int l70[8];
	int l72;
	char x72[78];
	int l152;
	char x152[6];
	int l160;
	int l162;
	int l164;
	char x164[2];
	int l168;
	int l170;
	int l172;
	int l174;
	int l176;
	int l178;
	char *l180;
	int l182;
	int l184;
	int l186;
	int l188;
	int l190;
	int l202[6];
	register int rsi;
	l6 = 0;
	goto L7864;
L76f9:
	;
#asm
l76f9:
	db 0b8h,02ch,000h,0f7h,06eh,0fah,08bh,0c8h,0a1h,0a8h,043h,003h,0c1h,089h,086h,04ch
	db 0ffh,0b8h,00ah,000h,050h
	call f09e2_
	db 059h,050h,0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0d8h,08ah,087h,093h,045h,02ah,0e4h
	db 08bh,0c8h,058h,003h,0c1h,050h,0b8h,02ch,000h,0f7h,06eh,0fah,08bh,0f0h,08bh,01eh
	db 0a8h,043h,08ah,040h,029h,098h,08bh,0c8h,058h,003h,0c1h,089h,086h,052h,0ffh,03dh
	db 001h,000h,07dh,006h
#endasm
	l174 = 1;
L774b:
	l176 = (l174 / (unsigned char)g4592[(432 * l6)]);
	if ((unsigned)l180[36] <= 0) goto L77a4;
	l180[37] = (char)((f09e2((l174 / 2)) + f09e2(20)) + (l174 / 2));
L77a4:
	l180[33] = 0;
	l180[28] = 0;
	l180[29] = 1;
#asm
	db 0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,0d8h,08ah,087h,092h,045h,02ah,0e4h,050h,0b8h
	db 02ch,000h,0f7h,06eh,0fah,08bh,0f0h,08bh,01eh,0a8h,043h,08ah,040h,029h,098h,0b9h
	db 00ah,000h,099h,0f7h,0f9h,08bh,0c8h,058h,003h,0c1h,089h,086h,04eh,0ffh,03dh,001h
	db 000h,07dh,006h
#endasm
	l178 = 1;
L77f5:
	if (l178 <= 4) goto L7802;
	l178 = 4;
L7802:
	l172 = 0;
L7808:
	if (l172 >= l178) goto L782f;
	if ((unsigned)g4589[(432 * l6)] >= 2) goto L782f;
	if ((unsigned)g450d[(432 * l6)] > 0) goto L782f;
	if ((unsigned)g450c[(432 * l6)] <= 0) goto L783d;
L782f:
	;
#asm
l782f:
	db 08bh,09eh,04ch,0ffh,08bh,0b6h,054h,0ffh,0c6h,040h,018h,000h
#endasm
	goto L7854;
L783d:
	;
#asm
l783d:
	db 08ah,086h,052h,0ffh,08bh,09eh,04ch,0ffh,08bh,0b6h,054h,0ffh,088h,040h,018h
#endasm
	l174 -= l176;
L7854:
	l172++;
	if (l172 < 4) goto L7808;
	l6++;
L7864:
	if (l6 < g43ce) goto L76f9;
	setmem(20556, 45, 0);
	l190 = 0;
	l6 = 0;
L788d:
	if (l6 >= g43ce) goto L82dd;
	if ((unsigned)g4589[(l6 * 432)] >= 2) goto L818d;
	if (g450d[(l6 * 432)]) goto L818d;
	if (g450c[(l6 * 432)]) goto L818d;
	l202[l190] = l6;
	l190++;
#asm
	db 0b9h,02ch,000h,0f7h,0e9h,08bh,0c8h,0a1h,0a8h,043h,003h,0c1h,089h,086h,04ch,0ffh
#endasm
	l2 = 0;
L78e8:
	l40[l2] = 1;
	l2++;
	if (l2 < 11) goto L78e8;
	if (g4585[(432 * l6)] == 7) goto L7915;
	l24 = 0;
L7915:
	rsi = (44 * l6);
#asm
	db 08bh,01eh,0a8h,043h,080h,078h,02bh,000h,075h,027h,0b8h,0b0h,001h,0f7h,06eh,0fah
	db 08bh,0d8h,08ah,087h,087h,045h,03ch,003h,074h,01ch,03ch,00dh,074h,018h,03ch,004h
	db 074h,014h,03ch,006h,074h,010h,03ch,00ch,074h,00ch,080h,0bfh,02ch,045h,000h,075h
	db 005h
#endasm
L794e:
	l28 = 0;
L7953:
	if (g4594[(432 * l6)]) goto L7967;
	l40[4] = 0;
L7967:
	if (l190 >= 2) goto L7978;
	l22 = 0;
	l20 = 0;
L7978:
	l182 = (unsigned char)g44f8[(432 * l6)];
	if (l182 == 255) goto L7a84;
	if (g442c[((432 * l6) + (l182 << 3))] != 3) goto L7a84;
	l184 = (unsigned char)g44f9[(432 * l6)];
	if (l184 == 255) goto L7a7f;
	if (g442c[((432 * l6) + (l184 << 3))] == 4) goto L79cd;
	l40[0] = 0;
	goto L7a7d;
L79cd:
	;
#asm
l79cd:
	db 0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,08eh,04ah,0ffh,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h
	db 003h,0c1h,08bh,0d8h,08ah,087h,02dh,044h,03ch,00bh,075h,01fh,0b8h,0b0h,001h,0f7h
	db 06eh,0fah,08bh,08eh,048h,0ffh,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h,003h,0c1h,08bh,0d8h
	db 08ah,087h,02dh,044h,03ch,016h,074h,003h,0e9h,070h,000h
#endasm
L7a08:
	;
#asm
l7a08:
	db 0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,08eh,04ah,0ffh,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h
	db 003h,0c1h,08bh,0d8h,08ah,087h,02dh,044h,03ch,00dh,075h,01ch,0b8h,0b0h,001h,0f7h
	db 06eh,0fah,08bh,08eh,048h,0ffh,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h,003h,0c1h,08bh,0d8h
	db 08ah,087h,02dh,044h,03ch,017h,075h,038h
#endasm
L7a40:
	;
#asm
l7a40:
	db 0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,08eh,04ah,0ffh,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h
	db 003h,0c1h,08bh,0d8h,08ah,087h,02dh,044h,03ch,00ch,075h,021h,0b8h,0b0h,001h,0f7h
	db 06eh,0fah,08bh,08eh,048h,0ffh,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h,003h,0c1h,08bh,0d8h
	db 08ah,087h,02dh,044h,03ch,053h,074h,005h
#endasm
L7a78:
	l40[0] = 0;
L7a7d:
	goto L7a84;
L7a7f:
	l40[0] = 0;
L7a84:
	;
#asm
l7a84:
	db 08bh,046h,0fah,03dh,003h,000h,07ch,01dh,0b9h,0b0h,001h,0f7h,0e9h,08bh,0d8h,080h
	db 0bfh,0e5h,044h,000h,075h,00fh,08bh,01eh,0a8h,043h,080h,078h,02bh,001h,074h,005h
#endasm
	l40[0] = 0;
L7aa9:
	l18 = -1;
	f6fea(((432 * l6) + 17384), &l160);
L7ac3:
	f4623(g438c, 0);
	f32be(p4, 32, 3, 0);
	f075b(3500, &l152);
	f05c1(&l152, &l160, 36);
	f45b5(&l152, 0);
	f2a63();
	l72 = 0;
	l4 = 0;
L7b25:
	if (l40[l4] == -1) goto L7b42;
	if (l40[l4] != 1) goto L7b3d;
	l72++;
L7b3d:
	l4++;
	goto L7b25;
L7b42:
	l8 = f5260(p4, 3000, l40, 1, 1, 6, (l72 > 9 ? 4 : 3), 5, 0);
	l162 = -1;
	rsi = (44 * l6);
#asm
	db 08bh,01eh,0a8h,043h,0c6h,040h,01fh,0ffh,0b8h,02ch,000h,0f7h,06eh,0fah,08bh,0f0h
	db 08bh,01eh,0a8h,043h,0c6h,040h,020h,000h
#endasm
	l168 = 0;
	l170 = 0;
#asm
	db 08bh,046h,0f8h,0e9h,02dh,004h
#endasm
	f32be(p4, 32, 3, 0);
	f075b(3501, &l152);
	f05c1(&l152, &l160, 36);
	f45b5(&l152, 0);
	l182 = (unsigned char)g44f8[(432 * l6)];
	if (l182 == 255) goto L7c25;
	if (g442c[((432 * l6) + (l182 << 3))] != 3) goto L7c25;
	l186 = 1;
	l162 = 8;
L7c25:
	if (l162 != -1) goto L7cc5;
	l186 = 0;
	l2 = 0;
L7c3a:
	l70[l2] = f28af(((432 * l6) + 17639), l2);
	if (l2 == 4) goto L7c98;
	if (l6 < 3) goto L7c98;
	if (l182 == 255) goto L7c98;
	if (g442c[((432 * l6) + (l182 << 3))] != 2) goto L7c98;
	l70[l2] = 0;
L7c98:
	if (l70[l2] != 1) goto L7cb2;
	l186++;
	l162 = l2;
L7cb2:
	l2++;
	if (l2 < 8) goto L7c3a;
	l54 = -1;
L7cc5:
	if (l186 <= 1) goto L7cfc;
	f2a63();
	l162 = f5260(p4, 3050, l70, 3, 1, 8, 3, 5, 0);
L7cfc:
	;
#asm
l7cfc:
	db 083h,0beh,05eh,0ffh,0ffh,075h,003h,0e9h,06dh,000h
#endasm
L7d06:
	l188 = (unsigned char)g44e5[(432 * l6)];
	if (l188 != 2) goto L7d2a;
	if (l162 == 4) goto L7d2a;
	l188 = 0;
L7d2a:
	if (l188) goto L7d5a;
#asm
	db 08bh,046h,0fah,03dh,003h,000h,07ch,021h,0b9h,02ch,000h,0f7h,0e9h,08bh,0f0h,08bh
	db 01eh,0a8h,043h,080h,078h,02bh,001h,074h,010h
#endasm
	f0aaa(0);
	l164 = -1;
	goto L7d73;
L7d5a:
	l164 = f55cd(p4, 3602, l188, 0);
L7d73:
	if (l162 == -1) goto L7d81;
	if (l164 != -1) goto L7d89;
L7d81:
	l168 = 1;
	goto L7d9e;
L7d89:
	;
#asm
l7d89:
	db 08ah,086h,05ch,0ffh,050h,0b8h,02ch,000h,0f7h,06eh,0fah,08bh,0f0h,08bh,01eh,0a8h
	db 043h,058h,088h,040h,01fh
#endasm
L7d9e:
	goto L7fe6;
	f32be(p4, 32, 3, 0);
	f075b(3502, &l152);
	f05c1(&l152, &l160, 36);
	f45b5(&l152, 0);
	f2a63();
	l2 = 0;
L7df0:
	l40[l2] = 1;
	l2++;
	if (l2 < 4) goto L7df0;
	if (g442c[((432 * l6) + ((unsigned char)g44f9[(432 * l6)] << 3))] == 11) goto L7e39;
	l40[0] = 0;
L7e39:
	l40[4] = -1;
	l162 = f5260(p4, 3100, l40, 3, 1, 9, 2, 5, 0);
	if (l162 != -1) goto L7e76;
	l168 = 1;
L7e76:
	goto L7fe6;
#asm
	db 0e9h,06ah,001h
#endasm
	l162 = f644a(p4, l6);
	g5016 = -1;
	if (l162 != -1) goto L7e9d;
	l168 = 1;
L7e9d:
	goto L7fe6;
	l162 = f71be(p4, l6);
	if (l162 != -1) goto L7ebb;
	l168 = 1;
L7ebb:
	goto L7fe6;
	l162 = f5a33(3611);
	if (l162 != -1) goto L7ed5;
	l168 = 1;
L7ed5:
	goto L7fe6;
#asm
	db 0e9h,00bh,001h
#endasm
	l164 = f55cd(p4, 3605, 1, 0);
	l162 = 8;
	if (l164 != -1) goto L7f07;
	l168 = 1;
#asm
	db 0ebh,015h
#endasm
L7f07:
	;
#asm
l7f07:
	db 08ah,086h,05ch,0ffh,050h,0b8h,02ch,000h,0f7h,06eh,0fah,08bh,0f0h,08bh,01eh,0a8h
	db 043h,058h,088h,040h,01fh
#endasm
L7f1c:
	;
#asm
l7f1c:
	db 0e9h,0c7h,000h
#endasm
	goto L7fe6;
	setmem(20556, 45, 0);
	l164 = 0;
#asm
	db 0ebh,036h
#endasm
L7f3c:
	rsi = (44 * l164);
#asm
	db 08bh,01eh,0a8h,043h,080h,078h,01fh,000h,076h,01fh,08ah,040h,01fh,02ah,0e4h,08bh
	db 0d0h,0b1h,003h,0d3h,0e0h,003h,0c2h,050h,08ah,040h,020h,02ah,0e4h,08bh,0c8h,058h
	db 003h,0c1h,08bh,0d8h,0c6h,087h,04ch,050h,001h
#endasm
L7f6e:
	l164++;
L7f72:
	if ((l6 - 1) > l164) goto L7f3c;
	l6 = (l202[(l190 - 2)] - 1);
	l190 -= 2;
	l170 = 1;
	goto L7fe6;
	setmem(20556, 45, 0);
	l6 = -1;
	l170 = 1;
	l190 = 0;
#asm
	db 0ebh,023h,0ach,07bh,0a1h,07dh,079h,07eh,07ch,07eh,0a0h,07eh,0beh,07eh,0d8h,07eh
	db 01fh,07fh,0dbh,07eh,022h,07fh,09eh,07fh
l7fd9:
	db 03dh,00bh,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,0c3h,07fh
#endasm
L7fe6:
	if (l168 == 1) goto L7ac3;
	if (l170) goto L818d;
#asm
l7ffa:
	db 08bh,086h,05eh,0ffh,050h,0b8h,02ch,000h,0f7h,06eh,0fah,08bh,0f0h,08bh,01eh,0a8h
	db 043h,058h,089h,040h,00ah,0b8h,02ch,000h,0f7h,06eh,0fah,08bh,0f0h,08bh,01eh,0a8h
	db 043h,0c7h,040h,00ch,0ffh,0ffh,08ah,046h,0f8h,050h,0b8h,02ch,000h,0f7h,06eh,0fah
	db 08bh,0f0h,08bh,01eh,0a8h,043h,058h,088h,040h,01eh,0b8h,02ch,000h,0f7h,06eh,0fah
	db 08bh,0f0h,08bh,01eh,0a8h,043h,08ah,040h,01fh,02ah,0e4h,089h,086h,05ch,0ffh,03dh
	db 001h,000h,07ch,026h,03dh,005h,000h,07fh,021h,08ah,086h,05ch,0ffh,02ah,0e4h,050h
	db 0ffh,076h,0fah
	call f5dbb_
	db 083h,0c4h,004h,050h,0b8h,02ch,000h,0f7h,06eh,0fah,08bh,0f0h,08bh,01eh,0a8h,043h
	db 058h,088h,040h,020h
#endasm
L8074:
	l182 = (unsigned char)g44f9[(432 * l6)];
	if (l8) goto L818d;
	if (l182 != 255) goto L80c9;
	if ((unsigned char)g44f8[(432 * l6)] != 255) goto L80c9;
	l2 = f7696(((432 * l6) + 17639));
	if (l2 == -1) goto L80c6;
#asm
	db 08bh,046h,0feh,050h,0b8h,02ch,000h,0f7h,06eh,0fah,08bh,0f0h,08bh,01eh,0a8h,043h
	db 058h,089h,040h,00ch
#endasm
L80c6:
	goto L818d;
L80c9:
	if (l182 == 255) goto L818d;
#asm
l80d4:
	db 0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,08eh,04ah,0ffh,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h
	db 003h,0c1h,08bh,0d8h,08ah,087h,02ch,044h,03ch,002h,074h,008h,03ch,00ch,074h,004h
	db 03ch,010h,075h,014h
#endasm
L80f8:
	rsi = (44 * l6);
#asm
	db 08bh,01eh,0a8h,043h,0c7h,040h,00ch,004h,000h
#endasm
	goto L818d;
L810c:
	;
#asm
l810c:
	db 0b8h,0b0h,001h,0f7h,06eh,0fah,08bh,08eh,04ah,0ffh,0d1h,0e1h,0d1h,0e1h,0d1h,0e1h
	db 003h,0c1h,08bh,0d8h,080h,0bfh,02ch,044h,002h,073h,066h
#endasm
	if (g44f5[(432 * l6)] == 1) goto L8143;
	if (l6 >= 3) goto L818d;
	if (l164 >= 3) goto L818d;
L8143:
	l10 = 0;
L8148:
	l2 = f7696(((432 * l6) + 17655));
	l10++;
#asm
	db 083h,07eh,0feh,004h,075h,006h
#endasm
	if (l10 < 10) goto L8148;
L8168:
	;
#asm
l8168:
	db 083h,07eh,0feh,004h,075h,005h
#endasm
	l2 = -1;
L8173:
	if (l2 == -1) goto L818d;
#asm
	db 08bh,046h,0feh,050h,0b8h,02ch,000h,0f7h,06eh,0fah,08bh,0f0h,08bh,01eh,0a8h,043h
	db 058h,089h,040h,00ch
#endasm
L818d:
	l6++;
	if (l6 != g43ce) goto L82da;
	f4623(g438c, 0);
	f32be(p4, 32, 3, 0);
	f075b(3506, &l152);
	f45b5(&l152, 0);
	f2a63();
	l2 = 0;
L81e5:
	l40[l2] = 1;
	l2++;
	if (l2 < 3) goto L81e5;
	if (l190) goto L820f;
	l40[2] = 0;
	l40[1] = 0;
L820f:
	l40[3] = -1;
	l2 = f5260(p4, 3507, l40, 3, 1, 14, 4, 5, 0);
	if (l2 != 2) goto L8265;
	setmem(20556, 45, 0);
	l6 = 0;
	l190 = 0;
#asm
	db 0e9h,075h,000h
#endasm
L8265:
	if (l2 != 1) goto L82da;
	setmem(20556, 45, 0);
	l164 = 0;
	goto L82bb;
L8285:
	rsi = (44 * l164);
#asm
	db 08bh,01eh,0a8h,043h,080h,078h,01fh,000h,076h,01fh,08ah,040h,01fh,02ah,0e4h,08bh
	db 0d0h,0b1h,003h,0d3h,0e0h,003h,0c2h,050h,08ah,040h,020h,02ah,0e4h,08bh,0c8h,058h
	db 003h,0c1h,08bh,0d8h,0c6h,087h,04ch,050h,001h
#endasm
L82b7:
	l164++;
L82bb:
	if ((g43ce - 1) > l164) goto L8285;
	l6 = l202[(l190 - 1)];
	l190--;
L82da:
	goto L788d;
L82dd:
	l6 = 0;
	goto L839a;
L82e5:
	rsi = (44 * l6);
#asm
	db 08bh,01eh,0a8h,043h,080h,078h,00fh,000h,076h,033h
#endasm
	if (f09e2(100) <= ((unsigned char)g451a[(432 * l6)] + 80)) goto L832a;
	rsi = (44 * l6);
#asm
	db 08bh,01eh,0a8h,043h,0c6h,040h,01eh,007h
#endasm
L832a:
	rsi = (44 * l6);
#asm
	db 08bh,01eh,0a8h,043h,080h,078h,01eh,001h,074h,006h,080h,078h,01eh,005h,075h,004h
#endasm
L8342:
	;
#asm
l8342:
	db 0c6h,040h,018h,001h
#endasm
L8346:
	;
#asm
l8346:
	db 0b8h,02ch,000h,0f7h,06eh,0fah,08bh,0f0h,08bh,01eh,0a8h,043h,080h,078h,01eh,000h
	db 075h,01ch,083h,078h,00ch,0ffh,075h,014h,0c6h,040h,019h,000h,0b8h,02ch,000h,0f7h
	db 06eh,0fah,08bh,0f0h,08bh,01eh,0a8h,043h,0c6h,040h,01bh,000h
#endasm
L8372:
	goto L8397;
L8374:
	l2 = 1;
L8379:
	;
#asm
l8379:
	db 0b8h,02ch,000h,0f7h,06eh,0fah,003h,046h,0feh,08bh,0f0h,08bh,01eh,0a8h,043h,0c6h
	db 040h,018h,000h
#endasm
	l2++;
	if (l2 < 4) goto L8379;
L8397:
	l6++;
L839a:
	if (l6 < g43ce) goto L82e5;
}
