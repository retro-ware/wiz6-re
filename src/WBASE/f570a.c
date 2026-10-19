#asm
	extrn f00fe_:near
	extrn lseek_:near
#endasm
extern char g3590;
extern char g3591;
extern char g3592;
extern char g3593;
extern char g3594;
extern char g3595;
extern char g4584[];
extern int g3044;
extern int g3304;
extern int g3306;
extern int g3318;
extern int g3342;
extern int g363c;
extern int g43ce;
extern int g43d0[];
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
extern int g4fc8;
extern long g4f78;
extern long g4f7c;
extern long g4f80;
f570a(p4)
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
	int l506;
	char x506[38];
	int l546;
	char x546[1430];
	int l1978;
	char x1978[1738];
	int l3718;
	char l3719;
	char l3720;
	char l3721;
	char l3722;
	char l3723;
	char l3724;
	char l3804[80];
	char x3804[326];
	int l4132;
	int l4134;
	int l4136;
	char x4136[18];
	int l4156;
	char x4156[18];
	int l4176;
	char x4176[38];
	int l4216;
	char x4216[38];
	int l4256;
	char x4256[38];
	int l4296;
	char x4296[38];
	int l4336;
	int l4338;
	register int rsi;
	register int rdi;
	l4134 = 0;
	l4136 = g3044;
	l4136 = ((g3592 == 5) && (l4136 > 0) ? (l4136 + 2) : l4136);
	f3640();
	f075b(1212, &l4296);
	f075b(1213, &l4336);
	f075b(2258, &l4216);
	f075b(2259, &l4256);
	l4338 = 1;
	if (p4) goto L57a0;
	strcpy(&l546, f0cd6(20527, 1));
	goto L58b0;
L57a0:
	f0c82(&l4156, 13632, 58);
	f0c82(&l4176, 13692, 58);
	strcpy(&l546, &l4156);
	if (strlen(&l4176) <= 0) goto L583e;
	if (!strcmp(&l4156, &l4176)) goto L57ff;
	if (g3592 != 5) goto L5805;
L57ff:
	l4134 = 1;
L5805:
	f0d26(&l4176, -1, l4134, 0);
	l4338 = (l4134 != 0 ? 0 : 1);
	strcpy(&l546, 13692);
	goto L58a1;
L583e:
	if ((unsigned)g3592 <= 1) goto L5885;
	l4134 = 1;
	f0d26(&l4156, -1, l4134, 0);
	l4338 = (l4134 != 0 ? 0 : 1);
	strcpy(&l546, &l4156);
	goto L58a1;
L5885:
	if (strlen(13692) <= 0) goto L58a1;
	strcpy(&l546, 13692);
L58a1:
	strcat(&l546, 20539);
L58b0:
	l6 = open(&l546, 0);
	if (l6 != -1) goto L58fd;
	f5211(&l4216, 1);
	if (!l4134) goto L58f4;
	f0d26(&l4156, l4136, l4338, 1);
L58f4:
	return -1;
L58fd:
	f09fb(g3342, 0);
	f2a63();
	if (p4) goto L5926;
	f4f79(&l4296, &l4336);
	goto L592f;
L5926:
	f51e4(&l4256);
L592f:
	rsi = 13304;
	rdi = &l4132;
#asm
	db 08ch,0d9h,08eh,0c1h,0b9h,0cfh,000h,0f3h,0a5h,0b8h,000h,000h,050h,0b8h,000h,000h
	db 0bah,000h,000h,052h,050h,0ffh,076h,0fah
	call lseek_
	db 083h,0c4h,008h
#endasm
	l506 = read(l6, 13304, 414);
	if (l506 > 0) goto L59a8;
	f5211(&l4216, 0);
	close(l6);
	if (!l4134) goto L59a2;
	f0d26(&l4156, l4136, l4338, 1);
L59a2:
	return -1;
L59a8:
	l4 = 0;
L59ad:
	strcpy(((l4 * 20) + 13632), ((l4 * 20) + l3804));
	l4++;
	if (l4 < 4) goto L59ad;
	g3590 = l3724;
	g3591 = l3723;
	g3592 = l3722;
	g3593 = l3721;
	g3594 = l3720;
	g3595 = l3719;
	g4fc8 = (unsigned char)g3591;
	l4 = 0;
	goto L5b16;
L5a21:
	l506 = read(l6, &l1978, g3304);
	if (l506 > 0) goto L5a76;
	f5211(&l4216, 0);
	close(l6);
	if (!l4134) goto L5a70;
	f0d26(&l4156, l4136, l4338, 1);
L5a70:
	return -1;
L5a76:
	l506 = read(l6, &l3718, g3306);
	if (l506 > 0) goto L5acb;
	f5211(&l4216, 0);
	close(l6);
	if (!l4134) goto L5ac5;
	f0d26(&l4156, l4136, l4338, 1);
L5ac5:
	return -1;
L5acb:
	if (l4 >= 14) goto L5b13;
#asm
	db 0b8h,042h,005h,050h,08bh,046h,0fch,0d1h,0e0h,0d1h,0e0h,08bh,0d8h,0ffh,0b7h,0d4h
	db 007h,0ffh,0b7h,0d2h,007h,016h,08dh,086h,046h,0f8h,050h
	call f00fe_
	db 083h,0c4h,00ah,0b8h,0cch,006h,050h,08bh,046h,0fch,0d1h,0e0h,0d1h,0e0h,08bh,0d8h
	db 0ffh,0b7h,00ch,008h,0ffh,0b7h,00ah,008h,016h,08dh,086h,07ah,0f1h,050h
	call f00fe_
	db 083h,0c4h,00ah
#endasm
L5b13:
	l4++;
L5b16:
	if (l4 < g3318) goto L5a21;
	l506 = read(l6, &l72, 66);
	if (l506 > 0) goto L5b76;
	f5211(&l4216, 0);
	close(l6);
	if (!l4134) goto L5b70;
	f0d26(&l4156, l4136, l4338, 1);
L5b70:
	return -1;
L5b76:
	g4fa4 = l70;
	g4fa2 = l68;
	g4fa0 = l66;
	g4f9e = l64;
	g4f9c = l62;
	g4f9a = l60;
	g363c = l72;
	g4f96 = l56;
	g4f94 = l54;
	g4f92 = l52;
	g4f90 = l50;
	g4f8e = l48;
	g4f8c = l46;
	g4f98 = l58;
	l2 = 0;
L5bcf:
	*(int *)((char *)g4ec8 + (l2 << 2)) = *(int *)(l32 + (l2 << 2));
	*(int *)((char *)g4eca + (l2 << 2)) = *(int *)(l32 + ((l2 << 2) + 2));
	l2++;
	if (l2 < 6) goto L5bcf;
	g4f80 = l44;
	g4f7c = l40;
	g4f78 = l36;
	if (p4 != 1) goto L5cd4;
	g43ce = 0;
	l2 = 0;
	goto L5cc9;
L5c3e:
	l506 = read(l6, &l504, 432);
	if (l506 > 0) goto L5c93;
	f5211(&l4216, 0);
	close(l6);
	if (!l4134) goto L5c8d;
	f0d26(&l4156, l4136, l4338, 1);
L5c8d:
	return -1;
L5c93:
	g43d0[g43ce] = f5190(g43ce);
	rsi = &l504;
	rdi = ((432 * g43ce) + 17384);
#asm
	db 08ch,0d9h,08eh,0c1h,0b9h,0d8h,000h,0f3h,0a5h,0ffh,006h,0ceh,043h
#endasm
	l2++;
L5cc9:
	if (l2 < l8) goto L5c3e;
L5cd4:
	close(l6);
	if (!l4134) goto L5cf9;
	f0d26(&l4156, l4136, l4338, 1);
L5cf9:
	l2 = 0;
	goto L5d2a;
L5d00:
	f5072((unsigned char)g4584[(432 * l2)], g43d0[l2]);
	f6091(l2);
	l2++;
L5d2a:
	if (l2 < g43ce) goto L5d00;
	return 0;
}
