#asm
	extrn f35fd_:near
#endasm
extern char g334e[];
extern char g3590;
extern int g3344[];
extern int g3348[];
f0aaa(p4)
{
	int l2;
	int l4;
	l4 = (unsigned char)g334e[(p4 * 12)];
	switch ((unsigned char)g3590) {
case 1:
	if (!f0a8f(p4)) goto L0ae6;
	l4 = (l4 / 2);
L0ae6:
	goto L0b3d;
case 2:
	if (!f0a8f(p4)) goto L0af7;
	return;
L0af7:
	goto L0b3d;
case 3:
	l4 = (l4 / 2);
	goto L0b3d;
case 4:
	l4 = (l4 / 2);
	if (!f0a8f(p4)) goto L0b20;
	return;
L0b20:
	goto L0b3d;
case 5:
	return;
	}
L0b3d:
	l2 = p4;
	if (*(long *)((char *)g3348 + (l2 * 12)) != 0L) goto L0b64;
	l2 = *(int *)((char *)g3344 + (l2 * 12));
L0b64:
	;
#asm
l0b64:
	db 08ah,087h,04fh,033h,02ah,0e4h,050h,0ffh,076h,0fch,0ffh,0b7h,04ch,033h,0ffh,076h
	db 0feh
	call f35fd_
	db 083h,0c4h,008h
#endasm
	return;
}
