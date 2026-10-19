#asm
	extrn f2a63_:near
#endasm
extern int g363a;
extern int g4356;
extern int g438a;
extern int g438c;
extern int g43ce;
extern int g4fb6;
extern int g4fce;
f724f()
{
	int l2;
	f5c7a();
	f55ea();
	f53ca(6);
	f7113();
	f32be(g438a, 32, 3, 0);
	f02f0(g438c, 0);
	f02f0(g4fb6, 0);
	if (g4356 != 1) goto L72c4;
	l2 = 0;
	goto L72b0;
L72a6:
	f5fe6(l2);
	l2++;
L72b0:
	if (l2 < g43ce) goto L72a6;
	f6fb6();
	g363a = g4fce;
#asm
	db 0ebh,009h
#endasm
L72c4:
	;
#asm
l72c4:
	db 0c7h,006h,03ah,036h,00bh,000h
	call f2a63_
#endasm
L72cd:
	;
}
