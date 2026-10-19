/* Open a data file by name and read len bytes into buf; fatal error 6 if missing. */
read_file_bytes(name, buf, len)
{
	int fd;
	fd = open(make_data_path(name, 0), 0);
	if (fd != -1) goto L46ca;
	exit_game(6);
L46ca:
	read(fd, buf, len);
	close(fd);
}
