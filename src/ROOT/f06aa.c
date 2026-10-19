extern int msg_block_num;
extern int msg_cache_ids[];
extern int msg_cache_next;
extern int msg_fd;
/* Load a 1K MSG.DBS block into the current buffer, using a 4-block cache. */
load_message_block(block)
{
	register int i;
	i = 0;
L06b1:
	if (msg_cache_ids[i] != block) goto L06e4;
	movmem(((i << 10) + 8254), 7230, 1024);
	msg_block_num = block;
	return;
L06e4:
	i++;
	if (i < 4) goto L06b1;
	stop_sound();
	lseek(msg_fd, ((long)block << 10), 0);
	read(msg_fd, 7230, 1024);
	msg_block_num = block;
	movmem(7230, ((msg_cache_next << 10) + 8254), 1024);
	msg_cache_ids[msg_cache_next] = block;
	msg_cache_next = ((msg_cache_next + 1) % 4);
	return;
}
