/* Open a data file by name and read len bytes into buf; fatal error 6 if missing. */
read_file_bytes(name, buf, len)
{
	int fd;
	if ((fd = open(make_data_path(name, 0), 0)) == -1) {
	exit_game(6);
	}
	read(fd, buf, len);
	close(fd);
}
