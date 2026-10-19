extern char g6aa7[];
extern char g6ad6[];
extern char g6ade[];
extern char g6ae6[];
extern char g6ae7;
extern char g6aee[];
extern char g6af6[];
extern char g6afe[];
extern char g6b06[];
extern char g6b07;
extern int g0042[];
extern int g004a[];
extern int g4fa6;
extern int g6aa4;
extern int g6ab4[];
extern int g6b32;
extern int g6c7e;
extern int g6c80;
extern int g6c82;
extern int g6c84;
extern int g6c86;
extern int g6c88;
extern int g6c8a;
extern int g6c8c;
extern int game_state_arg;
extern int maze_data;
extern int party_cell_x;
extern int party_cell_y;
extern int party_facing;
extern int party_level;
extern int party_x;
extern int party_y;
extern int picture_win;
extern int view_rows_open;
fee2e()
{
	int l2;
	int l4;
	int l6;
	int l8;
	int l10;
	int l12;
	char *l14;
	char l16[2];
	register int rsi;
	l2 = party_x;
	l4 = party_y;
	l6 = party_cell_x;
	l8 = party_cell_y;
	l10 = party_level;
	g4fa6 = 0;
	view_rows_open = 1;
	drv_op_be(picture_win, 0);
	if (test_bit((maze_data + 1082), (((l10 << 6) + (l8 << 3)) + l6)) != 1) goto Leeb2;
	switch (game_state_arg) {
case 0:
case 4:
case 5:
	fed6c();
	return;
	}
Leeb2:
	rsi = 0;
Leeb5:
	g6aee[rsi] = 1;
	g6ad6[rsi] = 1;
	g6ade[rsi] = 1;
	g6af6[rsi] = 1;
	g6afe[rsi] = 1;
	g6ae6[rsi] = 1;
	g6b06[rsi] = 1;
	rsi++;
	if (rsi < 4) goto Leeb5;
	setmem(27338, 12, 0);
	setmem(27302, 12, 0);
	setmem(27406, 12, 0);
	setmem(27314, 24, 0);
	setmem(27418, 24, 0);
	setmem(27444, 330, 0);
	g6b32 = 0;
	g6ad6[0] = 0;
	g6afe[0] = 0;
	g6ae6[0] = 0;
	g6ae7 = 0;
	g6b06[0] = 0;
	g6b07 = 0;
	l12 = l10;
	fdafe(&l2, &l4, &l6, &l8, &l12, 0, -1);
	g6c82 = 4;
	g6c7e = (((party_x + party_y) + party_facing) % 2);
	g6aa4 = 0;
Lefb7:
	if (g6aa4 >= g6c82) goto Lf54b;
	g6c80 = ((((party_x + party_y) + party_facing) + g6aa4) % 2);
	if (!fdafe(&l2, &l4, &l6, &l8, &l10, 0, 1)) goto Lf060;
	if ((game_state_arg != 10) && (game_state_arg != 12)) goto Lf04c;
	g6aa7[(g6aa4 * 3)] = 1;
	g6ab4[(g6aa4 * 3)] = 1;
	g6c84 = 0;
	g6c86 = 0;
	g6c88 = 0;
	goto Lf05e;
Lf04c:
	g6c84 = 2;
	g6c86 = 2;
	g6c88 = 2;
Lf05e:
	goto Lf0b4;
Lf060:
	g6c84 = fdb7f(l2, l4, l6, l8, l10, 0);
	g6c86 = fdf68(l2, l4, l6, l8, l10, 0);
	g6c88 = fe125(l2, l4, l6, l8, l10, 0);
Lf0b4:
	g6c8a = fdb7f(l2, l4, l6, l8, l10, -1);
	g6c8c = fdb7f(l2, l4, l6, l8, l10, 1);
	if (g6aee[g6aa4] != 1) goto Lf162;
	fe3c3(g6aa4, g6c84, 1, 72, 248, 122, 122, 0, 0, 91, 23, 23, 26, 26, 29, 32, 32, 29, 178, 178, 199, 199, 242, 257, 278, 278, 299, 299, 314, 314, 329, 150, 150, 214, 214);
Lf162:
	febe9(g6aa4, g6c84);
	if (g6aee[g6aa4] != 1) goto Lf1be;
	fe90b(g6aa4, g6c86, 7, 4, 15, 19, 83, 87, 106, 114, 193, 196, 272, 275, 293, 296);
Lf1be:
	fec4c(g6aa4, g6c86);
	if (g6aee[g6aa4] != 1) goto Lf21a;
	fe90b(g6aa4, g6c88, 13, 7, 19, 15, 87, 83, 110, 118, 196, 193, 275, 272, 296, 293);
Lf21a:
	fec7d(g6aa4, g6c88);
	if (g6ae6[g6aa4] != 1) goto Lf256;
	feafa(g6aa4, 0, 126, 146, 154, 174, 218, 238);
Lf256:
	if (g6ad6[g6aa4] != 1) goto Lf2f8;
	fe3c3(g6aa4, g6c8a, 0, 72, g0042[g6aa4], 130, 142, 3, 12, 94, 35, 62, 41, 68, 47, 80, 53, 74, 181, 190, 202, 211, 245, 260, 281, 290, 302, 311, 317, 326, 332, 158, 170, 222, 234);
Lf2f8:
	fecae(g6aa4, g6c8a);
	if (g6ade[g6aa4] != 1) goto Lf3a8;
	fe3c3(g6aa4, g6c8a, 0, g0042[g6aa4], 248, 134, 138, 6, 9, 97, 38, 59, 44, 65, 50, 77, 56, 71, 184, 187, 205, 208, 248, 263, 284, 287, 305, 308, 320, 323, 335, 162, 166, 226, 230);
Lf3a8:
	fecdb(g6aa4, g6c8a);
	if (g6af6[g6aa4] != 1) goto Lf458;
	fe3c3(g6aa4, g6c8c, 2, 72, g004a[g6aa4], 138, 134, 9, 6, 100, 59, 38, 65, 44, 71, 56, 77, 50, 187, 184, 208, 205, 251, 266, 287, 284, 308, 305, 323, 320, 338, 166, 162, 230, 226);
Lf458:
	fed0d(g6aa4, g6c8c);
	if (g6afe[g6aa4] != 1) goto Lf508;
	fe3c3(g6aa4, g6c8c, 2, g004a[g6aa4], 248, 142, 130, 12, 3, 103, 62, 35, 68, 41, 74, 53, 80, 47, 190, 181, 211, 202, 254, 269, 290, 281, 311, 302, 326, 317, 341, 170, 158, 234, 222);
Lf508:
	fed3f(g6aa4, g6c8c);
	if (g6b06[g6aa4] != 1) goto Lf544;
	feafa(g6aa4, 2, 146, 126, 174, 154, 238, 218);
Lf544:
	g6aa4++;
	goto Lefb7;
Lf54b:
	g6aa4 = g6c82;
	goto Lf6ae;
Lf554:
	rsi = g6b32;
	rsi--;
	goto Lf640;
Lf55c:
	l14 = ((rsi * 11) + 27444);
	g6c80 = (((((unsigned char)l14[10] + party_x) + party_y) + party_facing) % 2);
	if ((unsigned char)l14[10] != g6aa4) goto Lf63f;
	if ((unsigned char)l14[8] != 255) goto Lf63f;
	if (*(int *)l14 == -1) goto Lf5f0;
	if (*(int *)(l14 + 4) == -1) goto Lf5db;
	drv_op_c6((g6c80 != 0 ? *(int *)(l14 + 4) : *(int *)l14), (unsigned char)l14[9], (g6c80 != 0 ? *(int *)l14 : -1));
	goto Lf5f0;
Lf5db:
	drv_op_c6(*(int *)l14, (unsigned char)l14[9], -1);
Lf5f0:
	if (*(int *)(l14 + 2) == -1) goto Lf63f;
	if (*(int *)(l14 + 6) == -1) goto Lf629;
	drv_op_c6((g6c80 != 0 ? *(int *)(l14 + 6) : *(int *)(l14 + 2)), (unsigned char)l14[9], (g6c80 != 0 ? *(int *)(l14 + 2) : -1));
	goto Lf63f;
Lf629:
	drv_op_c6(*(int *)(l14 + 2), (unsigned char)l14[9], -1);
Lf63f:
	rsi--;
Lf640:
	if (rsi >= 0) goto Lf55c;
	rsi = g6b32;
	rsi--;
	goto Lf6a5;
Lf64f:
	l14 = ((rsi * 11) + 27444);
	if (((unsigned char)l14[10] != g6aa4) || ((unsigned char)l14[8] == 255)) goto Lf6a4;
	l16[0] = l14[9];
	l16[(0 + 1)] = 0;
	drv_draw_text((unsigned char)l14[8], *(int *)l14, *(int *)(l14 + 2), *(int *)(l14 + 4), *(int *)(l14 + 6), 0, 0, l16);
Lf6a4:
	rsi--;
Lf6a5:
	if (rsi >= 0) goto Lf64f;
	g6aa4--;
Lf6ae:
	if (g6aa4 >= 0) goto Lf554;
	fed6c();
	return;
#asm
	db 0e8h,06dh,0f7h,0ffh,036h,0bch,04fh,0e8h,0d8h,03fh,059h,0c3h
#endasm
}
