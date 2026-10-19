refresh_member_card(p4, p6)
{
	resume_window_draw(p4);
	draw_member_card(p4, p6);
	wait_seconds_or_enter(4);
	defer_window_draw(p4);
}
