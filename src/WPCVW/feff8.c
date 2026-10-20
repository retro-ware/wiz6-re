#asm
	extrn fccd2_:near
#endasm
extern char g4518[];
extern char g4519[];
extern char g452c[];
extern char g4548[];
extern char g4596[];
extern char g4597[];
extern char pc_class[];
extern char pc_race[];
extern int pc_level[];
feff8(p4)
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	if (*(int *)((char *)pc_level + (432 * p4)) <= 20) goto Lf011;
	return;
Lf011:
	l6 = (unsigned char)g4518[(432 * p4)];
	l4 = 0;
	switch ((unsigned char)pc_class[(432 * p4)]) {
case 0:
case 4:
case 8:
case 10:
case 12:
	l4 = (random(4) + 2);
	goto Lf08b;
case 1:
case 5:
case 7:
case 9:
	l4 = (random(3) + 1);
	goto Lf08b;
case 2:
case 3:
case 6:
	l4 = (random(4) + 1);
	goto Lf08b;
case 11:
case 13:
	l4 = (random(4) + 3);
	goto Lf08b;
	}
Lf08b:
	if (l6 < 8) {
	l4--;
	}
	if (*(int *)((char *)pc_level + (432 * p4)) < (unsigned char)g4597[(432 * p4)]) {
	l4 = 0;
	}
	g4596[(432 * p4)] = (char)(g4596[(432 * p4)] - l4);
#asm
	db 080h,0bfh,096h,045h,000h,07dh,005h,0c6h,087h,096h,045h,000h
#endasm
Lf0cb:
	;
#asm
lf0cb:
	db 08ah,087h,087h,045h,02ah,0e4h,0ebh,073h
#endasm
	fccd2(p4, 4, 7, 5, 6, 3);
	goto Lf153;
#asm
	db 0b8h,007h,000h,050h,050h,0b8h,00ch,000h,050h,050h,0b8h,002h,000h,050h,0ffh,076h
	db 004h
	call fccd2_
	db 083h,0c4h,00ch,0ebh,048h,0b8h,005h,000h,050h,0b8h,007h,000h,050h,0b8h,008h,000h
	db 050h,0b8h,00ah,000h,050h,0b8h,003h,000h,050h,0ffh,076h,004h
	call fccd2_
	db 083h,0c4h,00ch,0ebh,029h,0d3h,0f0h,0f2h,0f0h,00bh,0f1h,00bh,0f1h,0d3h,0f0h,0f2h
	db 0f0h,00bh,0f1h,0f2h,0f0h,0d3h,0f0h,0f2h,0f0h,0d3h,0f0h,0d3h,0f0h,0d3h,0f0h,0d3h
	db 0f0h
lf146:
	db 03dh,00eh,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,02ah,0f1h
#endasm
Lf153:
	l8 = 10;
	if ((unsigned)g4519[(432 * p4)] > 15) {
	l8--;
	}
	if ((unsigned)g4519[(432 * p4)] > 17) {
	l8--;
	}
	if (pc_race[(432 * p4)] == 5) {
	l8 -= 2;
	}
	if ((pc_class[(432 * p4)] != 13) && (pc_class[(432 * p4)] != 12)) goto Lf1bb;
	l2 = (*(int *)((char *)pc_level + (432 * p4)) <= 20 ? (*(int *)((char *)pc_level + (432 * p4)) / 2) : 20);
	l2 += ((unsigned char)g452c[(432 * p4)] / 10);
	l8 -= l2;
Lf1bb:
	l10 = (l8 - g4548[(432 * p4)]);
	if (!l10) goto Lf1fe;
	g4548[(432 * p4)] = *(char *)&l8;
	for (l2 = 3; l2 < 8; l2++) {
	g4548[((432 * p4) + l2)] = (char)(g4548[((432 * p4) + l2)] + l10);
	}
Lf1fe:
	return;
}
