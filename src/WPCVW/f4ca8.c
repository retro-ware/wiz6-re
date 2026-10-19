draw_sheet_frame(p4)
{
	int l2;
	put_frame_char(p4, 0, 0, 1);
	put_frame_char(p4, 39, 0, 3);
	put_frame_char(p4, 0, 19, 6);
	put_frame_char(p4, 39, 19, 8);
	l2 = 1;
L4d04:
	put_frame_char(p4, l2, 0, 2);
	put_frame_char(p4, l2, 19, 7);
	l2++;
	if (l2 < 39) goto L4d04;
	l2 = 1;
L4d3c:
	put_frame_char(p4, 0, l2, 4);
	put_frame_char(p4, 39, l2, 5);
	l2++;
	if (l2 < 19) goto L4d3c;
	put_frame_char(p4, 0, 4, 9);
	put_frame_char(p4, 0, 13, 9);
	put_frame_char(p4, 0, 15, 9);
	put_frame_char(p4, 0, 17, 9);
	put_frame_char(p4, 39, 4, 10);
	put_frame_char(p4, 2, 19, 11);
	put_frame_char(p4, 10, 19, 11);
	put_frame_char(p4, 12, 19, 11);
	put_frame_char(p4, 20, 19, 11);
	put_frame_char(p4, 39, 8, 10);
	put_frame_char(p4, 37, 19, 11);
	l2 = 1;
L4e5b:
	put_frame_char(p4, l2, 4, 12);
	l2++;
	if (l2 < 39) goto L4e5b;
	l2 = 21;
L4e7f:
	put_frame_char(p4, l2, 8, 12);
	l2++;
	if (l2 < 39) goto L4e7f;
	put_frame_char(p4, 20, 4, 14);
	l2 = 5;
L4eb8:
	put_frame_char(p4, 20, l2, 13);
	l2++;
	if (l2 < 19) goto L4eb8;
	l2 = 8;
L4edc:
	put_frame_char(p4, 37, l2, 13);
	l2++;
	if (l2 < 19) goto L4edc;
	put_frame_char(p4, 20, 8, 33);
	put_frame_char(p4, 20, 13, 15);
	put_frame_char(p4, 20, 15, 15);
	put_frame_char(p4, 20, 17, 15);
	put_frame_char(p4, 37, 8, 14);
	l2 = 1;
L4f66:
	put_frame_char(p4, l2, 13, 12);
	put_frame_char(p4, l2, 15, 12);
	put_frame_char(p4, l2, 17, 12);
	l2++;
	if (l2 < 20) goto L4f66;
	put_frame_char(p4, 2, 13, 14);
	put_frame_char(p4, 10, 13, 14);
	put_frame_char(p4, 12, 13, 14);
	l2 = 14;
L4ff1:
	put_frame_char(p4, 2, l2, 13);
	put_frame_char(p4, 10, l2, 13);
	put_frame_char(p4, 12, l2, 13);
	l2++;
	if (l2 < 19) goto L4ff1;
	put_frame_char(p4, 2, 15, 16);
	put_frame_char(p4, 2, 17, 16);
	put_frame_char(p4, 10, 15, 16);
	put_frame_char(p4, 10, 17, 16);
	put_frame_char(p4, 12, 15, 16);
	put_frame_char(p4, 12, 17, 16);
}
