#asm
	extrn $ldv:near
	extrn f09e2_:near
#endasm
extern int g4362[];
extern int g43b6[];
f51f0(p4, p6, p8, p10)
{
	char x0[2];
	char *l4;
	int l6;
	int l8;
	int l10;
	int l12;
	int l14;
	register int rsi;
#asm
	db 0b8h,02ch,000h,0f7h,06eh,006h,08bh,0c8h,08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh
	db 087h,0a8h,043h,003h,0c1h,089h,046h,0fch
#endasm
	l10 = 0;
#asm
	db 08bh,0d8h,080h,07fh,010h,000h,076h,033h,08bh,047h,008h,0bbh,005h,000h,0f7h,0ebh
	db 0b9h,064h,000h,0bbh,000h,000h
	call $ldv
	db 089h,046h,0feh,050h
	call f09e2_
	db 059h,08bh,05eh,0fch,08bh,04fh,006h,003h,0c1h,040h,089h,047h,006h,08bh,047h,006h
	db 03bh,047h,008h,07eh,006h,08bh,047h,008h,089h,047h,006h
#endasm
L524f:
	if (*(int *)(l4 + 6) > 0) goto L526e;
	*(int *)(l4 + 6) = 0;
	l4[16] = (char)(f09e2(6) + 6);
L526e:
	l6 = ((p8 - p10) - (unsigned char)l4[35]);
	*(int *)(l4 + 2) += l6;
	if (*(int *)(l4 + 2) <= *(int *)(l4 + 4)) goto L529b;
	*(int *)(l4 + 2) = *(int *)(l4 + 4);
L529b:
	if (*(int *)(l4 + 2) > 0) goto L5353;
	*(int *)(l4 + 2) = 0;
	*(int *)(l4 + 6) = 0;
	l4[34] = 3;
	l10 = 1;
	if (!p4) goto L5353;
#asm
l52c9:
	db 08bh,05eh,0fch,080h,07fh,02ah,0ffh,074h,056h,08ah,047h,02ah,098h,0b9h,00ah,000h
	db 099h,0f7h,0f9h,089h,046h,0f4h,08ah,047h,02ah,098h,099h,0f7h,0f9h,089h,056h,0f2h
	db 08bh,046h,0f4h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,08bh,056h,0f2h,003h,0c2h
	db 08bh,0d8h,0c6h,087h,048h,043h,000h,0c6h,087h,03eh,043h,000h
#endasm
	*(int *)((char *)g4362 + ((l12 * 10) + (l14 << 1))) = 0;
	l4[42] = 255;
L5328:
	if (!((unsigned char)(*(char **)((char *)g43b6 + (p4 << 1)))[220] & 1)) goto L5353;
	f2881(13464, (unsigned char)(*(char **)((char *)g43b6 + (p4 << 1)))[218], 1);
L5353:
	l8 = 0;
L5358:
	;
#asm
l5358:
	db 08bh,05eh,0fch,08bh,076h,0f8h,080h,078h,00eh,000h,076h,00dh,08ah,040h,00eh,02ah
	db 0e4h,03dh,0ffh,000h,074h,003h,0feh,048h,00eh
#endasm
L5371:
	l8++;
	if (l8 < 10) goto L5358;
	if (l4[19]) goto L5389;
	l4[35] = 0;
L5389:
	l8 = l4[41];
	if (l8 >= 0) goto L539b;
#asm
	db 040h,0ebh,00bh
#endasm
L539b:
	;
#asm
l539b:
	db 08bh,046h,0f8h,050h,03dh,000h,000h,058h,07eh,001h,048h
#endasm
L53a6:
	;
#asm
l53a6:
	db 088h,047h,029h
#endasm
	if ((unsigned)l4[36] <= 0) goto L53b5;
	l4[36]--;
L53b5:
	if (l4[43] != 3) goto L53c2;
	l4[43] = 0;
L53c2:
	return l10;
}
