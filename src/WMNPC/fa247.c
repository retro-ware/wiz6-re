#asm
	extrn $ldv:near
#endasm
extern char g00cc[];
extern char g56d0[];
extern char g572a[];
extern char g5748[];
extern char g5784[];
extern char g57c0[];
extern int g54b2;
extern int g54b4[];
extern int g56ee[];
extern int g5856[];
fa247()
{
	int l2;
	char x2[12];
	char l15;
	char l16;
	char x16[1];
	char l18;
	char l22[4];
	char x22[30];
	char l53;
	char l54;
	int l56;
	char x56[18];
	int l76;
	int l78;
	int l80;
	l78 = 0;
	goto La368;
La255:
	l80 = g54b4[l78];
	access_scenario_record(1, &l76, g5856[l80], 0);
	strcpy(((l80 << 4) + 21744), &l76);
	g56d0[l80] = l16;
	g56ee[l80] = (((unsigned char)l54 * (unsigned char)l53) + l56);
	if (g00cc[(unsigned char)l16] != 1) goto La2ec;
#asm
	db 08bh,046h,0b0h,0d1h,0e0h,08bh,0d8h,08bh,087h,0eeh,056h,099h,050h,052h,0f7h,066h
	db 0c6h,08bh,0c8h,058h,0f7h,066h,0c4h,003h,0c8h,058h,0f7h,066h,0c4h,003h,0d1h,089h
	db 056h,0c6h,089h,046h,0c4h
#endasm
La2ec:
	;
#asm
la2ec:
	db 0a1h,0b8h,051h,099h,050h,052h,0f7h,066h,0c6h,08bh,0c8h,058h,0f7h,066h,0c4h,003h
	db 0c8h,058h,0f7h,066h,0c4h,003h,0d1h,0b9h,064h,000h,0bbh,000h,000h
	call $ldv
	db 08bh,04eh,0b0h,0d1h,0e1h,0d1h,0e1h,08bh,0d9h,089h,097h,0e0h,057h,089h,087h,0deh
	db 057h
#endasm
	g572a[l80] = l15;
	for (l2 = 0; l2 < 2; l2++) {
	g5748[((l80 << 1) + l2)] = l22[l2];
	g5784[((l80 << 1) + l2)] = l22[(l2 + 2)];
	}
	g57c0[l80] = l18;
	l78++;
La368:
	if (l78 < g54b2) goto La255;
}
