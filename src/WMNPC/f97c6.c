extern char g51cd;
extern char spell_disarm_result;
extern int cur_sound;
extern int g5224;
extern int view_pos_group;
f97c6()
{
	f5508((unsigned char)g51cd, 4);
	view_pos_group = 4;
	f4572(4, 0);
	if (spell_disarm_result < 14) goto L9808;
	if (spell_disarm_result == cur_sound) goto L9800;
	f4def(spell_disarm_result);
L9800:
	g5224 = 14;
	goto L981e;
L9808:
	if (spell_disarm_result <= 0) goto L9818;
	g5224 = spell_disarm_result;
	goto L981e;
L9818:
	g5224 = 0;
L981e:
	f56a1(0);
}
