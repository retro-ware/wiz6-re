#asm
	extrn movmem_:near
#endasm
extern char g0190[];
extern char g019d[];
extern char g4589[];
extern char g458c[];
extern char g4eda;
extern int g43a8[];
extern int g43ce;
extern int g4400[];
extern int g4402[];
extern int g4404[];
extern int g4406[];
extern int g440c[];
extern int g4ed8;
f4d5b()
{
	register int rsi;
	register int rdi;
	rdi = 0;
	g019d[g43a8[rdi]] = *(char *)&g43ce;
	rsi = rdi;
L4d73:
	;
#asm
l4d73:
	db 08bh,0c7h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,0c6h,080h,08ch,001h,000h
#endasm
	rsi++;
	if (rsi < 6) goto L4d73;
	if (g4ed8 <= 0) goto L4da0;
	g0190[g43a8[rdi]] = g4eda;
L4da0:
	rsi = 0;
L4da3:
	;
#asm
l4da3:
	db 08bh,0c7h,0d1h,0e0h,08bh,0d8h,08bh,09fh,0a8h,043h,0c6h,080h,092h,001h,000h
#endasm
	rsi++;
	if (rsi < 4) goto L4da3;
	rsi = 0;
	goto L4ef6;
L4dbe:
	*(int *)((char *)g43a8[rdi] + (44 * rsi)) = *(int *)((char *)g440c + (432 * rsi));
	*(int *)(((char *)g43a8[rdi] + (44 * rsi)) + 4) = *(int *)((char *)g4402 + (432 * rsi));
	*(int *)(((char *)g43a8[rdi] + (44 * rsi)) + 2) = *(int *)((char *)g4400 + (432 * rsi));
	*(int *)(((char *)g43a8[rdi] + (44 * rsi)) + 8) = *(int *)((char *)g4406 + (432 * rsi));
	*(int *)(((char *)g43a8[rdi] + (44 * rsi)) + 6) = *(int *)((char *)g4404 + (432 * rsi));
	((char *)g43a8[rdi] + (44 * rsi))[34] = g4589[(432 * rsi)];
#asm
	db 0b8h,00ah,000h,050h,08bh,0c7h,0d1h,0e0h,08bh,0d8h,08bh,087h,0a8h,043h,003h,0c2h
	db 005h,00eh,000h,050h,0b8h,0b0h,001h,0f7h,0eeh,005h,00ah,045h,050h
	call movmem_
	db 083h,0c4h,006h
#endasm
	((char *)g43a8[rdi] + (44 * rsi))[35] = g458c[(432 * rsi)];
	((char *)g43a8[rdi] + (44 * rsi))[42] = 255;
	rsi++;
L4ef6:
	if (rsi < g43ce) goto L4dbe;
}
