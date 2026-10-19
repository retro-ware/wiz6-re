extern char click_regions[];
extern char g3599[];
extern char g359a[];
extern char g359b[];
/* Set click region i to the rectangle x1,y1,x2,y2 (255 ends the table). */
set_click_region(i, x1, y1, x2, y2)
char x1;
char y1;
char x2;
char y2;
{
	click_regions[(i << 2)] = x1;
	g3599[(i << 2)] = y1;
	g359a[(i << 2)] = x2;
	g359b[(i << 2)] = y2;
}
