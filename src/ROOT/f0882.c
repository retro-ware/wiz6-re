#asm
	extrn lseek_:near
#endasm
extern char g3070[];
extern char g3080[];
extern char g30c0[];
extern char g31c0[];
extern char g32c0[];
extern char record_packed[];
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
#asm
	db 0b8h,000h,000h,050h,08bh,046h,004h,0d1h,0e0h,08bh,0d8h,08bh,08fh,000h,033h,08bh
	db 046h,008h,08bh,0d9h,0f7h,0ebh,08bh,04eh,004h,0d1h,0e1h,0d1h,0e1h,08bh,0d9h,08bh
	db 08fh,048h,030h,08bh,09fh,04ah,030h,003h,0c1h,013h,0d3h,052h,050h,0ffh,036h,042h
	db 008h
	call lseek_
	db 083h,0c4h,008h
#endasm
	if (record_packed[type]) goto L0971;
	if (mode) goto L0951;
	read(scenario_fd, buf, record_sizes[type]);
	goto L096f;
L0951:
	if (mode != 1) goto L096f;
	write(scenario_fd, buf, record_sizes[type]);
L096f:
	;
#asm
l096f:
	db 0ebh,02eh
#endasm
L0971:
	if (mode) goto L099f;
	read(scenario_fd, &raw, record_sizes[type]);
	decode_text(&raw, buf);
L099f:
	;
}
