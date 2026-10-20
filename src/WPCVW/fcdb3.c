extern char g44da[];
extern char g44db[];
extern char g44dc[];
extern char g44e2[];
extern char g44e4[];
extern char g44e5[];
extern char g44e6[];
extern char g44e7[];
extern char g4515[];
extern char g4517[];
extern char g4519[];
extern char g4525[];
extern char g4539[];
extern char g4548[];
extern char pc_class[];
extern char pc_race[];
extern int g44d8[];
fcdb3(p4)
{
	int l2;
	int l4;
	switch ((unsigned char)pc_class[(432 * p4)]) {
case 0:
	fcc36(p4, 20885, 20900);
	goto Lceb6;
case 4:
case 8:
	fcc36(p4, 20915, 20930);
	goto Lceb6;
case 10:
	fcc36(p4, 20945, 20960);
	goto Lceb6;
case 11:
	fcc36(p4, 20975, 20990);
	goto Lceb6;
case 13:
	fcc36(p4, 21005, 21020);
	goto Lceb6;
case 1:
case 5:
	fcc36(p4, 21035, 21050);
	goto Lceb6;
case 7:
	fcc36(p4, 21065, 21080);
	goto Lceb6;
case 2:
case 9:
	fcc36(p4, 21095, 21110);
	goto Lceb6;
case 12:
	fcc36(p4, 21125, 21140);
	goto Lceb6;
case 3:
case 6:
	fcc36(p4, 21155, 21170);
	goto Lceb6;
	}
Lceb6:
	switch ((unsigned char)pc_race[(432 * p4)]) {
case 0:
	add_skill_bonus(p4, 11, 20);
	goto Ld04f;
case 2:
case 4:
	add_skill_bonus(p4, 6, (((unsigned char)g4517[(432 * p4)] / 5) * 5));
case 3:
	add_skill_bonus(p4, 12, (((unsigned char)g4517[(432 * p4)] / 5) * 5));
	goto Ld04f;
case 1:
	add_skill_bonus(p4, 9, 20);
	goto Ld04f;
case 5:
	add_skill_bonus(p4, 12, 25);
	add_skill_bonus(p4, 4, 25);
	add_skill_bonus(p4, 7, 25);
	add_skill_bonus(p4, 10, 25);
	add_skill_bonus(p4, 11, 25);
	goto Ld04f;
case 6:
case 7:
	add_skill_bonus(p4, 10, 25);
	add_skill_bonus(p4, 8, 10);
	add_skill_bonus(p4, 3, -20);
	goto Ld04f;
case 8:
	add_skill_bonus(p4, 7, 15);
	add_skill_bonus(p4, 4, 20);
case 9:
	add_skill_bonus(p4, 3, 20);
	goto Ld04f;
case 10:
	add_skill_bonus(p4, 12, 25);
	add_skill_bonus(p4, 3, 15);
	goto Ld04f;
	}
Ld04f:
	if ((unsigned)g4517[(432 * p4)] > 15) {
	add_skill_bonus(p4, 6, 5);
	add_skill_bonus(p4, 11, 5);
	}
	if ((unsigned)g4515[(432 * p4)] > 15) {
	add_skill_bonus(p4, 9, 5);
	}
	if ((unsigned)g4519[(432 * p4)] > 15) {
	add_skill_bonus(p4, 7, 5);
	add_skill_bonus(p4, 4, 5);
	}
	switch ((unsigned char)pc_class[(432 * p4)]) {
case 0:
case 4:
case 8:
case 10:
case 11:
case 12:
case 13:
	fccd2(p4, 4, 7, 5, 6, 3);
	goto Ld161;
case 1:
case 5:
case 7:
case 9:
	fccd2(p4, 2, 12, 12, 7, 7);
	goto Ld161;
case 2:
case 3:
case 6:
	fccd2(p4, 3, 10, 8, 7, 5);
	goto Ld161;
	}
Ld161:
	for (l2 = 0; l2 < 2; l2++) {
	g44e5[((432 * p4) + (l2 << 4))] = 0;
	g44e4[((432 * p4) + (l2 << 4))] = 0;
	for (l4 = 0; l4 < 8; l4++) {
	g44dc[(((432 * p4) + (l2 << 4)) + l4)] = 0;
	}
	g44e6[((432 * p4) + (l2 << 4))] = 0;
	g44da[((432 * p4) + (l2 << 4))] = 2;
	g44db[((432 * p4) + (l2 << 4))] = 2;
	*(int *)((char *)g44d8 + ((432 * p4) + (l2 << 4))) = 0;
	g44e7[((432 * p4) + (l2 << 4))] = 32;
	}
	l2 = ((unsigned char)g4525[(432 * p4)] / 5);
	l4 = ((unsigned char)g4539[(432 * p4)] / 5);
	if ((pc_class[(432 * p4)] != 13) && (pc_class[(432 * p4)] != 12)) goto Ld23d;
	g44db[(432 * p4)] = (char)((l2 / 3) + 2);
	g44e7[(432 * p4)] |= 64;
	g44e2[(432 * p4)] = (char)(l4 + 5);
	goto Ld263;
Ld23d:
	if (l2 > 0) {
	g44db[(432 * p4)] = (char)((l2 / 4) + 1);
	g44e7[(432 * p4)] |= 64;
	}
	if (l4 <= 0) goto Ld263;
	g44e2[(432 * p4)] = *(char *)&l4;
Ld263:
	;
#asm
ld263:
	db 080h,0bfh,014h,045h,00fh,076h,004h,0ffh,087h,0d8h,044h
#endasm
Ld26e:
	;
#asm
ld26e:
	db 080h,0bfh,014h,045h,011h,076h,004h,0ffh,087h,0d8h,044h
#endasm
Ld279:
	;
#asm
ld279:
	db 080h,0bfh,018h,045h,00fh,076h,005h,080h,087h,0e6h,044h,0fbh
#endasm
Ld285:
	;
#asm
ld285:
	db 080h,0bfh,018h,045h,011h,076h,00ah,080h,087h,0e6h,044h,0fbh,080h,087h,0f6h,044h
	db 0fbh
#endasm
Ld296:
	;
#asm
ld296:
	db 0c6h,087h,048h,045h,00ah,080h,0bfh,019h,045h,00fh,076h,004h,0feh,08fh,048h,045h
#endasm
Ld2a6:
	;
#asm
ld2a6:
	db 080h,0bfh,019h,045h,011h,076h,004h,0feh,08fh,048h,045h
#endasm
Ld2b1:
	;
#asm
ld2b1:
	db 080h,0bfh,085h,045h,005h,075h,008h,0feh,08fh,048h,045h,0feh,08fh,048h,045h
#endasm
Ld2c0:
	;
#asm
ld2c0:
	db 080h,0bfh,087h,045h,00dh,074h,007h,080h,0bfh,087h,045h,00ch,075h,032h
#endasm
Ld2ce:
	;
#asm
ld2ce:
	db 0b8h,014h,000h,083h,0bfh,00ch,044h,014h,07fh,00ah,08bh,087h,00ch,044h,0b9h,002h
	db 000h,099h,0f7h,0f9h
#endasm
Ld2e2:
	;
#asm
ld2e2:
	db 089h,046h,0feh,08ah,087h,02ch,045h,02ah,0e4h,0b9h,00ah,000h,099h,0f7h,0f9h,001h
	db 046h,0feh,08ah,087h,048h,045h,098h,02bh,046h,0feh,088h,087h,048h,045h
#endasm
Ld300:
	;
#asm
ld300:
	db 0c6h,087h,049h,045h,000h,0c6h,087h,04ah,045h,000h
#endasm
	for (l2 = 3; l2 < 8; l2++) {
	g4548[((432 * p4) + l2)] = g4548[(432 * p4)];
	}
}
