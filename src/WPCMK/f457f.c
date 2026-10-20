extern int pcfile_rec_size;
extern long pcfile_offset;
/* Read (mode 0) or write (mode 1) one character record of the roster file at a slot. */
access_roster_record(rec, slot, mode)
{
	int fd;
	stop_sound();
	fd = open(make_data_path(20462, 0), 2);
	lseek(fd, ((long)(slot * pcfile_rec_size) + pcfile_offset), 0);
	if (!mode) {
	read(fd, rec, pcfile_rec_size);
	} else {
	if (mode == 1) {
	write(fd, rec, pcfile_rec_size);
	}
	}
	close(fd);
}
