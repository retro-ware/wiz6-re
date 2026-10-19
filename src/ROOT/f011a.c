/* Allocate a window struct (w,h,x,y,color,flags,cursor,border chars), link it into the window list, clear it, optionally refresh. */
create_window(x, y, width, height, color, border, flags, refresh)
char x;
char y;
char color;
{
	char *win;
	int size;
	register int i;
	size = ((flags & 2) ? 20 : (((width << 1) * height) + 20));
	win = malloc(size);
	if (win) goto L0151;
	exit_game(11);
L0151:
	*win = *(char *)&width;
	win[1] = *(char *)&height;
	win[2] = x;
	win[3] = y;
	win[4] = color;
	win[5] = *(char *)&flags;
	win[6] = 0;
	win[7] = 0;
	if (border != -1) goto L01b2;
	setmem((win + 8), 8, 0);
	goto L02ac;
L01b2:
	if (border != -2) goto L01f3;
	win[8] = 27;
	win[9] = 27;
	win[10] = 28;
	win[11] = 27;
	win[12] = 28;
	win[13] = 27;
	win[14] = 27;
	win[15] = 28;
	goto L02ac;
L01f3:
	if (border != -3) goto L0234;
	win[8] = 26;
	win[9] = 27;
	win[10] = 27;
	win[11] = 26;
	win[12] = 27;
	win[13] = 26;
	win[14] = 27;
	win[15] = 27;
	goto L02ac;
L0234:
	if (border != -4) goto L0266;
	setmem((win + 8), 8, 0);
	win[10] = 28;
	win[12] = 28;
	win[15] = 28;
	goto L02ac;
L0266:
	if (border != -5) goto L0298;
	setmem((win + 8), 8, 0);
	win[8] = 35;
	win[9] = 35;
	win[10] = 35;
	goto L02ac;
L0298:
	i = 0;
L029b:
	(win + i)[8] = (char)(border + i);
	i++;
	if (i < 8) goto L029b;
L02ac:
	link_window(win);
	if ((flags & 2)) goto L02c1;
	blank_window(win);
L02c1:
	if (!refresh) goto L02ca;
	refresh_all_windows();
L02ca:
	return win;
}
