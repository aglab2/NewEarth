void scroll_pss_dl_DL_pss_1_0xe01dfc0_Obj_mesh_layer_1_vtx_1() {
	int i = 0;
	int count = 60;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(pss_dl_DL_pss_1_0xe01dfc0_Obj_mesh_layer_1_vtx_1);

	deltaY = (int)(0.1899999976158142 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_pss_dl_DL_pss_1_0xe01dfc0_Obj_mesh_layer_1_vtx_3() {
	int i = 0;
	int count = 3148;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(pss_dl_DL_pss_1_0xe01dfc0_Obj_mesh_layer_1_vtx_3);

	deltaY = (int)(0.7300000190734863 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_pss_dl_DL_pss_1_0xe01dfc0_Obj_mesh_layer_1_vtx_5() {
	int i = 0;
	int count = 333;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(pss_dl_DL_pss_1_0xe01dfc0_Obj_mesh_layer_1_vtx_5);

	deltaY = (int)(0.7300000190734863 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_pss_dl_DL_pss_2_0xe01d2f0_Obj_mesh_layer_1_vtx_2() {
	int i = 0;
	int count = 68;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(pss_dl_DL_pss_2_0xe01d2f0_Obj_mesh_layer_1_vtx_2);

	deltaY = (int)(0.25 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_pss_dl_DL_pss_2_0xe01d2f0_Obj_mesh_layer_1_vtx_3() {
	int i = 0;
	int count = 3364;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(pss_dl_DL_pss_2_0xe01d2f0_Obj_mesh_layer_1_vtx_3);

	deltaY = (int)(0.7300000190734863 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_pss() {
	scroll_pss_dl_DL_pss_1_0xe01dfc0_Obj_mesh_layer_1_vtx_1();
	scroll_pss_dl_DL_pss_1_0xe01dfc0_Obj_mesh_layer_1_vtx_3();
	scroll_pss_dl_DL_pss_1_0xe01dfc0_Obj_mesh_layer_1_vtx_5();
	scroll_pss_dl_DL_pss_2_0xe01d2f0_Obj_mesh_layer_1_vtx_2();
	scroll_pss_dl_DL_pss_2_0xe01d2f0_Obj_mesh_layer_1_vtx_3();
};
