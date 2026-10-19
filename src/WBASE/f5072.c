extern int video_flags;
/* Load portrait number from WPORTn.* and define it as glyph set for slot. */
load_portrait(portrait, slot)
{
	int fd;
	char x2[14];
	char l17;
	char x17[3];
	int fname;
	int glyph_size;
	char x24[287];
	int bits;
	char x313[1];
	if (!(video_flags & 1)) goto L5096;
	strcpy(&fname, 20483);
	glyph_size = 32;
	goto L50f1;
L5096:
	if (!(video_flags & 2)) goto L50b3;
	strcpy(&fname, 20494);
	glyph_size = 16;
	goto L50f1;
L50b3:
	if (!(video_flags & 4)) goto L50d0;
	strcpy(&fname, 20505);
	glyph_size = 16;
	goto L50f1;
L50d0:
	if (!(video_flags & 8)) goto L50ed;
	strcpy(&fname, 20516);
	glyph_size = 32;
	goto L50f1;
L50ed:
	return;
L50f1:
	l17 = (char)((portrait / 14) + 49);
	portrait = (portrait % 14);
	stop_sound();
	fd = open(make_data_path(&fname, 0), 0);
	if (fd != -1) goto L512c;
	exit_game(14);
L512c:
	lseek(fd, (long)((portrait * glyph_size) * 9), 0);
	read(fd, &bits, (glyph_size * 9));
	close(fd);
	f2256(&bits, 2, ((slot * 9) + 72), 9);
	return;
}
