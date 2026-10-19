extern int pcfile_rec_size;
extern long pcfile_offset;
/* Read (mode 0) or write (mode 1) PCFILE.DBS character record index into buf. */
pcfile_record_io(buf, index, mode)
{
	int fd;
	stop_sound();
	fd = open(make_data_path(20462, 0), 2);
	lseek(fd, ((long)(index * pcfile_rec_size) + pcfile_offset), 0);
	if (mode) goto L45f6;
	read(fd, buf, pcfile_rec_size);
	goto L460c;
L45f6:
	if (mode != 1) goto L460c;
	write(fd, buf, pcfile_rec_size);
L460c:
	close(fd);
}
