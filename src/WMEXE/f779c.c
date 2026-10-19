extern int party_picture_win;
clear_msg_line(p4)
{
	clear_window_area(party_picture_win, 0, p4, 39, p4);
	set_cursor(party_picture_win, 1, p4);
	combat_delay(1);
}
