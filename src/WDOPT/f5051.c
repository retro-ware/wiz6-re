#asm
	extrn f5011_:near
#endasm
extern int g4ee0[];
extern int g4f9a;
f5051()
{
#asm
$20004 equ 1
#endasm
	g4ee0[g4f9a] = 0;
#asm
	db 050h,08bh,04eh,004h,0d1h,0e1h,0a1h,0a8h,04fh,003h,0c1h,005h,040h,002h,050h
	call f5011_
	db 083h,0c4h,004h
#endasm
	f0aaa(4);
}
