/* Clean up and exit to DOS with the given code. */
exit_game(code)
{
	shutdown_game(code);
	exit(code);
}
