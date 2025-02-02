void scroll_lll_dl_DL_lll_1_0xe012050_Obj_001_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 24;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(lll_dl_DL_lll_1_0xe012050_Obj_001_mesh_layer_1_vtx_0);

	deltaY = (int)(0.2199999988079071 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_lll_dl_DL_lll_2_0xe006680_Obj_mesh_layer_1_vtx_6() {
	int i = 0;
	int count = 10;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(lll_dl_DL_lll_2_0xe006680_Obj_mesh_layer_1_vtx_6);

	deltaY = (int)(-0.19999992847442627 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_lll_dl_DL_lll_3_0xe007270_Obj_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 169;
	int width = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(lll_dl_DL_lll_3_0xe007270_Obj_mesh_layer_1_vtx_0);

	deltaX = (int)(0.1600000262260437 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_lll_dl_DL_lll_3_0xe007270_Obj_mesh_layer_1_vtx_5() {
	int i = 0;
	int count = 12;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(lll_dl_DL_lll_3_0xe007270_Obj_mesh_layer_1_vtx_5);

	deltaY = (int)(0.25 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_lll() {
	scroll_lll_dl_DL_lll_1_0xe012050_Obj_001_mesh_layer_1_vtx_0();
	scroll_lll_dl_DL_lll_2_0xe006680_Obj_mesh_layer_1_vtx_6();
	scroll_lll_dl_DL_lll_3_0xe007270_Obj_mesh_layer_1_vtx_0();
	scroll_lll_dl_DL_lll_3_0xe007270_Obj_mesh_layer_1_vtx_5();
};
