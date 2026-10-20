extern char g3592;
extern int disk_header;
/* Make sure the disk needed for an action is inserted. */
ensure_disk_for(kind, arg)
{
	char x0[18];
	int label;
	int disk;
	int want;
	disk = 0;
	switch ((unsigned char)g3592) {
case 0:
case 1:
	disk = 0;
	goto L12e3;
case 2:
	switch (kind) {
case 0:
case 2:
	disk = (arg >= 0 ? (arg < 8 ? 1 : 2) : 0);
	goto L1179;
case 1:
case 3:
	disk = 0;
	goto L1179;
	}
L1179:
	goto L12e3;
case 3:
	switch (kind) {
case 0:
case 2:
	disk = (arg >= 0 ? (arg >= 8 ? (arg >= 10 ? ((arg == 10) || (arg == 12) ? 3 : 4) : 2) : 1) : 0);
	goto L11ce;
case 1:
case 3:
	disk = 0;
	goto L11ce;
	}
L11ce:
	goto L12e3;
case 4:
	switch (kind) {
case 0:
case 2:
	disk = (arg >= 0 ? ((arg < 4) || (arg == 6) ? 1 : ((arg < 6) || (arg == 7) ? 2 : (arg != 8 ? (arg != 9 ? (arg != 10 ? (arg != 12 ? (arg == 11 ? 7 : 8) : 6) : 5) : 4) : 3))) : 0);
	goto L124b;
case 1:
case 3:
	disk = 0;
	goto L124b;
	}
L124b:
	goto L12e3;
case 5:
	switch (kind) {
case 0:
case 2:
	disk = (arg >= 0 ? ((arg < 4) || (arg == 6) ? 3 : ((arg < 6) || (arg == 7) ? 4 : (arg != 8 ? (arg != 9 ? (arg != 10 ? (arg != 12 ? (arg == 11 ? 9 : 10) : 8) : 7) : 6) : 5))) : 0);
	goto L12c8;
case 1:
case 3:
	disk = 0;
	goto L12c8;
	}
L12c8:
	goto L12e3;
	}
L12e3:
	want = ((g3592 == 5) && (disk > 0) ? (disk - 2) : disk);
	if (want != disk_header) {
	copy_through_char(&label, 13632, 58);
	prompt_insert_disk(&label, disk, 1, 1);
	refresh_all_windows();
	}
}
