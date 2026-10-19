#asm
	extrn f5690_:near
	extrn f5a1e_:near
	extrn f5af3_:near
#endasm
extern int g0002;
extern int g4362;
extern int g5262;
extern int g5264;
extern int g5266;
extern int g5268;
f5b21(p4)
char *p4;
{
	int l2;
	int l4;
	l4 = f3350(20484, (unsigned char)*p4);
	if (l4 < 0) goto L5be0;
#asm
l5b44:
	db 0e9h,089h,000h
#endasm
	p4++;
	g5266++;
#asm
	db 0e9h,08ch,000h
#endasm
	p4++;
#asm
	db 0ffh,036h,0cah,04fh
	call f5a1e_
	db 059h,0e9h,07eh,000h
#endasm
	p4++;
	f5508((unsigned char)*p4, 4);
	g4362 = 4;
	f4572(4, 0);
	f5690();
	p4++;
#asm
	db 0ebh,04dh
#endasm
	p4++;
	g4362 = 0;
#asm
	call f5690_
	db 0ebh,03fh
#endasm
	p4++;
	f02f0(g5264, 1);
	g5266 = 0;
#asm
	db 0ebh,026h
#endasm
	p4++;
#asm
	db 0b8h,000h,000h,050h
	call f5af3_
	db 059h,0ebh,019h,047h,05bh,051h,05bh,05fh,05bh,090h,05bh,09eh,05bh,0b7h,05bh
l5bd0:
	db 03dh,006h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,0c4h,05bh
l5bdd:
	db 0e9h,047h,0ffh
#endasm
L5be0:
	if (g5266 <= g5262) goto L5bf1;
	f5af3(0);
L5bf1:
	l2 = (20 - ((strlen(p4) + 1) / 2));
	switch ((unsigned char)*p4) {
case 36:
	p4++;
	l2 = 0;
	goto L5c31;
case 94:
	p4++;
	l2 = g5268;
	goto L5c31;
	}
L5c31:
	f030b(g5264, l2, g5266);
	g5268 = l2;
	g5266++;
	f24e9(g5264, p4, g0002);
}
