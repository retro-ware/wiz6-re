extern int click_flag;
extern int mouse_present;
/* Poll the mouse against the click-region table; returns region, sets click flag if negative. */
check_click_regions(arg)
{
	int result;
	result = 0;
	clear_click_flag();
	if (mouse_present != 1) goto L0c06;
	result = drv_poll_click(arg);
	click_flag = (result < 0 ? 1 : 0);
L0c06:
	return (result < 0 ? -result : result);
}
