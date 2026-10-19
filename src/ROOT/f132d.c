extern int game_state;
extern int game_state_arg;
main()
{
	int rc;
	game_state = 0;
L1339:
	switch (game_state) {
case 8:
	ensure_disk_for(3, 0);
case 0:
case 1:
case 2:
	rc = ovloader(1524);
	goto L1458;
case 7:
case 24:
	ensure_disk_for(1, 0);
case 4:
	rc = ovloader(1530);
	goto L1458;
case 25:
	ensure_disk_for(2, game_state_arg);
	game_state = 5;
case 5:
case 6:
case 23:
	rc = ovloader(1536);
	goto L1458;
case 10:
case 11:
case 14:
	rc = ovloader(1542);
	goto L1458;
case 12:
	rc = ovloader(1548);
	goto L1458;
case 13:
	rc = ovloader(1554);
	goto L1458;
case 15:
case 21:
	rc = ovloader(1560);
	goto L1458;
case 16:
	rc = ovloader(1566);
	goto L1458;
case 17:
case 22:
	rc = ovloader(1572);
	goto L1458;
case 18:
	rc = ovloader(1578);
	goto L1458;
case 19:
case 20:
	rc = ovloader(1584);
	goto L1458;
case 3:
	shutdown_game(0);
	exit(0);
	goto L1458;
	}
L1458:
	stop_sound();
	goto L1339;
#asm
	db 08bh,0e5h,05dh,0c3h
#endasm
}
