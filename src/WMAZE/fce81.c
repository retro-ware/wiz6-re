#asm
	extrn fca32_:near
#endasm
extern int g4ee0[];
extern int party_facing;
fce81()
{
#asm
$20004 equ 1
#endasm
	g4ee0[party_facing] = 0;
#asm
	db 050h,08bh,04eh,004h,0d1h,0e1h,0a1h,0a8h,04fh,003h,0c1h,005h,040h,002h,050h
	call fca32_
	db 083h,0c4h,004h
#endasm
	play_sound(4);
}
