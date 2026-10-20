extern char g36e4[];
extern char g3717[];
extern char g5112[];
extern char g5113[];
extern int g510a[];
extern int g510c[];
extern int view_object_count;
add_view_object(pic, p6, p8, frame)
char frame;
{
	g5112[(view_object_count * 11)] = *(char *)&pic;
#asm
	db 08bh,046h,006h,089h,087h,00ah,051h,08bh,046h,008h,089h,087h,00ch,051h
#endasm
	if (pic != 255) {
	*(int *)((char *)g510a + (view_object_count * 11)) += (unsigned char)g36e4[((314 * pic) + ((unsigned char)frame << 1))];
	*(int *)((char *)g510c + (view_object_count * 11)) += (unsigned char)g3717[((314 * pic) + (unsigned char)frame)];
	}
	g5113[(view_object_count * 11)] = frame;
#asm
	db 08bh,046h,00ch,089h,087h,00eh,051h,08bh,046h,00eh,089h,087h,010h,051h,08ah,046h
	db 010h,088h,087h,014h,051h
#endasm
	view_object_count++;
	if (view_object_count < 30) goto L975a;
L9750:
	play_sound(0);
	goto L9750;
L975a:
	;
}
