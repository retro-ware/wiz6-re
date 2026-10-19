#asm
	extrn load_message_block_:near
#endasm
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
	entry = find_message_index(msg);
#asm
	db 085h,0c0h,075h,00ah
#endasm
	msg_not_found = 1;
	return;
L077a:
	;
#asm
l077a:
	db 08bh,0d8h,08ah,047h,005h,02ah,0e4h,03bh,006h,03eh,030h,074h,005h,050h
	call load_message_block_
	db 059h
#endasm
L078c:
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
	if ((pos + n) <= 1024) goto L080b;
	movmem((pos + 7230), dst, (1024 - pos));
	n -= (1024 - pos);
	dst += (1024 - pos);
	load_message_block((msg_block_num + 1));
	pos = 0;
L080b:
	movmem((pos + 7230), dst, n);
	raw[len] = 0;
	decode_text(raw, buf);
	msg_not_found = 0;
	return;
}
