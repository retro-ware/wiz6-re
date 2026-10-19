extern int click_flag;
extern int mouse_present;
/* Return whether the mouse was clicked anywhere on the screen. */
check_screen_click()
{
	if (mouse_present != 1) goto L0c7d;
	set_click_region(0, 0, 0, 39, 24);
	set_click_region(1, 255, 0, 0, 0);
	check_click_regions(13720);
	return click_flag;
L0c7d:
	return 0;
}
