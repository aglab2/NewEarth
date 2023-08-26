void scroll_ttc_dl_DL_ttc_1_0xe052f60_Obj_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 10;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ttc_dl_DL_ttc_1_0xe052f60_Obj_mesh_layer_5_vtx_0);

	deltaY = (int)(0.1899999976158142 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_ttc_dl_z_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 129;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ttc_dl_z_mesh_layer_5_vtx_0);

	deltaY = (int)(-0.22999998927116394 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_ttc_dl_z_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 125;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ttc_dl_z_mesh_layer_1_vtx_0);

	deltaY = (int)(0.3400000333786011 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_ttc_dl_DL_ttc_2_0xe008660_Obj_mesh_layer_1_vtx_7() {
	int i = 0;
	int count = 141;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ttc_dl_DL_ttc_2_0xe008660_Obj_mesh_layer_1_vtx_7);

	deltaY = (int)(0.1899999976158142 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_ttc_dl_DL_ttc_2_0xe008fd0_Obj_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 10;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ttc_dl_DL_ttc_2_0xe008fd0_Obj_mesh_layer_5_vtx_0);

	deltaY = (int)(0.2200000286102295 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_ttc_dl_DL_ttc_2_0xe009350_Obj_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 119;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ttc_dl_DL_ttc_2_0xe009350_Obj_mesh_layer_5_vtx_0);

	deltaY = (int)(-0.25999993085861206 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_ttc_dl_DL_ttc_1_0xe044680_Obj_004_mesh_layer_1_vtx_8() {
	int i = 0;
	int count = 11;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ttc_dl_DL_ttc_1_0xe044680_Obj_004_mesh_layer_1_vtx_8);

	deltaY = (int)(0.25 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_ttc_dl_DL_ttc_1_0xe044680_Obj_004_mesh_layer_1_vtx_13() {
	int i = 0;
	int count = 42;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ttc_dl_DL_ttc_1_0xe044680_Obj_004_mesh_layer_1_vtx_13);

	deltaY = (int)(0.1600000262260437 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_ttc_dl_DL_ttc_1_0xe044680_Obj_006_mesh_layer_1_vtx_6() {
	int i = 0;
	int count = 11;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ttc_dl_DL_ttc_1_0xe044680_Obj_006_mesh_layer_1_vtx_6);

	deltaY = (int)(0.25 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_ttc_dl_DL_ttc_1_0xe044680_Obj_006_mesh_layer_1_vtx_11() {
	int i = 0;
	int count = 25;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ttc_dl_DL_ttc_1_0xe044680_Obj_006_mesh_layer_1_vtx_11);

	deltaY = (int)(0.25 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_ttc() {
	scroll_ttc_dl_DL_ttc_1_0xe052f60_Obj_mesh_layer_5_vtx_0();
	scroll_ttc_dl_z_mesh_layer_5_vtx_0();
	scroll_ttc_dl_z_mesh_layer_1_vtx_0();
	scroll_ttc_dl_DL_ttc_2_0xe008660_Obj_mesh_layer_1_vtx_7();
	scroll_ttc_dl_DL_ttc_2_0xe008fd0_Obj_mesh_layer_5_vtx_0();
	scroll_ttc_dl_DL_ttc_2_0xe009350_Obj_mesh_layer_5_vtx_0();
	scroll_ttc_dl_DL_ttc_1_0xe044680_Obj_004_mesh_layer_1_vtx_8();
	scroll_ttc_dl_DL_ttc_1_0xe044680_Obj_004_mesh_layer_1_vtx_13();
	scroll_ttc_dl_DL_ttc_1_0xe044680_Obj_006_mesh_layer_1_vtx_6();
	scroll_ttc_dl_DL_ttc_1_0xe044680_Obj_006_mesh_layer_1_vtx_11();
};
