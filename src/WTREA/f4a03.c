#asm
	extrn wait_animating_:near
#endasm
extern int g502e;
extern int g5030;
end_text_page(p4)
{
	if (p4 != 1) goto L4a16;
#asm
	db 0ffh,036h,0cah,04fh
	call wait_animating_
	db 059h,0ebh,017h
#endasm
L4a16:
	wait_more_prompt();
	clear_window(g502e, 1);
	g5030 = 0;
L4a2d:
	;
}
