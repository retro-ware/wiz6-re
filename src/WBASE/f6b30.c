extern char g4fd8[];
extern int g43ce;
extern int g43dc[];
extern int g4fb8;
extern int g4fba;
f6b30(p4)
{
	int l2;
	register int rsi;
	register int rdi;
	g4fd8[g43dc[p4]] = 1;
	g43ce--;
	l2 = p4;
	goto L6b91;
L6b54:
	rsi = ((432 * l2) + 17816);
	rdi = ((432 * l2) + 17384);
#asm
	db 08ch,0d9h,08eh,0c1h,0b9h,0d8h,000h,0f3h,0a5h,08bh,046h,0feh,0d1h,0e0h,08bh,0d8h
	db 08bh,087h,0deh,043h,089h,087h,0dch,043h,08bh,087h,0d2h,043h,089h,087h,0d0h,043h
#endasm
	l2++;
L6b91:
	if (l2 < g43ce) goto L6b54;
	f32be(g4fba, 32, 3, 0);
	f32be(g4fb8, 32, 3, 0);
	l2 = 0;
	goto L6bd7;
L6bcd:
	f6091(l2);
	l2++;
L6bd7:
	if (l2 < g43ce) goto L6bcd;
}
