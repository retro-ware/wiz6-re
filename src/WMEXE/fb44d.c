extern char g00df[];
extern char g00e1[];
extern char g3593;
extern char g451b[];
extern char g451c[];
extern char g4528[];
extern char g4587[];
extern int g4352;
extern int g435c;
extern int g435e;
extern int g43a8[];
extern int g4428[];
extern int g4fc8;
extern int g50fc;
extern int g5118;
fb44d(p4)
char *p4;
{
	char x0[2];
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	int l14;
	int l16;
	char x16[4];
	char l21;
	char x21[8];
	char l30;
	char x30[30];
	int l62;
	char x62[26];
	int l90;
	register int rsi;
	l10 = (unsigned char)p4[31];
	l12 = (unsigned char)p4[32];
	f6ba3(20492, g435e, g435c);
	l4 = 0;
	l6 = 0;
	l16 = -1;
	if (g435e) goto Lb675;
	l8 = *(int *)(p4 + 10);
	f0882(1, &l90, *(int *)((char *)g4428 + ((432 * g435c) + (l8 << 3))), 0);
	strcpy(20572, &l90);
	if (!l62) goto Lb60c;
	l4 = (l62 / 256);
	l6 = (l62 % 256);
	switch ((unsigned char)l30) {
case 12:
	f075b(3313, 20652);
	goto Lb603;
case 13:
	f075b(3314, 20652);
	l16 = 24;
	goto Lb603;
case 16:
	f075b(3315, 20652);
	goto Lb603;
default:
	if (l6 < 80) goto Lb542;
	f075b(3318, 20652);
	goto Lb5e6;
Lb542:
	if (l4) goto Lb5d3;
	if (g4587[(432 * g435c)] != 6) goto Lb5ad;
	l4 = ((((unsigned char)g4528[(432 * g435c)] / 15) + 2) - (unsigned char)g00df[(l6 * 6)]);
	f77d4(g435c, 12, 1);
	if (l4 >= 0) goto Lb5a2;
	l4 = 0;
Lb5a2:
	if (l4 <= 6) goto Lb5ad;
	l4 = 6;
Lb5ad:
	if (l4) goto Lb5c3;
	f075b(3305, 20652);
	goto Lb5d1;
Lb5c3:
	f075b(3304, 20652);
Lb5d1:
	goto Lb5e6;
Lb5d3:
	f075b(3312, 20652);
	l16 = 22;
Lb5e6:
	goto Lb603;
	}
Lb603:
	f7096(l8);
	goto Lb636;
Lb60c:
	if (l30 == 2) goto Lb618;
	if (l30 != 4) goto Lb628;
Lb618:
	f075b(3317, 20652);
	goto Lb636;
Lb628:
	f075b(3316, 20652);
Lb636:
	if (l21 != 7) goto Lb655;
	g4352 = 1;
	l16 = -1;
	f075b(3312, 20652);
Lb655:
	f6d32(20492, 20652, 20572, 1, 14, 11);
	goto Lb675;
Lb675:
	if (!l4) goto Lb84c;
	g50fc = 0;
	g5118 = 0;
	l14 = (f09e2((((unsigned char)g00df[(l6 * 6)] * 10) + (l4 * 5))) + -10);
	if (g435e) goto Lb733;
	if (l16 == -1) goto Lb731;
	f77d4(g435c, l16, 3);
	if ((unsigned char)g451c[((432 * g435c) + l16)] >= l14) goto Lb731;
	if (g3593 == 1) goto Lb72b;
	if (f09e2(36) <= ((unsigned char)g451b[(432 * g435c)] + 18)) goto Lb72b;
	g50fc = 1;
	goto Lb731;
Lb72b:
	g5118 = 1;
Lb731:
	goto Lb779;
Lb733:
	rsi = (44 * g435c);
	if (((*(int *)((char *)g43a8[g435e] + rsi) * 5) - 2) >= l14) goto Lb779;
	if (g3593 == 2) goto Lb773;
	if (f09e2(7)) goto Lb773;
	g50fc = 1;
	goto Lb779;
Lb773:
	g5118 = 1;
Lb779:
	if (g50fc != 1) goto Lb7a4;
	if (((unsigned char)g00e1[(l6 * 6)] & 2)) goto Lb7a4;
	g50fc = 0;
	g5118 = 1;
Lb7a4:
	if (g5118 != 1) goto Lb7c9;
	if (((unsigned char)g00e1[(l6 * 6)] & 1)) goto Lb7c9;
	g5118 = 0;
Lb7c9:
	if (g5118 != 1) goto Lb7fa;
	f774b(2);
	f6d0b(3201, 5, 2);
	f774b((g4fc8 / 2));
	goto Lb84a;
Lb7fa:
	if (g50fc != 1) goto Lb83b;
	f774b(2);
	f6d0b(3202, 4, 2);
	f774b((g4fc8 / 2));
	p4[31] = *(char *)&g435e;
	p4[32] = *(char *)&g435c;
Lb83b:
	f9405(p4, l6, l4);
Lb84a:
	;
#asm
lb84a:
	db 0ebh,00eh
#endasm
Lb84c:
	f774b((g4fc8 / 2));
Lb85a:
	;
}
