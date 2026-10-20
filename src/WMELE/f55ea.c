extern int combat_over;
extern int g4368;
extern int g436a;
extern int g436e;
extern int g4370;
extern int group_monster_rec[];
extern int monster_group_count;
extern int monster_groups[];
extern int return_cmd;
struct s222 { int w[111]; };
struct s416 { int w[208]; };
/* Drop empty monster groups, renumber the rest; end combat when none are left. */
compact_monster_groups()
{
	int g;
	int i;
	int count;
	char x6[6];
	count = 0;
	g = 1;
	goto L5713;
L55ff:
	update_group(g);
	if ((unsigned)(*(char **)((char *)monster_groups + (g << 1)))[413] <= 0) goto L5710;
	count++;
	if (count == g) goto L5672;
	*(struct s416 *)(*(char **)((char *)monster_groups + (count << 1))) = *(struct s416 *)(*(char **)((char *)monster_groups + (g << 1)));
	*(struct s222 *)(*(char **)((char *)group_monster_rec + (count << 1))) = *(struct s222 *)(*(char **)((char *)group_monster_rec + (g << 1)));
	place_group_sprites(count);
	(*(char **)((char *)monster_groups + (g << 1)))[413] = 0;
	goto L5710;
L5672:
	i = 0;
	goto L56f7;
L567a:
	if ((((char *)monster_groups[count] + (44 * i))[42] != 11) || (g4368)) goto L56b7;
	g436e = 0;
	g4368 = count;
#asm
	db 0c6h,040h,02ah,003h
#endasm
	choose_monster_frames(count, 3);
L56b7:
	if ((((char *)monster_groups[count] + (44 * i))[42] != 12) || (g436a)) goto L56f4;
	g4370 = 0;
	g436a = count;
#asm
	db 0c6h,040h,02ah,004h
#endasm
	choose_monster_frames(count, 4);
L56f4:
	i++;
L56f7:
	if ((unsigned char)(*(char **)((char *)monster_groups + (count << 1)))[413] > i) goto L567a;
L5710:
	g++;
L5713:
	if (g <= monster_group_count) goto L55ff;
	monster_group_count = count;
	if (monster_group_count) goto L573f;
	if (return_cmd != 8) {
	return_cmd = 15;
	}
	combat_over = 1;
L573f:
	load_group_pics();
	check_group_surprise();
}
