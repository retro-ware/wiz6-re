extern int g522a;
extern int g522c;
extern int message_delay;
end_text_page_m(p4)
{
	if (p4 != 1) goto L9cf1;
	wait_animating_m(message_delay);
	goto L9d08;
L9cf1:
	wait_more_prompt_m();
	clear_window(g522a, 1);
	g522c = 0;
L9d08:
	;
}
