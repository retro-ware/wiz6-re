extern int video_flags;
load_portrait(portrait)
{
	int fd;
	char x2[14];
	char l17;
	char x17[3];
	int fname;
	int size;
	char x24[287];
	int pixels;
	char x313[1];
	if (!(video_flags & 1)) goto L9022;
	strcpy(&fname, 21458);
	size = 32;
	goto L907d;
L9022:
	if (!(video_flags & 2)) goto L903f;
	strcpy(&fname, 21469);
	size = 16;
	goto L907d;
L903f:
	if (!(video_flags & 4)) goto L905c;
	strcpy(&fname, 21480);
	size = 16;
	goto L907d;
L905c:
	if (!(video_flags & 8)) goto L9079;
	strcpy(&fname, 21491);
	size = 32;
	goto L907d;
L9079:
	return;
L907d:
	l17 = (char)((portrait / 14) + 49);
	portrait = (portrait % 14);
	stop_sound();
	if ((fd = open(make_data_path(&fname, 0), 0)) == -1) {
	exit_game(14);
	}
	lseek(fd, (long)((portrait * size) * 9), 0);
	read(fd, &pixels, (size * 9));
	close(fd);
	f2256(&pixels, 2, 72, 9);
	return;
}
