draw_creation_frame(p4)
{
	int l2;
	set_frame_glyph(p4, 0, 0, 1);
	set_frame_glyph(p4, 39, 0, 3);
	set_frame_glyph(p4, 0, 19, 6);
	l2 = 1;
L4c5a:
	set_frame_glyph(p4, l2, 0, 2);
	l2++;
	if (l2 < 39) goto L4c5a;
	l2 = 1;
L4c7e:
	set_frame_glyph(p4, l2, 19, 7);
	l2++;
	if (l2 < 20) goto L4c7e;
	l2 = 1;
L4ca2:
	set_frame_glyph(p4, 0, l2, 4);
	l2++;
	if (l2 < 19) goto L4ca2;
	l2 = 1;
L4cc6:
	set_frame_glyph(p4, 39, l2, 5);
	l2++;
	if (l2 < 6) goto L4cc6;
	set_frame_glyph(p4, 0, 4, 9);
	set_frame_glyph(p4, 0, 13, 9);
	set_frame_glyph(p4, 0, 15, 9);
	set_frame_glyph(p4, 0, 17, 9);
	set_frame_glyph(p4, 39, 4, 10);
	set_frame_glyph(p4, 2, 19, 11);
	set_frame_glyph(p4, 10, 19, 11);
	set_frame_glyph(p4, 12, 19, 11);
	set_frame_glyph(p4, 20, 19, 8);
	l2 = 1;
L4da7:
	set_frame_glyph(p4, l2, 4, 12);
	l2++;
	if (l2 < 39) goto L4da7;
	l2 = 21;
L4dcb:
	set_frame_glyph(p4, l2, 6, 7);
	l2++;
	if (l2 < 39) goto L4dcb;
	set_frame_glyph(p4, 20, 4, 14);
	set_frame_glyph(p4, 20, 5, 13);
	l2 = 7;
L4e19:
	set_frame_glyph(p4, 20, l2, 5);
	l2++;
	if (l2 < 19) goto L4e19;
	set_frame_glyph(p4, 20, 6, 21);
	set_frame_glyph(p4, 20, 13, 10);
	set_frame_glyph(p4, 20, 15, 10);
	set_frame_glyph(p4, 20, 17, 10);
	set_frame_glyph(p4, 39, 6, 8);
	l2 = 1;
L4ea6:
	set_frame_glyph(p4, l2, 13, 12);
	set_frame_glyph(p4, l2, 15, 12);
	set_frame_glyph(p4, l2, 17, 12);
	l2++;
	if (l2 < 20) goto L4ea6;
	set_frame_glyph(p4, 2, 13, 14);
	set_frame_glyph(p4, 10, 13, 14);
	set_frame_glyph(p4, 12, 13, 14);
	l2 = 14;
L4f31:
	set_frame_glyph(p4, 2, l2, 13);
	set_frame_glyph(p4, 10, l2, 13);
	set_frame_glyph(p4, 12, l2, 13);
	l2++;
	if (l2 < 19) goto L4f31;
	set_frame_glyph(p4, 2, 15, 16);
	set_frame_glyph(p4, 2, 17, 16);
	set_frame_glyph(p4, 10, 15, 16);
	set_frame_glyph(p4, 10, 17, 16);
	set_frame_glyph(p4, 12, 15, 16);
	set_frame_glyph(p4, 12, 17, 16);
	clear_status_line();
}
