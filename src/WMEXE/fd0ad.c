extern int anim_cycle;
extern int g435e;
extern int g4fc8;
extern int g50fe[];
fd0ad(p4, p6)
{
	print_msg_centered(p4, p6, 0);
	if ((!g435e) || (g435e == 6)) goto Ld0f7;
	anim_cycle = 0;
	g50fe[((g435e < 3 ? 0 : 1) * 5)] = 1;
	reset_animation();
Ld0f7:
	combat_delay((g4fc8 / 4));
}
