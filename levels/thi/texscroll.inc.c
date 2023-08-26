void scroll_thi_dl_DL_thi_1_0xe02b5c0_Obj_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 3462;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(thi_dl_DL_thi_1_0xe02b5c0_Obj_mesh_layer_1_vtx_0);

	deltaY = (int)(0.1899999976158142 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_thi_dl_DL_thi_1_0xe02b5c0_Obj_mesh_layer_1_vtx_1() {
	int i = 0;
	int count = 363;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(thi_dl_DL_thi_1_0xe02b5c0_Obj_mesh_layer_1_vtx_1);

	deltaY = (int)(0.2200000286102295 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_thi_dl_DL_thi_1_0xe02b5c0_Obj_mesh_layer_1_vtx_2() {
	int i = 0;
	int count = 466;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(thi_dl_DL_thi_1_0xe02b5c0_Obj_mesh_layer_1_vtx_2);

	deltaY = (int)(0.2200000286102295 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_thi_dl_DL_thi_1_0xe02b5c0_Obj_mesh_layer_1_vtx_3() {
	int i = 0;
	int count = 266;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(thi_dl_DL_thi_1_0xe02b5c0_Obj_mesh_layer_1_vtx_3);

	deltaY = (int)(0.25 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_thi_dl_DL_thi_1_0xe02b5c0_Obj_mesh_layer_1_vtx_10() {
	int i = 0;
	int count = 52;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(thi_dl_DL_thi_1_0xe02b5c0_Obj_mesh_layer_1_vtx_10);

	deltaY = (int)(0.25 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_thi_dl_DL_thi_2_0xe00b4a0_Obj_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 1264;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(thi_dl_DL_thi_2_0xe00b4a0_Obj_mesh_layer_1_vtx_0);

	deltaY = (int)(0.2200000286102295 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_thi_dl_DL_thi_2_0xe00b4a0_Obj_mesh_layer_1_vtx_2() {
	int i = 0;
	int count = 405;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(thi_dl_DL_thi_2_0xe00b4a0_Obj_mesh_layer_1_vtx_2);

	deltaY = (int)(0.25 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_thi_dl_DL_thi_2_0xe00b4a0_Obj_mesh_layer_1_vtx_4() {
	int i = 0;
	int count = 10;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(thi_dl_DL_thi_2_0xe00b4a0_Obj_mesh_layer_1_vtx_4);

	deltaY = (int)(0.25 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_thi() {
	scroll_thi_dl_DL_thi_1_0xe02b5c0_Obj_mesh_layer_1_vtx_0();
	scroll_thi_dl_DL_thi_1_0xe02b5c0_Obj_mesh_layer_1_vtx_1();
	scroll_thi_dl_DL_thi_1_0xe02b5c0_Obj_mesh_layer_1_vtx_2();
	scroll_thi_dl_DL_thi_1_0xe02b5c0_Obj_mesh_layer_1_vtx_3();
	scroll_thi_dl_DL_thi_1_0xe02b5c0_Obj_mesh_layer_1_vtx_10();
	scroll_thi_dl_DL_thi_2_0xe00b4a0_Obj_mesh_layer_1_vtx_0();
	scroll_thi_dl_DL_thi_2_0xe00b4a0_Obj_mesh_layer_1_vtx_2();
	scroll_thi_dl_DL_thi_2_0xe00b4a0_Obj_mesh_layer_1_vtx_4();
};
