extern char g019d[];
extern int monster_groups[];
fc546(p4, p6)
{
	int l2;
	int l4;
	int l6;
	register int rsi;
	l2 = 0;
Lc552:
	l4 = 0;
Lc557:
	;
#asm
lc557:
	db 08bh,046h,0feh,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,050h,0a1h,05ch
	db 043h,0b9h,006h,000h,099h,0f7h,0f9h,08bh,0c2h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h
	db 0c2h,003h,046h,0fch,08bh,0d8h,08ah,087h,092h,000h,02ah,0e4h,08bh,0c8h,0d1h,0e0h
	db 08bh,0c8h,058h,003h,0c1h,08bh,0d8h,08bh,087h,062h,043h,03bh,046h,004h,075h,078h
#endasm
	l6 = 0;
	goto Lc5f9;
Lc59e:
	;
#asm
lc59e:
	db 08bh,046h,0feh,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h,0c2h,0d1h,0e0h,050h,0a1h,05ch
	db 043h,0b9h,006h,000h,099h,0f7h,0f9h,08bh,0c2h,08bh,0d0h,0d1h,0e0h,0d1h,0e0h,003h
	db 0c2h,003h,046h,0fch,08bh,0d8h,08ah,087h,092h,000h,02ah,0e4h,08bh,0c8h,058h,003h
	db 0c1h,050h,0b8h,02ch,000h,0f7h,06eh,0fah,08bh,0f0h,08bh,046h,004h,0d1h,0e0h,08bh
	db 0d8h,08bh,09fh,0a8h,043h,08ah,040h,02ah,098h,08bh,0c8h,058h,03bh,0c1h,075h,008h
#endasm
	return l6;
Lc5f6:
	l6++;
Lc5f9:
	if ((unsigned char)g019d[monster_groups[p4]] > l6) goto Lc59e;
Lc60f:
	l4++;
	if (l4 < 5) goto Lc557;
	l2++;
	if (l2 < 2) goto Lc552;
	l6 = 0;
	goto Lc653;
Lc632:
	rsi = (44 * l6);
	if ((unsigned)((char *)monster_groups[p4] + rsi)[34] >= 3) goto Lc650;
	return l6;
Lc650:
	l6++;
Lc653:
	if ((unsigned char)g019d[monster_groups[p4]] > l6) goto Lc632;
	return p6;
}
