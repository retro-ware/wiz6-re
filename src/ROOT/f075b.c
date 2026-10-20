extern char msg_block[];
extern int msg_block_num;
extern int msg_not_found;
/* Fetch message number N from MSG.DBS and decode it into a buffer. */
get_message(msg, buf)
{
	int pos;
	int n;
	int len;
	char *entry;
	int dst;
	char raw[255];
	char x265[1];
	if ((entry = find_message_index(msg))) goto L077a;
	msg_not_found = 1;
	return;
L077a:
	if ((unsigned char)entry[5] != msg_block_num) {
	load_message_block((unsigned char)entry[5]);
	}
	pos = *(int *)(entry + 2);
	n = *(int *)entry;
L079a:
	if (msg == n) goto L07b6;
	pos = (((unsigned char)msg_block[pos] + pos) + 1);
	n++;
	goto L079a;
L07b6:
	len = (unsigned char)msg_block[pos];
	pos++;
	n = len;
	dst = raw;
	if ((pos + n) > 1024) {
	movmem((pos + 7230), dst, (1024 - pos));
	n -= (1024 - pos);
	dst += (1024 - pos);
	load_message_block((msg_block_num + 1));
	pos = 0;
	}
	movmem((pos + 7230), dst, n);
	raw[len] = 0;
	decode_text(raw, buf);
	msg_not_found = 0;
	return;
}
