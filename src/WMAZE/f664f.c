#asm
	extrn f00fe_:near
	extrn lseek_:near
	extrn write_:near
#endasm
extern char g3592;
extern int g3044;
extern int g3304;
extern int g3306;
extern int g3318;
extern int g3342;
extern int g363c;
extern int g43ce;
extern int g4ec8[];
extern int g4eca[];
extern int g4f8c;
extern int g4f8e;
extern int g4f90;
extern int g4f92;
extern int g4f94;
extern int g4f96;
extern int g4f98;
extern int g4f9a;
extern int g4f9c;
extern int g4f9e;
extern int g4fa0;
extern int g4fa2;
extern int g4fa4;
extern int g4fb0;
extern int g4fb2;
extern long g4f78;
extern long g4f7c;
extern long g4f80;
f664f()
{
	int l2;
	int l4;
	int l6;
	int l8;
	char l32[24];
	long l36;
	long l40;
	long l44;
	int l46;
	int l48;
	int l50;
	int l52;
	int l54;
	int l56;
	int l58;
	int l60;
	int l62;
	int l64;
	int l66;
	int l68;
	int l70;
	int l72;
	char x72[430];
	int l504;
	char x504[1344];
	int l1850;
	char x1850[1738];
	int l3590;
	int l3592;
	char x3592[38];
	int l3632;
	char x3632[82];
	int l3716;
	int l3718;
	char x3718[18];
	int l3738;
	char x3738[18];
	int l3758;
	char x3758[38];
	int l3798;
	char x3798[38];
	int l3838;
	int l3840;
	register int rsi;
	register int rdi;
	l3716 = 0;
	l3718 = g3044;
	l3718 = ((g3592 == 5) && (l3718 > 0) ? (l3718 + 2) : l3718);
	f075b(2257, &l3838);
	f075b(2258, &l3798);
	f09fb(g3342, 0);
	f3640();
	f0c82(&l3738, 13632, 58);
	f0c82(&l3758, 13692, 58);
	l3840 = 1;
	strcpy(&l3632, &l3738);
	if (strlen(&l3758) <= 0) goto L6750;
	if (!strcmp(&l3738, &l3758)) goto L6711;
	if (g3592 != 5) goto L6717;
L6711:
	l3716 = 1;
L6717:
	f0d26(&l3758, -1, l3716, 0);
	l3840 = (l3716 != 0 ? 0 : 1);
	strcpy(&l3632, 13692);
	goto L67b3;
L6750:
	if ((unsigned)g3592 <= 1) goto L6797;
	l3716 = 1;
	f0d26(&l3738, -1, l3716, 0);
	l3840 = (l3716 != 0 ? 0 : 1);
	strcpy(&l3632, &l3738);
	goto L67b3;
L6797:
	if (strlen(13692) <= 0) goto L67b3;
	strcpy(&l3632, 13692);
L67b3:
	strcat(&l3632, 20462);
	f0a42(g4fb2, 0);
	f31d1(g4fb0);
	f2a63();
	l6 = open(&l3632, 769);
	if (l6 != -1) goto L6822;
	f6631(&l3798);
	if (!l3716) goto L6819;
	f0d26(&l3738, l3718, l3840, 1);
L6819:
	return -1;
L6822:
	;
#asm
l6822:
	db 0b8h,000h,000h,050h,0b8h,000h,000h,0bah,000h,000h,052h,050h,0ffh,076h,0fah
	call lseek_
	db 083h,0c4h,008h
#endasm
	f53b8(&l3838);
#asm
	db 0ffh,036h,004h,033h,0a1h,03ch,036h,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,0ffh,0b7h,0d4h
	db 007h,0ffh,0b7h,0d2h,007h,0a1h,0aah,04fh,08ch,0dah,052h,050h
	call f00fe_
	db 083h,0c4h,00ah,0ffh,036h,006h,033h,0a1h,03ch,036h,0d1h,0e0h,0d1h,0e0h,08bh,0d8h
	db 0ffh,0b7h,00ch,008h,0ffh,0b7h,00ah,008h,0a1h,0a8h,04fh,08ch,0dah,052h,050h
	call f00fe_
	db 083h,0c4h,00ah
#endasm
	movmem(((g363c * 10) + 20204), ((g363c * 10) + 13304), 10);
	l3592 = write(l6, 13304, 414);
	if (l3592 > 0) goto L68fe;
	f6631(&l3798);
	close(l6);
	if (!l3716) goto L68f8;
	f0d26(&l3738, l3718, l3840, 1);
L68f8:
	return -1;
L68fe:
	l4 = 0;
	goto L6a17;
L6906:
	if (l4 >= 14) goto L6950;
#asm
	db 0ffh,036h,004h,033h,016h,08dh,086h,0c6h,0f8h,050h,08bh,046h,0fch,0d1h,0e0h,0d1h
	db 0e0h,08bh,0d8h,0ffh,0b7h,0d4h,007h,0ffh,0b7h,0d2h,007h
	call f00fe_
	db 083h,0c4h,00ah,0ffh,036h,006h,033h,016h,08dh,086h,0fah,0f1h,050h,08bh,046h,0fch
	db 0d1h,0e0h,0d1h,0e0h,08bh,0d8h,0ffh,0b7h,00ch,008h,0ffh,0b7h,00ah,008h
	call f00fe_
	db 083h,0c4h,00ah
#endasm
	goto L6976;
L6950:
	setmem(&l1850, 1346, 0);
	setmem(&l3590, 1740, 0);
L6976:
	l3592 = write(l6, &l1850, g3304);
	if (l3592 > 0) goto L69c5;
	f6631(&l3798);
	close(l6);
	if (!l3716) goto L69bf;
	f0d26(&l3738, l3718, l3840, 1);
L69bf:
	return -1;
L69c5:
	l3592 = write(l6, &l3590, g3306);
	if (l3592 > 0) goto L6a14;
	f6631(&l3798);
	close(l6);
	if (!l3716) goto L6a0e;
	f0d26(&l3738, l3718, l3840, 1);
L6a0e:
	return -1;
L6a14:
	l4++;
L6a17:
	if (l4 < g3318) goto L6906;
	l70 = g4fa4;
	l68 = g4fa2;
	l66 = g4fa0;
	l64 = g4f9e;
	l62 = g4f9c;
	l60 = g4f9a;
	l72 = g363c;
	l56 = g4f96;
	l54 = g4f94;
	l52 = g4f92;
	l50 = g4f90;
	l48 = g4f8e;
	l46 = g4f8c;
	l58 = g4f98;
	l2 = 0;
L6a7c:
	*(int *)(l32 + (l2 << 2)) = *(int *)((char *)g4ec8 + (l2 << 2));
	*(int *)(l32 + ((l2 << 2) + 2)) = *(int *)((char *)g4eca + (l2 << 2));
	l2++;
	if (l2 < 6) goto L6a7c;
	l44 = g4f80;
	l40 = g4f7c;
	l36 = g4f78;
	l8 = g43ce;
	l3592 = write(l6, &l72, 66);
	if (l3592 > 0) goto L6b26;
	f6631(&l3798);
	close(l6);
	if (!l3716) goto L6b20;
	f0d26(&l3738, l3718, l3840, 1);
L6b20:
	return -1;
L6b26:
	l2 = 0;
	goto L6b99;
L6b2d:
	rsi = ((432 * l2) + 17384);
	rdi = &l504;
#asm
	db 08ch,0d9h,08eh,0c1h,0b9h,0d8h,000h,0f3h,0a5h,0b8h,0b0h,001h,050h,08dh,086h,008h
	db 0feh,050h,0ffh,076h,0fah
	call write_
	db 083h,0c4h,006h,089h,086h,0f8h,0f1h,03dh,000h,000h,07fh,034h
#endasm
	f6631(&l3798);
	close(l6);
	if (!l3716) goto L6b90;
	f0d26(&l3738, l3718, l3840, 1);
L6b90:
	return -1;
L6b96:
	l2++;
L6b99:
	if (l2 < g43ce) goto L6b2d;
	close(l6);
	if (!l3716) goto L6bc7;
	f0d26(&l3738, l3718, l3840, 1);
L6bc7:
	return 0;
}
