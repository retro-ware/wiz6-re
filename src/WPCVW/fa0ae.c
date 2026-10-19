#asm
	extrn defer_window_draw_:near
	extrn erase_window_:near
	extrn f0a42_:near
#endasm
extern int bottom_line_win;
close_sheet(p4, p6)
{
	destroy_window(p4, 0);
	destroy_window(p6, 0);
#asm
	db 0a1h,0ceh,04fh,0ebh,038h
#endasm
#asm
la0d0:
	db 0b8h,000h,000h,050h,0ffh,036h,0b2h,04fh
	call f0a42_
	db 083h,0c4h,004h,0ebh,037h
#endasm
#asm
la0e0:
	db 0b8h,000h,000h,050h,0ffh,036h,0b2h,04fh
	call erase_window_
	db 083h,0c4h,004h,0ebh,027h
#endasm
	f0a42(bottom_line_win, 0);
#asm
	db 0ffh,036h,0b2h,04fh
	call defer_window_draw_
	db 059h,0ebh,00fh
#endasm
La108:
	;
#asm
la108:
	db 03dh,004h,000h,074h,0d3h,03dh,005h,000h,074h,0beh,03dh,00dh,000h,074h,0d9h
#endasm
La117:
	;
}
