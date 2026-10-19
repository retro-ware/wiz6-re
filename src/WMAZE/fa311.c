#asm
	extrn teleport_party_:near
#endasm
extern char *g4fa8;
extern int cell_event_index;
extern int g503e;
extern int message_delay;
do_teleport_event()
{
	int l2;
	l2 = *(int *)(g4fa8 + (cell_event_index << 1));
#asm
	db 0ebh,049h
#endasm
	teleport_party();
	goto La380;
	show_maze_message(2052);
	play_sound(8);
	wait_animating_m((message_delay / 4));
	g503e = 1;
#asm
	call teleport_party_
	db 0ebh,028h
#endasm
	play_sound(8);
#asm
	call teleport_party_
	db 0ebh,01bh,02ah,0a3h,02ah,0a3h,02fh,0a3h,080h,0a3h,058h,0a3h,058h,0a3h,058h,0a3h
la373:
	db 03dh,007h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,065h,0a3h
#endasm
La380:
	;
}
