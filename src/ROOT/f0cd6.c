extern char g3592;
/* Build drive/path prefix plus a file name in a static buffer. */
make_data_path(file, alt)
{
	alt = ((g3592 == 5) && (alt == 1) ? 1 : 0);
	copy_through_char(13802, ((alt * 20) + 13632), 58);
	strcat(13802, file);
	return 13802;
}
