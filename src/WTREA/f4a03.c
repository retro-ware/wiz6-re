extern int g502e;
extern int g5030;
extern int message_delay;
end_text_page(p4)
{
	if (p4 != 1) goto L4a16;
	wait_animating(message_delay);
	goto L4a2d;
L4a16:
	wait_more_prompt();
	clear_window(g502e, 1);
	g5030 = 0;
L4a2d:
	;
}
