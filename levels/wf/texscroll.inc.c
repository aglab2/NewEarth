void scroll_wf_dl_DL_wf_1_0xe024880_Obj_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 16;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_DL_wf_1_0xe024880_Obj_mesh_layer_1_vtx_0);

	deltaY = (int)(-0.25999993085861206 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf_dl_DL_wf_1_0xe024880_Obj_003_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 64;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_DL_wf_1_0xe024880_Obj_003_mesh_layer_1_vtx_0);

	deltaY = (int)(-0.25999993085861206 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf_dl_DL_wf_1_0xe0290b0_Obj_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 20;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_DL_wf_1_0xe0290b0_Obj_mesh_layer_5_vtx_0);

	deltaY = (int)(-1.1600000858306885 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf_dl_DL_wf_1_0xe0290b0_Obj_mesh_layer_5_vtx_1() {
	int i = 0;
	int count = 8;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_DL_wf_1_0xe0290b0_Obj_mesh_layer_5_vtx_1);

	deltaY = (int)(0.3100000023841858 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf_dl_DL_wf_2_0xe00aae0_Obj_mesh_layer_1_vtx_4() {
	int i = 0;
	int count = 11;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_DL_wf_2_0xe00aae0_Obj_mesh_layer_1_vtx_4);

	deltaY = (int)(0.2800000309944153 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf() {
	scroll_wf_dl_DL_wf_1_0xe024880_Obj_mesh_layer_1_vtx_0();
	scroll_wf_dl_DL_wf_1_0xe024880_Obj_003_mesh_layer_1_vtx_0();
	scroll_wf_dl_DL_wf_1_0xe0290b0_Obj_mesh_layer_5_vtx_0();
	scroll_wf_dl_DL_wf_1_0xe0290b0_Obj_mesh_layer_5_vtx_1();
	scroll_wf_dl_DL_wf_2_0xe00aae0_Obj_mesh_layer_1_vtx_4();
};
