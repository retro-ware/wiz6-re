#asm
	extrn f6091_:near
#endasm
extern char g4fd8[];
extern int g43ce;
extern int g43d0[];
extern int g515a[];
f6a9e()
{
	int l2;
	char x2[19];
	char l22;
	char x22[410];
	int l434;
	int l436;
	register int rsi;
	register int rdi;
	l436 = f66a7();
	if (l436 == -1) goto L6b2a;
	l2 = g515a[l436];
	f459a(&l434, l2, 0);
	g4fd8[l2] = 2;
	rsi = g43ce;
#asm
	db 0d1h,0e6h,089h,09ch,0dch,043h
#endasm
	g43d0[g43ce] = f5190(g43ce);
	f5072((unsigned char)l22, g43d0[g43ce]);
	rsi = &l434;
	rdi = ((432 * g43ce) + 17384);
#asm
	db 08ch,0d9h,08eh,0c1h,0b9h,0d8h,000h,0f3h,0a5h,0ffh,036h,0ceh,043h
	call f6091_
	db 059h
#endasm
	g43ce++;
L6b2a:
	;
}
