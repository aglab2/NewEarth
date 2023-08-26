void scroll_ttm_dl_DL_ttm_1_0xe030390_Obj_mesh_layer_1_vtx_2() {
	int i = 0;
	int count = 227;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ttm_dl_DL_ttm_1_0xe030390_Obj_mesh_layer_1_vtx_2);

	deltaY = (int)(0.1899999976158142 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_ttm_dl_DL_ttm_1_0xe030390_Obj_mesh_layer_1_vtx_10() {
	int i = 0;
	int count = 22;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ttm_dl_DL_ttm_1_0xe030390_Obj_mesh_layer_1_vtx_10);

	deltaY = (int)(0.25 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_ttm_dl_DL_ttm_1_0xe030390_Obj_mesh_layer_1_vtx_13() {
	int i = 0;
	int count = 144;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ttm_dl_DL_ttm_1_0xe030390_Obj_mesh_layer_1_vtx_13);

	deltaY = (int)(0.25 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_ttm_dl_DL_ttm_2_0xe005ff0_Obj_mesh_layer_1_vtx_2() {
	int i = 0;
	int count = 11;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ttm_dl_DL_ttm_2_0xe005ff0_Obj_mesh_layer_1_vtx_2);

	deltaY = (int)(0.2800000309944153 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_ttm_dl_DL_ttm_3_0xe004e30_Obj_mesh_layer_1_vtx_1() {
	int i = 0;
	int count = 87;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ttm_dl_DL_ttm_3_0xe004e30_Obj_mesh_layer_1_vtx_1);

	deltaY = (int)(0.1899999976158142 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_ttm_dl_DL_ttm_3_0xe004e30_Obj_mesh_layer_1_vtx_4() {
	int i = 0;
	int count = 11;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ttm_dl_DL_ttm_3_0xe004e30_Obj_mesh_layer_1_vtx_4);

	deltaY = (int)(0.2200000286102295 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_ttm() {
	scroll_ttm_dl_DL_ttm_1_0xe030390_Obj_mesh_layer_1_vtx_2();
	scroll_ttm_dl_DL_ttm_1_0xe030390_Obj_mesh_layer_1_vtx_10();
	scroll_ttm_dl_DL_ttm_1_0xe030390_Obj_mesh_layer_1_vtx_13();
	scroll_ttm_dl_DL_ttm_2_0xe005ff0_Obj_mesh_layer_1_vtx_2();
	scroll_ttm_dl_DL_ttm_3_0xe004e30_Obj_mesh_layer_1_vtx_1();
	scroll_ttm_dl_DL_ttm_3_0xe004e30_Obj_mesh_layer_1_vtx_4();
};
