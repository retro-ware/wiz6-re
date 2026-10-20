extern char g36e4[];
extern char g3717[];
extern char g5112[];
extern char g5113[];
extern char g5114[];
extern int g510a[];
extern int g510c[];
extern int g510e[];
extern int g5110[];
extern int view_object_count;
add_view_object(pic, p6, p8, frame, p12, p14, p16)
char frame;
char p16;
{
	g5112[(view_object_count * 11)] = *(char *)&pic;
	*(int *)((char *)g510a + (view_object_count * 11)) = p6;
	*(int *)((char *)g510c + (view_object_count * 11)) = p8;
	if (pic != 255) {
	*(int *)((char *)g510a + (view_object_count * 11)) += (unsigned char)g36e4[((314 * pic) + ((unsigned char)frame << 1))];
	*(int *)((char *)g510c + (view_object_count * 11)) += (unsigned char)g3717[((314 * pic) + (unsigned char)frame)];
	}
	g5113[(view_object_count * 11)] = frame;
	*(int *)((char *)g510e + (view_object_count * 11)) = p12;
	*(int *)((char *)g5110 + (view_object_count * 11)) = p14;
	g5114[(view_object_count * 11)] = p16;
	view_object_count++;
	if (view_object_count < 30) goto L975a;
L9750:
	play_sound(0);
	goto L9750;
L975a:
	;
}
