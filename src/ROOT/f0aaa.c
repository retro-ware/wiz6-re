#asm
	extrn start_sound_:near
#endasm
extern char g334e[];
extern char sound_mode;
extern int g3344[];
extern int sound_table[];
/* Play a sound effect, honoring the sound setting. */
play_sound(sound)
{
	int slot;
	int length;
	length = (unsigned char)g334e[(sound * 12)];
	switch ((unsigned char)sound_mode) {
case 1:
	if (!is_sound_10_to_12(sound)) goto L0ae6;
	length = (length / 2);
L0ae6:
	goto L0b3d;
case 2:
	if (!is_sound_10_to_12(sound)) goto L0af7;
	return;
L0af7:
	goto L0b3d;
case 3:
	length = (length / 2);
	goto L0b3d;
case 4:
	length = (length / 2);
	if (!is_sound_10_to_12(sound)) goto L0b20;
	return;
L0b20:
	goto L0b3d;
case 5:
	return;
	}
L0b3d:
	slot = sound;
	if (*(long *)((char *)sound_table + (slot * 12)) != 0L) goto L0b64;
	slot = *(int *)((char *)g3344 + (slot * 12));
L0b64:
	;
#asm
l0b64:
	db 08ah,087h,04fh,033h,02ah,0e4h,050h,0ffh,076h,0fch,0ffh,0b7h,04ch,033h,0ffh,076h
	db 0feh
	call start_sound_
	db 083h,0c4h,008h
#endasm
	return;
}
