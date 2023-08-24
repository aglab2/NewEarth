void scroll_ccm_dl_DL_ccm_1_0xe03aec0_Obj_mesh_layer_1_vtx_13() {
	int i = 0;
	int count = 44;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ccm_dl_DL_ccm_1_0xe03aec0_Obj_mesh_layer_1_vtx_13);

	deltaY = (int)(0.1899999976158142 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_ccm_dl_DL_ccm_1_0xe03aec0_Obj_mesh_layer_1_vtx_19() {
	int i = 0;
	int count = 38;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ccm_dl_DL_ccm_1_0xe03aec0_Obj_mesh_layer_1_vtx_19);

	deltaY = (int)(0.1899999976158142 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_ccm_dl_DL_ccm_1_0xe03aec0_Obj_mesh_layer_1_vtx_23() {
	int i = 0;
	int count = 11;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ccm_dl_DL_ccm_1_0xe03aec0_Obj_mesh_layer_1_vtx_23);

	deltaY = (int)(0.10000000894069672 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_ccm_dl_DL_ccm_1_0xe03aec0_Obj_mesh_layer_1_vtx_25() {
	int i = 0;
	int count = 237;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ccm_dl_DL_ccm_1_0xe03aec0_Obj_mesh_layer_1_vtx_25);

	deltaY = (int)(0.1900000274181366 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_ccm() {
	scroll_ccm_dl_DL_ccm_1_0xe03aec0_Obj_mesh_layer_1_vtx_13();
	scroll_ccm_dl_DL_ccm_1_0xe03aec0_Obj_mesh_layer_1_vtx_19();
	scroll_ccm_dl_DL_ccm_1_0xe03aec0_Obj_mesh_layer_1_vtx_23();
	scroll_ccm_dl_DL_ccm_1_0xe03aec0_Obj_mesh_layer_1_vtx_25();
};
