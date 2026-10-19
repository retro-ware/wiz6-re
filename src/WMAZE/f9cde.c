#asm
	extrn wait_animating_m_:near
#endasm
extern int g522a;
extern int g522c;
end_text_page_m(p4)
{
	if (p4 != 1) goto L9cf1;
#asm
	db 0ffh,036h,0cah,04fh
	call wait_animating_m_
	db 059h,0ebh,017h
#endasm
L9cf1:
	wait_more_prompt_m();
	clear_window(g522a, 1);
	g522c = 0;
L9d08:
	;
}
