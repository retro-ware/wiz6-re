extern char g3592;
extern int disk_header;
/* Make sure the disk needed for an action is inserted. */
ensure_disk_for(kind, arg)
{
	char x0[18];
	int label;
	int disk;
	int want;
	disk = 0;
#asm
	db 0a0h,092h,035h,02ah,0e4h,0e9h,09fh,001h
#endasm
	disk = 0;
	goto L12e3;
#asm
	db 08bh,046h,004h,0ebh,021h
#endasm
	disk = (arg >= 0 ? (arg < 8 ? 1 : 2) : 0);
#asm
	db 0ebh,01bh
#endasm
	disk = 0;
#asm
	db 0ebh,014h
#endasm
L1165:
	;
#asm
l1165:
	db 03dh,000h,000h,074h,0dah,03dh,001h,000h,074h,0efh,03dh,002h,000h,074h,0d0h,03dh
	db 003h,000h,074h,0e5h
#endasm
L1179:
	goto L12e3;
#asm
	db 08bh,046h,004h,0ebh,039h
#endasm
#asm
l1181:
	db 0b8h,000h,000h,08bh,04eh,006h,083h,0f9h,000h,07ch,022h,0b8h,001h,000h,083h,0f9h
	db 008h,07ch,01ah,0b8h,002h,000h,083h,0f9h,00ah,07ch,012h,083h,0f9h,00ah,074h,005h
	db 083h,0f9h,00ch,075h,005h
#endasm
L11a6:
	;
#asm
l11a6:
	db 0b8h,003h,000h,0ebh,003h
#endasm
L11ab:
	;
#asm
l11ab:
	db 0b8h,004h,000h
#endasm
L11ae:
	;
#asm
l11ae:
	db 089h,046h,0eah
#endasm
	goto L11ce;
	disk = 0;
#asm
	db 0ebh,014h
#endasm
L11ba:
	;
#asm
l11ba:
	db 03dh,000h,000h,074h,0c2h,03dh,001h,000h,074h,0efh,03dh,002h,000h,074h,0b8h,03dh
	db 003h,000h,074h,0e5h
#endasm
L11ce:
	goto L12e3;
#asm
	db 08bh,046h,004h,0e9h,060h,000h
#endasm
#asm
l11d7:
	db 0b8h,000h,000h,08bh,04eh,006h,083h,0f9h,000h,07ch,049h,083h,0f9h,004h,07ch,005h
	db 083h,0f9h,006h,075h,005h
#endasm
L11ec:
	;
#asm
l11ec:
	db 0b8h,001h,000h,0ebh,03ah
#endasm
L11f1:
	;
#asm
l11f1:
	db 083h,0f9h,006h,07ch,005h,083h,0f9h,007h,075h,005h
#endasm
L11fb:
	;
#asm
l11fb:
	db 0b8h,002h,000h,0ebh,02bh
#endasm
L1200:
	;
#asm
l1200:
	db 0b8h,003h,000h,083h,0f9h,008h,074h,023h,0b8h,004h,000h,083h,0f9h,009h,074h,01bh
	db 0b8h,005h,000h,083h,0f9h,00ah,074h,013h,0b8h,006h,000h,083h,0f9h,00ch,074h,00bh
	db 0b8h,008h,000h,083h,0f9h,00bh,075h,003h,0b8h,007h,000h
#endasm
L122b:
	;
#asm
l122b:
	db 089h,046h,0eah
#endasm
	goto L124b;
	disk = 0;
#asm
	db 0ebh,014h
#endasm
L1237:
	;
#asm
l1237:
	db 03dh,000h,000h,074h,09bh,03dh,001h,000h,074h,0efh,03dh,002h,000h,074h,091h,03dh
	db 003h,000h,074h,0e5h
#endasm
L124b:
	goto L12e3;
#asm
	db 08bh,046h,004h,0e9h,060h,000h
#endasm
#asm
l1254:
	db 0b8h,000h,000h,08bh,04eh,006h,083h,0f9h,000h,07ch,049h,083h,0f9h,004h,07ch,005h
	db 083h,0f9h,006h,075h,005h
#endasm
L1269:
	;
#asm
l1269:
	db 0b8h,003h,000h,0ebh,03ah
#endasm
L126e:
	;
#asm
l126e:
	db 083h,0f9h,006h,07ch,005h,083h,0f9h,007h,075h,005h
#endasm
L1278:
	;
#asm
l1278:
	db 0b8h,004h,000h,0ebh,02bh
#endasm
L127d:
	;
#asm
l127d:
	db 0b8h,005h,000h,083h,0f9h,008h,074h,023h,0b8h,006h,000h,083h,0f9h,009h,074h,01bh
	db 0b8h,007h,000h,083h,0f9h,00ah,074h,013h,0b8h,008h,000h,083h,0f9h,00ch,074h,00bh
	db 0b8h,00ah,000h,083h,0f9h,00bh,075h,003h,0b8h,009h,000h
#endasm
L12a8:
	;
#asm
l12a8:
	db 089h,046h,0eah
#endasm
	goto L12c8;
	disk = 0;
#asm
	db 0ebh,014h
#endasm
L12b4:
	;
#asm
l12b4:
	db 03dh,000h,000h,074h,09bh,03dh,001h,000h,074h,0efh,03dh,002h,000h,074h,091h,03dh
	db 003h,000h,074h,0e5h
#endasm
L12c8:
	goto L12e3;
#asm
	db 037h,011h,037h,011h,03fh,011h,07ch,011h,0d1h,011h,04eh,012h
l12d6:
	db 03dh,006h,000h,073h,008h,093h,0d1h,0e3h,02eh,0ffh,0a7h,0cah,012h
#endasm
L12e3:
	if ((want = ((g3592 == 5) && (disk > 0) ? (disk - 2) : disk)) == disk_header) goto L1329;
	copy_through_char(&label, 13632, 58);
	prompt_insert_disk(&label, disk, 1, 1);
	refresh_all_windows();
L1329:
	;
}
