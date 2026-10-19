#asm
	extrn f4ecb_:near
#endasm
extern int g5144;
f4f73(p4)
char *p4;
{
	if ((unsigned char)p4[7] < ((unsigned char)p4[1] - 1)) goto L4f93;
#asm
	db 053h
	call f4ecb_
	db 059h,0ebh,015h
#endasm
L4f93:
	set_cursor(p4, g5144, ((unsigned char)p4[7] + 1));
L4fa8:
	;
}
