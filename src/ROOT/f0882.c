extern char g3070[];
extern char g3080[];
extern char g30c0[];
extern char g31c0[];
extern char g32c0[];
extern char record_packed[];
extern int g3048[];
extern int record_sizes[];
extern int scenario_fd;
/* Read (0) or write (1) one record of a given type from SCENARIO.DBS, decoding packed types. */
access_scenario_record(type, buf, index, mode)
{
	char x0[253];
	int raw;
	char x255[1];
	switch (type) {
case 2:
case 3:
	index = (unsigned char)g3070[index];
	goto L08f2;
case 5:
	index = (unsigned char)g3080[index];
	goto L08f2;
case 7:
	index = (unsigned char)g30c0[index];
	goto L08f2;
case 4:
	index = (unsigned char)g31c0[index];
	goto L08f2;
case 8:
	index = (unsigned char)g32c0[index];
	goto L08f2;
	}
L08f2:
	stop_sound();
	lseek(scenario_fd, (((long)index * record_sizes[type]) + *(long *)((char *)g3048 + (type << 2))), 0);
	if (record_packed[type]) goto L0971;
	if (!mode) {
	read(scenario_fd, buf, record_sizes[type]);
	} else {
	if (mode == 1) {
	write(scenario_fd, buf, record_sizes[type]);
	}
	}
	goto L099f;
L0971:
	if (mode) goto L099f;
	read(scenario_fd, &raw, record_sizes[type]);
	decode_text(&raw, buf);
L099f:
	;
}
