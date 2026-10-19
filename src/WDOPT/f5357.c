extern int g50c6[];
/* Set the map cell next to x, y in direction dir to value. */
mark_map_neighbor(dir, value, x, y)
{
	switch (dir) {
case 0:
	y--;
	goto L5387;
case 1:
	x++;
	goto L5387;
case 2:
	y++;
	goto L5387;
case 3:
	x--;
	goto L5387;
	}
L5387:
	if ((((x < 0) || (x >= 5)) || (y < 0)) || (y >= 5)) goto L53c0;
	*(int *)((char *)g50c6 + ((x * 10) + (y << 1))) = value;
L53c0:
	;
}
