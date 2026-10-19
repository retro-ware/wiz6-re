extern char g4500[];
extern char g4504[];
extern char g4515[];
extern char g4516[];
extern char g4517[];
extern char g451a[];
extern char g4597[];
extern char pc_skills[];
extern char spell_table[];
extern int pc_level[];
extern int pc_spell_pts_max[];
ff201(p4)
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	int l14;
	int l16;
	int l18;
	int l20;
	int l22;
	l4 = (unsigned char)g4515[(432 * p4)];
	l6 = (unsigned char)g4516[(432 * p4)];
	l8 = (unsigned char)g4517[(432 * p4)];
	l10 = (unsigned char)g451a[(432 * p4)];
#asm
	db 08ah,087h,087h,045h,02ah,0e4h,0e9h,0c8h,001h
#endasm
	l12 = ((l4 + l6) / 2);
	l18 = 0;
	l20 = 28;
	l22 = 1;
	goto Lf413;
#asm
	db 08bh,046h,0fah,003h,046h,0f8h,0b9h,002h,000h,099h,0f7h,0f9h,089h,046h,0f4h
#endasm
	l18 = 1;
	l20 = 26;
	l22 = 1;
#asm
	db 0e9h,095h,001h,08bh,046h,0fch,003h,046h,0fah,0b9h,002h,000h,099h,0f7h,0f9h,089h
	db 046h,0f4h
#endasm
	l18 = 2;
	l20 = 25;
	l22 = 3;
#asm
	db 0e9h,074h,001h,08bh,046h,0fch,003h,046h,0fah,0b9h,002h,000h,099h,0f7h,0f9h,089h
	db 046h,0f4h
#endasm
	l18 = 2;
	l20 = 25;
	l22 = 1;
#asm
	db 0e9h,053h,001h,08bh,046h,0fch,003h,046h,0fah,0b9h,002h,000h,099h,0f7h,0f9h,089h
	db 046h,0f4h
#endasm
	l18 = 0;
	l20 = 28;
	l22 = 3;
#asm
	db 0e9h,032h,001h,08bh,046h,0fch,003h,046h,0fah,0b9h,002h,000h,099h,0f7h,0f9h,089h
	db 046h,0f4h
#endasm
	l18 = 3;
	l20 = 27;
	l22 = 1;
#asm
	db 0e9h,011h,001h,08bh,046h,0fah,003h,046h,0f8h,0b9h,002h,000h,099h,0f7h,0f9h,089h
	db 046h,0f4h
#endasm
	l18 = 1;
	l20 = 26;
	l22 = 3;
#asm
	db 0e9h,0f0h,000h,08bh,046h,0fch,003h,046h,0fah,0b9h,002h,000h,099h,0f7h,0f9h,089h
	db 046h,0f4h,0b8h,0b0h,001h,0f7h,06eh,004h,08bh,0d8h,08bh,087h,00ch,044h,099h,0f7h
	db 0f9h,089h,056h,0eeh,0b8h,01ah,000h,083h,07eh,0eeh,000h,075h,008h,0b8h,01ch,000h
	db 0c7h,046h,0ech,01ch,000h
#endasm
Lf355:
	;
#asm
lf355:
	db 089h,046h,0ech
#endasm
	l22 = 1;
	goto Lf413;
	l12 = ((l10 + l6) / 2);
	l18 = 1;
	l20 = 26;
	l22 = 3;
#asm
	db 0e9h,092h,000h,08bh,046h,0fch,003h,046h,0fah,0b9h,002h,000h,099h,0f7h,0f9h,089h
	db 046h,0f4h
#endasm
	l18 = 0;
	l20 = 28;
	l22 = 3;
#asm
	db 0ebh,072h,08bh,046h,0fch,003h,046h,0fah,0b9h,002h,000h,099h,0f7h,0f9h,089h,046h
	db 0f4h
#endasm
	l18 = 3;
	l20 = 27;
	l22 = 3;
#asm
	db 0ebh,052h,08bh,046h,0fch,003h,046h,0fah,0b9h,002h,000h,099h,0f7h,0f9h,089h,046h
	db 0f4h
#endasm
	l18 = 2;
	l20 = 25;
	l22 = 5;
#asm
	db 0ebh,032h
#endasm
	l22 = 0;
#asm
	db 0ebh,02bh,0e1h,0f3h,03ch,0f2h,05dh,0f2h,0e1h,0f3h,07eh,0f2h,09fh,0f2h,0c0h,0f2h
	db 0e1h,0f2h,002h,0f3h,023h,0f3h,060h,0f3h,081h,0f3h,0a1h,0f3h,0c1h,0f3h
lf404:
	db 03dh,00eh,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,0e8h,0f3h
lf411:
	db 0ebh,0ceh
#endasm
Lf413:
	if (l22) goto Lf41d;
	return;
Lf41d:
	if (*(int *)((char *)pc_level + (432 * p4)) < l22) goto Lf565;
	g4500[((432 * p4) + l18)]++;
	l2 = 0;
Lf43d:
	l16 = 0;
	if (*(int *)((char *)pc_spell_pts_max + ((432 * p4) + (l2 << 2))) <= 0) goto Lf49d;
	l4 = 0;
Lf45f:
	if (((unsigned char)spell_table[(l4 * 6)] != l2) || (test_bit(((432 * p4) + 17776), l4) != 1)) goto Lf492;
	l16++;
Lf492:
	l4++;
	if (l4 < 82) goto Lf45f;
Lf49d:
	if (l16 <= 0) goto Lf557;
	l14 = 0;
	if (l12 <= 13) goto Lf4b4;
	l14++;
Lf4b4:
	if (l12 <= 16) goto Lf4bd;
	l14++;
Lf4bd:
	if (*(int *)((char *)pc_level + (432 * p4)) >= (unsigned char)g4597[(432 * p4)]) goto Lf4e6;
	(*(int *)((char *)pc_spell_pts_max + ((432 * p4) + (l2 << 2))))++;
	goto Lf557;
Lf4e6:
	*(int *)((char *)pc_spell_pts_max + ((432 * p4) + (l2 << 2))) = ((((random(((unsigned char)pc_skills[((432 * p4) + l20)] / 20)) + *(int *)((char *)pc_spell_pts_max + ((432 * p4) + (l2 << 2)))) + (unsigned char)g4504[((432 * p4) + l2)]) + (l16 << 1)) + l14);
Lf557:
	l2++;
	if (l2 < 6) goto Lf43d;
Lf565:
	return;
}
