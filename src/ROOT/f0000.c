extern int far_buffers_a[];
extern int far_buffers_b[];
extern int g07d4[];
extern int g080c[];
extern int mouse_present;
extern int msg_fd;
extern int scenario_fd;
/* Release far buffers, close MSG.DBS/SCENARIO.DBS, stop sound and restore video, depending on how far startup got. */
shutdown_game(code)
{
	int video_up;
	int i;
	video_up = 0;
	switch (code) {
case 0:
case 11:
case 12:
case 13:
case 14:
case 15:
case 16:
case 17:
case 18:
case 19:
case 20:
case 21:
	i = 0;
L0016:
	if (*(long *)((char *)far_buffers_a + (i << 2)) != 0L) {
	lfree(*(int *)((char *)far_buffers_a + (i << 2)), *(int *)((char *)g07d4 + (i << 2)));
	}
	if (*(long *)((char *)far_buffers_b + (i << 2)) != 0L) {
	lfree(*(int *)((char *)far_buffers_b + (i << 2)), *(int *)((char *)g080c + (i << 2)));
	}
	i++;
	if (i < 14) goto L0016;
case 9:
case 10:
	close(scenario_fd);
case 8:
	close(msg_fd);
case 3:
case 4:
case 5:
case 6:
case 7:
	video_up = 1;
	if (mouse_present != 1) goto L008a;
	drv_mouse_shutdown();
L008a:
case 1:
case 2:
	goto L00c5;
	}
L00c5:
	stop_sound();
	if (video_up == 1) {
	shutdown_video();
	}
}
