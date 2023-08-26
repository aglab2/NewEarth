void scroll_sl_dl_DL_sl_1_0xe023000_Obj_mesh_layer_1_vtx_6() {
	int i = 0;
	int count = 24;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(sl_dl_DL_sl_1_0xe023000_Obj_mesh_layer_1_vtx_6);

	deltaY = (int)(0.2200000286102295 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_sl_dl_DL_sl_1_0xe0286a0_Obj_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 6;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(sl_dl_DL_sl_1_0xe0286a0_Obj_mesh_layer_5_vtx_0);

	deltaY = (int)(0.2800000309944153 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_sl_dl_DL_sl_1_0xe0286a0_Obj_mesh_layer_5_vtx_1() {
	int i = 0;
	int count = 6;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(sl_dl_DL_sl_1_0xe0286a0_Obj_mesh_layer_5_vtx_1);

	deltaY = (int)(0.2200000286102295 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_sl_dl_DL_sl_3_0xe006760_Obj_mesh_layer_1_vtx_3() {
	int i = 0;
	int count = 23;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(sl_dl_DL_sl_3_0xe006760_Obj_mesh_layer_1_vtx_3);

	deltaY = (int)(0.25 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_sl() {
	scroll_sl_dl_DL_sl_1_0xe023000_Obj_mesh_layer_1_vtx_6();
	scroll_sl_dl_DL_sl_1_0xe0286a0_Obj_mesh_layer_5_vtx_0();
	scroll_sl_dl_DL_sl_1_0xe0286a0_Obj_mesh_layer_5_vtx_1();
	scroll_sl_dl_DL_sl_3_0xe006760_Obj_mesh_layer_1_vtx_3();
};
