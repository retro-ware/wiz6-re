/* Redraw the full character sheet of member p8. */
draw_sheet(sheet, menu, member)
{
	fill_window(sheet, 0, 1, 0);
	fill_window(menu, 32, 3, 0);
	defer_window_draw(sheet);
	draw_sheet_frame(sheet);
	draw_stats_panel(sheet, member);
	draw_inventory_panel(sheet, member);
	resume_window_draw(sheet);
	refresh_all_windows();
}
